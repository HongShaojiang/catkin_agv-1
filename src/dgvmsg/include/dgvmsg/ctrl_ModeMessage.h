// Generated by gencpp from file dgvmsg/ctrl_ModeMessage.msg
// DO NOT EDIT!


#ifndef DGVMSG_MESSAGE_CTRL_MODEMESSAGE_H
#define DGVMSG_MESSAGE_CTRL_MODEMESSAGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <dgvmsg/Twist.h>

namespace dgvmsg
{
template <class ContainerAllocator>
struct ctrl_ModeMessage_
{
  typedef ctrl_ModeMessage_<ContainerAllocator> Type;

  ctrl_ModeMessage_()
    : header()
    , online(0)
    , strcmd()
    , twist()  {
    }
  ctrl_ModeMessage_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , online(0)
    , strcmd(_alloc)
    , twist(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int16_t _online_type;
  _online_type online;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _strcmd_type;
  _strcmd_type strcmd;

   typedef  ::dgvmsg::Twist_<ContainerAllocator>  _twist_type;
  _twist_type twist;




  typedef boost::shared_ptr< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> const> ConstPtr;

}; // struct ctrl_ModeMessage_

typedef ::dgvmsg::ctrl_ModeMessage_<std::allocator<void> > ctrl_ModeMessage;

typedef boost::shared_ptr< ::dgvmsg::ctrl_ModeMessage > ctrl_ModeMessagePtr;
typedef boost::shared_ptr< ::dgvmsg::ctrl_ModeMessage const> ctrl_ModeMessageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dgvmsg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'dgvmsg': ['/home/pc-robot/workspace/ubuntudev/03-controler/02-controller_232/src/dgvmsg/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "08e7a508ef56ae0b7efc413d569a0ccc";
  }

  static const char* value(const ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x08e7a508ef56ae0bULL;
  static const uint64_t static_value2 = 0x7efc413d569a0cccULL;
};

template<class ContainerAllocator>
struct DataType< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dgvmsg/ctrl_ModeMessage";
  }

  static const char* value(const ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This expresses velocity in free space with uncertainty.\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
\n\
Header header\n\
int16 online\n\
string strcmd\n\
Twist twist\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: dgvmsg/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: dgvmsg/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.online);
      stream.next(m.strcmd);
      stream.next(m.twist);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ctrl_ModeMessage_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dgvmsg::ctrl_ModeMessage_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "online: ";
    Printer<int16_t>::stream(s, indent + "  ", v.online);
    s << indent << "strcmd: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.strcmd);
    s << indent << "twist: ";
    s << std::endl;
    Printer< ::dgvmsg::Twist_<ContainerAllocator> >::stream(s, indent + "  ", v.twist);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DGVMSG_MESSAGE_CTRL_MODEMESSAGE_H
