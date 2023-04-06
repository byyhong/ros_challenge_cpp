// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_perception_msgs:msg/LaneMarkingArray.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__TRAITS_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_perception_msgs/msg/detail/lane_marking_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'lane_markings'
#include "wauto_perception_msgs/msg/detail/lane_marking__traits.hpp"

namespace wauto_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneMarkingArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: lane_markings
  {
    if (msg.lane_markings.size() == 0) {
      out << "lane_markings: []";
    } else {
      out << "lane_markings: [";
      size_t pending_items = msg.lane_markings.size();
      for (auto item : msg.lane_markings) {
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
  const LaneMarkingArray & msg,
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

  // member: lane_markings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_markings.size() == 0) {
      out << "lane_markings: []\n";
    } else {
      out << "lane_markings:\n";
      for (auto item : msg.lane_markings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneMarkingArray & msg, bool use_flow_style = false)
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
  const wauto_perception_msgs::msg::LaneMarkingArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_perception_msgs::msg::LaneMarkingArray & msg)
{
  return wauto_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_perception_msgs::msg::LaneMarkingArray>()
{
  return "wauto_perception_msgs::msg::LaneMarkingArray";
}

template<>
inline const char * name<wauto_perception_msgs::msg::LaneMarkingArray>()
{
  return "wauto_perception_msgs/msg/LaneMarkingArray";
}

template<>
struct has_fixed_size<wauto_perception_msgs::msg::LaneMarkingArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wauto_perception_msgs::msg::LaneMarkingArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wauto_perception_msgs::msg::LaneMarkingArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__TRAITS_HPP_
