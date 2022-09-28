// Generated by gencpp from file quad_msgs/OnboardParameter.msg
// DO NOT EDIT!


#ifndef QUAD_MSGS_MESSAGE_ONBOARDPARAMETER_H
#define QUAD_MSGS_MESSAGE_ONBOARDPARAMETER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace quad_msgs
{
template <class ContainerAllocator>
struct OnboardParameter_
{
  typedef OnboardParameter_<ContainerAllocator> Type;

  OnboardParameter_()
    : header()
    , param_id()
    , param_value(0.0)
    , param_type(0)
    , param_count(0)
    , param_index(0)  {
    }
  OnboardParameter_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , param_id(_alloc)
    , param_value(0.0)
    , param_type(0)
    , param_count(0)
    , param_index(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _param_id_type;
  _param_id_type param_id;

   typedef double _param_value_type;
  _param_value_type param_value;

   typedef uint8_t _param_type_type;
  _param_type_type param_type;

   typedef uint16_t _param_count_type;
  _param_count_type param_count;

   typedef uint16_t _param_index_type;
  _param_index_type param_index;





  typedef boost::shared_ptr< ::quad_msgs::OnboardParameter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quad_msgs::OnboardParameter_<ContainerAllocator> const> ConstPtr;

}; // struct OnboardParameter_

typedef ::quad_msgs::OnboardParameter_<std::allocator<void> > OnboardParameter;

typedef boost::shared_ptr< ::quad_msgs::OnboardParameter > OnboardParameterPtr;
typedef boost::shared_ptr< ::quad_msgs::OnboardParameter const> OnboardParameterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::quad_msgs::OnboardParameter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::quad_msgs::OnboardParameter_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::quad_msgs::OnboardParameter_<ContainerAllocator1> & lhs, const ::quad_msgs::OnboardParameter_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.param_id == rhs.param_id &&
    lhs.param_value == rhs.param_value &&
    lhs.param_type == rhs.param_type &&
    lhs.param_count == rhs.param_count &&
    lhs.param_index == rhs.param_index;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::quad_msgs::OnboardParameter_<ContainerAllocator1> & lhs, const ::quad_msgs::OnboardParameter_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace quad_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::quad_msgs::OnboardParameter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::quad_msgs::OnboardParameter_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quad_msgs::OnboardParameter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quad_msgs::OnboardParameter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quad_msgs::OnboardParameter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quad_msgs::OnboardParameter_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::quad_msgs::OnboardParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "848b3224649dee188bd859cc1a9c4bbb";
  }

  static const char* value(const ::quad_msgs::OnboardParameter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x848b3224649dee18ULL;
  static const uint64_t static_value2 = 0x8bd859cc1a9c4bbbULL;
};

template<class ContainerAllocator>
struct DataType< ::quad_msgs::OnboardParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "quad_msgs/OnboardParameter";
  }

  static const char* value(const ::quad_msgs::OnboardParameter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::quad_msgs::OnboardParameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Message type handling onboard parameters of the PX4\n"
"\n"
"Header header\n"
"\n"
"#Onboard parameter id (char[16])\n"
"string param_id\n"
"\n"
"#Value of the parameter\n"
"float64 param_value\n"
"\n"
"#Onboard parameter type according to the mavlink message: MAV_PARAM_TYPE\n"
"uint8 param_type\n"
"\n"
"#Total number of onboard parameters\n"
"uint16 param_count\n"
"\n"
"#Index of this onboard parameter\n"
"uint16 param_index\n"
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

  static const char* value(const ::quad_msgs::OnboardParameter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::quad_msgs::OnboardParameter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.param_id);
      stream.next(m.param_value);
      stream.next(m.param_type);
      stream.next(m.param_count);
      stream.next(m.param_index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OnboardParameter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quad_msgs::OnboardParameter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::quad_msgs::OnboardParameter_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "param_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.param_id);
    s << indent << "param_value: ";
    Printer<double>::stream(s, indent + "  ", v.param_value);
    s << indent << "param_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.param_type);
    s << indent << "param_count: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.param_count);
    s << indent << "param_index: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.param_index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QUAD_MSGS_MESSAGE_ONBOARDPARAMETER_H