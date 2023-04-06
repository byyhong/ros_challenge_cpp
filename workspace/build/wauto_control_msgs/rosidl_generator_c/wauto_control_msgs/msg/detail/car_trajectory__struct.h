// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_control_msgs:msg/CarTrajectory.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__STRUCT_H_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'u'
#include "wauto_control_msgs/msg/detail/car_input__struct.h"
// Member 'x'
#include "wauto_control_msgs/msg/detail/car_state__struct.h"

/// Struct defined in msg/CarTrajectory in the package wauto_control_msgs.
/**
  * Trajectory in state-space
 */
typedef struct wauto_control_msgs__msg__CarTrajectory
{
  wauto_control_msgs__msg__CarInput u;
  wauto_control_msgs__msg__CarState x;
} wauto_control_msgs__msg__CarTrajectory;

// Struct for a sequence of wauto_control_msgs__msg__CarTrajectory.
typedef struct wauto_control_msgs__msg__CarTrajectory__Sequence
{
  wauto_control_msgs__msg__CarTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_control_msgs__msg__CarTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__STRUCT_H_
