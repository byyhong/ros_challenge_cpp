// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wauto_control_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wauto_control_msgs/msg/detail/lane_marking__rosidl_typesupport_introspection_c.h"
#include "wauto_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wauto_control_msgs/msg/detail/lane_marking__functions.h"
#include "wauto_control_msgs/msg/detail/lane_marking__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wauto_control_msgs__msg__LaneMarking__init(message_memory);
}

void wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_fini_function(void * message_memory)
{
  wauto_control_msgs__msg__LaneMarking__fini(message_memory);
}

size_t wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__size_function__LaneMarking__coordinates_x(
  const void * untyped_member)
{
  (void)untyped_member;
  return 20;
}

const void * wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__get_const_function__LaneMarking__coordinates_x(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__get_function__LaneMarking__coordinates_x(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__fetch_function__LaneMarking__coordinates_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__get_const_function__LaneMarking__coordinates_x(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__assign_function__LaneMarking__coordinates_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__get_function__LaneMarking__coordinates_x(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__size_function__LaneMarking__coordinates_y(
  const void * untyped_member)
{
  (void)untyped_member;
  return 20;
}

const void * wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__get_const_function__LaneMarking__coordinates_y(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__get_function__LaneMarking__coordinates_y(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__fetch_function__LaneMarking__coordinates_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__get_const_function__LaneMarking__coordinates_y(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__assign_function__LaneMarking__coordinates_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__get_function__LaneMarking__coordinates_y(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_member_array[5] = {
  {
    "boundary_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_control_msgs__msg__LaneMarking, boundary_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lateral_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_control_msgs__msg__LaneMarking, lateral_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_control_msgs__msg__LaneMarking, heading_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinates_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    20,  // array size
    false,  // is upper bound
    offsetof(wauto_control_msgs__msg__LaneMarking, coordinates_x),  // bytes offset in struct
    NULL,  // default value
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__size_function__LaneMarking__coordinates_x,  // size() function pointer
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__get_const_function__LaneMarking__coordinates_x,  // get_const(index) function pointer
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__get_function__LaneMarking__coordinates_x,  // get(index) function pointer
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__fetch_function__LaneMarking__coordinates_x,  // fetch(index, &value) function pointer
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__assign_function__LaneMarking__coordinates_x,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinates_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    20,  // array size
    false,  // is upper bound
    offsetof(wauto_control_msgs__msg__LaneMarking, coordinates_y),  // bytes offset in struct
    NULL,  // default value
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__size_function__LaneMarking__coordinates_y,  // size() function pointer
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__get_const_function__LaneMarking__coordinates_y,  // get_const(index) function pointer
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__get_function__LaneMarking__coordinates_y,  // get(index) function pointer
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__fetch_function__LaneMarking__coordinates_y,  // fetch(index, &value) function pointer
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__assign_function__LaneMarking__coordinates_y,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_members = {
  "wauto_control_msgs__msg",  // message namespace
  "LaneMarking",  // message name
  5,  // number of fields
  sizeof(wauto_control_msgs__msg__LaneMarking),
  wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_member_array,  // message members
  wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_init_function,  // function to initialize message memory (memory has to be allocated)
  wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_type_support_handle = {
  0,
  &wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wauto_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wauto_control_msgs, msg, LaneMarking)() {
  if (!wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_type_support_handle.typesupport_identifier) {
    wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wauto_control_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
