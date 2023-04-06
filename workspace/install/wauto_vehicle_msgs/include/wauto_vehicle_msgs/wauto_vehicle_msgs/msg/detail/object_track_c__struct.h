// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackC.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__STRUCT_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__STRUCT_H_

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
  * Object_TrackC Message
  * ---------------------
  * The name of the message as defined in the DBC file.
 */
static const char * const wauto_vehicle_msgs__msg__ObjectTrackC__NAME = "Object_TrackC";

/// Constant 'DYNPROP_4'.
/**
  * -----
  * Enums
  * -----
  * Enum for DynProp signal
  * Moving in opposite direction
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackC__DYNPROP_4 = 4
};

/// Constant 'DYNPROP_3'.
/**
  * Moving in same direction as host
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackC__DYNPROP_3 = 3
};

/// Constant 'DYNPROP_2'.
/**
  * Has moved but currently stopped
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackC__DYNPROP_2 = 2
};

/// Constant 'DYNPROP_1'.
/**
  * Has never moved
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackC__DYNPROP_1 = 1
};

/// Constant 'DYNPROP_0'.
/**
  * Unknown
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackC__DYNPROP_0 = 0
};

/// Struct defined in msg/ObjectTrackC in the package wauto_vehicle_msgs.
/**
  * ----------------------------------------------
  * This is an auto generated file. DO NOT EDIT!!!
  * ----------------------------------------------
 */
typedef struct wauto_vehicle_msgs__msg__ObjectTrackC
{
  /// -------
  /// Signals
  /// -------
  /// Rolling_Count
  uint8_t rolling_count;
  /// ObjObjectID
  uint8_t objobjectid;
  /// Object_Latitude
  int32_t object_latitude;
  /// Object_Absolute_Velocity
  uint8_t object_absolute_velocity;
  /// Object_Course
  uint8_t object_course;
  /// DynProp
  uint8_t dynprop;
} wauto_vehicle_msgs__msg__ObjectTrackC;

// Struct for a sequence of wauto_vehicle_msgs__msg__ObjectTrackC.
typedef struct wauto_vehicle_msgs__msg__ObjectTrackC__Sequence
{
  wauto_vehicle_msgs__msg__ObjectTrackC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_vehicle_msgs__msg__ObjectTrackC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__STRUCT_H_
