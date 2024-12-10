// Generated by gencpp from file whi_interfaces/WhiLineChart2D.msg
// DO NOT EDIT!


#ifndef WHI_INTERFACES_MESSAGE_WHILINECHART2D_H
#define WHI_INTERFACES_MESSAGE_WHILINECHART2D_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <whi_interfaces/WhiVectorFloat.h>

namespace whi_interfaces
{
template <class ContainerAllocator>
struct WhiLineChart2D_
{
  typedef WhiLineChart2D_<ContainerAllocator> Type;

  WhiLineChart2D_()
    : header()
    , array()  {
    }
  WhiLineChart2D_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , array(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::whi_interfaces::WhiVectorFloat_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::whi_interfaces::WhiVectorFloat_<ContainerAllocator> >> _array_type;
  _array_type array;





  typedef boost::shared_ptr< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> const> ConstPtr;

}; // struct WhiLineChart2D_

typedef ::whi_interfaces::WhiLineChart2D_<std::allocator<void> > WhiLineChart2D;

typedef boost::shared_ptr< ::whi_interfaces::WhiLineChart2D > WhiLineChart2DPtr;
typedef boost::shared_ptr< ::whi_interfaces::WhiLineChart2D const> WhiLineChart2DConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::whi_interfaces::WhiLineChart2D_<ContainerAllocator1> & lhs, const ::whi_interfaces::WhiLineChart2D_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.array == rhs.array;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::whi_interfaces::WhiLineChart2D_<ContainerAllocator1> & lhs, const ::whi_interfaces::WhiLineChart2D_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace whi_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cb475f588b905accb37a4b48f499ac78";
  }

  static const char* value(const ::whi_interfaces::WhiLineChart2D_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcb475f588b905accULL;
  static const uint64_t static_value2 = 0xb37a4b48f499ac78ULL;
};

template<class ContainerAllocator>
struct DataType< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "whi_interfaces/WhiLineChart2D";
  }

  static const char* value(const ::whi_interfaces::WhiLineChart2D_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"WhiVectorFloat[] array\n"
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
"MSG: whi_interfaces/WhiVectorFloat\n"
"string name\n"
"float32[] data\n"
"string[] items_name\n"
"string[] items_unit\n"
;
  }

  static const char* value(const ::whi_interfaces::WhiLineChart2D_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.array);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WhiLineChart2D_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::whi_interfaces::WhiLineChart2D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::whi_interfaces::WhiLineChart2D_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "array[]" << std::endl;
    for (size_t i = 0; i < v.array.size(); ++i)
    {
      s << indent << "  array[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::whi_interfaces::WhiVectorFloat_<ContainerAllocator> >::stream(s, indent + "    ", v.array[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WHI_INTERFACES_MESSAGE_WHILINECHART2D_H
