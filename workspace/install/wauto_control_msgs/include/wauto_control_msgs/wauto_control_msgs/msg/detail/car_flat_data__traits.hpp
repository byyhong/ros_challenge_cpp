// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_control_msgs:msg/CarFlatData.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__TRAITS_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_control_msgs/msg/detail/car_flat_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'x'
#include "wauto_control_msgs/msg/detail/car_state__traits.hpp"

namespace wauto_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CarFlatData & msg,
  std::ostream & out)
{
  out << "{";
  // member: l
  {
    out << "l: ";
    rosidl_generator_traits::value_to_yaml(msg.l, out);
    out << ", ";
  }

  // member: nu
  {
    out << "nu: ";
    rosidl_generator_traits::value_to_yaml(msg.nu, out);
    out << ", ";
  }

  // member: gamma_max
  {
    out << "gamma_max: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma_max, out);
    out << ", ";
  }

  // member: a_max
  {
    out << "a_max: ";
    rosidl_generator_traits::value_to_yaml(msg.a_max, out);
    out << ", ";
  }

  // member: v_max
  {
    out << "v_max: ";
    rosidl_generator_traits::value_to_yaml(msg.v_max, out);
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
  const CarFlatData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l: ";
    rosidl_generator_traits::value_to_yaml(msg.l, out);
    out << "\n";
  }

  // member: nu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nu: ";
    rosidl_generator_traits::value_to_yaml(msg.nu, out);
    out << "\n";
  }

  // member: gamma_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamma_max: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma_max, out);
    out << "\n";
  }

  // member: a_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_max: ";
    rosidl_generator_traits::value_to_yaml(msg.a_max, out);
    out << "\n";
  }

  // member: v_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_max: ";
    rosidl_generator_traits::value_to_yaml(msg.v_max, out);
    out << "\n";
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

inline std::string to_yaml(const CarFlatData & msg, bool use_flow_style = false)
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
  const wauto_control_msgs::msg::CarFlatData & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_control_msgs::msg::CarFlatData & msg)
{
  return wauto_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_control_msgs::msg::CarFlatData>()
{
  return "wauto_control_msgs::msg::CarFlatData";
}

template<>
inline const char * name<wauto_control_msgs::msg::CarFlatData>()
{
  return "wauto_control_msgs/msg/CarFlatData";
}

template<>
struct has_fixed_size<wauto_control_msgs::msg::CarFlatData>
  : std::integral_constant<bool, has_fixed_size<wauto_control_msgs::msg::CarState>::value> {};

template<>
struct has_bounded_size<wauto_control_msgs::msg::CarFlatData>
  : std::integral_constant<bool, has_bounded_size<wauto_control_msgs::msg::CarState>::value> {};

template<>
struct is_message<wauto_control_msgs::msg::CarFlatData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__TRAITS_HPP_
