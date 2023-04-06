// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_control_msgs:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_STATE__TRAITS_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_control_msgs/msg/detail/car_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CarState & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: v
  {
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << ", ";
  }

  // member: psi
  {
    out << "psi: ";
    rosidl_generator_traits::value_to_yaml(msg.psi, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << "\n";
  }

  // member: psi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psi: ";
    rosidl_generator_traits::value_to_yaml(msg.psi, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarState & msg, bool use_flow_style = false)
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
  const wauto_control_msgs::msg::CarState & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_control_msgs::msg::CarState & msg)
{
  return wauto_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_control_msgs::msg::CarState>()
{
  return "wauto_control_msgs::msg::CarState";
}

template<>
inline const char * name<wauto_control_msgs::msg::CarState>()
{
  return "wauto_control_msgs/msg/CarState";
}

template<>
struct has_fixed_size<wauto_control_msgs::msg::CarState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_control_msgs::msg::CarState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_control_msgs::msg::CarState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_STATE__TRAITS_HPP_
