// Generated by gencpp from file piksi_rtk_msgs/PosEcef.msg
// DO NOT EDIT!


#ifndef PIKSI_RTK_MSGS_MESSAGE_POSECEF_H
#define PIKSI_RTK_MSGS_MESSAGE_POSECEF_H


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
struct PosEcef_
{
  typedef PosEcef_<ContainerAllocator> Type;

  PosEcef_()
    : header()
    , tow(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , accuracy(0)
    , n_sats(0)
    , flags(0)  {
    }
  PosEcef_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tow(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , accuracy(0)
    , n_sats(0)
    , flags(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _tow_type;
  _tow_type tow;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef uint16_t _accuracy_type;
  _accuracy_type accuracy;

   typedef uint8_t _n_sats_type;
  _n_sats_type n_sats;

   typedef uint8_t _flags_type;
  _flags_type flags;





  typedef boost::shared_ptr< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> const> ConstPtr;

}; // struct PosEcef_

typedef ::piksi_rtk_msgs::PosEcef_<std::allocator<void> > PosEcef;

typedef boost::shared_ptr< ::piksi_rtk_msgs::PosEcef > PosEcefPtr;
typedef boost::shared_ptr< ::piksi_rtk_msgs::PosEcef const> PosEcefConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::piksi_rtk_msgs::PosEcef_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::PosEcef_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.tow == rhs.tow &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.accuracy == rhs.accuracy &&
    lhs.n_sats == rhs.n_sats &&
    lhs.flags == rhs.flags;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::piksi_rtk_msgs::PosEcef_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::PosEcef_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace piksi_rtk_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c591e4d37e8157d9695581e98d021231";
  }

  static const char* value(const ::piksi_rtk_msgs::PosEcef_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc591e4d37e8157d9ULL;
  static const uint64_t static_value2 = 0x695581e98d021231ULL;
};

template<class ContainerAllocator>
struct DataType< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piksi_rtk_msgs/PosEcef";
  }

  static const char* value(const ::piksi_rtk_msgs::PosEcef_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The position solution message reports absolute Earth Centered Earth Fixed (ECEF) coordinates and the\n"
"# status (single point vs pseudo-absolute RTK) of the position solution. If the rover receiver knows the\n"
"# surveyed position of the base station and has an RTK solution, this reports a pseudo-absolute position\n"
"# solution using the base station position and the rover's RTK baseline vector. The full GPS time is given\n"
"# by the preceding MSG GPS TIME with the matching time-of-week (tow).\n"
"\n"
"Header header\n"
"\n"
"uint32 tow          # GPS Time of Week [ms].\n"
"float64 x           # ECEF X coordinate [m].\n"
"float64 y           # ECEF Y coordinate [m].\n"
"float64 z           # ECEF Z coordinate [m].\n"
"uint16 accuracy     # Position accuracy estimate (not implemented in hardware version V2).\n"
"uint8 n_sats        # Number of satellites used in solution.\n"
"uint8 flags         # Status flags, see MSG_POS_ECEF message description in SBP documentation.\n"
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

  static const char* value(const ::piksi_rtk_msgs::PosEcef_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tow);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.accuracy);
      stream.next(m.n_sats);
      stream.next(m.flags);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PosEcef_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piksi_rtk_msgs::PosEcef_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piksi_rtk_msgs::PosEcef_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tow: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.tow);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "accuracy: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.accuracy);
    s << indent << "n_sats: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.n_sats);
    s << indent << "flags: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIKSI_RTK_MSGS_MESSAGE_POSECEF_H
