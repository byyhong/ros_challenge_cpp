// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_perception_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_perception_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'classification'
#include "wauto_perception_msgs/msg/detail/object_classification__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace wauto_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: classification
  {
    out << "classification: ";
    to_flow_style_yaml(msg.classification, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object & msg,
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

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification:\n";
    to_block_style_yaml(msg.classification, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Object & msg, bool use_flow_style = false)
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
  const wauto_perception_msgs::msg::Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_perception_msgs::msg::Object & msg)
{
  return wauto_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_perception_msgs::msg::Object>()
{
  return "wauto_perception_msgs::msg::Object";
}

template<>
inline const char * name<wauto_perception_msgs::msg::Object>()
{
  return "wauto_perception_msgs/msg/Object";
}

template<>
struct has_fixed_size<wauto_perception_msgs::msg::Object>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value && has_fixed_size<geometry_msgs::msg::TwistWithCovariance>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<wauto_perception_msgs::msg::ObjectClassification>::value> {};

template<>
struct has_bounded_size<wauto_perception_msgs::msg::Object>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<wauto_perception_msgs::msg::ObjectClassification>::value> {};

template<>
struct is_message<wauto_perception_msgs::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
