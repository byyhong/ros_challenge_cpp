// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_vehicle_msgs:msg/TrafficSignalHeads.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_HEADS__TRAITS_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_HEADS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_vehicle_msgs/msg/detail/traffic_signal_heads__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficSignalHeads & msg,
  std::ostream & out)
{
  out << "{";
  // member: rolling_count
  {
    out << "rolling_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count, out);
    out << ", ";
  }

  // member: current_signal_head_count
  {
    out << "current_signal_head_count: ";
    rosidl_generator_traits::value_to_yaml(msg.current_signal_head_count, out);
    out << ", ";
  }

  // member: observation_time_of_hour
  {
    out << "observation_time_of_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.observation_time_of_hour, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficSignalHeads & msg,
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

  // member: current_signal_head_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_signal_head_count: ";
    rosidl_generator_traits::value_to_yaml(msg.current_signal_head_count, out);
    out << "\n";
  }

  // member: observation_time_of_hour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "observation_time_of_hour: ";
    rosidl_generator_traits::value_to_yaml(msg.observation_time_of_hour, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficSignalHeads & msg, bool use_flow_style = false)
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
  const wauto_vehicle_msgs::msg::TrafficSignalHeads & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_vehicle_msgs::msg::TrafficSignalHeads & msg)
{
  return wauto_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_vehicle_msgs::msg::TrafficSignalHeads>()
{
  return "wauto_vehicle_msgs::msg::TrafficSignalHeads";
}

template<>
inline const char * name<wauto_vehicle_msgs::msg::TrafficSignalHeads>()
{
  return "wauto_vehicle_msgs/msg/TrafficSignalHeads";
}

template<>
struct has_fixed_size<wauto_vehicle_msgs::msg::TrafficSignalHeads>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_vehicle_msgs::msg::TrafficSignalHeads>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_vehicle_msgs::msg::TrafficSignalHeads>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_HEADS__TRAITS_HPP_
