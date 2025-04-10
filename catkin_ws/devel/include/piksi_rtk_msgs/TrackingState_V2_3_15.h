// Generated by gencpp from file piksi_rtk_msgs/TrackingState_V2_3_15.msg
// DO NOT EDIT!


#ifndef PIKSI_RTK_MSGS_MESSAGE_TRACKINGSTATE_V2_3_15_H
#define PIKSI_RTK_MSGS_MESSAGE_TRACKINGSTATE_V2_3_15_H


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
struct TrackingState_V2_3_15_
{
  typedef TrackingState_V2_3_15_<ContainerAllocator> Type;

  TrackingState_V2_3_15_()
    : header()
    , sat()
    , code()
    , fcn()
    , cn0()  {
    }
  TrackingState_V2_3_15_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sat(_alloc)
    , code(_alloc)
    , fcn(_alloc)
    , cn0(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _sat_type;
  _sat_type sat;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _code_type;
  _code_type code;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _fcn_type;
  _fcn_type fcn;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _cn0_type;
  _cn0_type cn0;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CODE_GPS_L1CA)
  #undef CODE_GPS_L1CA
#endif
#if defined(_WIN32) && defined(CODE_GPS_L2CM)
  #undef CODE_GPS_L2CM
#endif
#if defined(_WIN32) && defined(CODE_SBAS_L1CA)
  #undef CODE_SBAS_L1CA
#endif
#if defined(_WIN32) && defined(CODE_GLO_L1CA)
  #undef CODE_GLO_L1CA
#endif
#if defined(_WIN32) && defined(CODE_GLO_L2CA)
  #undef CODE_GLO_L2CA
#endif
#if defined(_WIN32) && defined(CODE_GPS_L1P)
  #undef CODE_GPS_L1P
#endif
#if defined(_WIN32) && defined(CODE_GPS_L2P)
  #undef CODE_GPS_L2P
#endif

  enum {
    CODE_GPS_L1CA = 0u,
    CODE_GPS_L2CM = 1u,
    CODE_SBAS_L1CA = 2u,
    CODE_GLO_L1CA = 3u,
    CODE_GLO_L2CA = 4u,
    CODE_GPS_L1P = 5u,
    CODE_GPS_L2P = 6u,
  };


  typedef boost::shared_ptr< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> const> ConstPtr;

}; // struct TrackingState_V2_3_15_

typedef ::piksi_rtk_msgs::TrackingState_V2_3_15_<std::allocator<void> > TrackingState_V2_3_15;

typedef boost::shared_ptr< ::piksi_rtk_msgs::TrackingState_V2_3_15 > TrackingState_V2_3_15Ptr;
typedef boost::shared_ptr< ::piksi_rtk_msgs::TrackingState_V2_3_15 const> TrackingState_V2_3_15ConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.sat == rhs.sat &&
    lhs.code == rhs.code &&
    lhs.fcn == rhs.fcn &&
    lhs.cn0 == rhs.cn0;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace piksi_rtk_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0a051c9934e022ee2abf2e31fc142ed2";
  }

  static const char* value(const ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0a051c9934e022eeULL;
  static const uint64_t static_value2 = 0x2abf2e31fc142ed2ULL;
};

template<class ContainerAllocator>
struct DataType< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piksi_rtk_msgs/TrackingState_V2_3_15";
  }

  static const char* value(const ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The tracking message returns a variable-length array of tracking channel states. It reports status and\n"
"# carrier-to-noise density measurements for all tracked satellites.\n"
"\n"
"# Message definition based on libsbp v2.3.15\n"
"\n"
"Header header\n"
"\n"
"uint8[] sat     # Constellation-specific satellite identifier.\n"
"uint8[] code    # Signal constellation, band and code.\n"
"uint8[] fcn     # Frequency channel number (GLONASS only).\n"
"uint8[] cn0     # Carrier-to-Noise density. Zero implies invalid cn0 [dB Hz / 4].\n"
"\n"
"\n"
"uint8 CODE_GPS_L1CA     = 0\n"
"uint8 CODE_GPS_L2CM     = 1\n"
"uint8 CODE_SBAS_L1CA    = 2\n"
"uint8 CODE_GLO_L1CA     = 3\n"
"uint8 CODE_GLO_L2CA     = 4\n"
"uint8 CODE_GPS_L1P      = 5\n"
"uint8 CODE_GPS_L2P      = 6\n"
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

  static const char* value(const ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sat);
      stream.next(m.code);
      stream.next(m.fcn);
      stream.next(m.cn0);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackingState_V2_3_15_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piksi_rtk_msgs::TrackingState_V2_3_15_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sat[]" << std::endl;
    for (size_t i = 0; i < v.sat.size(); ++i)
    {
      s << indent << "  sat[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.sat[i]);
    }
    s << indent << "code[]" << std::endl;
    for (size_t i = 0; i < v.code.size(); ++i)
    {
      s << indent << "  code[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.code[i]);
    }
    s << indent << "fcn[]" << std::endl;
    for (size_t i = 0; i < v.fcn.size(); ++i)
    {
      s << indent << "  fcn[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.fcn[i]);
    }
    s << indent << "cn0[]" << std::endl;
    for (size_t i = 0; i < v.cn0.size(); ++i)
    {
      s << indent << "  cn0[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.cn0[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIKSI_RTK_MSGS_MESSAGE_TRACKINGSTATE_V2_3_15_H
