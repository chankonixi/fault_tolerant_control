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

#pragma once
#include "ros/ros.h"
#include "nav_msgs/Odometry.h"
#include "mav_msgs/Actuators.h"
#include "quad_msgs/QuadStateEstimate.h"
#include "quad_msgs/ControlCommand.h"
#include <mavros_msgs/RotorControl.h>

#include "std_msgs/Empty.h"
#include "std_msgs/String.h"
#include "std_msgs/Bool.h"
#include <Eigen/Eigen>
#include "geometry_msgs/Point.h"



namespace rotors_interface
{
    class RotorSInterface
    {
        public:
            RotorSInterface(const ros::NodeHandle& nh, const ros::NodeHandle& pnh);
            RotorSInterface():
                RotorSInterface(ros::NodeHandle(), ros::NodeHandle("~")){};
            ~RotorSInterface();
        private:
            ros::NodeHandle nh_;
            ros::NodeHandle pnh_;
            ros::Publisher  rotors_desired_motor_speed_pub_;
            ros::Publisher rotor_control_pub_;          
            ros::Publisher  state_est_pub_;
            ros::Subscriber rotors_odometry_sub_;
            ros::Subscriber rotors_gazebo_odometry_sub_;
            ros::Subscriber motor_command_sub_;
            
            double coeff1_, coeff2_, coeff3_;
            double rotor_thrust_coeff_;
            
            bool loadParams();
            void rotorsOdometryCallback(const nav_msgs::Odometry::ConstPtr& msg);
            void rotorsgazeboOdometryCallback(const nav_msgs::Odometry::ConstPtr& msg);
            void ftcMotorCommandCallback(const quad_msgs::ControlCommand::ConstPtr& msg);

            ros::Subscriber inner_design_sub_;//SYSUCODE
            ros::Publisher  reference_pub_;//SYSUCODE
            void ftcInnerdesignCallback(const quad_msgs::QuadStateEstimate::ConstPtr& msg);//SYSUCODE
            ros::Timer control_timer_;
            void looptrajectory();
            bool trajectory_received_=false;
            std_msgs::Bool armed_out_;
            void startRotorsCallback (const std_msgs::Empty::ConstPtr& msg);
            double time_traj_received_;
            geometry_msgs::Point pos_design_msg_;
            void controlUpdateCallback(const ros::TimerEvent&);
            ros::Subscriber start_rotors_sub_;
    };

} // namespace rotors_interface