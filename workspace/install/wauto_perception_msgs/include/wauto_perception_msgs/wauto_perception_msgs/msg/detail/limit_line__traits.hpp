// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_perception_msgs:msg/LimitLine.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE__TRAITS_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_perception_msgs/msg/detail/limit_line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace wauto_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LimitLine & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: assignment
  {
    out << "assignment: ";
    rosidl_generator_traits::value_to_yaml(msg.assignment, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LimitLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: assignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assignment: ";
    rosidl_generator_traits::value_to_yaml(msg.assignment, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LimitLine & msg, bool use_flow_style = false)
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

}  // namespace wauto_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wauto_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wauto_perception_msgs::msg::LimitLine & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_perception_msgs::msg::LimitLine & msg)
{
  return wauto_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_perception_msgs::msg::LimitLine>()
{
  return "wauto_perception_msgs::msg::LimitLine";
}

template<>
inline const char * name<wauto_perception_msgs::msg::LimitLine>()
{
  return "wauto_perception_msgs/msg/LimitLine";
}

template<>
struct has_fixed_size<wauto_perception_msgs::msg::LimitLine>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<wauto_perception_msgs::msg::LimitLine>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<wauto_perception_msgs::msg::LimitLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE__TRAITS_HPP_
