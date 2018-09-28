// Generated by gencpp from file bebop_msgs/Ardrone3NetworkStateWifiAuthChannelListChanged.msg
// DO NOT EDIT!


#ifndef BEBOP_MSGS_MESSAGE_ARDRONE3NETWORKSTATEWIFIAUTHCHANNELLISTCHANGED_H
#define BEBOP_MSGS_MESSAGE_ARDRONE3NETWORKSTATEWIFIAUTHCHANNELLISTCHANGED_H


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
struct Ardrone3NetworkStateWifiAuthChannelListChanged_
{
  typedef Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> Type;

  Ardrone3NetworkStateWifiAuthChannelListChanged_()
    : header()
    , band(0)
    , channel(0)
    , in_or_out(0)  {
    }
  Ardrone3NetworkStateWifiAuthChannelListChanged_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , band(0)
    , channel(0)
    , in_or_out(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _band_type;
  _band_type band;

   typedef uint8_t _channel_type;
  _channel_type channel;

   typedef uint8_t _in_or_out_type;
  _in_or_out_type in_or_out;



  enum {
    band_2_4ghz = 0u,
    band_5ghz = 1u,
  };


  typedef boost::shared_ptr< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> const> ConstPtr;

}; // struct Ardrone3NetworkStateWifiAuthChannelListChanged_

typedef ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<std::allocator<void> > Ardrone3NetworkStateWifiAuthChannelListChanged;

typedef boost::shared_ptr< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged > Ardrone3NetworkStateWifiAuthChannelListChangedPtr;
typedef boost::shared_ptr< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged const> Ardrone3NetworkStateWifiAuthChannelListChangedConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c7b1ccebf54f52f3836dbbe717c16c94";
  }

  static const char* value(const ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc7b1ccebf54f52f3ULL;
  static const uint64_t static_value2 = 0x836dbbe717c16c94ULL;
};

template<class ContainerAllocator>
struct DataType< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bebop_msgs/Ardrone3NetworkStateWifiAuthChannelListChanged";
  }

  static const char* value(const ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Ardrone3NetworkStateWifiAuthChannelListChanged\n\
# auto-generated from up stream XML files at\n\
#   github.com/Parrot-Developers/libARCommands/tree/master/Xml\n\
# To check upstream commit hash, refer to last_build_info file\n\
# Do not modify this file by hand. Check scripts/meta folder for generator files.\n\
#\n\
# SDK Comment: Available wifi channels.\\n Please note that the list is not complete until you receive the event [AvailableWifiChannelsCompleted](#1-14-3).\n\
\n\
Header header\n\
\n\
# The band of this channel : 2.4 GHz or 5 GHz\n\
uint8 band_2_4ghz=0  # 2.4 GHz band\n\
uint8 band_5ghz=1  # 5 GHz band\n\
uint8 band\n\
# The authorized channel.\n\
uint8 channel\n\
# Bit 0 is 1 if channel is authorized outside (0 otherwise) ; Bit 1 is 1 if channel is authorized inside (0 otherwise)\n\
uint8 in_or_out\n\
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

  static const char* value(const ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.band);
      stream.next(m.channel);
      stream.next(m.in_or_out);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Ardrone3NetworkStateWifiAuthChannelListChanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bebop_msgs::Ardrone3NetworkStateWifiAuthChannelListChanged_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "band: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.band);
    s << indent << "channel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.channel);
    s << indent << "in_or_out: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.in_or_out);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEBOP_MSGS_MESSAGE_ARDRONE3NETWORKSTATEWIFIAUTHCHANNELLISTCHANGED_H
