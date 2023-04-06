// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_control_msgs:msg/CarSafety.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_SAFETY__STRUCT_H_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_SAFETY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CarSafety in the package wauto_control_msgs.
typedef struct wauto_control_msgs__msg__CarSafety
{
  /// Signal with joystick the human is ready to drive
  bool human_ready;
  /// Signal a human force stop
  bool human_stop;
  /// Signal that car no longer listens for commands
  bool car_disabled;
  /// Signal from trajectory_node that it is publishing
  bool publishing_traj;
  /// Signal from trajectory_node that the trajectory is over
  bool finished_traj;
} wauto_control_msgs__msg__CarSafety;

// Struct for a sequence of wauto_control_msgs__msg__CarSafety.
typedef struct wauto_control_msgs__msg__CarSafety__Sequence
{
  wauto_control_msgs__msg__CarSafety * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_control_msgs__msg__CarSafety__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_SAFETY__STRUCT_H_
