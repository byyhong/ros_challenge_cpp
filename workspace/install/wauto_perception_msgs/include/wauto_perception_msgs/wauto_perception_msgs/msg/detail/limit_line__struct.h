// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_perception_msgs:msg/LimitLine.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE__STRUCT_H_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WA_LIMIT_LINE_ASSIGN_UNKNOWN'.
/**
  * Enum for limit line assignment
 */
enum
{
  wauto_perception_msgs__msg__LimitLine__WA_LIMIT_LINE_ASSIGN_UNKNOWN = 0
};

/// Constant 'WA_LIMIT_LINE_ASSIGN_HOST_LANE'.
enum
{
  wauto_perception_msgs__msg__LimitLine__WA_LIMIT_LINE_ASSIGN_HOST_LANE = 1
};

/// Constant 'WA_LIMIT_LINE_ASSIGN_LEFT_SHOULDER'.
enum
{
  wauto_perception_msgs__msg__LimitLine__WA_LIMIT_LINE_ASSIGN_LEFT_SHOULDER = 2
};

/// Constant 'WA_LIMIT_LINE_ASSIGN_LEFT_LANE'.
enum
{
  wauto_perception_msgs__msg__LimitLine__WA_LIMIT_LINE_ASSIGN_LEFT_LANE = 3
};

/// Constant 'WA_LIMIT_LINE_ASSIGN_RIGHT_LANE'.
enum
{
  wauto_perception_msgs__msg__LimitLine__WA_LIMIT_LINE_ASSIGN_RIGHT_LANE = 4
};

/// Constant 'WA_LIMIT_LINE_ASSIGN_RIGHT_SHOULDER'.
enum
{
  wauto_perception_msgs__msg__LimitLine__WA_LIMIT_LINE_ASSIGN_RIGHT_SHOULDER = 5
};

/// Constant 'WA_LIMIT_LINE_ASSIGN_OVERHEAD'.
enum
{
  wauto_perception_msgs__msg__LimitLine__WA_LIMIT_LINE_ASSIGN_OVERHEAD = 6
};

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/LimitLine in the package wauto_perception_msgs.
/**
  * This message defines a "Limit Line"
  *
  * A limit line is a horizontal line that indicates a zone that a vehicle should stop. A good example
  * is a perpendicular line infront of a stop sign. 
 */
typedef struct wauto_perception_msgs__msg__LimitLine
{
  /// Unique id
  int32_t id;
  /// Confidence
  float confidence;
  /// Position relative to the vehicle (ignore z)
  geometry_msgs__msg__Vector3 position;
  /// Lane assignment
  uint8_t assignment;
} wauto_perception_msgs__msg__LimitLine;

// Struct for a sequence of wauto_perception_msgs__msg__LimitLine.
typedef struct wauto_perception_msgs__msg__LimitLine__Sequence
{
  wauto_perception_msgs__msg__LimitLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_perception_msgs__msg__LimitLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE__STRUCT_H_
