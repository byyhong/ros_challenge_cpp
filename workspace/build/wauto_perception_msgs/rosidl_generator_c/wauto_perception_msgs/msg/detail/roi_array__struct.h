// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_perception_msgs:msg/RoiArray.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI_ARRAY__STRUCT_H_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI_ARRAY__STRUCT_H_

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
// Member 'rois'
#include "wauto_perception_msgs/msg/detail/roi__struct.h"

/// Struct defined in msg/RoiArray in the package wauto_perception_msgs.
/**
  * This message has an array of Region of Interests (Roi)
 */
typedef struct wauto_perception_msgs__msg__RoiArray
{
  std_msgs__msg__Header header;
  wauto_perception_msgs__msg__Roi__Sequence rois;
} wauto_perception_msgs__msg__RoiArray;

// Struct for a sequence of wauto_perception_msgs__msg__RoiArray.
typedef struct wauto_perception_msgs__msg__RoiArray__Sequence
{
  wauto_perception_msgs__msg__RoiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_perception_msgs__msg__RoiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI_ARRAY__STRUCT_H_
