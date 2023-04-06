// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_perception_msgs:msg/LaneMarkingArray.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__STRUCT_H_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'lane_markings'
#include "wauto_perception_msgs/msg/detail/lane_marking__struct.h"

/// Struct defined in msg/LaneMarkingArray in the package wauto_perception_msgs.
/**
  * This message defines an array of defined LaneMarkings
 */
typedef struct wauto_perception_msgs__msg__LaneMarkingArray
{
  std_msgs__msg__Header header;
  wauto_perception_msgs__msg__LaneMarking__Sequence lane_markings;
} wauto_perception_msgs__msg__LaneMarkingArray;

// Struct for a sequence of wauto_perception_msgs__msg__LaneMarkingArray.
typedef struct wauto_perception_msgs__msg__LaneMarkingArray__Sequence
{
  wauto_perception_msgs__msg__LaneMarkingArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_perception_msgs__msg__LaneMarkingArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__STRUCT_H_
