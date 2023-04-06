// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_control_msgs:msg/CarSafety.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_SAFETY__TRAITS_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_SAFETY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_control_msgs/msg/detail/car_safety__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CarSafety & msg,
  std::ostream & out)
{
  out << "{";
  // member: human_ready
  {
    out << "human_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.human_ready, out);
    out << ", ";
  }

  // member: human_stop
  {
    out << "human_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.human_stop, out);
    out << ", ";
  }

  // member: car_disabled
  {
    out << "car_disabled: ";
    rosidl_generator_traits::value_to_yaml(msg.car_disabled, out);
    out << ", ";
  }

  // member: publishing_traj
  {
    out << "publishing_traj: ";
    rosidl_generator_traits::value_to_yaml(msg.publishing_traj, out);
    out << ", ";
  }

  // member: finished_traj
  {
    out << "finished_traj: ";
    rosidl_generator_traits::value_to_yaml(msg.finished_traj, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarSafety & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: human_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "human_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.human_ready, out);
    out << "\n";
  }

  // member: human_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "human_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.human_stop, out);
    out << "\n";
  }

  // member: car_disabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_disabled: ";
    rosidl_generator_traits::value_to_yaml(msg.car_disabled, out);
    out << "\n";
  }

  // member: publishing_traj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "publishing_traj: ";
    rosidl_generator_traits::value_to_yaml(msg.publishing_traj, out);
    out << "\n";
  }

  // member: finished_traj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finished_traj: ";
    rosidl_generator_traits::value_to_yaml(msg.finished_traj, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarSafety & msg, bool use_flow_style = false)
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
  const wauto_control_msgs::msg::CarSafety & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_control_msgs::msg::CarSafety & msg)
{
  return wauto_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_control_msgs::msg::CarSafety>()
{
  return "wauto_control_msgs::msg::CarSafety";
}

template<>
inline const char * name<wauto_control_msgs::msg::CarSafety>()
{
  return "wauto_control_msgs/msg/CarSafety";
}

template<>
struct has_fixed_size<wauto_control_msgs::msg::CarSafety>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_control_msgs::msg::CarSafety>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_control_msgs::msg::CarSafety>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_SAFETY__TRAITS_HPP_
