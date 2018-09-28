// Generated by gencpp from file bebop_msgs/CommonMavlinkStateMavlinkFilePlayingStateChanged.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_COMMONMAVLINKSTATEMAVLINKFILEPLAYINGSTATECHANGED_H
#define BEBOP_MSGS_MESSAGE_COMMONMAVLINKSTATEMAVLINKFILEPLAYINGSTATECHANGED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace bebop_msgs
{
template <class ContainerAllocator>
struct CommonMavlinkStateMavlinkFilePlayingStateChanged_
{
  typedef CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> Type;

  CommonMavlinkStateMavlinkFilePlayingStateChanged_()
    : header()
    , state(0)
    , filepath()
    , type(0)  {
    }
  CommonMavlinkStateMavlinkFilePlayingStateChanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , state(0)
    , filepath(_alloc)
    , type(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _state_type;
  _state_type state;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filepath_type;
  _filepath_type filepath;

   typedef uint8_t _type_type;
  _type_type type;



  enum {
    state_playing = 0u,
    state_stopped = 1u,
    state_paused = 2u,
    state_loaded = 3u,
    type_flightPlan = 0u,
    type_mapMyHouse = 1u,
  };


  typedef boost::shared_ptr< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> const> ConstPtr;

}; // struct CommonMavlinkStateMavlinkFilePlayingStateChanged_

typedef ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<std::allocator<void> > CommonMavlinkStateMavlinkFilePlayingStateChanged;

typedef boost::shared_ptr< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged > CommonMavlinkStateMavlinkFilePlayingStateChangedPtr;
typedef boost::shared_ptr< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged const> CommonMavlinkStateMavlinkFilePlayingStateChangedConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bebop_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'bebop_msgs': ['/home/parallels/catkin_ws/src/bebop_autonomy/bebop_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1938cf62aa5e1b7b530a32681de3f4da";
  }

  static const char* value(const ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1938cf62aa5e1b7bULL;
  static const uint64_t static_value2 = 0x530a32681de3f4daULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/CommonMavlinkStateMavlinkFilePlayingStateChanged";
  }

  static const char* value(const ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CommonMavlinkStateMavlinkFilePlayingStateChanged\n\
# auto-generated from up stream XML files at\n\
#   github.com/Parrot-Developers/libARCommands/tree/master/Xml\n\
# To check upstream commit hash, refer to last_build_info file\n\
# Do not modify this file by hand. Check scripts/meta folder for generator files.\n\
#\n\
# SDK Comment: Playing state of a FlightPlan.\n\
\n\
Header header\n\
\n\
# State of the mavlink\n\
uint8 state_playing=0  # Mavlink file is playing\n\
uint8 state_stopped=1  # Mavlink file is stopped (arg filepath and type are useless in this state)\n\
uint8 state_paused=2  # Mavlink file is paused\n\
uint8 state_loaded=3  # Mavlink file is loaded (it will be played at take-off)\n\
uint8 state\n\
# flight plan file path from the mavlink ftp root\n\
string filepath\n\
# type of the played mavlink file\n\
uint8 type_flightPlan=0  # Mavlink file for FlightPlan\n\
uint8 type_mapMyHouse=1  # Mavlink file for MapMyHouse\n\
uint8 type\n\
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
";
  }

  static const char* value(const ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.state);
      stream.next(m.filepath);
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommonMavlinkStateMavlinkFilePlayingStateChanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::CommonMavlinkStateMavlinkFilePlayingStateChanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
    s << indent << "filepath: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.filepath);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_COMMONMAVLINKSTATEMAVLINKFILEPLAYINGSTATECHANGED_H
