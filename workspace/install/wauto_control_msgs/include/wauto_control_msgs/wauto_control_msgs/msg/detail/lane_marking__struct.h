// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_control_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_H_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNMARKED'.
/**
  * BoundaryType
 */
enum
{
  wauto_control_msgs__msg__LaneMarking__UNMARKED = 0
};

/// Constant 'SOLID'.
enum
{
  wauto_control_msgs__msg__LaneMarking__SOLID = 1
};

/// Constant 'DASHED'.
enum
{
  wauto_control_msgs__msg__LaneMarking__DASHED = 2
};

/// Constant 'DOUBLESOLID'.
enum
{
  wauto_control_msgs__msg__LaneMarking__DOUBLESOLID = 3
};

/// Constant 'DOUBLEDASHED'.
enum
{
  wauto_control_msgs__msg__LaneMarking__DOUBLEDASHED = 4
};

/// Constant 'SOLIDDASHED'.
enum
{
  wauto_control_msgs__msg__LaneMarking__SOLIDDASHED = 5
};

/// Constant 'DASHEDSOLID'.
enum
{
  wauto_control_msgs__msg__LaneMarking__DASHEDSOLID = 6
};

/// Struct defined in msg/LaneMarking in the package wauto_control_msgs.
/**
  * Msg type for a road lane marking
  * Refer to: https://www.mathworks.com/help/driving/ref/scenarioreader.html#mw_31c3add8-5453-4f95-a37e-b6923ce62508
 */
typedef struct wauto_control_msgs__msg__LaneMarking
{
  /// Msg fields
  uint8_t boundary_type;
  double lateral_offset;
  /// rad
  double heading_angle;
  double coordinates_x[20];
  double coordinates_y[20];
} wauto_control_msgs__msg__LaneMarking;

// Struct for a sequence of wauto_control_msgs__msg__LaneMarking.
typedef struct wauto_control_msgs__msg__LaneMarking__Sequence
{
  wauto_control_msgs__msg__LaneMarking * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_control_msgs__msg__LaneMarking__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_H_
