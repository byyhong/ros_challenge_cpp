// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wauto_perception_msgs:msg/RoiArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wauto_perception_msgs/msg/detail/roi_array__rosidl_typesupport_introspection_c.h"
#include "wauto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wauto_perception_msgs/msg/detail/roi_array__functions.h"
#include "wauto_perception_msgs/msg/detail/roi_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rois`
#include "wauto_perception_msgs/msg/roi.h"
// Member `rois`
#include "wauto_perception_msgs/msg/detail/roi__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wauto_perception_msgs__msg__RoiArray__init(message_memory);
}

void wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_fini_function(void * message_memory)
{
  wauto_perception_msgs__msg__RoiArray__fini(message_memory);
}

size_t wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__size_function__RoiArray__rois(
  const void * untyped_member)
{
  const wauto_perception_msgs__msg__Roi__Sequence * member =
    (const wauto_perception_msgs__msg__Roi__Sequence *)(untyped_member);
  return member->size;
}

const void * wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__get_const_function__RoiArray__rois(
  const void * untyped_member, size_t index)
{
  const wauto_perception_msgs__msg__Roi__Sequence * member =
    (const wauto_perception_msgs__msg__Roi__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__get_function__RoiArray__rois(
  void * untyped_member, size_t index)
{
  wauto_perception_msgs__msg__Roi__Sequence * member =
    (wauto_perception_msgs__msg__Roi__Sequence *)(untyped_member);
  return &member->data[index];
}

void wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__fetch_function__RoiArray__rois(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const wauto_perception_msgs__msg__Roi * item =
    ((const wauto_perception_msgs__msg__Roi *)
    wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__get_const_function__RoiArray__rois(untyped_member, index));
  wauto_perception_msgs__msg__Roi * value =
    (wauto_perception_msgs__msg__Roi *)(untyped_value);
  *value = *item;
}

void wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__assign_function__RoiArray__rois(
  void * untyped_member, size_t index, const void * untyped_value)
{
  wauto_perception_msgs__msg__Roi * item =
    ((wauto_perception_msgs__msg__Roi *)
    wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__get_function__RoiArray__rois(untyped_member, index));
  const wauto_perception_msgs__msg__Roi * value =
    (const wauto_perception_msgs__msg__Roi *)(untyped_value);
  *item = *value;
}

bool wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__resize_function__RoiArray__rois(
  void * untyped_member, size_t size)
{
  wauto_perception_msgs__msg__Roi__Sequence * member =
    (wauto_perception_msgs__msg__Roi__Sequence *)(untyped_member);
  wauto_perception_msgs__msg__Roi__Sequence__fini(member);
  return wauto_perception_msgs__msg__Roi__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_perception_msgs__msg__RoiArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rois",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_perception_msgs__msg__RoiArray, rois),  // bytes offset in struct
    NULL,  // default value
    wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__size_function__RoiArray__rois,  // size() function pointer
    wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__get_const_function__RoiArray__rois,  // get_const(index) function pointer
    wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__get_function__RoiArray__rois,  // get(index) function pointer
    wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__fetch_function__RoiArray__rois,  // fetch(index, &value) function pointer
    wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__assign_function__RoiArray__rois,  // assign(index, value) function pointer
    wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__resize_function__RoiArray__rois  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_message_members = {
  "wauto_perception_msgs__msg",  // message namespace
  "RoiArray",  // message name
  2,  // number of fields
  sizeof(wauto_perception_msgs__msg__RoiArray),
  wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_message_member_array,  // message members
  wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_init_function,  // function to initialize message memory (memory has to be allocated)
  wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_message_type_support_handle = {
  0,
  &wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wauto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wauto_perception_msgs, msg, RoiArray)() {
  wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wauto_perception_msgs, msg, Roi)();
  if (!wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_message_type_support_handle.typesupport_identifier) {
    wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wauto_perception_msgs__msg__RoiArray__rosidl_typesupport_introspection_c__RoiArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
