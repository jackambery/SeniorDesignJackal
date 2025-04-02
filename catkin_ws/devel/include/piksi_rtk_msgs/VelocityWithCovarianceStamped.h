// Generated by gencpp from file piksi_rtk_msgs/VelocityWithCovarianceStamped.msg
// DO NOT EDIT!


#ifndef PIKSI_RTK_MSGS_MESSAGE_VELOCITYWITHCOVARIANCESTAMPED_H
#define PIKSI_RTK_MSGS_MESSAGE_VELOCITYWITHCOVARIANCESTAMPED_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <piksi_rtk_msgs/VelocityWithCovariance.h>

namespace piksi_rtk_msgs
{
template <class ContainerAllocator>
struct VelocityWithCovarianceStamped_
{
  typedef VelocityWithCovarianceStamped_<ContainerAllocator> Type;

  VelocityWithCovarianceStamped_()
    : header()
    , velocity()  {
    }
  VelocityWithCovarianceStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , velocity(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::piksi_rtk_msgs::VelocityWithCovariance_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;





  typedef boost::shared_ptr< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> const> ConstPtr;

}; // struct VelocityWithCovarianceStamped_

typedef ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<std::allocator<void> > VelocityWithCovarianceStamped;

typedef boost::shared_ptr< ::piksi_rtk_msgs::VelocityWithCovarianceStamped > VelocityWithCovarianceStampedPtr;
typedef boost::shared_ptr< ::piksi_rtk_msgs::VelocityWithCovarianceStamped const> VelocityWithCovarianceStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.velocity == rhs.velocity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace piksi_rtk_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "34d87d2f31db9b959a169f53e42418f6";
  }

  static const char* value(const ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x34d87d2f31db9b95ULL;
  static const uint64_t static_value2 = 0x9a169f53e42418f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piksi_rtk_msgs/VelocityWithCovarianceStamped";
  }

  static const char* value(const ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"piksi_rtk_msgs/VelocityWithCovariance velocity\n"
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
"\n"
"================================================================================\n"
"MSG: piksi_rtk_msgs/VelocityWithCovariance\n"
"geometry_msgs/Vector3 velocity\n"
"float32[9] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VelocityWithCovarianceStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piksi_rtk_msgs::VelocityWithCovarianceStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::piksi_rtk_msgs::VelocityWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIKSI_RTK_MSGS_MESSAGE_VELOCITYWITHCOVARIANCESTAMPED_H
