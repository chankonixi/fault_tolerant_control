// Generated by gencpp from file mavros_msgs/FileWriteRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_FILEWRITEREQUEST_H
#define MAVROS_MSGS_MESSAGE_FILEWRITEREQUEST_H


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
struct FileWriteRequest_
{
  typedef FileWriteRequest_<ContainerAllocator> Type;

  FileWriteRequest_()
    : file_path()
    , offset(0)
    , data()  {
    }
  FileWriteRequest_(const ContainerAllocator& _alloc)
    : file_path(_alloc)
    , offset(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _file_path_type;
  _file_path_type file_path;

   typedef uint64_t _offset_type;
  _offset_type offset;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FileWriteRequest_

typedef ::mavros_msgs::FileWriteRequest_<std::allocator<void> > FileWriteRequest;

typedef boost::shared_ptr< ::mavros_msgs::FileWriteRequest > FileWriteRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::FileWriteRequest const> FileWriteRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::FileWriteRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::FileWriteRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::FileWriteRequest_<ContainerAllocator2> & rhs)
{
  return lhs.file_path == rhs.file_path &&
    lhs.offset == rhs.offset &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::FileWriteRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::FileWriteRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf1a270aa1398f3f1fac1649fe2275ef";
  }

  static const char* value(const ::mavros_msgs::FileWriteRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf1a270aa1398f3fULL;
  static const uint64_t static_value2 = 0x1fac1649fe2275efULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/FileWriteRequest";
  }

  static const char* value(const ::mavros_msgs::FileWriteRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# FTP::Write\n"
"#\n"
"# Call FTP::Open first.\n"
"# :success:	indicates success end of request\n"
"# :r_errno:	remote errno if applicapable\n"
"\n"
"string file_path\n"
"uint64 offset\n"
"uint8[] data\n"
;
  }

  static const char* value(const ::mavros_msgs::FileWriteRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.file_path);
      stream.next(m.offset);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FileWriteRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::FileWriteRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::FileWriteRequest_<ContainerAllocator>& v)
  {
    s << indent << "file_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.file_path);
    s << indent << "offset: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.offset);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_FILEWRITEREQUEST_H
