// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wauto_vehicle_msgs:msg/RoadState.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/road_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wauto_vehicle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wauto_vehicle_msgs/msg/detail/road_state__struct.h"
#include "wauto_vehicle_msgs/msg/detail/road_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RoadState__ros_msg_type = wauto_vehicle_msgs__msg__RoadState;

static bool _RoadState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RoadState__ros_msg_type * ros_message = static_cast<const _RoadState__ros_msg_type *>(untyped_ros_message);
  // Field name: rolling_count
  {
    cdr << ros_message->rolling_count;
  }

  // Field name: active_traffic_signal_head_id
  {
    cdr << ros_message->active_traffic_signal_head_id;
  }

  // Field name: current_observed_speed_limit
  {
    cdr << ros_message->current_observed_speed_limit;
  }

  // Field name: next_observed_speed_limit
  {
    cdr << ros_message->next_observed_speed_limit;
  }

  // Field name: next_observed_speed_limit_longit
  {
    cdr << ros_message->next_observed_speed_limit_longit;
  }

  // Field name: active_lane_number
  {
    cdr << ros_message->active_lane_number;
  }

  // Field name: left_lane_marking_id
  {
    cdr << ros_message->left_lane_marking_id;
  }

  // Field name: right_lane_marking_id
  {
    cdr << ros_message->right_lane_marking_id;
  }

  // Field name: llndistancevalid
  {
    cdr << ros_message->llndistancevalid;
  }

  // Field name: disttollnedge
  {
    cdr << ros_message->disttollnedge;
  }

  // Field name: rlndistancevalid
  {
    cdr << ros_message->rlndistancevalid;
  }

  // Field name: disttorlnedge
  {
    cdr << ros_message->disttorlnedge;
  }

  return true;
}

static bool _RoadState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RoadState__ros_msg_type * ros_message = static_cast<_RoadState__ros_msg_type *>(untyped_ros_message);
  // Field name: rolling_count
  {
    cdr >> ros_message->rolling_count;
  }

  // Field name: active_traffic_signal_head_id
  {
    cdr >> ros_message->active_traffic_signal_head_id;
  }

  // Field name: current_observed_speed_limit
  {
    cdr >> ros_message->current_observed_speed_limit;
  }

  // Field name: next_observed_speed_limit
  {
    cdr >> ros_message->next_observed_speed_limit;
  }

  // Field name: next_observed_speed_limit_longit
  {
    cdr >> ros_message->next_observed_speed_limit_longit;
  }

  // Field name: active_lane_number
  {
    cdr >> ros_message->active_lane_number;
  }

  // Field name: left_lane_marking_id
  {
    cdr >> ros_message->left_lane_marking_id;
  }

  // Field name: right_lane_marking_id
  {
    cdr >> ros_message->right_lane_marking_id;
  }

  // Field name: llndistancevalid
  {
    cdr >> ros_message->llndistancevalid;
  }

  // Field name: disttollnedge
  {
    cdr >> ros_message->disttollnedge;
  }

  // Field name: rlndistancevalid
  {
    cdr >> ros_message->rlndistancevalid;
  }

  // Field name: disttorlnedge
  {
    cdr >> ros_message->disttorlnedge;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_vehicle_msgs
size_t get_serialized_size_wauto_vehicle_msgs__msg__RoadState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoadState__ros_msg_type * ros_message = static_cast<const _RoadState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rolling_count
  {
    size_t item_size = sizeof(ros_message->rolling_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_traffic_signal_head_id
  {
    size_t item_size = sizeof(ros_message->active_traffic_signal_head_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_observed_speed_limit
  {
    size_t item_size = sizeof(ros_message->current_observed_speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name next_observed_speed_limit
  {
    size_t item_size = sizeof(ros_message->next_observed_speed_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name next_observed_speed_limit_longit
  {
    size_t item_size = sizeof(ros_message->next_observed_speed_limit_longit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name active_lane_number
  {
    size_t item_size = sizeof(ros_message->active_lane_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_lane_marking_id
  {
    size_t item_size = sizeof(ros_message->left_lane_marking_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_lane_marking_id
  {
    size_t item_size = sizeof(ros_message->right_lane_marking_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name llndistancevalid
  {
    size_t item_size = sizeof(ros_message->llndistancevalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disttollnedge
  {
    size_t item_size = sizeof(ros_message->disttollnedge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rlndistancevalid
  {
    size_t item_size = sizeof(ros_message->rlndistancevalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disttorlnedge
  {
    size_t item_size = sizeof(ros_message->disttorlnedge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RoadState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wauto_vehicle_msgs__msg__RoadState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_vehicle_msgs
size_t max_serialized_size_wauto_vehicle_msgs__msg__RoadState(
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

  // member: rolling_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_traffic_signal_head_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: current_observed_speed_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: next_observed_speed_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: next_observed_speed_limit_longit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: active_lane_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_lane_marking_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_lane_marking_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: llndistancevalid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disttollnedge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rlndistancevalid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disttorlnedge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RoadState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wauto_vehicle_msgs__msg__RoadState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RoadState = {
  "wauto_vehicle_msgs::msg",
  "RoadState",
  _RoadState__cdr_serialize,
  _RoadState__cdr_deserialize,
  _RoadState__get_serialized_size,
  _RoadState__max_serialized_size
};

static rosidl_message_type_support_t _RoadState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RoadState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_vehicle_msgs, msg, RoadState)() {
  return &_RoadState__type_support;
}

#if defined(__cplusplus)
}
#endif
