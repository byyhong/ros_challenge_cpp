// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackB.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__STRUCT_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__STRUCT_H_

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
  * Object_TrackB Message
  * ---------------------
  * The name of the message as defined in the DBC file.
 */
static const char * const wauto_vehicle_msgs__msg__ObjectTrackB__NAME = "Object_TrackB";

/// Constant 'OBJECT_SOURCE_CAMERA_1'.
/**
  * -----
  * Enums
  * -----
  * Enum for Object_Source_Camera signal
  * true
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackB__OBJECT_SOURCE_CAMERA_1 = 1
};

/// Constant 'OBJECT_SOURCE_CAMERA_0'.
/**
  * false
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackB__OBJECT_SOURCE_CAMERA_0 = 0
};

/// Constant 'OBJECT_SOURCE_RADAR_1'.
/**
  * Enum for Object_Source_Radar signal
  * true
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackB__OBJECT_SOURCE_RADAR_1 = 1
};

/// Constant 'OBJECT_SOURCE_RADAR_0'.
/**
  * false
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackB__OBJECT_SOURCE_RADAR_0 = 0
};

/// Constant 'OBJECT_SOURCE_ULTRASONIC_1'.
/**
  * Enum for Object_Source_Ultrasonic signal
  * true
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackB__OBJECT_SOURCE_ULTRASONIC_1 = 1
};

/// Constant 'OBJECT_SOURCE_ULTRASONIC_0'.
/**
  * false
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackB__OBJECT_SOURCE_ULTRASONIC_0 = 0
};

/// Constant 'OBJECT_SOURCE_V2X_1'.
/**
  * Enum for Object_Source_V2X signal
  * true
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackB__OBJECT_SOURCE_V2X_1 = 1
};

/// Constant 'OBJECT_SOURCE_V2X_0'.
/**
  * false
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackB__OBJECT_SOURCE_V2X_0 = 0
};

/// Constant 'OBJECT_SOURCE_LIDAR_1'.
/**
  * Enum for Object_Source_Lidar signal
  * true
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackB__OBJECT_SOURCE_LIDAR_1 = 1
};

/// Constant 'OBJECT_SOURCE_LIDAR_0'.
/**
  * false
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackB__OBJECT_SOURCE_LIDAR_0 = 0
};

/// Constant 'OBJECT_SOURCE_OTHER_1'.
/**
  * Enum for Object_Source_Other signal
  * true
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackB__OBJECT_SOURCE_OTHER_1 = 1
};

/// Constant 'OBJECT_SOURCE_OTHER_0'.
/**
  * false
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackB__OBJECT_SOURCE_OTHER_0 = 0
};

/// Struct defined in msg/ObjectTrackB in the package wauto_vehicle_msgs.
/**
  * ----------------------------------------------
  * This is an auto generated file. DO NOT EDIT!!!
  * ----------------------------------------------
 */
typedef struct wauto_vehicle_msgs__msg__ObjectTrackB
{
  /// -------
  /// Signals
  /// -------
  /// Rolling_Count
  uint8_t rolling_count;
  /// ObjObjectID
  uint8_t objobjectid;
  /// Width
  uint8_t width;
  /// Height
  uint8_t height;
  /// Object_Relative_Orientation
  uint8_t object_relative_orientation;
  /// RelLnPosition
  int8_t rellnposition;
  /// Object_Source_Camera
  uint8_t object_source_camera;
  /// Object_Source_Radar
  uint8_t object_source_radar;
  /// Object_Source_Ultrasonic
  uint8_t object_source_ultrasonic;
  /// Object_Source_V2X
  uint8_t object_source_v2x;
  /// Object_Source_Lidar
  uint8_t object_source_lidar;
  /// Object_Source_Other
  uint8_t object_source_other;
} wauto_vehicle_msgs__msg__ObjectTrackB;

// Struct for a sequence of wauto_vehicle_msgs__msg__ObjectTrackB.
typedef struct wauto_vehicle_msgs__msg__ObjectTrackB__Sequence
{
  wauto_vehicle_msgs__msg__ObjectTrackB * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_vehicle_msgs__msg__ObjectTrackB__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__STRUCT_H_
