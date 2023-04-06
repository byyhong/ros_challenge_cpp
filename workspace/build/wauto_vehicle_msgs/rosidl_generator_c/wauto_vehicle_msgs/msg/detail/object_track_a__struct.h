// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_A__STRUCT_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_A__STRUCT_H_

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
  * Object_TrackA Message
  * ---------------------
  * The name of the message as defined in the DBC file.
 */
static const char * const wauto_vehicle_msgs__msg__ObjectTrackA__NAME = "Object_TrackA";

/// Constant 'OBJOBJECTTYPE_7'.
/**
  * -----
  * Enums
  * -----
  * Enum for ObjObjectType signal
  * Automatic Gate / Railroad
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__OBJOBJECTTYPE_7 = 7
};

/// Constant 'OBJOBJECTTYPE_4'.
/**
  * pedestrian
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__OBJOBJECTTYPE_4 = 4
};

/// Constant 'OBJOBJECTTYPE_3'.
/**
  * motocycle  / bicycle
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__OBJOBJECTTYPE_3 = 3
};

/// Constant 'OBJOBJECTTYPE_2'.
/**
  * Large vehicle (semi)
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__OBJOBJECTTYPE_2 = 2
};

/// Constant 'OBJOBJECTTYPE_1'.
/**
  * 4 Wheel Vehicle (car, small trk)
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__OBJOBJECTTYPE_1 = 1
};

/// Constant 'OBJOBJECTTYPE_0'.
/**
  * Unknown
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__OBJOBJECTTYPE_0 = 0
};

/// Constant 'OBJOBJECTTYPE_5'.
/**
  * fixed object / barricade
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__OBJOBJECTTYPE_5 = 5
};

/// Constant 'OBJOBJECTTYPE_6'.
/**
  * animal
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__OBJOBJECTTYPE_6 = 6
};

/// Constant 'CONFIDENCE_3'.
/**
  * Enum for Confidence signal
  * confident
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__CONFIDENCE_3 = 3
};

/// Constant 'CONFIDENCE_2'.
/**
  * speculative
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__CONFIDENCE_2 = 2
};

/// Constant 'CONFIDENCE_1'.
/**
  * highly speculative
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__CONFIDENCE_1 = 1
};

/// Constant 'CONFIDENCE_0'.
/**
  * invalid
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__CONFIDENCE_0 = 0
};

/// Constant 'RELATIVE_LANE_0'.
/**
  * Enum for Relative_Lane signal
  * Unknown
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__RELATIVE_LANE_0 = 0
};

/// Constant 'RELATIVE_LANE_1'.
/**
  * Host Lane
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__RELATIVE_LANE_1 = 1
};

/// Constant 'RELATIVE_LANE_3'.
/**
  * Left Shoulder
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__RELATIVE_LANE_3 = 3
};

/// Constant 'RELATIVE_LANE_4'.
/**
  * Left Lane
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__RELATIVE_LANE_4 = 4
};

/// Constant 'RELATIVE_LANE_5'.
/**
  * Right Lane
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__RELATIVE_LANE_5 = 5
};

/// Constant 'RELATIVE_LANE_6'.
/**
  * Right Shoulder
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__RELATIVE_LANE_6 = 6
};

/// Constant 'RELATIVE_LANE_7'.
/**
  * Overhead
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__RELATIVE_LANE_7 = 7
};

/// Constant 'RELATIVE_LANE_2'.
/**
  * Opposing Lane
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__RELATIVE_LANE_2 = 2
};

/// Constant 'RELATIVE_LANE_8'.
/**
  * Off Road
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__RELATIVE_LANE_8 = 8
};

/// Constant 'RELATIVE_LANE_9'.
/**
  * Rightbound Cross Traffic Lane
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__RELATIVE_LANE_9 = 9
};

/// Constant 'RELATIVE_LANE_10'.
/**
  * Leftbound Cross Traffic Lane
 */
enum
{
  wauto_vehicle_msgs__msg__ObjectTrackA__RELATIVE_LANE_10 = 10
};

/// Struct defined in msg/ObjectTrackA in the package wauto_vehicle_msgs.
/**
  * ----------------------------------------------
  * This is an auto generated file. DO NOT EDIT!!!
  * ----------------------------------------------
 */
typedef struct wauto_vehicle_msgs__msg__ObjectTrackA
{
  /// -------
  /// Signals
  /// -------
  /// Rolling_Count
  uint8_t rolling_count;
  /// ObjObjectID
  uint8_t objobjectid;
  /// ObjObjectType
  uint8_t objobjecttype;
  /// LongPos
  int16_t longpos;
  /// LatPos
  int16_t latpos;
  /// RelLongVel
  int16_t rellongvel;
  /// RelLatVel
  int16_t rellatvel;
  /// Confidence
  uint8_t confidence;
  /// Relative_Lane
  uint8_t relative_lane;
} wauto_vehicle_msgs__msg__ObjectTrackA;

// Struct for a sequence of wauto_vehicle_msgs__msg__ObjectTrackA.
typedef struct wauto_vehicle_msgs__msg__ObjectTrackA__Sequence
{
  wauto_vehicle_msgs__msg__ObjectTrackA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_vehicle_msgs__msg__ObjectTrackA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_A__STRUCT_H_
