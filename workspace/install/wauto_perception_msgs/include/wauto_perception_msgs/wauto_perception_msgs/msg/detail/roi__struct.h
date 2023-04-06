// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_perception_msgs:msg/Roi.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI__STRUCT_H_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI__STRUCT_H_

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
// Member 'bottom_left'
// Member 'top_right'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Roi in the package wauto_perception_msgs.
/**
  * This message defines a Region of Interest (Roi)
  *
  * An Roi can represent an area for which a detection algorithm should take place
  *  An example of this would be a segmentation algorithm finding the road and then
  *  a detector is deployed to find road signals (bike lane, turn paint symbol, etc.)
  *
  * Further, an Roi can define an unrefined bounding box for which further classification is performed
  *  An example of this would be a traffic light detector that finds all possible
  *  traffic lights in some image. These bounding boxes the detector finds would be Rois
  *  and then a classifier would use these Rois to determine the traffic light state (green, yellow, left turn signal, etc.)
 */
typedef struct wauto_perception_msgs__msg__Roi
{
  /// Unique id
  uint8_t id;
  /// A list of possible classifications for this Roi
  wauto_perception_msgs__msg__ObjectClassification classification;
  /// The outline of the Roi in image coordinates assuming aabb (axis aligned bounding box)
  geometry_msgs__msg__Point bottom_left;
  geometry_msgs__msg__Point top_right;
} wauto_perception_msgs__msg__Roi;

// Struct for a sequence of wauto_perception_msgs__msg__Roi.
typedef struct wauto_perception_msgs__msg__Roi__Sequence
{
  wauto_perception_msgs__msg__Roi * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_perception_msgs__msg__Roi__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI__STRUCT_H_
