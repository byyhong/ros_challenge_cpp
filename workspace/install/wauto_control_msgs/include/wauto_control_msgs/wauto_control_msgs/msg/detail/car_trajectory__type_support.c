// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wauto_control_msgs:msg/CarTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wauto_control_msgs/msg/detail/car_trajectory__rosidl_typesupport_introspection_c.h"
#include "wauto_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wauto_control_msgs/msg/detail/car_trajectory__functions.h"
#include "wauto_control_msgs/msg/detail/car_trajectory__struct.h"


// Include directives for member types
// Member `u`
#include "wauto_control_msgs/msg/car_input.h"
// Member `u`
#include "wauto_control_msgs/msg/detail/car_input__rosidl_typesupport_introspection_c.h"
// Member `x`
#include "wauto_control_msgs/msg/car_state.h"
// Member `x`
#include "wauto_control_msgs/msg/detail/car_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wauto_control_msgs__msg__CarTrajectory__init(message_memory);
}

void wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_fini_function(void * message_memory)
{
  wauto_control_msgs__msg__CarTrajectory__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_message_member_array[2] = {
  {
    "u",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_control_msgs__msg__CarTrajectory, u),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_control_msgs__msg__CarTrajectory, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_message_members = {
  "wauto_control_msgs__msg",  // message namespace
  "CarTrajectory",  // message name
  2,  // number of fields
  sizeof(wauto_control_msgs__msg__CarTrajectory),
  wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_message_member_array,  // message members
  wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_message_type_support_handle = {
  0,
  &wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wauto_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wauto_control_msgs, msg, CarTrajectory)() {
  wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wauto_control_msgs, msg, CarInput)();
  wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wauto_control_msgs, msg, CarState)();
  if (!wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_message_type_support_handle.typesupport_identifier) {
    wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wauto_control_msgs__msg__CarTrajectory__rosidl_typesupport_introspection_c__CarTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif