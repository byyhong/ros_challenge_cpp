// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wauto_control_msgs:msg/CarInput.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/car_input__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wauto_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wauto_control_msgs/msg/detail/car_input__struct.h"
#include "wauto_control_msgs/msg/detail/car_input__functions.h"
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


using _CarInput__ros_msg_type = wauto_control_msgs__msg__CarInput;

static bool _CarInput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarInput__ros_msg_type * ros_message = static_cast<const _CarInput__ros_msg_type *>(untyped_ros_message);
  // Field name: v_dot
  {
    cdr << ros_message->v_dot;
  }

  // Field name: psi_dot
  {
    cdr << ros_message->psi_dot;
  }

  // Field name: gamma
  {
    cdr << ros_message->gamma;
  }

  return true;
}

static bool _CarInput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarInput__ros_msg_type * ros_message = static_cast<_CarInput__ros_msg_type *>(untyped_ros_message);
  // Field name: v_dot
  {
    cdr >> ros_message->v_dot;
  }

  // Field name: psi_dot
  {
    cdr >> ros_message->psi_dot;
  }

  // Field name: gamma
  {
    cdr >> ros_message->gamma;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_control_msgs
size_t get_serialized_size_wauto_control_msgs__msg__CarInput(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarInput__ros_msg_type * ros_message = static_cast<const _CarInput__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name v_dot
  {
    size_t item_size = sizeof(ros_message->v_dot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name psi_dot
  {
    size_t item_size = sizeof(ros_message->psi_dot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gamma
  {
    size_t item_size = sizeof(ros_message->gamma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CarInput__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wauto_control_msgs__msg__CarInput(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_control_msgs
size_t max_serialized_size_wauto_control_msgs__msg__CarInput(
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

  // member: v_dot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: psi_dot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gamma
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CarInput__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wauto_control_msgs__msg__CarInput(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CarInput = {
  "wauto_control_msgs::msg",
  "CarInput",
  _CarInput__cdr_serialize,
  _CarInput__cdr_deserialize,
  _CarInput__get_serialized_size,
  _CarInput__max_serialized_size
};

static rosidl_message_type_support_t _CarInput__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarInput,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_control_msgs, msg, CarInput)() {
  return &_CarInput__type_support;
}

#if defined(__cplusplus)
}
#endif
