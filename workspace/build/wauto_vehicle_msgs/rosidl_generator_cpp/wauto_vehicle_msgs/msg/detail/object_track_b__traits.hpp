// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackB.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__TRAITS_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_vehicle_msgs/msg/detail/object_track_b__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectTrackB & msg,
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

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: object_relative_orientation
  {
    out << "object_relative_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.object_relative_orientation, out);
    out << ", ";
  }

  // member: rellnposition
  {
    out << "rellnposition: ";
    rosidl_generator_traits::value_to_yaml(msg.rellnposition, out);
    out << ", ";
  }

  // member: object_source_camera
  {
    out << "object_source_camera: ";
    rosidl_generator_traits::value_to_yaml(msg.object_source_camera, out);
    out << ", ";
  }

  // member: object_source_radar
  {
    out << "object_source_radar: ";
    rosidl_generator_traits::value_to_yaml(msg.object_source_radar, out);
    out << ", ";
  }

  // member: object_source_ultrasonic
  {
    out << "object_source_ultrasonic: ";
    rosidl_generator_traits::value_to_yaml(msg.object_source_ultrasonic, out);
    out << ", ";
  }

  // member: object_source_v2x
  {
    out << "object_source_v2x: ";
    rosidl_generator_traits::value_to_yaml(msg.object_source_v2x, out);
    out << ", ";
  }

  // member: object_source_lidar
  {
    out << "object_source_lidar: ";
    rosidl_generator_traits::value_to_yaml(msg.object_source_lidar, out);
    out << ", ";
  }

  // member: object_source_other
  {
    out << "object_source_other: ";
    rosidl_generator_traits::value_to_yaml(msg.object_source_other, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectTrackB & msg,
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

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: object_relative_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_relative_orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.object_relative_orientation, out);
    out << "\n";
  }

  // member: rellnposition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rellnposition: ";
    rosidl_generator_traits::value_to_yaml(msg.rellnposition, out);
    out << "\n";
  }

  // member: object_source_camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_source_camera: ";
    rosidl_generator_traits::value_to_yaml(msg.object_source_camera, out);
    out << "\n";
  }

  // member: object_source_radar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_source_radar: ";
    rosidl_generator_traits::value_to_yaml(msg.object_source_radar, out);
    out << "\n";
  }

  // member: object_source_ultrasonic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_source_ultrasonic: ";
    rosidl_generator_traits::value_to_yaml(msg.object_source_ultrasonic, out);
    out << "\n";
  }

  // member: object_source_v2x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_source_v2x: ";
    rosidl_generator_traits::value_to_yaml(msg.object_source_v2x, out);
    out << "\n";
  }

  // member: object_source_lidar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_source_lidar: ";
    rosidl_generator_traits::value_to_yaml(msg.object_source_lidar, out);
    out << "\n";
  }

  // member: object_source_other
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_source_other: ";
    rosidl_generator_traits::value_to_yaml(msg.object_source_other, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectTrackB & msg, bool use_flow_style = false)
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
  const wauto_vehicle_msgs::msg::ObjectTrackB & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_vehicle_msgs::msg::ObjectTrackB & msg)
{
  return wauto_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_vehicle_msgs::msg::ObjectTrackB>()
{
  return "wauto_vehicle_msgs::msg::ObjectTrackB";
}

template<>
inline const char * name<wauto_vehicle_msgs::msg::ObjectTrackB>()
{
  return "wauto_vehicle_msgs/msg/ObjectTrackB";
}

template<>
struct has_fixed_size<wauto_vehicle_msgs::msg::ObjectTrackB>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_vehicle_msgs::msg::ObjectTrackB>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_vehicle_msgs::msg::ObjectTrackB>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__TRAITS_HPP_
