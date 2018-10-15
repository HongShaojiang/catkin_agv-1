// Generated by gencpp from file dgvmsg/JoyFeedbackArray.msg
// DO NOT EDIT!


#ifndef DGVMSG_MESSAGE_JOYFEEDBACKARRAY_H
#define DGVMSG_MESSAGE_JOYFEEDBACKARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dgvmsg/JoyFeedback.h>

namespace dgvmsg
{
template <class ContainerAllocator>
struct JoyFeedbackArray_
{
  typedef JoyFeedbackArray_<ContainerAllocator> Type;

  JoyFeedbackArray_()
    : array()  {
    }
  JoyFeedbackArray_(const ContainerAllocator& _alloc)
    : array(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::dgvmsg::JoyFeedback_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dgvmsg::JoyFeedback_<ContainerAllocator> >::other >  _array_type;
  _array_type array;




  typedef boost::shared_ptr< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> const> ConstPtr;

}; // struct JoyFeedbackArray_

typedef ::dgvmsg::JoyFeedbackArray_<std::allocator<void> > JoyFeedbackArray;

typedef boost::shared_ptr< ::dgvmsg::JoyFeedbackArray > JoyFeedbackArrayPtr;
typedef boost::shared_ptr< ::dgvmsg::JoyFeedbackArray const> JoyFeedbackArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dgvmsg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'dgvmsg': ['/home/nvidia/catkin_agv/src/dgvmsg/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cde5730a895b1fc4dee6f91b754b213d";
  }

  static const char* value(const ::dgvmsg::JoyFeedbackArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcde5730a895b1fc4ULL;
  static const uint64_t static_value2 = 0xdee6f91b754b213dULL;
};

template<class ContainerAllocator>
struct DataType< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dgvmsg/JoyFeedbackArray";
  }

  static const char* value(const ::dgvmsg::JoyFeedbackArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message publishes values for multiple feedback at once. \n\
JoyFeedback[] array\n\
================================================================================\n\
MSG: dgvmsg/JoyFeedback\n\
# Declare of the type of feedback\n\
uint8 TYPE_LED    = 0\n\
uint8 TYPE_RUMBLE = 1\n\
uint8 TYPE_BUZZER = 2\n\
\n\
uint8 type\n\
\n\
# This will hold an id number for each type of each feedback.\n\
# Example, the first led would be id=0, the second would be id=1\n\
uint8 id\n\
\n\
# Intensity of the feedback, from 0.0 to 1.0, inclusive.  If device is\n\
# actually binary, driver should treat 0<=x<0.5 as off, 0.5<=x<=1 as on.\n\
float32 intensity\n\
\n\
";
  }

  static const char* value(const ::dgvmsg::JoyFeedbackArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.array);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JoyFeedbackArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dgvmsg::JoyFeedbackArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dgvmsg::JoyFeedbackArray_<ContainerAllocator>& v)
  {
    s << indent << "array[]" << std::endl;
    for (size_t i = 0; i < v.array.size(); ++i)
    {
      s << indent << "  array[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dgvmsg::JoyFeedback_<ContainerAllocator> >::stream(s, indent + "    ", v.array[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DGVMSG_MESSAGE_JOYFEEDBACKARRAY_H
