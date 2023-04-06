// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackC.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__TRAITS_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_vehicle_msgs/msg/detail/object_track_c__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectTrackC & msg,
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

  // member: object_latitude
  {
    out << "object_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.object_latitude, out);
    out << ", ";
  }

  // member: object_absolute_velocity
  {
    out << "object_absolute_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.object_absolute_velocity, out);
    out << ", ";
  }

  // member: object_course
  {
    out << "object_course: ";
    rosidl_generator_traits::value_to_yaml(msg.object_course, out);
    out << ", ";
  }

  // member: dynprop
  {
    out << "dynprop: ";
    rosidl_generator_traits::value_to_yaml(msg.dynprop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectTrackC & msg,
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

  // member: object_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.object_latitude, out);
    out << "\n";
  }

  // member: object_absolute_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_absolute_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.object_absolute_velocity, out);
    out << "\n";
  }

  // member: object_course
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_course: ";
    rosidl_generator_traits::value_to_yaml(msg.object_course, out);
    out << "\n";
  }

  // member: dynprop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynprop: ";
    rosidl_generator_traits::value_to_yaml(msg.dynprop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectTrackC & msg, bool use_flow_style = false)
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
  const wauto_vehicle_msgs::msg::ObjectTrackC & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_vehicle_msgs::msg::ObjectTrackC & msg)
{
  return wauto_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_vehicle_msgs::msg::ObjectTrackC>()
{
  return "wauto_vehicle_msgs::msg::ObjectTrackC";
}

template<>
inline const char * name<wauto_vehicle_msgs::msg::ObjectTrackC>()
{
  return "wauto_vehicle_msgs/msg/ObjectTrackC";
}

template<>
struct has_fixed_size<wauto_vehicle_msgs::msg::ObjectTrackC>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_vehicle_msgs::msg::ObjectTrackC>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_vehicle_msgs::msg::ObjectTrackC>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__TRAITS_HPP_
