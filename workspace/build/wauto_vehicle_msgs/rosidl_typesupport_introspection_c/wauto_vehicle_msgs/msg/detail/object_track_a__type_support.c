// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackA.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wauto_vehicle_msgs/msg/detail/object_track_a__rosidl_typesupport_introspection_c.h"
#include "wauto_vehicle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wauto_vehicle_msgs/msg/detail/object_track_a__functions.h"
#include "wauto_vehicle_msgs/msg/detail/object_track_a__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void wauto_vehicle_msgs__msg__ObjectTrackA__rosidl_typesupport_introspection_c__ObjectTrackA_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wauto_vehicle_msgs__msg__ObjectTrackA__init(message_memory);
}

void wauto_vehicle_msgs__msg__ObjectTrackA__rosidl_typesupport_introspection_c__ObjectTrackA_fini_function(void * message_memory)
{
  wauto_vehicle_msgs__msg__ObjectTrackA__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wauto_vehicle_msgs__msg__ObjectTrackA__rosidl_typesupport_introspection_c__ObjectTrackA_message_member_array[9] = {
  {
    "rolling_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_vehicle_msgs__msg__ObjectTrackA, rolling_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objobjectid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_vehicle_msgs__msg__ObjectTrackA, objobjectid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objobjecttype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_vehicle_msgs__msg__ObjectTrackA, objobjecttype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longpos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_vehicle_msgs__msg__ObjectTrackA, longpos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latpos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_vehicle_msgs__msg__ObjectTrackA, latpos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rellongvel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_vehicle_msgs__msg__ObjectTrackA, rellongvel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rellatvel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_vehicle_msgs__msg__ObjectTrackA, rellatvel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_vehicle_msgs__msg__ObjectTrackA, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relative_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_vehicle_msgs__msg__ObjectTrackA, relative_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wauto_vehicle_msgs__msg__ObjectTrackA__rosidl_typesupport_introspection_c__ObjectTrackA_message_members = {
  "wauto_vehicle_msgs__msg",  // message namespace
  "ObjectTrackA",  // message name
  9,  // number of fields
  sizeof(wauto_vehicle_msgs__msg__ObjectTrackA),
  wauto_vehicle_msgs__msg__ObjectTrackA__rosidl_typesupport_introspection_c__ObjectTrackA_message_member_array,  // message members
  wauto_vehicle_msgs__msg__ObjectTrackA__rosidl_typesupport_introspection_c__ObjectTrackA_init_function,  // function to initialize message memory (memory has to be allocated)
  wauto_vehicle_msgs__msg__ObjectTrackA__rosidl_typesupport_introspection_c__ObjectTrackA_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wauto_vehicle_msgs__msg__ObjectTrackA__rosidl_typesupport_introspection_c__ObjectTrackA_message_type_support_handle = {
  0,
  &wauto_vehicle_msgs__msg__ObjectTrackA__rosidl_typesupport_introspection_c__ObjectTrackA_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wauto_vehicle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wauto_vehicle_msgs, msg, ObjectTrackA)() {
  if (!wauto_vehicle_msgs__msg__ObjectTrackA__rosidl_typesupport_introspection_c__ObjectTrackA_message_type_support_handle.typesupport_identifier) {
    wauto_vehicle_msgs__msg__ObjectTrackA__rosidl_typesupport_introspection_c__ObjectTrackA_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wauto_vehicle_msgs__msg__ObjectTrackA__rosidl_typesupport_introspection_c__ObjectTrackA_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
