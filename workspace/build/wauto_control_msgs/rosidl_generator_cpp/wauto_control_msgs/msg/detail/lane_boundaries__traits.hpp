// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_control_msgs:msg/LaneBoundaries.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_BOUNDARIES__TRAITS_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_BOUNDARIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_control_msgs/msg/detail/lane_boundaries__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'right'
// Member 'left'
#include "wauto_control_msgs/msg/detail/lane_marking__traits.hpp"

namespace wauto_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneBoundaries & msg,
  std::ostream & out)
{
  out << "{";
  // member: right
  {
    out << "right: ";
    to_flow_style_yaml(msg.right, out);
    out << ", ";
  }

  // member: left
  {
    out << "left: ";
    to_flow_style_yaml(msg.left, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneBoundaries & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right:\n";
    to_block_style_yaml(msg.right, out, indentation + 2);
  }

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left:\n";
    to_block_style_yaml(msg.left, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneBoundaries & msg, bool use_flow_style = false)
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

}  // namespace wauto_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wauto_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wauto_control_msgs::msg::LaneBoundaries & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_control_msgs::msg::LaneBoundaries & msg)
{
  return wauto_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_control_msgs::msg::LaneBoundaries>()
{
  return "wauto_control_msgs::msg::LaneBoundaries";
}

template<>
inline const char * name<wauto_control_msgs::msg::LaneBoundaries>()
{
  return "wauto_control_msgs/msg/LaneBoundaries";
}

template<>
struct has_fixed_size<wauto_control_msgs::msg::LaneBoundaries>
  : std::integral_constant<bool, has_fixed_size<wauto_control_msgs::msg::LaneMarking>::value> {};

template<>
struct has_bounded_size<wauto_control_msgs::msg::LaneBoundaries>
  : std::integral_constant<bool, has_bounded_size<wauto_control_msgs::msg::LaneMarking>::value> {};

template<>
struct is_message<wauto_control_msgs::msg::LaneBoundaries>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_BOUNDARIES__TRAITS_HPP_
