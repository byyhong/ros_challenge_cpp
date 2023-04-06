// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackD.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_D__STRUCT_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NAME'.
/**
  * ---------------------
  * Object_TrackD Message
  * ---------------------
  * The name of the message as defined in the DBC file.
 */
static const char * const wauto_vehicle_msgs__msg__ObjectTrackD__NAME = "Object_TrackD";

/// Struct defined in msg/ObjectTrackD in the package wauto_vehicle_msgs.
/**
  * ----------------------------------------------
  * This is an auto generated file. DO NOT EDIT!!!
  * ----------------------------------------------
 */
typedef struct wauto_vehicle_msgs__msg__ObjectTrackD
{
  /// -------
  /// Signals
  /// -------
  /// Rolling_Count
  uint8_t rolling_count;
  /// ObjObjectID
  uint8_t objobjectid;
  /// Object_Longitude
  int32_t object_longitude;
} wauto_vehicle_msgs__msg__ObjectTrackD;

// Struct for a sequence of wauto_vehicle_msgs__msg__ObjectTrackD.
typedef struct wauto_vehicle_msgs__msg__ObjectTrackD__Sequence
{
  wauto_vehicle_msgs__msg__ObjectTrackD * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_vehicle_msgs__msg__ObjectTrackD__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_D__STRUCT_H_
