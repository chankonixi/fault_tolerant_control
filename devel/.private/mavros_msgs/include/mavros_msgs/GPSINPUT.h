// Generated by gencpp from file mavros_msgs/GPSINPUT.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_GPSINPUT_H
#define MAVROS_MSGS_MESSAGE_GPSINPUT_H


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
struct GPSINPUT_
{
  typedef GPSINPUT_<ContainerAllocator> Type;

  GPSINPUT_()
    : header()
    , fix_type(0)
    , gps_id(0)
    , ignore_flags(0)
    , time_week_ms(0)
    , time_week(0)
    , lat(0)
    , lon(0)
    , alt(0.0)
    , hdop(0.0)
    , vdop(0.0)
    , vn(0.0)
    , ve(0.0)
    , vd(0.0)
    , speed_accuracy(0.0)
    , horiz_accuracy(0.0)
    , vert_accuracy(0.0)
    , satellites_visible(0)
    , yaw(0)  {
    }
  GPSINPUT_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , fix_type(0)
    , gps_id(0)
    , ignore_flags(0)
    , time_week_ms(0)
    , time_week(0)
    , lat(0)
    , lon(0)
    , alt(0.0)
    , hdop(0.0)
    , vdop(0.0)
    , vn(0.0)
    , ve(0.0)
    , vd(0.0)
    , speed_accuracy(0.0)
    , horiz_accuracy(0.0)
    , vert_accuracy(0.0)
    , satellites_visible(0)
    , yaw(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _fix_type_type;
  _fix_type_type fix_type;

   typedef uint8_t _gps_id_type;
  _gps_id_type gps_id;

   typedef uint16_t _ignore_flags_type;
  _ignore_flags_type ignore_flags;

   typedef uint32_t _time_week_ms_type;
  _time_week_ms_type time_week_ms;

   typedef uint16_t _time_week_type;
  _time_week_type time_week;

   typedef int32_t _lat_type;
  _lat_type lat;

   typedef int32_t _lon_type;
  _lon_type lon;

   typedef float _alt_type;
  _alt_type alt;

   typedef float _hdop_type;
  _hdop_type hdop;

   typedef float _vdop_type;
  _vdop_type vdop;

   typedef float _vn_type;
  _vn_type vn;

   typedef float _ve_type;
  _ve_type ve;

   typedef float _vd_type;
  _vd_type vd;

   typedef float _speed_accuracy_type;
  _speed_accuracy_type speed_accuracy;

   typedef float _horiz_accuracy_type;
  _horiz_accuracy_type horiz_accuracy;

   typedef float _vert_accuracy_type;
  _vert_accuracy_type vert_accuracy;

   typedef uint8_t _satellites_visible_type;
  _satellites_visible_type satellites_visible;

   typedef uint16_t _yaw_type;
  _yaw_type yaw;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(GPS_FIX_TYPE_NO_GPS)
  #undef GPS_FIX_TYPE_NO_GPS
#endif
#if defined(_WIN32) && defined(GPS_FIX_TYPE_NO_FIX)
  #undef GPS_FIX_TYPE_NO_FIX
#endif
#if defined(_WIN32) && defined(GPS_FIX_TYPE_2D_FIX)
  #undef GPS_FIX_TYPE_2D_FIX
#endif
#if defined(_WIN32) && defined(GPS_FIX_TYPE_3D_FIX)
  #undef GPS_FIX_TYPE_3D_FIX
#endif
#if defined(_WIN32) && defined(GPS_FIX_TYPE_DGPS)
  #undef GPS_FIX_TYPE_DGPS
#endif
#if defined(_WIN32) && defined(GPS_FIX_TYPE_RTK_FLOATR)
  #undef GPS_FIX_TYPE_RTK_FLOATR
#endif
#if defined(_WIN32) && defined(GPS_FIX_TYPE_RTK_FIXEDR)
  #undef GPS_FIX_TYPE_RTK_FIXEDR
#endif
#if defined(_WIN32) && defined(GPS_FIX_TYPE_STATIC)
  #undef GPS_FIX_TYPE_STATIC
#endif
#if defined(_WIN32) && defined(GPS_FIX_TYPE_PPP)
  #undef GPS_FIX_TYPE_PPP
#endif

  enum {
    GPS_FIX_TYPE_NO_GPS = 0u,
    GPS_FIX_TYPE_NO_FIX = 1u,
    GPS_FIX_TYPE_2D_FIX = 2u,
    GPS_FIX_TYPE_3D_FIX = 3u,
    GPS_FIX_TYPE_DGPS = 4u,
    GPS_FIX_TYPE_RTK_FLOATR = 5u,
    GPS_FIX_TYPE_RTK_FIXEDR = 6u,
    GPS_FIX_TYPE_STATIC = 7u,
    GPS_FIX_TYPE_PPP = 8u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::GPSINPUT_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::GPSINPUT_<ContainerAllocator> const> ConstPtr;

}; // struct GPSINPUT_

typedef ::mavros_msgs::GPSINPUT_<std::allocator<void> > GPSINPUT;

typedef boost::shared_ptr< ::mavros_msgs::GPSINPUT > GPSINPUTPtr;
typedef boost::shared_ptr< ::mavros_msgs::GPSINPUT const> GPSINPUTConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::GPSINPUT_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::GPSINPUT_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::GPSINPUT_<ContainerAllocator1> & lhs, const ::mavros_msgs::GPSINPUT_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.fix_type == rhs.fix_type &&
    lhs.gps_id == rhs.gps_id &&
    lhs.ignore_flags == rhs.ignore_flags &&
    lhs.time_week_ms == rhs.time_week_ms &&
    lhs.time_week == rhs.time_week &&
    lhs.lat == rhs.lat &&
    lhs.lon == rhs.lon &&
    lhs.alt == rhs.alt &&
    lhs.hdop == rhs.hdop &&
    lhs.vdop == rhs.vdop &&
    lhs.vn == rhs.vn &&
    lhs.ve == rhs.ve &&
    lhs.vd == rhs.vd &&
    lhs.speed_accuracy == rhs.speed_accuracy &&
    lhs.horiz_accuracy == rhs.horiz_accuracy &&
    lhs.vert_accuracy == rhs.vert_accuracy &&
    lhs.satellites_visible == rhs.satellites_visible &&
    lhs.yaw == rhs.yaw;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::GPSINPUT_<ContainerAllocator1> & lhs, const ::mavros_msgs::GPSINPUT_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::GPSINPUT_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::GPSINPUT_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::GPSINPUT_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::GPSINPUT_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::GPSINPUT_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::GPSINPUT_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::GPSINPUT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "928ef4ffec7b9af7c6e4748f0542b6a0";
  }

