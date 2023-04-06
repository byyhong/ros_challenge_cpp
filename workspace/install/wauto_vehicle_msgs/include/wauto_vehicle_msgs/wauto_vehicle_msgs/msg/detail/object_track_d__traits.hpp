// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackD.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_D__TRAITS_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_vehicle_msgs/msg/detail/object_track_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectTrackD & msg,
  std::ostream & out)
{
  out << "{";
  // member: rolling_count
  {
    out << "rolling_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count, out);
    out << ", ";
  }

  // member: objobjectid
  {
    out << "objobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.objobjectid, out);
    out << ", ";
  }

  // member: object_longitude
  {
    out << "object_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.object_longitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectTrackD & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rolling_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rolling_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count, out);
    out << "\n";
  }

  // member: objobjectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "objobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.objobjectid, out);
    out << "\n";
  }

  // member: object_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.object_longitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectTrackD & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wauto_vehicle_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wauto_vehicle_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wauto_vehicle_msgs::msg::ObjectTrackD & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_vehicle_msgs::msg::ObjectTrackD & msg)
{
  return wauto_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_vehicle_msgs::msg::ObjectTrackD>()
{
  return "wauto_vehicle_msgs::msg::ObjectTrackD";
}

template<>
inline const char * name<wauto_vehicle_msgs::msg::ObjectTrackD>()
{
  return "wauto_vehicle_msgs/msg/ObjectTrackD";
}

template<>
struct has_fixed_size<wauto_vehicle_msgs::msg::ObjectTrackD>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_vehicle_msgs::msg::ObjectTrackD>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_vehicle_msgs::msg::ObjectTrackD>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_D__TRAITS_HPP_
