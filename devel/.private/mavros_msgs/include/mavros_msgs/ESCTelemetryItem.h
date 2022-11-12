// Generated by gencpp from file mavros_msgs/ESCTelemetryItem.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_ESCTELEMETRYITEM_H
#define MAVROS_MSGS_MESSAGE_ESCTELEMETRYITEM_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct ESCTelemetryItem_
{
  typedef ESCTelemetryItem_<ContainerAllocator> Type;

  ESCTelemetryItem_()
    : header()
    , temperature(0.0)
    , voltage(0.0)
    , current(0.0)
    , totalcurrent(0.0)
    , rpm(0)
    , count(0)  {
    }
  ESCTelemetryItem_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , temperature(0.0)
    , voltage(0.0)
    , current(0.0)
    , totalcurrent(0.0)
    , rpm(0)
    , count(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _temperature_type;
  _temperature_type temperature;

   typedef float _voltage_type;
  _voltage_type voltage;

   typedef float _current_type;
  _current_type current;

   typedef float _totalcurrent_type;
  _totalcurrent_type totalcurrent;

   typedef int32_t _rpm_type;
  _rpm_type rpm;

   typedef uint16_t _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> const> ConstPtr;

}; // struct ESCTelemetryItem_

typedef ::mavros_msgs::ESCTelemetryItem_<std::allocator<void> > ESCTelemetryItem;

typedef boost::shared_ptr< ::mavros_msgs::ESCTelemetryItem > ESCTelemetryItemPtr;
typedef boost::shared_ptr< ::mavros_msgs::ESCTelemetryItem const> ESCTelemetryItemConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator1> & lhs, const ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.temperature == rhs.temperature &&
    lhs.voltage == rhs.voltage &&
    lhs.current == rhs.current &&
    lhs.totalcurrent == rhs.totalcurrent &&
    lhs.rpm == rhs.rpm &&
    lhs.count == rhs.count;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator1> & lhs, const ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a135c5d0c71a3bade75476291a42a6df";
  }

  static const char* value(const ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa135c5d0c71a3badULL;
  static const uint64_t static_value2 = 0xe75476291a42a6dfULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/ESCTelemetryItem";
  }

  static const char* value(const ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# APM ESC Telemetry as returned by BLHeli\n"
"#\n"
"# See:\n"
"# https://mavlink.io/en/messages/ardupilotmega.html#ESC_TELEMETRY_1_TO_4\n"
"# https://mavlink.io/en/messages/ardupilotmega.html#ESC_TELEMETRY_5_TO_8\n"
"# https://mavlink.io/en/messages/ardupilotmega.html#ESC_TELEMETRY_9_TO_12\n"
"\n"
"std_msgs/Header header\n"
"\n"
"float32 temperature     # deg C\n"
"float32 voltage         # V\n"
"float32 current         # A\n"
"float32 totalcurrent    # Ah\n"
"int32 rpm               # -1/min\n"
"uint16 count            # count of telemetry packets\n"
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

  static const char* value(const ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.temperature);
      stream.next(m.voltage);
      stream.next(m.current);
      stream.next(m.totalcurrent);
      stream.next(m.rpm);
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ESCTelemetryItem_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::ESCTelemetryItem_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "temperature: ";
    Printer<float>::stream(s, indent + "  ", v.temperature);
    s << indent << "voltage: ";
    Printer<float>::stream(s, indent + "  ", v.voltage);
    s << indent << "current: ";
    Printer<float>::stream(s, indent + "  ", v.current);
    s << indent << "totalcurrent: ";
    Printer<float>::stream(s, indent + "  ", v.totalcurrent);
    s << indent << "rpm: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rpm);
    s << indent << "count: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_ESCTELEMETRYITEM_H
