// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_control_msgs:msg/CarFlatData.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__STRUCT_H_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
#include "wauto_control_msgs/msg/detail/car_state__struct.h"

/// Struct defined in msg/CarFlatData in the package wauto_control_msgs.
/**
  * FlatData for FlatVCP planner
 */
typedef struct wauto_control_msgs__msg__CarFlatData
{
  /// wheelbase length
  double l;
  /// [0,inf) Time penalty
  double nu;
  /// max steering angle
  double gamma_max;
  /// max acceleration
  double a_max;
  /// max speed
  double v_max;
  /// Final desired state x_f
  wauto_control_msgs__msg__CarState x;
} wauto_control_msgs__msg__CarFlatData;

// Struct for a sequence of wauto_control_msgs__msg__CarFlatData.
typedef struct wauto_control_msgs__msg__CarFlatData__Sequence
{
  wauto_control_msgs__msg__CarFlatData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_control_msgs__msg__CarFlatData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__STRUCT_H_
