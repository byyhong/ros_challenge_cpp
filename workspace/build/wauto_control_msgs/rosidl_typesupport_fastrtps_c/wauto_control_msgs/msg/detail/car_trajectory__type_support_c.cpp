// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wauto_control_msgs:msg/CarTrajectory.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/car_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wauto_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wauto_control_msgs/msg/detail/car_trajectory__struct.h"
#include "wauto_control_msgs/msg/detail/car_trajectory__functions.h"
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

#include "wauto_control_msgs/msg/detail/car_input__functions.h"  // u
#include "wauto_control_msgs/msg/detail/car_state__functions.h"  // x

// forward declare type support functions
size_t get_serialized_size_wauto_control_msgs__msg__CarInput(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_wauto_control_msgs__msg__CarInput(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_control_msgs, msg, CarInput)();
size_t get_serialized_size_wauto_control_msgs__msg__CarState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_wauto_control_msgs__msg__CarState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_control_msgs, msg, CarState)();


using _CarTrajectory__ros_msg_type = wauto_control_msgs__msg__CarTrajectory;

static bool _CarTrajectory__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarTrajectory__ros_msg_type * ros_message = static_cast<const _CarTrajectory__ros_msg_type *>(untyped_ros_message);
  // Field name: u
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, wauto_control_msgs, msg, CarInput
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->u, cdr))
    {
      return false;
    }
  }

  // Field name: x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, wauto_control_msgs, msg, CarState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->x, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CarTrajectory__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarTrajectory__ros_msg_type * ros_message = static_cast<_CarTrajectory__ros_msg_type *>(untyped_ros_message);
  // Field name: u
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, wauto_control_msgs, msg, CarInput
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->u))
    {
      return false;
    }
  }

  // Field name: x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, wauto_control_msgs, msg, CarState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->x))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_control_msgs
size_t get_serialized_size_wauto_control_msgs__msg__CarTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarTrajectory__ros_msg_type * ros_message = static_cast<const _CarTrajectory__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name u

  current_alignment += get_serialized_size_wauto_control_msgs__msg__CarInput(
    &(ros_message->u), current_alignment);
  // field.name x

  current_alignment += get_serialized_size_wauto_control_msgs__msg__CarState(
    &(ros_message->x), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CarTrajectory__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wauto_control_msgs__msg__CarTrajectory(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_control_msgs
size_t max_serialized_size_wauto_control_msgs__msg__CarTrajectory(
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

  // member: u
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_wauto_control_msgs__msg__CarInput(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: x
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_wauto_control_msgs__msg__CarState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CarTrajectory__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wauto_control_msgs__msg__CarTrajectory(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CarTrajectory = {
  "wauto_control_msgs::msg",
  "CarTrajectory",
  _CarTrajectory__cdr_serialize,
  _CarTrajectory__cdr_deserialize,
  _CarTrajectory__get_serialized_size,
  _CarTrajectory__max_serialized_size
};

static rosidl_message_type_support_t _CarTrajectory__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarTrajectory,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_control_msgs, msg, CarTrajectory)() {
  return &_CarTrajectory__type_support;
}

#if defined(__cplusplus)
}
#endif
