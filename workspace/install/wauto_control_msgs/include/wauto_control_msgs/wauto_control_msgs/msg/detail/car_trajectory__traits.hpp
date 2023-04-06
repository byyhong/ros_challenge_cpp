// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_control_msgs:msg/CarTrajectory.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__TRAITS_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_control_msgs/msg/detail/car_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'u'
#include "wauto_control_msgs/msg/detail/car_input__traits.hpp"
// Member 'x'
#include "wauto_control_msgs/msg/detail/car_state__traits.hpp"

namespace wauto_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CarTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: u
  {
    out << "u: ";
    to_flow_style_yaml(msg.u, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    to_flow_style_yaml(msg.x, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: u
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u:\n";
    to_block_style_yaml(msg.u, out, indentation + 2);
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x:\n";
    to_block_style_yaml(msg.x, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarTrajectory & msg, bool use_flow_style = false)
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
  const wauto_control_msgs::msg::CarTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_control_msgs::msg::CarTrajectory & msg)
{
  return wauto_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_control_msgs::msg::CarTrajectory>()
{
  return "wauto_control_msgs::msg::CarTrajectory";
}

template<>
inline const char * name<wauto_control_msgs::msg::CarTrajectory>()
{
  return "wauto_control_msgs/msg/CarTrajectory";
}

template<>
struct has_fixed_size<wauto_control_msgs::msg::CarTrajectory>
  : std::integral_constant<bool, has_fixed_size<wauto_control_msgs::msg::CarInput>::value && has_fixed_size<wauto_control_msgs::msg::CarState>::value> {};

template<>
struct has_bounded_size<wauto_control_msgs::msg::CarTrajectory>
  : std::integral_constant<bool, has_bounded_size<wauto_control_msgs::msg::CarInput>::value && has_bounded_size<wauto_control_msgs::msg::CarState>::value> {};

template<>
struct is_message<wauto_control_msgs::msg::CarTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__TRAITS_HPP_
