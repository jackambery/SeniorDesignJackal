// Generated by gencpp from file piksi_rtk_msgs/DeviceMonitor_V2_3_15.msg
// DO NOT EDIT!


#ifndef PIKSI_RTK_MSGS_MESSAGE_DEVICEMONITOR_V2_3_15_H
#define PIKSI_RTK_MSGS_MESSAGE_DEVICEMONITOR_V2_3_15_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace piksi_rtk_msgs
{
template <class ContainerAllocator>
struct DeviceMonitor_V2_3_15_
{
  typedef DeviceMonitor_V2_3_15_<ContainerAllocator> Type;

  DeviceMonitor_V2_3_15_()
    : header()
    , dev_vin(0)
    , cpu_vint(0)
    , cpu_vaux(0)
    , cpu_temperature(0)
    , fe_temperature(0)  {
    }
  DeviceMonitor_V2_3_15_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , dev_vin(0)
    , cpu_vint(0)
    , cpu_vaux(0)
    , cpu_temperature(0)
    , fe_temperature(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int16_t _dev_vin_type;
  _dev_vin_type dev_vin;

   typedef int16_t _cpu_vint_type;
  _cpu_vint_type cpu_vint;

   typedef int16_t _cpu_vaux_type;
  _cpu_vaux_type cpu_vaux;

   typedef int16_t _cpu_temperature_type;
  _cpu_temperature_type cpu_temperature;

   typedef int16_t _fe_temperature_type;
  _fe_temperature_type fe_temperature;





  typedef boost::shared_ptr< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> const> ConstPtr;

}; // struct DeviceMonitor_V2_3_15_

typedef ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<std::allocator<void> > DeviceMonitor_V2_3_15;

typedef boost::shared_ptr< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15 > DeviceMonitor_V2_3_15Ptr;
typedef boost::shared_ptr< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15 const> DeviceMonitor_V2_3_15ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.dev_vin == rhs.dev_vin &&
    lhs.cpu_vint == rhs.cpu_vint &&
    lhs.cpu_vaux == rhs.cpu_vaux &&
    lhs.cpu_temperature == rhs.cpu_temperature &&
    lhs.fe_temperature == rhs.fe_temperature;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace piksi_rtk_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> >
{
  static const char* value()
  {
    return "54b454c5f7be4348e9710a8df0100d12";
  }

  static const char* value(const ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x54b454c5f7be4348ULL;
  static const uint64_t static_value2 = 0xe9710a8df0100d12ULL;
};

template<class ContainerAllocator>
struct DataType< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piksi_rtk_msgs/DeviceMonitor_V2_3_15";
  }

  static const char* value(const ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message contains temperature and voltage level measurements from the processor's monitoring\n"
"# system and the RF frontend die temperature if available.\n"
"\n"
"# Message definition based on libsbp v2.2.15\n"
"\n"
"Header header\n"
"\n"
"int16 dev_vin               # Device V_in [V / 1000].\n"
"int16 cpu_vint              # Processor V_int [V / 1000].\n"
"int16 cpu_vaux              # Processor V_aux [V / 1000].\n"
"int16 cpu_temperature       # Processor temperature [degrees C / 100].\n"
"int16 fe_temperature        # Fronted temperature (if available) [degrees C / 100].\n"
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
;
  }

  static const char* value(const ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.dev_vin);
      stream.next(m.cpu_vint);
      stream.next(m.cpu_vaux);
      stream.next(m.cpu_temperature);
      stream.next(m.fe_temperature);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DeviceMonitor_V2_3_15_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piksi_rtk_msgs::DeviceMonitor_V2_3_15_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "dev_vin: ";
    Printer<int16_t>::stream(s, indent + "  ", v.dev_vin);
    s << indent << "cpu_vint: ";
    Printer<int16_t>::stream(s, indent + "  ", v.cpu_vint);
    s << indent << "cpu_vaux: ";
    Printer<int16_t>::stream(s, indent + "  ", v.cpu_vaux);
    s << indent << "cpu_temperature: ";
    Printer<int16_t>::stream(s, indent + "  ", v.cpu_temperature);
    s << indent << "fe_temperature: ";
    Printer<int16_t>::stream(s, indent + "  ", v.fe_temperature);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIKSI_RTK_MSGS_MESSAGE_DEVICEMONITOR_V2_3_15_H
