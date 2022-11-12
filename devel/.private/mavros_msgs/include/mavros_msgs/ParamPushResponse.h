// Generated by gencpp from file mavros_msgs/ParamPushResponse.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_PARAMPUSHRESPONSE_H
#define MAVROS_MSGS_MESSAGE_PARAMPUSHRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct ParamPushResponse_
{
  typedef ParamPushResponse_<ContainerAllocator> Type;

  ParamPushResponse_()
    : success(false)
    , param_transfered(0)  {
    }
  ParamPushResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , param_transfered(0)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef uint32_t _param_transfered_type;
  _param_transfered_type param_transfered;





  typedef boost::shared_ptr< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ParamPushResponse_

typedef ::mavros_msgs::ParamPushResponse_<std::allocator<void> > ParamPushResponse;

typedef boost::shared_ptr< ::mavros_msgs::ParamPushResponse > ParamPushResponsePtr;
typedef boost::shared_ptr< ::mavros_msgs::ParamPushResponse const> ParamPushResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::ParamPushResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::ParamPushResponse_<ContainerAllocator1> & lhs, const ::mavros_msgs::ParamPushResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.param_transfered == rhs.param_transfered;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::ParamPushResponse_<ContainerAllocator1> & lhs, const ::mavros_msgs::ParamPushResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d3fc4d8cefa193382985a92a041a2a3d";
  }

  static const char* value(const ::mavros_msgs::ParamPushResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd3fc4d8cefa19338ULL;
  static const uint64_t static_value2 = 0x2985a92a041a2a3dULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/ParamPushResponse";
  }

  static const char* value(const ::mavros_msgs::ParamPushResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"uint32 param_transfered\n"
"\n"
;
  }

  static const char* value(const ::mavros_msgs::ParamPushResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.param_transfered);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ParamPushResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::ParamPushResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::ParamPushResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "param_transfered: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.param_transfered);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_PARAMPUSHRESPONSE_H
