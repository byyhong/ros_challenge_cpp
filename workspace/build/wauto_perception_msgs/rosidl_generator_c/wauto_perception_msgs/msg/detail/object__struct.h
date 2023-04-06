// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_perception_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'classification'
#include "wauto_perception_msgs/msg/detail/object_classification__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Object in the package wauto_perception_msgs.
/**
  * This message defines an "Object"
  *
  * An "Object" is defined as a detected, and possibly further classified, entity of interest
  * that can be passed between nodes. A detection is simply an identification of an entity
  * in an image or pointcloud. A classification is a further "binning" of a detection, such as
  * a traffic light being detected and further being classified as being green.
  *
  * An Object is also defined as in 3D space relative to the vehicle.
 */
typedef struct wauto_perception_msgs__msg__Object
{
  /// Unique id
  uint8_t id;
  /// A list of classifications for this Object
  wauto_perception_msgs__msg__ObjectClassification classification;
  /// The position and orientation of the detected Object
  geometry_msgs__msg__PoseWithCovariance pose;
  /// The twist (derivative of pose) of the detected Object
  geometry_msgs__msg__TwistWithCovariance twist;
  /// 3D bounding box
  geometry_msgs__msg__Vector3 size;
} wauto_perception_msgs__msg__Object;

// Struct for a sequence of wauto_perception_msgs__msg__Object.
typedef struct wauto_perception_msgs__msg__Object__Sequence
{
  wauto_perception_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_perception_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
