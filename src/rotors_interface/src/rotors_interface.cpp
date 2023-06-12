// Copyright (C) 2021 Sihao Sun, RPG, University of Zurich, Switzerland
// Copyright (C) 2021 Davide Scaramuzza, RPG, University of Zurich, Switzerland
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "rotors_interface/rotors_interface.hpp"
#include <iostream>
#include <stdlib.h>
#include <Eigen/Eigen>

namespace rotors_interface{  

RotorSInterface::RotorSInterface  
(const ros::NodeHandle& nh, const ros::NodeHandle& pnh)  {
    nh_ = nh;
    pnh_ = pnh;

    ROS_INFO("[%s] Initializing...!", pnh_.getNamespace().c_str());
    if (!loadParams())  {
      ROS_ERROR("[%s] Could not load parameters. Using default Params!",
        pnh_.getNamespace().c_str());
    }

    armed_out_.data = false;
    control_timer_ = nh_.createTimer(ros::Duration(1.0/250), &RotorSInterface::controlUpdateCallback, this);//SYSU_CODE  
/*发布话题：发布给容错控制器的state_set；发布给gazebo的command/motor_speed*/

    rotors_desired_motor_speed_pub_ = nh_.advertise<mav_msgs::Actuators>(
        "command/motor_speed", 1);    
    state_est_pub_ = nh_.advertise<quad_msgs::QuadStateEstimate>(
        "state_est", 1);
    rotor_control_pub_ = nh_.advertise<mavros_msgs::RotorControl>("rotor_control", 1000);   
    // reference_pub_ = nh_.advertise<geometry_msgs::Point>("reference_pos",1);//SYSU_CODE   
    //attitude_pub_ = nh_.advertise<geometry_msgs::Point>("reference_att",1);

/*订阅话题：订阅gazebo中的odometry；订阅容错控制器中control_command
(问题：control_command是否为电机PWM控制信号，利用motorcommandcallback转化成电机转速并利用motor_speed话题发布出去，如果是转化函数是多少)*/

    // rotors_odometry_sub_ = nh_.subscribe(
    //     "ground_truth/odometry", 1, &RotorSInterface::rotorsOdometryCallback, this);  //源码
    // rotors_gazebo_odometry_sub_ = nh_.subscribe(
    //     "/mavros/local_position/odom", 1, &RotorSInterface::rotorsgazeboOdometryCallback, this);     //vicon+mavros
    // rotors_vrpn_pose_sub_ = nh_.subscribe(
    //     "/vrpn_client_node/uav1/pose", 1, &RotorSInterface::rotorsVrpnPoseCallback, this); 
    // rotors_vrpn_twist_sub_ = nh_.subscribe(
    //     "/vrpn_client_node/uav1/twist", 1, &RotorSInterface::rotorsVrpnTwistCallback, this); //纯vicon

    rotors_vicon_pose_sub_ = nh_.subscribe(
        "/vrpn_client_node/uav1/pose", 1, &RotorSInterface::rotorsViconPoseCallback, this); 
    rotors_vicon_twist_sub_ = nh_.subscribe(
        "/vrpn_client_node/uav1/twist", 1, &RotorSInterface::rotorsViconTwistCallback, this); 
    // rotors_hands_free_sub_ = nh_.subscribe(
    //     "/handsfree/imu", 1, &RotorSInterface::rotorsHandsFreeCallback, this); //vicon+imu handsfree
    rotors_mavros_imu_sub_ = nh_.subscribe(
        "/mavros/imu/data", 1, &RotorSInterface::rotorsMavrosImuCallback, this); //vicon+imu   /uav1
    motor_command_sub_ = nh_.subscribe(
        "control_command", 1, &RotorSInterface::ftcMotorCommandCallback, this);  

    inner_design_sub_ = nh_.subscribe(
        "inner_design", 1, &RotorSInterface::ftcInnerdesignCallback, this);
    filter_sub_ = nh_.subscribe(
        "filter_design", 1, &RotorSInterface::ftcFilterCallback, this);
    rungekutta_sub_ = nh_.subscribe(
        "omega_rungekutta", 1, &RotorSInterface::ftcRungekuttaCallback, this);
    // start_rotors_sub_ = nh_.subscribe(
    //     "start_rotors", 1, &RotorSInterface::startRotorsCallback, this);
    };


RotorSInterface::~RotorSInterface(){}

void RotorSInterface::rotorsOdometryCallback(
    const nav_msgs::Odometry::ConstPtr& msg)
{

  quad_msgs::QuadStateEstimate msg_pub;

  msg_pub.header = msg->header;
  msg_pub.position.x    = msg->pose.pose.position.x;
  msg_pub.position.y    = msg->pose.pose.position.y;
  msg_pub.position.z    = msg->pose.pose.position.z;
  msg_pub.orientation.w = msg->pose.pose.orientation.w;  
  msg_pub.orientation.x = msg->pose.pose.orientation.x;
  msg_pub.orientation.y = msg->pose.pose.orientation.y;
  msg_pub.orientation.z = msg->pose.pose.orientation.z;

  Eigen::Vector3d Vb = (Eigen::Vector3d() 
                    << msg->twist.twist.linear.x, 
                        msg->twist.twist.linear.y, 
                        msg->twist.twist.linear.z
                        ).finished(); 
  Eigen::Quaterniond q;
  q.w() = msg->pose.pose.orientation.w;  
  q.x() = msg->pose.pose.orientation.x;
  q.y() = msg->pose.pose.orientation.y;
  q.z() = msg->pose.pose.orientation.z;

/*问题：Vi转化的含义是什么，*/
  Eigen::Vector3d Vi = q * Vb;
  msg_pub.velocity.x    = Vi(0);
  msg_pub.velocity.y    = Vi(1);
  msg_pub.velocity.z    = Vi(2);
  msg_pub.bodyrates.x   = msg->twist.twist.angular.x;
  msg_pub.bodyrates.y   = msg->twist.twist.angular.y;
  msg_pub.bodyrates.z   = msg->twist.twist.angular.z;

/*state_set话题发布的内容*/
  state_est_pub_.publish(msg_pub);

  return;
}

//--------------------------------------------------------------------------------------------
void RotorSInterface::rotorsgazeboOdometryCallback(
    const nav_msgs::Odometry::ConstPtr& msg)
{

  quad_msgs::QuadStateEstimate msg_pub;

  msg_pub.header = msg->header;
  msg_pub.position.x    = msg->pose.pose.position.x;
  msg_pub.position.y    = msg->pose.pose.position.y;
  msg_pub.position.z    = msg->pose.pose.position.z;
  msg_pub.orientation.w = msg->pose.pose.orientation.w;  
  msg_pub.orientation.x = msg->pose.pose.orientation.x;
  msg_pub.orientation.y = msg->pose.pose.orientation.y;
  msg_pub.orientation.z = msg->pose.pose.orientation.z;

  Eigen::Vector3d Vb = (Eigen::Vector3d() 
                    << msg->twist.twist.linear.x, 
                        msg->twist.twist.linear.y, 
                        msg->twist.twist.linear.z
                        ).finished(); 
  Eigen::Quaterniond q;
  q.w() = msg->pose.pose.orientation.w;  
  q.x() = msg->pose.pose.orientation.x;
  q.y() = msg->pose.pose.orientation.y;
  q.z() = msg->pose.pose.orientation.z;

/*问题：Vi转化的含义是什么，*/
  Eigen::Vector3d Vi = q * Vb;
  msg_pub.velocity.x    = Vi(0);
  msg_pub.velocity.y    = Vi(1);
  msg_pub.velocity.z    = Vi(2);
  msg_pub.bodyrates.x   = msg->twist.twist.angular.x;
  msg_pub.bodyrates.y   = msg->twist.twist.angular.y;
  msg_pub.bodyrates.z   = msg->twist.twist.angular.z;

/*state_set话题发布的内容*/
  state_est_pub_.publish(msg_pub);

  return;
}
//--------------------------------------------------------------------------------------------
void RotorSInterface::rotorsVrpnPoseCallback(
    const geometry_msgs::PoseStamped::ConstPtr& msg)
{

  vrpn_msg_pub.header = msg->header;
  vrpn_msg_pub.position.x    = msg->pose.position.x;
  vrpn_msg_pub.position.y    = msg->pose.position.y;
  vrpn_msg_pub.position.z    = msg->pose.position.z;
  vrpn_msg_pub.orientation.w = msg->pose.orientation.w;  
  vrpn_msg_pub.orientation.x = msg->pose.orientation.x;
  vrpn_msg_pub.orientation.y = msg->pose.orientation.y;
  vrpn_msg_pub.orientation.z = msg->pose.orientation.z;
  return;
}

void RotorSInterface::rotorsVrpnTwistCallback(
    const geometry_msgs::TwistStamped::ConstPtr& msg)
{
  vrpn_msg_pub.header = msg->header;
  vrpn_msg_pub.velocity.x    = msg->twist.linear.x;
  vrpn_msg_pub.velocity.y    = msg->twist.linear.y;
  vrpn_msg_pub.velocity.z    = msg->twist.linear.z;
  vrpn_msg_pub.bodyrates.x   = msg->twist.angular.x;
  vrpn_msg_pub.bodyrates.y   = msg->twist.angular.y;
  vrpn_msg_pub.bodyrates.z   = msg->twist.angular.z;

/*state_set话题发布的内容*/
  state_est_pub_.publish(vrpn_msg_pub);
  return;
}

//--------------------------------------------------------------------------------------------
void RotorSInterface::rotorsViconPoseCallback(
    const geometry_msgs::PoseStamped::ConstPtr& msg)
{

  handsfree_msg_pub.header = msg->header;
  handsfree_msg_pub.position.x    = msg->pose.position.x;
  handsfree_msg_pub.position.y    = msg->pose.position.y;
  handsfree_msg_pub.position.z    = msg->pose.position.z;
//   handsfree_msg_pub.orientation.w = msg->pose.orientation.w;  
//   handsfree_msg_pub.orientation.x = msg->pose.orientation.x;
//   handsfree_msg_pub.orientation.y = msg->pose.orientation.y;
//   handsfree_msg_pub.orientation.z = msg->pose.orientation.z;
  return;
}

void RotorSInterface::rotorsViconTwistCallback(
    const geometry_msgs::TwistStamped::ConstPtr& msg)
{
  handsfree_msg_pub.header = msg->header;
  handsfree_msg_pub.velocity.x    = msg->twist.linear.x;
  handsfree_msg_pub.velocity.y    = msg->twist.linear.y;
  handsfree_msg_pub.velocity.z    = msg->twist.linear.z;
  return;
}

void RotorSInterface::rotorsHandsFreeCallback(
    const sensor_msgs::Imu::ConstPtr& msg)
{
   
  handsfree_msg_pub.header = msg->header;
//   handsfree_msg_pub.orientation.w = msg->orientation.w;  
//   handsfree_msg_pub.orientation.x = msg->orientation.x;
//   handsfree_msg_pub.orientation.y = msg->orientation.y;
//   handsfree_msg_pub.orientation.z = msg->orientation.z;
  handsfree_msg_pub.bodyrates.x = msg->angular_velocity.x;
  handsfree_msg_pub.bodyrates.y = msg->angular_velocity.y;
  handsfree_msg_pub.bodyrates.z = msg->angular_velocity.z;

  /*state_set话题发布的内容*/
  state_est_pub_.publish(handsfree_msg_pub);
  
  return;
}

void RotorSInterface::rotorsMavrosImuCallback(
    const sensor_msgs::Imu::ConstPtr& msg)
{
   
  handsfree_msg_pub.header = msg->header;
  handsfree_msg_pub.bodyrates.x = msg->angular_velocity.x;
  handsfree_msg_pub.bodyrates.y = msg->angular_velocity.y;
  handsfree_msg_pub.bodyrates.z = msg->angular_velocity.z;
  handsfree_msg_pub.orientation.w = msg->orientation.w;  
  handsfree_msg_pub.orientation.x = msg->orientation.x;
  handsfree_msg_pub.orientation.y = msg->orientation.y;
  handsfree_msg_pub.orientation.z = msg->orientation.z;

  /*state_set话题发布的内容*/
  state_est_pub_.publish(handsfree_msg_pub);
  
  return;
}


void RotorSInterface::ftcMotorCommandCallback(
    const quad_msgs::ControlCommand::ConstPtr& msg)
{
    mav_msgs::Actuators desired_motor_speed;
    mavros_msgs::RotorControl rotor_control_msg_;
    
    for (int i=0; i<4; i++)
    {
        desired_motor_speed.angular_velocities.push_back(0.0);
/* 问题：msg->mot_throttle[i]是否代表PWM控制信号
rotor_speed = mot_throttle*mot_throttle*系数1 + mot_throttle*系数2 + 系数3
*/
        double rotorSpeed = msg->mot_throttle[i];
        if(rotorSpeed < 300) rotorSpeed = 0.0;
        else rotorSpeed = rotorSpeed * rotorSpeed * coeff1_
                    + rotorSpeed * coeff2_ + coeff3_;
               
        rotorSpeed /= rotor_thrust_coeff_;

        if (rotorSpeed < 0.0) rotorSpeed = 0.0;
                
        desired_motor_speed.angular_velocities[i] = std::sqrt(rotorSpeed);
    }
/*发布command/motor_speed话题内容*/

/*SYSU Code begining*/
    for (int i=0; i<4;i++) {
        rotor_control_msg_.mot_throttle[i] = msg->mot_throttle[i];
    } 
    rotor_control_pub_.publish(rotor_control_msg_);
/*SYSU Code ending*/
    rotors_desired_motor_speed_pub_.publish(desired_motor_speed);
    
    return;
}

bool RotorSInterface::loadParams() 
{
    bool check = true;
    check &= pnh_.param("mot_coeff1", coeff1_, 0.000008492875480);
    check &= pnh_.param("mot_coeff2", coeff2_, -0.002777454295627);
    check &= pnh_.param("mot_coeff3", coeff3_, 0.108400169428593);
    check &= pnh_.param("rotor_thrust_coeff", rotor_thrust_coeff_, 8.54858e-06);

    return check; 
}

/*SYSUCODE*/
void RotorSInterface::ftcInnerdesignCallback(const quad_msgs::QuadStateEstimate::ConstPtr& msg)
{
    quad_msgs::QuadStateEstimate msg_inn;
    msg_inn.header = msg->header;
    msg_inn.bodyrates.x = msg->bodyrates.x;
    msg_inn.bodyrates.y = msg->bodyrates.y;
    msg_inn.bodyrates.z = msg->bodyrates.z;
    msg_inn.position.x = msg->position.x;
    msg_inn.position.y = msg->position.y;
    msg_inn.position.z = msg->position.z;
    msg_inn.velocity.x = msg->velocity.x;
    msg_inn.velocity.y = msg->velocity.y;
    msg_inn.velocity.z = msg->velocity.z;
    msg_inn.orientation.x = msg->orientation.x;
    msg_inn.orientation.y = msg->orientation.y;
    msg_inn.orientation.z = msg->orientation.z;
    msg_inn.orientation.w = msg->orientation.w;
}

void RotorSInterface::ftcFilterCallback(const quad_msgs::QuadStateEstimate::ConstPtr& msg)
{
    quad_msgs::QuadStateEstimate msg_filter;
    msg_filter.header = msg->header;
    msg_filter.bodyrates.x = msg->bodyrates.x;
    msg_filter.bodyrates.y = msg->bodyrates.y;
    msg_filter.bodyrates.z = msg->bodyrates.z;
    msg_filter.position.x = msg->position.x;
    msg_filter.position.y = msg->position.y;
    msg_filter.position.z = msg->position.z;
    msg_filter.velocity.x = msg->velocity.x;
    msg_filter.velocity.y = msg->velocity.y;
    msg_filter.velocity.z = msg->velocity.z;
}

void RotorSInterface::ftcRungekuttaCallback(const quad_msgs::QuadStateEstimate::ConstPtr& msg)
{
    quad_msgs::QuadStateEstimate msg_rungekutta;
    msg_rungekutta.header = msg->header;
    msg_rungekutta.velocity.x = msg->velocity.x;
    msg_rungekutta.velocity.y = msg->velocity.y;
    msg_rungekutta.velocity.z = msg->velocity.z;
    msg_rungekutta.orientation.x = msg->orientation.x;
    msg_rungekutta.orientation.y = msg->orientation.y;
    msg_rungekutta.orientation.z = msg->orientation.z;
    msg_rungekutta.orientation.w = msg->orientation.w;
    msg_rungekutta.position.x = msg->position.x;
    msg_rungekutta.position.y = msg->position.y;
    msg_rungekutta.position.z = msg->position.z;
    msg_rungekutta.bodyrates.x = msg->bodyrates.x;
    msg_rungekutta.bodyrates.y = msg->bodyrates.y;
    msg_rungekutta.bodyrates.z = msg->bodyrates.z;
}
/*SYSUCODE*/

void RotorSInterface::startRotorsCallback(const std_msgs::Empty::ConstPtr& msg){ 
    armed_out_.data = true; 
    time_traj_received_ = ros::Time::now().toSec();
    // ROS_INFO("estimation do not received %f", time_traj_received_);
}

void RotorSInterface::controlUpdateCallback(const ros::TimerEvent&){
    looptrajectory();
    loopattitude();
    return;
}

void RotorSInterface::looptrajectory()
{
    if (armed_out_.data) 
    {
        double time = ros::Time::now().toSec() - time_traj_received_;
        pos_design_msg_.x = 0.0;
        pos_design_msg_.y = 0.0;
        pos_design_msg_.z = 1.0/(1.0+exp(-(time-0.5)/2));
        // reference_pub_.publish(pos_design_msg_);
    }
    else 
    {
        return;
    }
}

void RotorSInterface::loopattitude()
{
    if (armed_out_.data) 
    {
        double time = ros::Time::now().toSec() - time_traj_received_;
        att_design_msg_.x = 0.0;
        att_design_msg_.y = 0.0;
        att_design_msg_.z = 1.0;
        //attitude_pub_.publish(att_design_msg_);
    }
    else 
    {
        return;
    }
}
}//namespace rotors_interface