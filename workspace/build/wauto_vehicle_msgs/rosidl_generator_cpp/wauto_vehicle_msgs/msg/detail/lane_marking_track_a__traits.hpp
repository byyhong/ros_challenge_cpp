// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_vehicle_msgs:msg/LaneMarkingTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKING_TRACK_A__TRAITS_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKING_TRACK_A__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_vehicle_msgs/msg/detail/lane_marking_track_a__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneMarkingTrackA & msg,
  std::ostream & out)
{
  out << "{";
  // member: rolling_count
  {
    out << "rolling_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count, out);
    out << ", ";
  }

  // member: lanemarkingid
  {
    out << "lanemarkingid: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkingid, out);
    out << ", ";
  }

  // member: lanemarkinglnhdngtngtv
  {
    out << "lanemarkinglnhdngtngtv: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglnhdngtngtv, out);
    out << ", ";
  }

  // member: lanemarkinglnhdngtngt
  {
    out << "lanemarkinglnhdngtngt: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglnhdngtngt, out);
    out << ", ";
  }

  // member: lanemarkinglndstv
  {
    out << "lanemarkinglndstv: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglndstv, out);
    out << ", ";
  }

  // member: lanemarkinglndst
  {
    out << "lanemarkinglndst: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglndst, out);
    out << ", ";
  }

  // member: lanemarkinglncrvtv
  {
    out << "lanemarkinglncrvtv: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglncrvtv, out);
    out << ", ";
  }

  // member: lanemarkinglncrvtgradv
  {
    out << "lanemarkinglncrvtgradv: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglncrvtgradv, out);
    out << ", ";
  }

  // member: lanemarkinglncrvtgrad
  {
    out << "lanemarkinglncrvtgrad: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglncrvtgrad, out);
    out << ", ";
  }

  // member: lanemarkinglncrvt
  {
    out << "lanemarkinglncrvt: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglncrvt, out);
    out << ", ";
  }

  // member: lanemarkinglnqltyconflvl
  {
    out << "lanemarkinglnqltyconflvl: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglnqltyconflvl, out);
    out << ", ";
  }

  // member: lanemarkinglnmrkrtyp
  {
    out << "lanemarkinglnmrkrtyp: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglnmrkrtyp, out);
    out << ", ";
  }

  // member: lanemarkingcolor
  {
    out << "lanemarkingcolor: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkingcolor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneMarkingTrackA & msg,
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

  // member: lanemarkingid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkingid: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkingid, out);
    out << "\n";
  }

  // member: lanemarkinglnhdngtngtv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkinglnhdngtngtv: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglnhdngtngtv, out);
    out << "\n";
  }

  // member: lanemarkinglnhdngtngt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkinglnhdngtngt: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglnhdngtngt, out);
    out << "\n";
  }

  // member: lanemarkinglndstv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkinglndstv: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglndstv, out);
    out << "\n";
  }

  // member: lanemarkinglndst
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkinglndst: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglndst, out);
    out << "\n";
  }

  // member: lanemarkinglncrvtv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkinglncrvtv: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglncrvtv, out);
    out << "\n";
  }

  // member: lanemarkinglncrvtgradv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkinglncrvtgradv: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglncrvtgradv, out);
    out << "\n";
  }

  // member: lanemarkinglncrvtgrad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkinglncrvtgrad: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglncrvtgrad, out);
    out << "\n";
  }

  // member: lanemarkinglncrvt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkinglncrvt: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglncrvt, out);
    out << "\n";
  }

  // member: lanemarkinglnqltyconflvl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkinglnqltyconflvl: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglnqltyconflvl, out);
    out << "\n";
  }

  // member: lanemarkinglnmrkrtyp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkinglnmrkrtyp: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkinglnmrkrtyp, out);
    out << "\n";
  }

  // member: lanemarkingcolor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkingcolor: ";
    rosidl_generator_traits::value_to_yaml(msg.lanemarkingcolor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneMarkingTrackA & msg, bool use_flow_style = false)
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
  const wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
{
  return wauto_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_vehicle_msgs::msg::LaneMarkingTrackA>()
{
  return "wauto_vehicle_msgs::msg::LaneMarkingTrackA";
}

template<>
inline const char * name<wauto_vehicle_msgs::msg::LaneMarkingTrackA>()
{
  return "wauto_vehicle_msgs/msg/LaneMarkingTrackA";
}

template<>
struct has_fixed_size<wauto_vehicle_msgs::msg::LaneMarkingTrackA>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_vehicle_msgs::msg::LaneMarkingTrackA>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_vehicle_msgs::msg::LaneMarkingTrackA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKING_TRACK_A__TRAITS_HPP_
