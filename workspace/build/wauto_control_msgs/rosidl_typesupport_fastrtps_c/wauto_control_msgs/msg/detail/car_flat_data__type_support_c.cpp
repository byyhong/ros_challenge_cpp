// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from wauto_control_msgs:msg/CarFlatData.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/car_flat_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "wauto_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "wauto_control_msgs/msg/detail/car_flat_data__struct.h"
#include "wauto_control_msgs/msg/detail/car_flat_data__functions.h"
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

#include "wauto_control_msgs/msg/detail/car_state__functions.h"  // x

// forward declare type support functions
size_t get_serialized_size_wauto_control_msgs__msg__CarState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_wauto_control_msgs__msg__CarState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_control_msgs, msg, CarState)();


using _CarFlatData__ros_msg_type = wauto_control_msgs__msg__CarFlatData;

static bool _CarFlatData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarFlatData__ros_msg_type * ros_message = static_cast<const _CarFlatData__ros_msg_type *>(untyped_ros_message);
  // Field name: l
  {
    cdr << ros_message->l;
  }

  // Field name: nu
  {
    cdr << ros_message->nu;
  }

  // Field name: gamma_max
  {
    cdr << ros_message->gamma_max;
  }

  // Field name: a_max
  {
    cdr << ros_message->a_max;
  }

  // Field name: v_max
  {
    cdr << ros_message->v_max;
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

static bool _CarFlatData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarFlatData__ros_msg_type * ros_message = static_cast<_CarFlatData__ros_msg_type *>(untyped_ros_message);
  // Field name: l
  {
    cdr >> ros_message->l;
  }

  // Field name: nu
  {
    cdr >> ros_message->nu;
  }

  // Field name: gamma_max
  {
    cdr >> ros_message->gamma_max;
  }

  // Field name: a_max
  {
    cdr >> ros_message->a_max;
  }

  // Field name: v_max
  {
    cdr >> ros_message->v_max;
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
size_t get_serialized_size_wauto_control_msgs__msg__CarFlatData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarFlatData__ros_msg_type * ros_message = static_cast<const _CarFlatData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name l
  {
    size_t item_size = sizeof(ros_message->l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nu
  {
    size_t item_size = sizeof(ros_message->nu);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gamma_max
  {
    size_t item_size = sizeof(ros_message->gamma_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a_max
  {
    size_t item_size = sizeof(ros_message->a_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_max
  {
    size_t item_size = sizeof(ros_message->v_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x

  current_alignment += get_serialized_size_wauto_control_msgs__msg__CarState(
    &(ros_message->x), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CarFlatData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_wauto_control_msgs__msg__CarFlatData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_wauto_control_msgs
size_t max_serialized_size_wauto_control_msgs__msg__CarFlatData(
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

  // member: l
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: nu
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gamma_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: v_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
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

static size_t _CarFlatData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_wauto_control_msgs__msg__CarFlatData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CarFlatData = {
  "wauto_control_msgs::msg",
  "CarFlatData",
  _CarFlatData__cdr_serialize,
  _CarFlatData__cdr_deserialize,
  _CarFlatData__get_serialized_size,
  _CarFlatData__max_serialized_size
};

static rosidl_message_type_support_t _CarFlatData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarFlatData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, wauto_control_msgs, msg, CarFlatData)() {
  return &_CarFlatData__type_support;
}

#if defined(__cplusplus)
}
#endif
