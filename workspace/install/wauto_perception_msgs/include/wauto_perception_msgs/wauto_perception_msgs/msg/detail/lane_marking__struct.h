// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_perception_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_H_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WA_LANE_MARKING_TYPE_UNKNOWN'.
/**
  * Enum for lane marking types
 */
enum
{
  wauto_perception_msgs__msg__LaneMarking__WA_LANE_MARKING_TYPE_UNKNOWN = 0
};

/// Constant 'WA_LANE_MARKING_TYPE_SOLID'.
enum
{
  wauto_perception_msgs__msg__LaneMarking__WA_LANE_MARKING_TYPE_SOLID = 1
};

/// Constant 'WA_LANE_MARKING_TYPE_DASHED'.
enum
{
  wauto_perception_msgs__msg__LaneMarking__WA_LANE_MARKING_TYPE_DASHED = 2
};

/// Constant 'WA_LANE_MARKING_TYPE_DOTTED'.
enum
{
  wauto_perception_msgs__msg__LaneMarking__WA_LANE_MARKING_TYPE_DOTTED = 3
};

/// Constant 'WA_LANE_MARKING_TYPE_BOTTS_DOTS'.
enum
{
  wauto_perception_msgs__msg__LaneMarking__WA_LANE_MARKING_TYPE_BOTTS_DOTS = 4
};

/// Constant 'WA_LANE_MARKING_TYPE_DOUBLE'.
enum
{
  wauto_perception_msgs__msg__LaneMarking__WA_LANE_MARKING_TYPE_DOUBLE = 5
};

/// Constant 'WA_LANE_MARKING_TYPE_ROAD_EDGE'.
enum
{
  wauto_perception_msgs__msg__LaneMarking__WA_LANE_MARKING_TYPE_ROAD_EDGE = 6
};

/// Constant 'WA_LANE_MARKING_COLOR_UNKNOWN'.
/**
  * Enum for lane marking colors
 */
enum
{
  wauto_perception_msgs__msg__LaneMarking__WA_LANE_MARKING_COLOR_UNKNOWN = 0
};

/// Constant 'WA_LANE_MARKING_COLOR_WHITE'.
enum
{
  wauto_perception_msgs__msg__LaneMarking__WA_LANE_MARKING_COLOR_WHITE = 1
};

/// Constant 'WA_LANE_MARKING_COLOR_YELLOW'.
enum
{
  wauto_perception_msgs__msg__LaneMarking__WA_LANE_MARKING_COLOR_YELLOW = 2
};

/// Constant 'WA_LANE_MARKING_COLOR_OTHER'.
enum
{
  wauto_perception_msgs__msg__LaneMarking__WA_LANE_MARKING_COLOR_OTHER = 3
};

/// Struct defined in msg/LaneMarking in the package wauto_perception_msgs.
/**
  * This message defines a "Lane Marking"
  *
  * A "Lane Marking" is defined by many characteristics, which may include marking color and marking type.
 */
typedef struct wauto_perception_msgs__msg__LaneMarking
{
  /// Unique id
  int32_t id;
  /// Lateral distance to lane markings
  /// Negative indicates left, positive right
  int8_t distance;
  /// Lane marking type (see WA_LANE_MARKING_COLOR)
  uint8_t type;
  /// Lane line color (see WA_LANE_MARKING_COLOR)
  uint8_t color;
} wauto_perception_msgs__msg__LaneMarking;

// Struct for a sequence of wauto_perception_msgs__msg__LaneMarking.
typedef struct wauto_perception_msgs__msg__LaneMarking__Sequence
{
  wauto_perception_msgs__msg__LaneMarking * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_perception_msgs__msg__LaneMarking__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_H_
