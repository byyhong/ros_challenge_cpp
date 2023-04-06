// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_A__TRAITS_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_A__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_vehicle_msgs/msg/detail/object_track_a__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectTrackA & msg,
  std::ostream & out)
{
  out << "{";
  // member: rolling_count
  {
    out << "rolling_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count, out);
    out << ", ";
  }

  // member: objobjectid
  {
    out << "objobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.objobjectid, out);
    out << ", ";
  }

  // member: objobjecttype
  {
    out << "objobjecttype: ";
    rosidl_generator_traits::value_to_yaml(msg.objobjecttype, out);
    out << ", ";
  }

  // member: longpos
  {
    out << "longpos: ";
    rosidl_generator_traits::value_to_yaml(msg.longpos, out);
    out << ", ";
  }

  // member: latpos
  {
    out << "latpos: ";
    rosidl_generator_traits::value_to_yaml(msg.latpos, out);
    out << ", ";
  }

  // member: rellongvel
  {
    out << "rellongvel: ";
    rosidl_generator_traits::value_to_yaml(msg.rellongvel, out);
    out << ", ";
  }

  // member: rellatvel
  {
    out << "rellatvel: ";
    rosidl_generator_traits::value_to_yaml(msg.rellatvel, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: relative_lane
  {
    out << "relative_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_lane, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectTrackA & msg,
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

  // member: objobjectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "objobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.objobjectid, out);
    out << "\n";
  }

  // member: objobjecttype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "objobjecttype: ";
    rosidl_generator_traits::value_to_yaml(msg.objobjecttype, out);
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

  // member: latpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latpos: ";
    rosidl_generator_traits::value_to_yaml(msg.latpos, out);
    out << "\n";
  }

  // member: rellongvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rellongvel: ";
    rosidl_generator_traits::value_to_yaml(msg.rellongvel, out);
    out << "\n";
  }

  // member: rellatvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rellatvel: ";
    rosidl_generator_traits::value_to_yaml(msg.rellatvel, out);
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

  // member: relative_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_lane: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_lane, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectTrackA & msg, bool use_flow_style = false)
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
  const wauto_vehicle_msgs::msg::ObjectTrackA & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_vehicle_msgs::msg::ObjectTrackA & msg)
{
  return wauto_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_vehicle_msgs::msg::ObjectTrackA>()
{
  return "wauto_vehicle_msgs::msg::ObjectTrackA";
}

template<>
inline const char * name<wauto_vehicle_msgs::msg::ObjectTrackA>()
{
  return "wauto_vehicle_msgs/msg/ObjectTrackA";
}

template<>
struct has_fixed_size<wauto_vehicle_msgs::msg::ObjectTrackA>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_vehicle_msgs::msg::ObjectTrackA>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_vehicle_msgs::msg::ObjectTrackA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_A__TRAITS_HPP_
