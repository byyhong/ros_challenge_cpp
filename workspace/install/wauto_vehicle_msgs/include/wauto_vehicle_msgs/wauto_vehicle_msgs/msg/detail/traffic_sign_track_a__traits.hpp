// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_vehicle_msgs:msg/TrafficSignTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGN_TRACK_A__TRAITS_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGN_TRACK_A__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_vehicle_msgs/msg/detail/traffic_sign_track_a__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficSignTrackA & msg,
  std::ostream & out)
{
  out << "{";
  // member: rolling_count
  {
    out << "rolling_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count, out);
    out << ", ";
  }

  // member: signobjectid
  {
    out << "signobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.signobjectid, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: longpos
  {
    out << "longpos: ";
    rosidl_generator_traits::value_to_yaml(msg.longpos, out);
    out << ", ";
  }

  // member: height_above_ground
  {
    out << "height_above_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.height_above_ground, out);
    out << ", ";
  }

  // member: latpos
  {
    out << "latpos: ";
    rosidl_generator_traits::value_to_yaml(msg.latpos, out);
    out << ", ";
  }

  // member: sign_type
  {
    out << "sign_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_type, out);
    out << ", ";
  }

  // member: sign_value
  {
    out << "sign_value: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficSignTrackA & msg,
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

  // member: signobjectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.signobjectid, out);
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

  // member: longpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longpos: ";
    rosidl_generator_traits::value_to_yaml(msg.longpos, out);
    out << "\n";
  }

  // member: height_above_ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_above_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.height_above_ground, out);
    out << "\n";
  }

  // member: latpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latpos: ";
    rosidl_generator_traits::value_to_yaml(msg.latpos, out);
    out << "\n";
  }

  // member: sign_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_type, out);
    out << "\n";
  }

  // member: sign_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_value: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficSignTrackA & msg, bool use_flow_style = false)
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
  const wauto_vehicle_msgs::msg::TrafficSignTrackA & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_vehicle_msgs::msg::TrafficSignTrackA & msg)
{
  return wauto_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_vehicle_msgs::msg::TrafficSignTrackA>()
{
  return "wauto_vehicle_msgs::msg::TrafficSignTrackA";
}

template<>
inline const char * name<wauto_vehicle_msgs::msg::TrafficSignTrackA>()
{
  return "wauto_vehicle_msgs/msg/TrafficSignTrackA";
}

template<>
struct has_fixed_size<wauto_vehicle_msgs::msg::TrafficSignTrackA>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_vehicle_msgs::msg::TrafficSignTrackA>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_vehicle_msgs::msg::TrafficSignTrackA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGN_TRACK_A__TRAITS_HPP_
