// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_control_msgs:msg/CarInput.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_INPUT__STRUCT_H_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CarInput in the package wauto_control_msgs.
/**
  * u = [v_dot, psi_dot, gamma]
 */
typedef struct wauto_control_msgs__msg__CarInput
{
  /// Lin. accel.
  double v_dot;
  /// Heading rate
  double psi_dot;
  /// Steering angle
  double gamma;
} wauto_control_msgs__msg__CarInput;

// Struct for a sequence of wauto_control_msgs__msg__CarInput.
typedef struct wauto_control_msgs__msg__CarInput__Sequence
{
  wauto_control_msgs__msg__CarInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_control_msgs__msg__CarInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_INPUT__STRUCT_H_
