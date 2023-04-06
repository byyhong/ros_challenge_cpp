// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from wauto_vehicle_msgs:msg/RoadState.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/road_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "wauto_vehicle_msgs/msg/detail/road_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace wauto_vehicle_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
cdr_serialize(
  const wauto_vehicle_msgs::msg::RoadState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rolling_count
  cdr << ros_message.rolling_count;
  // Member: active_traffic_signal_head_id
  cdr << ros_message.active_traffic_signal_head_id;
  // Member: current_observed_speed_limit
  cdr << ros_message.current_observed_speed_limit;
  // Member: next_observed_speed_limit
  cdr << ros_message.next_observed_speed_limit;
  // Member: next_observed_speed_limit_longit
  cdr << ros_message.next_observed_speed_limit_longit;
  // Member: active_lane_number
  cdr << ros_message.active_lane_number;
  // Member: left_lane_marking_id
  cdr << ros_message.left_lane_marking_id;
  // Member: right_lane_marking_id
  cdr << ros_message.right_lane_marking_id;
  // Member: llndistancevalid
  cdr << ros_message.llndistancevalid;
  // Member: disttollnedge
  cdr << ros_message.disttollnedge;
  // Member: rlndistancevalid
  cdr << ros_message.rlndistancevalid;
  // Member: disttorlnedge
  cdr << ros_message.disttorlnedge;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wauto_vehicle_msgs::msg::RoadState & ros_message)
{
  // Member: rolling_count
  cdr >> ros_message.rolling_count;

  // Member: active_traffic_signal_head_id
  cdr >> ros_message.active_traffic_signal_head_id;

  // Member: current_observed_speed_limit
  cdr >> ros_message.current_observed_speed_limit;

  // Member: next_observed_speed_limit
  cdr >> ros_message.next_observed_speed_limit;

  // Member: next_observed_speed_limit_longit
  cdr >> ros_message.next_observed_speed_limit_longit;

  // Member: active_lane_number
  cdr >> ros_message.active_lane_number;

  // Member: left_lane_marking_id
  cdr >> ros_message.left_lane_marking_id;

  // Member: right_lane_marking_id
  cdr >> ros_message.right_lane_marking_id;

  // Member: llndistancevalid
  cdr >> ros_message.llndistancevalid;

  // Member: disttollnedge
  cdr >> ros_message.disttollnedge;

  // Member: rlndistancevalid
  cdr >> ros_message.rlndistancevalid;

  // Member: disttorlnedge
  cdr >> ros_message.disttorlnedge;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
get_serialized_size(
  const wauto_vehicle_msgs::msg::RoadState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rolling_count
  {
    size_t item_size = sizeof(ros_message.rolling_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_traffic_signal_head_id
  {
    size_t item_size = sizeof(ros_message.active_traffic_signal_head_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_observed_speed_limit
  {
    size_t item_size = sizeof(ros_message.current_observed_speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: next_observed_speed_limit
  {
    size_t item_size = sizeof(ros_message.next_observed_speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: next_observed_speed_limit_longit
  {
    size_t item_size = sizeof(ros_message.next_observed_speed_limit_longit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_lane_number
  {
    size_t item_size = sizeof(ros_message.active_lane_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_lane_marking_id
  {
    size_t item_size = sizeof(ros_message.left_lane_marking_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_lane_marking_id
  {
    size_t item_size = sizeof(ros_message.right_lane_marking_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: llndistancevalid
  {
    size_t item_size = sizeof(ros_message.llndistancevalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: disttollnedge
  {
    size_t item_size = sizeof(ros_message.disttollnedge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rlndistancevalid
  {
    size_t item_size = sizeof(ros_message.rlndistancevalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: disttorlnedge
  {
    size_t item_size = sizeof(ros_message.disttorlnedge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wauto_vehicle_msgs
max_serialized_size_RoadState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: rolling_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_traffic_signal_head_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: current_observed_speed_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: next_observed_speed_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: next_observed_speed_limit_longit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: active_lane_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left_lane_marking_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_lane_marking_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: llndistancevalid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: disttollnedge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rlndistancevalid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: disttorlnedge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RoadState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const wauto_vehicle_msgs::msg::RoadState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RoadState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<wauto_vehicle_msgs::msg::RoadState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RoadState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const wauto_vehicle_msgs::msg::RoadState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RoadState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RoadState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RoadState__callbacks = {
  "wauto_vehicle_msgs::msg",
  "RoadState",
  _RoadState__cdr_serialize,
  _RoadState__cdr_deserialize,
  _RoadState__get_serialized_size,
  _RoadState__max_serialized_size
};

static rosidl_message_type_support_t _RoadState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RoadState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace wauto_vehicle_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_wauto_vehicle_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<wauto_vehicle_msgs::msg::RoadState>()
{
  return &wauto_vehicle_msgs::msg::typesupport_fastrtps_cpp::_RoadState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wauto_vehicle_msgs, msg, RoadState)() {
  return &wauto_vehicle_msgs::msg::typesupport_fastrtps_cpp::_RoadState__handle;
}

#ifdef __cplusplus
}
#endif
