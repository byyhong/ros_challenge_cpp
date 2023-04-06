// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_perception_msgs:msg/LimitLineArray.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE_ARRAY__STRUCT_H_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE_ARRAY__STRUCT_H_

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
// Member 'limit_lines'
#include "wauto_perception_msgs/msg/detail/limit_line__struct.h"

/// Struct defined in msg/LimitLineArray in the package wauto_perception_msgs.
/**
  * This message defines an array of defined LimitLines
 */
typedef struct wauto_perception_msgs__msg__LimitLineArray
{
  std_msgs__msg__Header header;
  wauto_perception_msgs__msg__LimitLine__Sequence limit_lines;
} wauto_perception_msgs__msg__LimitLineArray;

// Struct for a sequence of wauto_perception_msgs__msg__LimitLineArray.
typedef struct wauto_perception_msgs__msg__LimitLineArray__Sequence
{
  wauto_perception_msgs__msg__LimitLineArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_perception_msgs__msg__LimitLineArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE_ARRAY__STRUCT_H_
