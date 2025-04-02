// Generated by gencpp from file piksi_rtk_msgs/BaselineNed.msg
// DO NOT EDIT!


#ifndef PIKSI_RTK_MSGS_MESSAGE_BASELINENED_H
#define PIKSI_RTK_MSGS_MESSAGE_BASELINENED_H


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
struct BaselineNed_
{
  typedef BaselineNed_<ContainerAllocator> Type;

  BaselineNed_()
    : header()
    , tow(0)
    , n(0)
    , e(0)
    , d(0)
    , h_accuracy(0)
    , v_accuracy(0)
    , n_sats(0)
    , flags(0)  {
    }
  BaselineNed_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tow(0)
    , n(0)
    , e(0)
    , d(0)
    , h_accuracy(0)
    , v_accuracy(0)
    , n_sats(0)
    , flags(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _tow_type;
  _tow_type tow;

   typedef int32_t _n_type;
  _n_type n;

   typedef int32_t _e_type;
  _e_type e;

   typedef int32_t _d_type;
  _d_type d;

   typedef uint16_t _h_accuracy_type;
  _h_accuracy_type h_accuracy;

   typedef uint16_t _v_accuracy_type;
  _v_accuracy_type v_accuracy;

   typedef uint8_t _n_sats_type;
  _n_sats_type n_sats;

   typedef uint8_t _flags_type;
  _flags_type flags;





  typedef boost::shared_ptr< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> const> ConstPtr;

}; // struct BaselineNed_

typedef ::piksi_rtk_msgs::BaselineNed_<std::allocator<void> > BaselineNed;

typedef boost::shared_ptr< ::piksi_rtk_msgs::BaselineNed > BaselineNedPtr;
typedef boost::shared_ptr< ::piksi_rtk_msgs::BaselineNed const> BaselineNedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.tow == rhs.tow &&
    lhs.n == rhs.n &&
    lhs.e == rhs.e &&
    lhs.d == rhs.d &&
    lhs.h_accuracy == rhs.h_accuracy &&
    lhs.v_accuracy == rhs.v_accuracy &&
    lhs.n_sats == rhs.n_sats &&
    lhs.flags == rhs.flags;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace piksi_rtk_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d181eb2c9a6abff7c97c58dc9f4c0a7f";
  }

  static const char* value(const ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd181eb2c9a6abff7ULL;
  static const uint64_t static_value2 = 0xc97c58dc9f4c0a7fULL;
};

template<class ContainerAllocator>
struct DataType< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piksi_rtk_msgs/BaselineNed";
  }

  static const char* value(const ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message reports the baseline solution in North East Down (NED) coordinates. This baseline is\n"
"# the relative vector distance from the base station to the rover receiver, and NED coordinate system is\n"
"# defined at the local WGS84 tangent plane centered at the base station position. The full GPS time is\n"
"# given by the preceding MSG GPS TIME with the matching time-of-week (tow).\n"
"\n"
"Header header\n"
"\n"
"uint32 tow          # GPS Time of Week [ms].\n"
"int32 n             # Baseline North coordinate [mm].\n"
"int32 e             # Baseline East coordinate[mm].\n"
"int32 d             # Baseline Down coordinate [mm].\n"
"uint16 h_accuracy   # Horizontal position accuracy estimate (not implemented in hardware version V2).\n"
"uint16 v_accuracy   # Vertical position accuracy estimate (not implemented in hardware version V2).\n"
"uint8 n_sats        # Number of satellites used in solution\n"
"uint8 flags         # Status flags, see MSG_BASELINE_NED message description in SBP documentation.\n"
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

  static const char* value(const ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tow);
      stream.next(m.n);
      stream.next(m.e);
      stream.next(m.d);
      stream.next(m.h_accuracy);
      stream.next(m.v_accuracy);
      stream.next(m.n_sats);
      stream.next(m.flags);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BaselineNed_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piksi_rtk_msgs::BaselineNed_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tow: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.tow);
    s << indent << "n: ";
    Printer<int32_t>::stream(s, indent + "  ", v.n);
    s << indent << "e: ";
    Printer<int32_t>::stream(s, indent + "  ", v.e);
    s << indent << "d: ";
    Printer<int32_t>::stream(s, indent + "  ", v.d);
    s << indent << "h_accuracy: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.h_accuracy);
    s << indent << "v_accuracy: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.v_accuracy);
    s << indent << "n_sats: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.n_sats);
    s << indent << "flags: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIKSI_RTK_MSGS_MESSAGE_BASELINENED_H
