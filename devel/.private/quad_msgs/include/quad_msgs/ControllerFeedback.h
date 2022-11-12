// Generated by gencpp from file quad_msgs/ControllerFeedback.msg
// DO NOT EDIT!


#ifndef QUAD_MSGS_MESSAGE_CONTROLLERFEEDBACK_H
#define QUAD_MSGS_MESSAGE_CONTROLLERFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <quad_msgs/QuadDesiredState.h>
#include <quad_msgs/QuadStateEstimate.h>

namespace quad_msgs
{
template <class ContainerAllocator>
struct ControllerFeedback_
{
  typedef ControllerFeedback_<ContainerAllocator> Type;

  ControllerFeedback_()
    : header()
    , tracking_ok(0)
    , controller_state(0)
    , command_execution_time()
    , desired_state()
    , state_estimate()  {
    }
  ControllerFeedback_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tracking_ok(0)
    , controller_state(0)
    , command_execution_time()
    , desired_state(_alloc)
    , state_estimate(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int8_t _tracking_ok_type;
  _tracking_ok_type tracking_ok;

   typedef int8_t _controller_state_type;
  _controller_state_type controller_state;

   typedef ros::Time _command_execution_time_type;
  _command_execution_time_type command_execution_time;

   typedef  ::quad_msgs::QuadDesiredState_<ContainerAllocator>  _desired_state_type;
  _desired_state_type desired_state;

   typedef  ::quad_msgs::QuadStateEstimate_<ContainerAllocator>  _state_estimate_type;
  _state_estimate_type state_estimate;





  typedef boost::shared_ptr< ::quad_msgs::ControllerFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quad_msgs::ControllerFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct ControllerFeedback_

typedef ::quad_msgs::ControllerFeedback_<std::allocator<void> > ControllerFeedback;

typedef boost::shared_ptr< ::quad_msgs::ControllerFeedback > ControllerFeedbackPtr;
typedef boost::shared_ptr< ::quad_msgs::ControllerFeedback const> ControllerFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::quad_msgs::ControllerFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::quad_msgs::ControllerFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::quad_msgs::ControllerFeedback_<ContainerAllocator1> & lhs, const ::quad_msgs::ControllerFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.tracking_ok == rhs.tracking_ok &&
    lhs.controller_state == rhs.controller_state &&
    lhs.command_execution_time == rhs.command_execution_time &&
    lhs.desired_state == rhs.desired_state &&
    lhs.state_estimate == rhs.state_estimate;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::quad_msgs::ControllerFeedback_<ContainerAllocator1> & lhs, const ::quad_msgs::ControllerFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace quad_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::quad_msgs::ControllerFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::quad_msgs::ControllerFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quad_msgs::ControllerFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quad_msgs::ControllerFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quad_msgs::ControllerFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quad_msgs::ControllerFeedback_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::quad_msgs::ControllerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2d0f199907489e337c0d2dad1e3e9d0d";
  }

  static const char* value(const ::quad_msgs::ControllerFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2d0f199907489e33ULL;
  static const uint64_t static_value2 = 0x7c0d2dad1e3e9d0dULL;
};

template<class ContainerAllocator>
struct DataType< ::quad_msgs::ControllerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "quad_msgs/ControllerFeedback";
  }

  static const char* value(const ::quad_msgs::ControllerFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::quad_msgs::ControllerFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"int8 tracking_ok\n"
"\n"
"# State machine of the controller\n"
"int8 controller_state\n"
"\n"
"# Time at which the resulting control command should be executed\n"
"time command_execution_time\n"
"\n"
"# Desired state used to compute the control command\n"
"quad_msgs/QuadDesiredState desired_state\n"
"\n"
"# State estimate used to compute the control command\n"
"quad_msgs/QuadStateEstimate state_estimate\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: quad_msgs/QuadDesiredState\n"
"# Quadrotor Desired State \n"
"\n"
"Header header\n"
"\n"
"# 3D position in world frame [m]\n"
"geometry_msgs/Vector3 position\n"
"\n"
"# 3D velocity in world frame [m/s]\n"
"geometry_msgs/Vector3 velocity\n"
"\n"
"# 3D acceleration in world frame [m/s^2]\n"
"geometry_msgs/Vector3 acceleration\n"
"\n"
"# 3D jerk in world frame [m/s^3]\n"
"geometry_msgs/Vector3 jerk\n"
"\n"
"# 3D snap in world frame [m/s^4]\n"
"geometry_msgs/Vector3 snap\n"
"\n"
"# yaw angle with respect to world frame [rad]\n"
"float64 yaw\n"
"\n"
"# angular velocity in the body z-direction [rad/s]\n"
"float64 yaw_rate\n"
"\n"
"# angular acceleration in the body z-direction [rad/s^2]\n"
"float64 yaw_acceleration\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: quad_msgs/QuadStateEstimate\n"
"# Quadrotor State Estimate \n"
"# This Message is published by an estimator\n"
"\n"
"Header header\n"
"\n"
"#\n"
"int8 estimator_id\n"
"\n"
"# 3D position in world frame [m]\n"
"geometry_msgs/Vector3 position\n"
"\n"
"# 3D velocity in world frame [m/s]\n"
"geometry_msgs/Vector3 velocity\n"
"\n"
"# Orientation with respect to world frame []\n"
"geometry_msgs/Quaternion orientation\n"
"\n"
"# Body rates in body frame [rad/s]\n"
"geometry_msgs/Vector3 bodyrates\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::quad_msgs::ControllerFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::quad_msgs::ControllerFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tracking_ok);
      stream.next(m.controller_state);
      stream.next(m.command_execution_time);
      stream.next(m.desired_state);
      stream.next(m.state_estimate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControllerFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quad_msgs::ControllerFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::quad_msgs::ControllerFeedback_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tracking_ok: ";
    Printer<int8_t>::stream(s, indent + "  ", v.tracking_ok);
    s << indent << "controller_state: ";
    Printer<int8_t>::stream(s, indent + "  ", v.controller_state);
    s << indent << "command_execution_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.command_execution_time);
    s << indent << "desired_state: ";
    s << std::endl;
    Printer< ::quad_msgs::QuadDesiredState_<ContainerAllocator> >::stream(s, indent + "  ", v.desired_state);
    s << indent << "state_estimate: ";
    s << std::endl;
    Printer< ::quad_msgs::QuadStateEstimate_<ContainerAllocator> >::stream(s, indent + "  ", v.state_estimate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QUAD_MSGS_MESSAGE_CONTROLLERFEEDBACK_H
