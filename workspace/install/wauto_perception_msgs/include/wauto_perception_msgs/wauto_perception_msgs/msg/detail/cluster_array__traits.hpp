// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_perception_msgs:msg/ClusterArray.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_ARRAY__TRAITS_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_perception_msgs/msg/detail/cluster_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'clusters'
#include "wauto_perception_msgs/msg/detail/cluster__traits.hpp"

namespace wauto_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClusterArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: clusters
  {
    if (msg.clusters.size() == 0) {
      out << "clusters: []";
    } else {
      out << "clusters: [";
      size_t pending_items = msg.clusters.size();
      for (auto item : msg.clusters) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClusterArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: clusters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.clusters.size() == 0) {
      out << "clusters: []\n";
    } else {
      out << "clusters:\n";
      for (auto item : msg.clusters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClusterArray & msg, bool use_flow_style = false)
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
  const wauto_perception_msgs::msg::ClusterArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_perception_msgs::msg::ClusterArray & msg)
{
  return wauto_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_perception_msgs::msg::ClusterArray>()
{
  return "wauto_perception_msgs::msg::ClusterArray";
}

template<>
inline const char * name<wauto_perception_msgs::msg::ClusterArray>()
{
  return "wauto_perception_msgs/msg/ClusterArray";
}

template<>
struct has_fixed_size<wauto_perception_msgs::msg::ClusterArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wauto_perception_msgs::msg::ClusterArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wauto_perception_msgs::msg::ClusterArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_ARRAY__TRAITS_HPP_
