// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wauto_vehicle_msgs:msg/TrafficSignalHeadTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_HEAD_TRACK_A__TRAITS_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_HEAD_TRACK_A__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wauto_vehicle_msgs/msg/detail/traffic_signal_head_track_a__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wauto_vehicle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficSignalHeadTrackA & msg,
  std::ostream & out)
{
  out << "{";
  // member: rolling_count
  {
    out << "rolling_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rolling_count, out);
    out << ", ";
  }

  // member: signalobjectid
  {
    out << "signalobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.signalobjectid, out);
    out << ", ";
  }

  // member: height_above_ground
  {
    out << "height_above_ground: ";
    rosidl_generator_traits::value_to_yaml(msg.height_above_ground, out);
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

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: signal_head_type
  {
    out << "signal_head_type: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_head_type, out);
    out << ", ";
  }

  // member: illumltnone
  {
    out << "illumltnone: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltnone, out);
    out << ", ";
  }

  // member: illumltredball
  {
    out << "illumltredball: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltredball, out);
    out << ", ";
  }

  // member: illumltyellowball
  {
    out << "illumltyellowball: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltyellowball, out);
    out << ", ";
  }

  // member: illumltgreenball
  {
    out << "illumltgreenball: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltgreenball, out);
    out << ", ";
  }

  // member: illumltflshngredball
  {
    out << "illumltflshngredball: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltflshngredball, out);
    out << ", ";
  }

  // member: illumltflshngyellowball
  {
    out << "illumltflshngyellowball: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltflshngyellowball, out);
    out << ", ";
  }

  // member: illumltredleftarrow
  {
    out << "illumltredleftarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltredleftarrow, out);
    out << ", ";
  }

  // member: illumltyellowleftarrow
  {
    out << "illumltyellowleftarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltyellowleftarrow, out);
    out << ", ";
  }

  // member: illumltgreenleftarrow
  {
    out << "illumltgreenleftarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltgreenleftarrow, out);
    out << ", ";
  }

  // member: illumltflshngredleftarrow
  {
    out << "illumltflshngredleftarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltflshngredleftarrow, out);
    out << ", ";
  }

  // member: illumltflshngyellowleftarrow
  {
    out << "illumltflshngyellowleftarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltflshngyellowleftarrow, out);
    out << ", ";
  }

  // member: illumltredrightarrow
  {
    out << "illumltredrightarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltredrightarrow, out);
    out << ", ";
  }

  // member: illumltyellowrightarrow
  {
    out << "illumltyellowrightarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltyellowrightarrow, out);
    out << ", ";
  }

  // member: illumltgreenrightarrow
  {
    out << "illumltgreenrightarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltgreenrightarrow, out);
    out << ", ";
  }

  // member: illumltflshngredrightarrow
  {
    out << "illumltflshngredrightarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltflshngredrightarrow, out);
    out << ", ";
  }

  // member: illumltflshngyellowrightarrow
  {
    out << "illumltflshngyellowrightarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltflshngyellowrightarrow, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficSignalHeadTrackA & msg,
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

  // member: signalobjectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signalobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.signalobjectid, out);
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

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: signal_head_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_head_type: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_head_type, out);
    out << "\n";
  }

  // member: illumltnone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltnone: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltnone, out);
    out << "\n";
  }

  // member: illumltredball
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltredball: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltredball, out);
    out << "\n";
  }

  // member: illumltyellowball
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltyellowball: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltyellowball, out);
    out << "\n";
  }

  // member: illumltgreenball
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltgreenball: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltgreenball, out);
    out << "\n";
  }

  // member: illumltflshngredball
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltflshngredball: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltflshngredball, out);
    out << "\n";
  }

  // member: illumltflshngyellowball
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltflshngyellowball: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltflshngyellowball, out);
    out << "\n";
  }

  // member: illumltredleftarrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltredleftarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltredleftarrow, out);
    out << "\n";
  }

  // member: illumltyellowleftarrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltyellowleftarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltyellowleftarrow, out);
    out << "\n";
  }

  // member: illumltgreenleftarrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltgreenleftarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltgreenleftarrow, out);
    out << "\n";
  }

  // member: illumltflshngredleftarrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltflshngredleftarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltflshngredleftarrow, out);
    out << "\n";
  }

  // member: illumltflshngyellowleftarrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltflshngyellowleftarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltflshngyellowleftarrow, out);
    out << "\n";
  }

  // member: illumltredrightarrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltredrightarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltredrightarrow, out);
    out << "\n";
  }

  // member: illumltyellowrightarrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltyellowrightarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltyellowrightarrow, out);
    out << "\n";
  }

  // member: illumltgreenrightarrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltgreenrightarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltgreenrightarrow, out);
    out << "\n";
  }

  // member: illumltflshngredrightarrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltflshngredrightarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltflshngredrightarrow, out);
    out << "\n";
  }

  // member: illumltflshngyellowrightarrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "illumltflshngyellowrightarrow: ";
    rosidl_generator_traits::value_to_yaml(msg.illumltflshngyellowrightarrow, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficSignalHeadTrackA & msg, bool use_flow_style = false)
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
  const wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA & msg,
  std::ostream & out, size_t indentation = 0)
{
  wauto_vehicle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wauto_vehicle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA & msg)
{
  return wauto_vehicle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA>()
{
  return "wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA";
}

template<>
inline const char * name<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA>()
{
  return "wauto_vehicle_msgs/msg/TrafficSignalHeadTrackA";
}

template<>
struct has_fixed_size<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_HEAD_TRACK_A__TRAITS_HPP_
