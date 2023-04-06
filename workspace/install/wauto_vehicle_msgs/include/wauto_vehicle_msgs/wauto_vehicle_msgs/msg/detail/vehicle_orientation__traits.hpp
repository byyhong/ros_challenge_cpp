// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_vehicle_msgs:msg/VehicleOrientation.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ORIENTATION__TRAITS_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ORIENTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_vehicle_msgs/msg/detail/vehicle_orientation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleOrientation & msg,
  std::ostream & out)
{
  out << "{";
  // member: unused_msg_placeholder
  {
    out << "unused_msg_placeholder: ";
    rosidl_generator_traits::value_to_yaml(msg.unused_msg_placeholder, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleOrientation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: unused_msg_placeholder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unused_msg_placeholder: ";
    rosidl_generator_traits::value_to_yaml(msg.unused_msg_placeholder, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleOrientation & msg, bool use_flow_style = false)
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
  const wauto_vehicle_msgs::msg::VehicleOrientation & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_vehicle_msgs::msg::VehicleOrientation & msg)
{
  return wauto_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_vehicle_msgs::msg::VehicleOrientation>()
{
  return "wauto_vehicle_msgs::msg::VehicleOrientation";
}

template<>
inline const char * name<wauto_vehicle_msgs::msg::VehicleOrientation>()
{
  return "wauto_vehicle_msgs/msg/VehicleOrientation";
}

template<>
struct has_fixed_size<wauto_vehicle_msgs::msg::VehicleOrientation>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_vehicle_msgs::msg::VehicleOrientation>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_vehicle_msgs::msg::VehicleOrientation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ORIENTATION__TRAITS_HPP_
