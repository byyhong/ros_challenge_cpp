// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_control_msgs:msg/CarTBS.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TBS__TRAITS_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TBS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_control_msgs/msg/detail/car_tbs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CarTBS & msg,
  std::ostream & out)
{
  out << "{";
  // member: t
  {
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: s
  {
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarTBS & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarTBS & msg, bool use_flow_style = false)
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
  const wauto_control_msgs::msg::CarTBS & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_control_msgs::msg::CarTBS & msg)
{
  return wauto_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_control_msgs::msg::CarTBS>()
{
  return "wauto_control_msgs::msg::CarTBS";
}

template<>
inline const char * name<wauto_control_msgs::msg::CarTBS>()
{
  return "wauto_control_msgs/msg/CarTBS";
}

template<>
struct has_fixed_size<wauto_control_msgs::msg::CarTBS>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_control_msgs::msg::CarTBS>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_control_msgs::msg::CarTBS>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TBS__TRAITS_HPP_
