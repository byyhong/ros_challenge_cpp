// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wauto_control_msgs:msg/CarSafety.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/car_safety__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wauto_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wauto_control_msgs/msg/detail/car_safety__struct.h"
#include "wauto_control_msgs/msg/detail/car_safety__functions.h"
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


using _CarSafety__ros_msg_type = wauto_control_msgs__msg__CarSafety;

static bool _CarSafety__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarSafety__ros_msg_type * ros_message = static_cast<const _CarSafety__ros_msg_type *>(untyped_ros_message);
  // Field name: human_ready
  {
    cdr << (ros_message->human_ready ? true : false);
  }

  // Field name: human_stop
  {
    cdr << (ros_message->human_stop ? true : false);
  }

  // Field name: car_disabled
  {
    cdr << (ros_message->car_disabled ? true : false);
  }

  // Field name: publishing_traj
  {
    cdr << (ros_message->publishing_traj ? true : false);
  }

  // Field name: finished_traj
  {
    cdr << (ros_message->finished_traj ? true : false);
  }

  return true;
}

static bool _CarSafety__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarSafety__ros_msg_type * ros_message = static_cast<_CarSafety__ros_msg_type *>(untyped_ros_message);
  // Field name: human_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->human_ready = tmp ? true : false;
  }

  // Field name: human_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->human_stop = tmp ? true : false;
  }

  // Field name: car_disabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->car_disabled = tmp ? true : false;
  }

  // Field name: publishing_traj
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->publishing_traj = tmp ? true : false;
  }

  // Field name: finished_traj
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->finished_traj = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_control_msgs
size_t get_serialized_size_wauto_control_msgs__msg__CarSafety(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarSafety__ros_msg_type * ros_message = static_cast<const _CarSafety__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name human_ready
  {
    size_t item_size = sizeof(ros_message->human_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name human_stop
  {
    size_t item_size = sizeof(ros_message->human_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name car_disabled
  {
    size_t item_size = sizeof(ros_message->car_disabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name publishing_traj
  {
    size_t item_size = sizeof(ros_message->publishing_traj);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name finished_traj
  {
    size_t item_size = sizeof(ros_message->finished_traj);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CarSafety__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wauto_control_msgs__msg__CarSafety(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_control_msgs
size_t max_serialized_size_wauto_control_msgs__msg__CarSafety(
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

  // member: human_ready
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: human_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: car_disabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: publishing_traj
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: finished_traj
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CarSafety__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wauto_control_msgs__msg__CarSafety(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CarSafety = {
  "wauto_control_msgs::msg",
  "CarSafety",
  _CarSafety__cdr_serialize,
  _CarSafety__cdr_deserialize,
  _CarSafety__get_serialized_size,
  _CarSafety__max_serialized_size
};

static rosidl_message_type_support_t _CarSafety__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarSafety,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_control_msgs, msg, CarSafety)() {
  return &_CarSafety__type_support;
}

#if defined(__cplusplus)
}
#endif
