/* Auto-generated by genmsg_cpp for file /home/pses/catkin_ws/src/rososc/touchosc_msgs/msg/MultiFader.msg */
#ifndef TOUCHOSC_MSGS_MESSAGE_MULTIFADER_H
#define TOUCHOSC_MSGS_MESSAGE_MULTIFADER_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "touchosc_msgs/CommonProperties.h"

namespace touchosc_msgs
{
template <class ContainerAllocator>
struct MultiFader_ {
  typedef MultiFader_<ContainerAllocator> Type;

  MultiFader_()
  : header()
  , common()
  , dimension(0)
  , range()
  , values()
  , z(false)
  {
    range.assign(0.0);
  }

  MultiFader_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , common(_alloc)
  , dimension(0)
  , range()
  , values(_alloc)
  , z(false)
  {
    range.assign(0.0);
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::touchosc_msgs::CommonProperties_<ContainerAllocator>  _common_type;
   ::touchosc_msgs::CommonProperties_<ContainerAllocator>  common;

  typedef uint16_t _dimension_type;
  uint16_t dimension;

  typedef boost::array<float, 2>  _range_type;
  boost::array<float, 2>  range;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _values_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  values;

  typedef uint8_t _z_type;
  uint8_t z;


  typedef boost::shared_ptr< ::touchosc_msgs::MultiFader_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::touchosc_msgs::MultiFader_<ContainerAllocator>  const> ConstPtr;
}; // struct MultiFader
typedef  ::touchosc_msgs::MultiFader_<std::allocator<void> > MultiFader;

typedef boost::shared_ptr< ::touchosc_msgs::MultiFader> MultiFaderPtr;
typedef boost::shared_ptr< ::touchosc_msgs::MultiFader const> MultiFaderConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::touchosc_msgs::MultiFader_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::touchosc_msgs::MultiFader_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace touchosc_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::touchosc_msgs::MultiFader_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::touchosc_msgs::MultiFader_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::touchosc_msgs::MultiFader_<ContainerAllocator> > {
  static const char* value() 
  {
    return "809deaed82ef6d600e6957164fb63431";
  }

  static const char* value(const  ::touchosc_msgs::MultiFader_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x809deaed82ef6d60ULL;
  static const uint64_t static_value2 = 0x0e6957164fb63431ULL;
};

template<class ContainerAllocator>
struct DataType< ::touchosc_msgs::MultiFader_<ContainerAllocator> > {
  static const char* value() 
  {
    return "touchosc_msgs/MultiFader";
  }

  static const char* value(const  ::touchosc_msgs::MultiFader_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::touchosc_msgs::MultiFader_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# TouchOSC Multifader Control\n\
\n\
Header header\n\
CommonProperties common\n\
uint16 dimension\n\
float32[2] range\n\
float32[] values\n\
bool z\n\
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
MSG: touchosc_msgs/CommonProperties\n\
# Common functionality to all TouchOSC controls\n\
\n\
string tabpage          # Control tabpage\n\
string name             # Control Name\n\
int16 x                 # X position of the control\n\
int16 y                 # Y position of the control\n\
uint16 width            # Width of the control\n\
uint16 height           # Height of the control\n\
string visible          # Visibility of the control\n\
\n\
# Possible colors are:\n\
# \"red\", \"green\", \"blue\", \"yellow\", \"orange\", \"purple\", \"gray\"\n\
string color            # Color of the control\n\
\n\
";
  }

  static const char* value(const  ::touchosc_msgs::MultiFader_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::touchosc_msgs::MultiFader_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::touchosc_msgs::MultiFader_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::touchosc_msgs::MultiFader_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.common);
    stream.next(m.dimension);
    stream.next(m.range);
    stream.next(m.values);
    stream.next(m.z);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MultiFader_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::touchosc_msgs::MultiFader_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::touchosc_msgs::MultiFader_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "common: ";
s << std::endl;
    Printer< ::touchosc_msgs::CommonProperties_<ContainerAllocator> >::stream(s, indent + "  ", v.common);
    s << indent << "dimension: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.dimension);
    s << indent << "range[]" << std::endl;
    for (size_t i = 0; i < v.range.size(); ++i)
    {
      s << indent << "  range[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.range[i]);
    }
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.values[i]);
    }
    s << indent << "z: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.z);
  }
};


} // namespace message_operations
} // namespace ros

#endif // TOUCHOSC_MSGS_MESSAGE_MULTIFADER_H

