// Generated by gencpp from file mavros_msgs/ActuatorControl.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_ACTUATORCONTROL_H
#define MAVROS_MSGS_MESSAGE_ACTUATORCONTROL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct ActuatorControl_
{
  typedef ActuatorControl_<ContainerAllocator> Type;

  ActuatorControl_()
    : header()
    , group_mix(0)
    , controls()  {
      controls.assign(0.0);
  }
  ActuatorControl_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , group_mix(0)
    , controls()  {
  (void)_alloc;
      controls.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _group_mix_type;
  _group_mix_type group_mix;

   typedef boost::array<float, 8>  _controls_type;
  _controls_type controls;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(PX4_MIX_FLIGHT_CONTROL)
  #undef PX4_MIX_FLIGHT_CONTROL
#endif
#if defined(_WIN32) && defined(PX4_MIX_FLIGHT_CONTROL_VTOL_ALT)
  #undef PX4_MIX_FLIGHT_CONTROL_VTOL_ALT
#endif
#if defined(_WIN32) && defined(PX4_MIX_PAYLOAD)
  #undef PX4_MIX_PAYLOAD
#endif
#if defined(_WIN32) && defined(PX4_MIX_MANUAL_PASSTHROUGH)
  #undef PX4_MIX_MANUAL_PASSTHROUGH
#endif

  enum {
    PX4_MIX_FLIGHT_CONTROL = 0u,
    PX4_MIX_FLIGHT_CONTROL_VTOL_ALT = 1u,
    PX4_MIX_PAYLOAD = 2u,
    PX4_MIX_MANUAL_PASSTHROUGH = 3u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::ActuatorControl_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::ActuatorControl_<ContainerAllocator> const> ConstPtr;

}; // struct ActuatorControl_

typedef ::mavros_msgs::ActuatorControl_<std::allocator<void> > ActuatorControl;

typedef boost::shared_ptr< ::mavros_msgs::ActuatorControl > ActuatorControlPtr;
typedef boost::shared_ptr< ::mavros_msgs::ActuatorControl const> ActuatorControlConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::ActuatorControl_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::ActuatorControl_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::ActuatorControl_<ContainerAllocator1> & lhs, const ::mavros_msgs::ActuatorControl_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.group_mix == rhs.group_mix &&
    lhs.controls == rhs.controls;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::ActuatorControl_<ContainerAllocator1> & lhs, const ::mavros_msgs::ActuatorControl_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::ActuatorControl_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::ActuatorControl_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::ActuatorControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::ActuatorControl_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::ActuatorControl_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::ActuatorControl_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::ActuatorControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9eea0a80c88944fe2fb67f3b3768854b";
  }

  static const char* value(const ::mavros_msgs::ActuatorControl_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9eea0a80c88944feULL;
  static const uint64_t static_value2 = 0x2fb67f3b3768854bULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::ActuatorControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/ActuatorControl";
  }

  static const char* value(const ::mavros_msgs::ActuatorControl_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::ActuatorControl_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# raw servo values for direct actuator controls\n"
"#\n"
"# about groups, mixing and channels:\n"
"# https://pixhawk.org/dev/mixing\n"
"\n"
"# constant for mixer group\n"
"uint8 PX4_MIX_FLIGHT_CONTROL = 0\n"
"uint8 PX4_MIX_FLIGHT_CONTROL_VTOL_ALT = 1\n"
"uint8 PX4_MIX_PAYLOAD = 2\n"
"uint8 PX4_MIX_MANUAL_PASSTHROUGH = 3\n"
"#uint8 PX4_MIX_FC_MC_VIRT = 4\n"
"#uint8 PX4_MIX_FC_FW_VIRT = 5\n"
"\n"
"std_msgs/Header header\n"
"uint8 group_mix\n"
"float32[8] controls\n"
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
;
  }

  static const char* value(const ::mavros_msgs::ActuatorControl_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::ActuatorControl_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.group_mix);
      stream.next(m.controls);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActuatorControl_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::ActuatorControl_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::ActuatorControl_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "group_mix: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.group_mix);
    s << indent << "controls[]" << std::endl;
    for (size_t i = 0; i < v.controls.size(); ++i)
    {
      s << indent << "  controls[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.controls[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_ACTUATORCONTROL_H
