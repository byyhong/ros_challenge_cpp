// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_control_msgs:msg/CarInput.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_INPUT__TRAITS_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_control_msgs/msg/detail/car_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CarInput & msg,
  std::ostream & out)
{
  out << "{";
  // member: v_dot
  {
    out << "v_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.v_dot, out);
    out << ", ";
  }

  // member: psi_dot
  {
    out << "psi_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.psi_dot, out);
    out << ", ";
  }

  // member: gamma
  {
    out << "gamma: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: v_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.v_dot, out);
    out << "\n";
  }

  // member: psi_dot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "psi_dot: ";
    rosidl_generator_traits::value_to_yaml(msg.psi_dot, out);
    out << "\n";
  }

  // member: gamma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamma: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarInput & msg, bool use_flow_style = false)
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
  const wauto_control_msgs::msg::CarInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_control_msgs::msg::CarInput & msg)
{
  return wauto_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_control_msgs::msg::CarInput>()
{
  return "wauto_control_msgs::msg::CarInput";
}

template<>
inline const char * name<wauto_control_msgs::msg::CarInput>()
{
  return "wauto_control_msgs/msg/CarInput";
}

template<>
struct has_fixed_size<wauto_control_msgs::msg::CarInput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_control_msgs::msg::CarInput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_control_msgs::msg::CarInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_INPUT__TRAITS_HPP_
