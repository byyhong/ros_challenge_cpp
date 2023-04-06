// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wauto_vehicle_msgs:msg/LimitLines.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/limit_lines__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wauto_vehicle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wauto_vehicle_msgs/msg/detail/limit_lines__struct.h"
#include "wauto_vehicle_msgs/msg/detail/limit_lines__functions.h"
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


using _LimitLines__ros_msg_type = wauto_vehicle_msgs__msg__LimitLines;

static bool _LimitLines__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LimitLines__ros_msg_type * ros_message = static_cast<const _LimitLines__ros_msg_type *>(untyped_ros_message);
  // Field name: rolling_count
  {
    cdr << ros_message->rolling_count;
  }

  // Field name: current_limit_line_count
  {
    cdr << ros_message->current_limit_line_count;
  }

  // Field name: observation_time_of_hour
  {
    cdr << ros_message->observation_time_of_hour;
  }

  return true;
}

static bool _LimitLines__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LimitLines__ros_msg_type * ros_message = static_cast<_LimitLines__ros_msg_type *>(untyped_ros_message);
  // Field name: rolling_count
  {
    cdr >> ros_message->rolling_count;
  }

  // Field name: current_limit_line_count
  {
    cdr >> ros_message->current_limit_line_count;
  }

  // Field name: observation_time_of_hour
  {
    cdr >> ros_message->observation_time_of_hour;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_vehicle_msgs
size_t get_serialized_size_wauto_vehicle_msgs__msg__LimitLines(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LimitLines__ros_msg_type * ros_message = static_cast<const _LimitLines__ros_msg_type *>(untyped_ros_message);
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
  // field.name current_limit_line_count
  {
    size_t item_size = sizeof(ros_message->current_limit_line_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name observation_time_of_hour
  {
    size_t item_size = sizeof(ros_message->observation_time_of_hour);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LimitLines__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wauto_vehicle_msgs__msg__LimitLines(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_vehicle_msgs
size_t max_serialized_size_wauto_vehicle_msgs__msg__LimitLines(
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
  // member: current_limit_line_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: observation_time_of_hour
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LimitLines__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wauto_vehicle_msgs__msg__LimitLines(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LimitLines = {
  "wauto_vehicle_msgs::msg",
  "LimitLines",
  _LimitLines__cdr_serialize,
  _LimitLines__cdr_deserialize,
  _LimitLines__get_serialized_size,
  _LimitLines__max_serialized_size
};

static rosidl_message_type_support_t _LimitLines__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LimitLines,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_vehicle_msgs, msg, LimitLines)() {
  return &_LimitLines__type_support;
}

#if defined(__cplusplus)
}
#endif
