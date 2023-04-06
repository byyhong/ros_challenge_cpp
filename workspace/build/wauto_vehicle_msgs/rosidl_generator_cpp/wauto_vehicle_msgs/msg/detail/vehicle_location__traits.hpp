// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_vehicle_msgs:msg/VehicleLocation.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_LOCATION__TRAITS_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_vehicle_msgs/msg/detail/vehicle_location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleLocation & msg,
  std::ostream & out)
{
  out << "{";
  // member: vehiclelatitude
  {
    out << "vehiclelatitude: ";
    rosidl_generator_traits::value_to_yaml(msg.vehiclelatitude, out);
    out << ", ";
  }

  // member: vehiclelongitude
  {
    out << "vehiclelongitude: ";
    rosidl_generator_traits::value_to_yaml(msg.vehiclelongitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleLocation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vehiclelatitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehiclelatitude: ";
    rosidl_generator_traits::value_to_yaml(msg.vehiclelatitude, out);
    out << "\n";
  }

  // member: vehiclelongitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehiclelongitude: ";
    rosidl_generator_traits::value_to_yaml(msg.vehiclelongitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleLocation & msg, bool use_flow_style = false)
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
  const wauto_vehicle_msgs::msg::VehicleLocation & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_vehicle_msgs::msg::VehicleLocation & msg)
{
  return wauto_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_vehicle_msgs::msg::VehicleLocation>()
{
  return "wauto_vehicle_msgs::msg::VehicleLocation";
}

template<>
inline const char * name<wauto_vehicle_msgs::msg::VehicleLocation>()
{
  return "wauto_vehicle_msgs/msg/VehicleLocation";
}

template<>
struct has_fixed_size<wauto_vehicle_msgs::msg::VehicleLocation>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_vehicle_msgs::msg::VehicleLocation>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_vehicle_msgs::msg::VehicleLocation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_LOCATION__TRAITS_HPP_