  static const char* value(const ::mavros_msgs::GPSINPUT_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x928ef4ffec7b9af7ULL;
  static const uint64_t static_value2 = 0xc6e4748f0542b6a0ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::GPSINPUT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/GPSINPUT";
  }

  static const char* value(const ::mavros_msgs::GPSINPUT_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::GPSINPUT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# FCU GPS INPUT message for the gps_input plugin\n"
"# <a href=\"https://mavlink.io/en/messages/common.html#GPS_INPUT\">mavlink GPS_INPUT message</a>.\n"
"\n"
"std_msgs/Header header\n"
"## GPS_FIX_TYPE enum\n"
"uint8 GPS_FIX_TYPE_NO_GPS     = 0    # No GPS connected\n"
"uint8 GPS_FIX_TYPE_NO_FIX     = 1    # No position information, GPS is connected\n"
"uint8 GPS_FIX_TYPE_2D_FIX     = 2    # 2D position\n"
"uint8 GPS_FIX_TYPE_3D_FIX     = 3    # 3D position\n"
"uint8 GPS_FIX_TYPE_DGPS       = 4    # DGPS/SBAS aided 3D position\n"
"uint8 GPS_FIX_TYPE_RTK_FLOATR = 5    # TK float, 3D position\n"
"uint8 GPS_FIX_TYPE_RTK_FIXEDR = 6    # TK Fixed, 3D position\n"
"uint8 GPS_FIX_TYPE_STATIC     = 7    # Static fixed, typically used for base stations\n"
"uint8 GPS_FIX_TYPE_PPP        = 8    # PPP, 3D position\n"
"uint8 fix_type      # [GPS_FIX_TYPE] GPS fix type\n"
"\n"
"uint8 gps_id        # ID of the GPS for multiple GPS inputs\n"
"uint16 ignore_flags # Bitmap indicating which GPS input flags fields to ignore. All other fields must be provided.\n"
"\n"
"uint32 time_week_ms # [ms] GPS time (from start of GPS week)\n"
"uint16 time_week    # GPS week number\n"
"int32 lat           # [degE7] Latitude (WGS84, EGM96 ellipsoid)\n"
"int32 lon           # [degE7] Longitude (WGS84, EGM96 ellipsoid)\n"
"float32 alt         # [m] Altitude (MSL). Positive for up.\n"
"\n"
"float32 hdop        # [m] GPS HDOP horizontal dilution of position.\n"
"float32 vdop        # [m] GPS VDOP vertical dilution of position\n"
"float32 vn          # [m/s] GPS velocity in NORTH direction in earth-fixed NED frame\n"
"float32 ve          # [m/s] GPS velocity in EAST direction in earth-fixed NED frame\n"
"float32 vd          # [m/s] GPS velocity in DOWN direction in earth-fixed NED frame\n"
"\n"
"float32 speed_accuracy # [m/s] GPS speed accuracy\n"
"float32 horiz_accuracy # [m] GPS horizontal accuracy\n"
"float32 vert_accuracy  # [m] GPS vertical accuracy\n"
"\n"
"uint8 satellites_visible # Number of satellites visible. If unknown, set to 255\n"
"uint16 yaw          # [cdeg] Yaw in earth frame from north.\n"
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

  static const char* value(const ::mavros_msgs::GPSINPUT_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::GPSINPUT_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.fix_type);
      stream.next(m.gps_id);
      stream.next(m.ignore_flags);
      stream.next(m.time_week_ms);
      stream.next(m.time_week);
      stream.next(m.lat);
      stream.next(m.lon);
      stream.next(m.alt);
      stream.next(m.hdop);
      stream.next(m.vdop);
      stream.next(m.vn);
      stream.next(m.ve);
      stream.next(m.vd);
      stream.next(m.speed_accuracy);
      stream.next(m.horiz_accuracy);
      stream.next(m.vert_accuracy);
      stream.next(m.satellites_visible);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GPSINPUT_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::GPSINPUT_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::GPSINPUT_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "fix_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fix_type);
    s << indent << "gps_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gps_id);
    s << indent << "ignore_flags: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ignore_flags);
    s << indent << "time_week_ms: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.time_week_ms);
    s << indent << "time_week: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.time_week);
    s << indent << "lat: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lat);
    s << indent << "lon: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lon);
    s << indent << "alt: ";
    Printer<float>::stream(s, indent + "  ", v.alt);
    s << indent << "hdop: ";
    Printer<float>::stream(s, indent + "  ", v.hdop);
    s << indent << "vdop: ";
    Printer<float>::stream(s, indent + "  ", v.vdop);
    s << indent << "vn: ";
    Printer<float>::stream(s, indent + "  ", v.vn);
    s << indent << "ve: ";
    Printer<float>::stream(s, indent + "  ", v.ve);
    s << indent << "vd: ";
    Printer<float>::stream(s, indent + "  ", v.vd);
    s << indent << "speed_accuracy: ";
    Printer<float>::stream(s, indent + "  ", v.speed_accuracy);
    s << indent << "horiz_accuracy: ";
    Printer<float>::stream(s, indent + "  ", v.horiz_accuracy);
    s << indent << "vert_accuracy: ";
    Printer<float>::stream(s, indent + "  ", v.vert_accuracy);
    s << indent << "satellites_visible: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.satellites_visible);
    s << indent << "yaw: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_GPSINPUT_H
