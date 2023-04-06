// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wauto_perception_msgs:msg/LimitLineArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wauto_perception_msgs/msg/detail/limit_line_array__rosidl_typesupport_introspection_c.h"
#include "wauto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wauto_perception_msgs/msg/detail/limit_line_array__functions.h"
#include "wauto_perception_msgs/msg/detail/limit_line_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `limit_lines`
#include "wauto_perception_msgs/msg/limit_line.h"
// Member `limit_lines`
#include "wauto_perception_msgs/msg/detail/limit_line__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wauto_perception_msgs__msg__LimitLineArray__init(message_memory);
}

void wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_fini_function(void * message_memory)
{
  wauto_perception_msgs__msg__LimitLineArray__fini(message_memory);
}

size_t wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__size_function__LimitLineArray__limit_lines(
  const void * untyped_member)
{
  const wauto_perception_msgs__msg__LimitLine__Sequence * member =
    (const wauto_perception_msgs__msg__LimitLine__Sequence *)(untyped_member);
  return member->size;
}

const void * wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__get_const_function__LimitLineArray__limit_lines(
  const void * untyped_member, size_t index)
{
  const wauto_perception_msgs__msg__LimitLine__Sequence * member =
    (const wauto_perception_msgs__msg__LimitLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__get_function__LimitLineArray__limit_lines(
  void * untyped_member, size_t index)
{
  wauto_perception_msgs__msg__LimitLine__Sequence * member =
    (wauto_perception_msgs__msg__LimitLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__fetch_function__LimitLineArray__limit_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const wauto_perception_msgs__msg__LimitLine * item =
    ((const wauto_perception_msgs__msg__LimitLine *)
    wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__get_const_function__LimitLineArray__limit_lines(untyped_member, index));
  wauto_perception_msgs__msg__LimitLine * value =
    (wauto_perception_msgs__msg__LimitLine *)(untyped_value);
  *value = *item;
}

void wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__assign_function__LimitLineArray__limit_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  wauto_perception_msgs__msg__LimitLine * item =
    ((wauto_perception_msgs__msg__LimitLine *)
    wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__get_function__LimitLineArray__limit_lines(untyped_member, index));
  const wauto_perception_msgs__msg__LimitLine * value =
    (const wauto_perception_msgs__msg__LimitLine *)(untyped_value);
  *item = *value;
}

bool wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__resize_function__LimitLineArray__limit_lines(
  void * untyped_member, size_t size)
{
  wauto_perception_msgs__msg__LimitLine__Sequence * member =
    (wauto_perception_msgs__msg__LimitLine__Sequence *)(untyped_member);
  wauto_perception_msgs__msg__LimitLine__Sequence__fini(member);
  return wauto_perception_msgs__msg__LimitLine__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_perception_msgs__msg__LimitLineArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "limit_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_perception_msgs__msg__LimitLineArray, limit_lines),  // bytes offset in struct
    NULL,  // default value
    wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__size_function__LimitLineArray__limit_lines,  // size() function pointer
    wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__get_const_function__LimitLineArray__limit_lines,  // get_const(index) function pointer
    wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__get_function__LimitLineArray__limit_lines,  // get(index) function pointer
    wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__fetch_function__LimitLineArray__limit_lines,  // fetch(index, &value) function pointer
    wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__assign_function__LimitLineArray__limit_lines,  // assign(index, value) function pointer
    wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__resize_function__LimitLineArray__limit_lines  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_message_members = {
  "wauto_perception_msgs__msg",  // message namespace
  "LimitLineArray",  // message name
  2,  // number of fields
  sizeof(wauto_perception_msgs__msg__LimitLineArray),
  wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_message_member_array,  // message members
  wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_init_function,  // function to initialize message memory (memory has to be allocated)
  wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_message_type_support_handle = {
  0,
  &wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wauto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wauto_perception_msgs, msg, LimitLineArray)() {
  wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wauto_perception_msgs, msg, LimitLine)();
  if (!wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_message_type_support_handle.typesupport_identifier) {
    wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wauto_perception_msgs__msg__LimitLineArray__rosidl_typesupport_introspection_c__LimitLineArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
