// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_control_msgs:msg/LaneBoundaries.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_BOUNDARIES__STRUCT_H_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_BOUNDARIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'right'
// Member 'left'
#include "wauto_control_msgs/msg/detail/lane_marking__struct.h"

/// Struct defined in msg/LaneBoundaries in the package wauto_control_msgs.
/**
  * Lane Boundaries Information
  * Right and left are with respect to the Ego Vehicle Frame
 */
typedef struct wauto_control_msgs__msg__LaneBoundaries
{
  /// Right lane boundary
  wauto_control_msgs__msg__LaneMarking right;
  /// Left lane boundary
  wauto_control_msgs__msg__LaneMarking left;
} wauto_control_msgs__msg__LaneBoundaries;

// Struct for a sequence of wauto_control_msgs__msg__LaneBoundaries.
typedef struct wauto_control_msgs__msg__LaneBoundaries__Sequence
{
  wauto_control_msgs__msg__LaneBoundaries * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_control_msgs__msg__LaneBoundaries__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_BOUNDARIES__STRUCT_H_
