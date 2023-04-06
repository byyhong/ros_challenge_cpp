// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_control_msgs:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_STATE__STRUCT_H_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CarState in the package wauto_control_msgs.
/**
  * x = [x, y, v, psi]
 */
typedef struct wauto_control_msgs__msg__CarState
{
  /// Rear-axle x position
  double x;
  /// Rear-axle y position
  double y;
  /// Linear speed
  double v;
  /// Heading
  double psi;
} wauto_control_msgs__msg__CarState;

// Struct for a sequence of wauto_control_msgs__msg__CarState.
typedef struct wauto_control_msgs__msg__CarState__Sequence
{
  wauto_control_msgs__msg__CarState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_control_msgs__msg__CarState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_STATE__STRUCT_H_
