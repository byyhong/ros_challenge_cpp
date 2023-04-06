// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wauto_perception_msgs:msg/Roi.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wauto_perception_msgs/msg/detail/roi__rosidl_typesupport_introspection_c.h"
#include "wauto_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wauto_perception_msgs/msg/detail/roi__functions.h"
#include "wauto_perception_msgs/msg/detail/roi__struct.h"


// Include directives for member types
// Member `classification`
#include "wauto_perception_msgs/msg/object_classification.h"
// Member `classification`
#include "wauto_perception_msgs/msg/detail/object_classification__rosidl_typesupport_introspection_c.h"
// Member `bottom_left`
// Member `top_right`
#include "geometry_msgs/msg/point.h"
// Member `bottom_left`
// Member `top_right`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wauto_perception_msgs__msg__Roi__init(message_memory);
}

void wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_fini_function(void * message_memory)
{
  wauto_perception_msgs__msg__Roi__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_message_member_array[4] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_perception_msgs__msg__Roi, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_perception_msgs__msg__Roi, classification),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bottom_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_perception_msgs__msg__Roi, bottom_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "top_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_perception_msgs__msg__Roi, top_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_message_members = {
  "wauto_perception_msgs__msg",  // message namespace
  "Roi",  // message name
  4,  // number of fields
  sizeof(wauto_perception_msgs__msg__Roi),
  wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_message_member_array,  // message members
  wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_init_function,  // function to initialize message memory (memory has to be allocated)
  wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_message_type_support_handle = {
  0,
  &wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wauto_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wauto_perception_msgs, msg, Roi)() {
  wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wauto_perception_msgs, msg, ObjectClassification)();
  wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_message_type_support_handle.typesupport_identifier) {
    wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wauto_perception_msgs__msg__Roi__rosidl_typesupport_introspection_c__Roi_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
