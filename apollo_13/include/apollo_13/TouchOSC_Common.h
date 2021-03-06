/* Auto-generated by genmsg_cpp for file /home/pses/catkin_ws/src/rososc/touchosc_msgs/msg/TouchOSC_Common.msg */
#ifndef TOUCHOSC_MSGS_MESSAGE_TOUCHOSC_COMMON_H
#define TOUCHOSC_MSGS_MESSAGE_TOUCHOSC_COMMON_H
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
struct TouchOSC_Common_ {
  typedef TouchOSC_Common_<ContainerAllocator> Type;

  TouchOSC_Common_()
  : header()
  , common()
  {
  }

  TouchOSC_Common_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , common(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::touchosc_msgs::CommonProperties_<ContainerAllocator>  _common_type;
   ::touchosc_msgs::CommonProperties_<ContainerAllocator>  common;


  typedef boost::shared_ptr< ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator>  const> ConstPtr;
}; // struct TouchOSC_Common
typedef  ::touchosc_msgs::TouchOSC_Common_<std::allocator<void> > TouchOSC_Common;

typedef boost::shared_ptr< ::touchosc_msgs::TouchOSC_Common> TouchOSC_CommonPtr;
typedef boost::shared_ptr< ::touchosc_msgs::TouchOSC_Common const> TouchOSC_CommonConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace touchosc_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> > {
  static const char* value() 
  {
    return "02b274e5694f91306b366760eaca24ef";
  }

  static const char* value(const  ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x02b274e5694f9130ULL;
  static const uint64_t static_value2 = 0x6b366760eaca24efULL;
};

template<class ContainerAllocator>
struct DataType< ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> > {
  static const char* value() 
  {
    return "touchosc_msgs/TouchOSC_Common";
  }

  static const char* value(const  ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# TouchOSC Common Control\n\
# Battery, Time\n\
\n\
Header header\n\
CommonProperties common\n\
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

  static const char* value(const  ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.common);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TouchOSC_Common_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::touchosc_msgs::TouchOSC_Common_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "common: ";
s << std::endl;
    Printer< ::touchosc_msgs::CommonProperties_<ContainerAllocator> >::stream(s, indent + "  ", v.common);
  }
};


} // namespace message_operations
} // namespace ros

#endif // TOUCHOSC_MSGS_MESSAGE_TOUCHOSC_COMMON_H

