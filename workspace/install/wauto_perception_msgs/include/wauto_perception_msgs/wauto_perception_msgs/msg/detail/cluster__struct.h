// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_perception_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__STRUCT_H_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__STRUCT_H_

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
// Member 'cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Cluster in the package wauto_perception_msgs.
/**
  * This message defines a cluster
 */
typedef struct wauto_perception_msgs__msg__Cluster
{
  std_msgs__msg__Header header;
  uint32_t id;
  sensor_msgs__msg__PointCloud2 cloud;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Vector3 size;
} wauto_perception_msgs__msg__Cluster;

// Struct for a sequence of wauto_perception_msgs__msg__Cluster.
typedef struct wauto_perception_msgs__msg__Cluster__Sequence
{
  wauto_perception_msgs__msg__Cluster * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_perception_msgs__msg__Cluster__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__STRUCT_H_
