// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_control_msgs:msg/CarTBS.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TBS__STRUCT_H_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TBS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CarTBS in the package wauto_control_msgs.
/**
  * TBS = [T, B, S]
 */
typedef struct wauto_control_msgs__msg__CarTBS
{
  /// Torque [-22534, 22534]
  double t;
  /// Brake  [-65534, 0]
  double b;
  /// Steer  [-540, 540]
  double s;
} wauto_control_msgs__msg__CarTBS;

// Struct for a sequence of wauto_control_msgs__msg__CarTBS.
typedef struct wauto_control_msgs__msg__CarTBS__Sequence
{
  wauto_control_msgs__msg__CarTBS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_control_msgs__msg__CarTBS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TBS__STRUCT_H_
