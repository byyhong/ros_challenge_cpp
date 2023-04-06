// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_vehicle_msgs:msg/RoadState.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__ROAD_STATE__TRAITS_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__ROAD_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_vehicle_msgs/msg/detail/road_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoadState & msg,
  std::ostream & out)
{
  out << "{";
  // member: rolling_count
  {
    out << "rolling_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count, out);
    out << ", ";
  }

  // member: active_traffic_signal_head_id
  {
    out << "active_traffic_signal_head_id: ";
    rosidl_generator_traits::value_to_yaml(msg.active_traffic_signal_head_id, out);
    out << ", ";
  }

  // member: current_observed_speed_limit
  {
    out << "current_observed_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.current_observed_speed_limit, out);
    out << ", ";
  }

  // member: next_observed_speed_limit
  {
    out << "next_observed_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.next_observed_speed_limit, out);
    out << ", ";
  }

  // member: next_observed_speed_limit_longit
  {
    out << "next_observed_speed_limit_longit: ";
    rosidl_generator_traits::value_to_yaml(msg.next_observed_speed_limit_longit, out);
    out << ", ";
  }

  // member: active_lane_number
  {
    out << "active_lane_number: ";
    rosidl_generator_traits::value_to_yaml(msg.active_lane_number, out);
    out << ", ";
  }

  // member: left_lane_marking_id
  {
    out << "left_lane_marking_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_marking_id, out);
    out << ", ";
  }

  // member: right_lane_marking_id
  {
    out << "right_lane_marking_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_marking_id, out);
    out << ", ";
  }

  // member: llndistancevalid
  {
    out << "llndistancevalid: ";
    rosidl_generator_traits::value_to_yaml(msg.llndistancevalid, out);
    out << ", ";
  }

  // member: disttollnedge
  {
    out << "disttollnedge: ";
    rosidl_generator_traits::value_to_yaml(msg.disttollnedge, out);
    out << ", ";
  }

  // member: rlndistancevalid
  {
    out << "rlndistancevalid: ";
    rosidl_generator_traits::value_to_yaml(msg.rlndistancevalid, out);
    out << ", ";
  }

  // member: disttorlnedge
  {
    out << "disttorlnedge: ";
    rosidl_generator_traits::value_to_yaml(msg.disttorlnedge, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoadState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rolling_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rolling_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count, out);
    out << "\n";
  }

  // member: active_traffic_signal_head_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_traffic_signal_head_id: ";
    rosidl_generator_traits::value_to_yaml(msg.active_traffic_signal_head_id, out);
    out << "\n";
  }

  // member: current_observed_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_observed_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.current_observed_speed_limit, out);
    out << "\n";
  }

  // member: next_observed_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_observed_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.next_observed_speed_limit, out);
    out << "\n";
  }

  // member: next_observed_speed_limit_longit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_observed_speed_limit_longit: ";
    rosidl_generator_traits::value_to_yaml(msg.next_observed_speed_limit_longit, out);
    out << "\n";
  }

  // member: active_lane_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_lane_number: ";
    rosidl_generator_traits::value_to_yaml(msg.active_lane_number, out);
    out << "\n";
  }

  // member: left_lane_marking_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lane_marking_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_marking_id, out);
    out << "\n";
  }

  // member: right_lane_marking_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lane_marking_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_marking_id, out);
    out << "\n";
  }

  // member: llndistancevalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "llndistancevalid: ";
    rosidl_generator_traits::value_to_yaml(msg.llndistancevalid, out);
    out << "\n";
  }

  // member: disttollnedge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disttollnedge: ";
    rosidl_generator_traits::value_to_yaml(msg.disttollnedge, out);
    out << "\n";
  }

  // member: rlndistancevalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rlndistancevalid: ";
    rosidl_generator_traits::value_to_yaml(msg.rlndistancevalid, out);
    out << "\n";
  }

  // member: disttorlnedge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disttorlnedge: ";
    rosidl_generator_traits::value_to_yaml(msg.disttorlnedge, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoadState & msg, bool use_flow_style = false)
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

}  // namespace wauto_vehicle_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wauto_vehicle_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wauto_vehicle_msgs::msg::RoadState & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_vehicle_msgs::msg::RoadState & msg)
{
  return wauto_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_vehicle_msgs::msg::RoadState>()
{
  return "wauto_vehicle_msgs::msg::RoadState";
}

template<>
inline const char * name<wauto_vehicle_msgs::msg::RoadState>()
{
  return "wauto_vehicle_msgs/msg/RoadState";
}

template<>
struct has_fixed_size<wauto_vehicle_msgs::msg::RoadState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_vehicle_msgs::msg::RoadState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_vehicle_msgs::msg::RoadState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__ROAD_STATE__TRAITS_HPP_
