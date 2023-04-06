// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_control_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__TRAITS_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_control_msgs/msg/detail/lane_marking__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneMarking & msg,
  std::ostream & out)
{
  out << "{";
  // member: boundary_type
  {
    out << "boundary_type: ";
    rosidl_generator_traits::value_to_yaml(msg.boundary_type, out);
    out << ", ";
  }

  // member: lateral_offset
  {
    out << "lateral_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_offset, out);
    out << ", ";
  }

  // member: heading_angle
  {
    out << "heading_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_angle, out);
    out << ", ";
  }

  // member: coordinates_x
  {
    if (msg.coordinates_x.size() == 0) {
      out << "coordinates_x: []";
    } else {
      out << "coordinates_x: [";
      size_t pending_items = msg.coordinates_x.size();
      for (auto item : msg.coordinates_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: coordinates_y
  {
    if (msg.coordinates_y.size() == 0) {
      out << "coordinates_y: []";
    } else {
      out << "coordinates_y: [";
      size_t pending_items = msg.coordinates_y.size();
      for (auto item : msg.coordinates_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const LaneMarking & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: boundary_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boundary_type: ";
    rosidl_generator_traits::value_to_yaml(msg.boundary_type, out);
    out << "\n";
  }

  // member: lateral_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_offset, out);
    out << "\n";
  }

  // member: heading_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_angle, out);
    out << "\n";
  }

  // member: coordinates_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coordinates_x.size() == 0) {
      out << "coordinates_x: []\n";
    } else {
      out << "coordinates_x:\n";
      for (auto item : msg.coordinates_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: coordinates_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coordinates_y.size() == 0) {
      out << "coordinates_y: []\n";
    } else {
      out << "coordinates_y:\n";
      for (auto item : msg.coordinates_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneMarking & msg, bool use_flow_style = false)
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
  const wauto_control_msgs::msg::LaneMarking & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_control_msgs::msg::LaneMarking & msg)
{
  return wauto_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_control_msgs::msg::LaneMarking>()
{
  return "wauto_control_msgs::msg::LaneMarking";
}

template<>
inline const char * name<wauto_control_msgs::msg::LaneMarking>()
{
  return "wauto_control_msgs/msg/LaneMarking";
}

template<>
struct has_fixed_size<wauto_control_msgs::msg::LaneMarking>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_control_msgs::msg::LaneMarking>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_control_msgs::msg::LaneMarking>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__TRAITS_HPP_
