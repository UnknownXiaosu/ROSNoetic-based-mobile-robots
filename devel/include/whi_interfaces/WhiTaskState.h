// Generated by gencpp from file whi_interfaces/WhiTaskState.msg
// DO NOT EDIT!


#ifndef WHI_INTERFACES_MESSAGE_WHITASKSTATE_H
#define WHI_INTERFACES_MESSAGE_WHITASKSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace whi_interfaces
{
template <class ContainerAllocator>
struct WhiTaskState_
{
  typedef WhiTaskState_<ContainerAllocator> Type;

  WhiTaskState_()
    : name()
    , parent_name()
    , info()  {
    }
  WhiTaskState_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , parent_name(_alloc)
    , info(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _parent_name_type;
  _parent_name_type parent_name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _info_type;
  _info_type info;





  typedef boost::shared_ptr< ::whi_interfaces::WhiTaskState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::whi_interfaces::WhiTaskState_<ContainerAllocator> const> ConstPtr;

}; // struct WhiTaskState_

typedef ::whi_interfaces::WhiTaskState_<std::allocator<void> > WhiTaskState;

typedef boost::shared_ptr< ::whi_interfaces::WhiTaskState > WhiTaskStatePtr;
typedef boost::shared_ptr< ::whi_interfaces::WhiTaskState const> WhiTaskStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::whi_interfaces::WhiTaskState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::whi_interfaces::WhiTaskState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::whi_interfaces::WhiTaskState_<ContainerAllocator1> & lhs, const ::whi_interfaces::WhiTaskState_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.parent_name == rhs.parent_name &&
    lhs.info == rhs.info;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::whi_interfaces::WhiTaskState_<ContainerAllocator1> & lhs, const ::whi_interfaces::WhiTaskState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace whi_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::whi_interfaces::WhiTaskState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::whi_interfaces::WhiTaskState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::whi_interfaces::WhiTaskState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::whi_interfaces::WhiTaskState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::whi_interfaces::WhiTaskState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::whi_interfaces::WhiTaskState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::whi_interfaces::WhiTaskState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "01ad27c42669fbf38fd676c85f58b3a1";
  }

  static const char* value(const ::whi_interfaces::WhiTaskState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x01ad27c42669fbf3ULL;
  static const uint64_t static_value2 = 0x8fd676c85f58b3a1ULL;
};

template<class ContainerAllocator>
struct DataType< ::whi_interfaces::WhiTaskState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "whi_interfaces/WhiTaskState";
  }

  static const char* value(const ::whi_interfaces::WhiTaskState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::whi_interfaces::WhiTaskState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"string parent_name\n"
"string info\n"
;
  }

  static const char* value(const ::whi_interfaces::WhiTaskState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::whi_interfaces::WhiTaskState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.parent_name);
      stream.next(m.info);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WhiTaskState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::whi_interfaces::WhiTaskState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::whi_interfaces::WhiTaskState_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "parent_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.parent_name);
    s << indent << "info: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.info);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WHI_INTERFACES_MESSAGE_WHITASKSTATE_H
