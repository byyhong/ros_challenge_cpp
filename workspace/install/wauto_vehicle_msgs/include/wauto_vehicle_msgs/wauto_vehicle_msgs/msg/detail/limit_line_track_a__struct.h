// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_vehicle_msgs:msg/LimitLineTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINE_TRACK_A__STRUCT_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINE_TRACK_A__STRUCT_H_

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
  * ------------------------
  * LimitLine_TrackA Message
  * ------------------------
  * The name of the message as defined in the DBC file.
 */
static const char * const wauto_vehicle_msgs__msg__LimitLineTrackA__NAME = "LimitLine_TrackA";

/// Constant 'CONFIDENCE_3'.
/**
  * -----
  * Enums
  * -----
  * Enum for Confidence signal
  * confident
 */
enum
{
  wauto_vehicle_msgs__msg__LimitLineTrackA__CONFIDENCE_3 = 3
};

/// Constant 'CONFIDENCE_2'.
/**
  * speculative
 */
enum
{
  wauto_vehicle_msgs__msg__LimitLineTrackA__CONFIDENCE_2 = 2
};

/// Constant 'CONFIDENCE_1'.
/**
  * highly speculative
 */
enum
{
  wauto_vehicle_msgs__msg__LimitLineTrackA__CONFIDENCE_1 = 1
};

/// Constant 'CONFIDENCE_0'.
/**
  * invalid
 */
enum
{
  wauto_vehicle_msgs__msg__LimitLineTrackA__CONFIDENCE_0 = 0
};

/// Constant 'RELATIVE_LANE_0'.
/**
  * Enum for Relative_Lane signal
  * Unknown
 */
enum
{
  wauto_vehicle_msgs__msg__LimitLineTrackA__RELATIVE_LANE_0 = 0
};

/// Constant 'RELATIVE_LANE_1'.
/**
  * Host Lane
 */
enum
{
  wauto_vehicle_msgs__msg__LimitLineTrackA__RELATIVE_LANE_1 = 1
};

/// Constant 'RELATIVE_LANE_3'.
/**
  * Left Shoulder
 */
enum
{
  wauto_vehicle_msgs__msg__LimitLineTrackA__RELATIVE_LANE_3 = 3
};

/// Constant 'RELATIVE_LANE_4'.
/**
  * Left Lane
 */
enum
{
  wauto_vehicle_msgs__msg__LimitLineTrackA__RELATIVE_LANE_4 = 4
};

/// Constant 'RELATIVE_LANE_5'.
/**
  * Right Lane
 */
enum
{
  wauto_vehicle_msgs__msg__LimitLineTrackA__RELATIVE_LANE_5 = 5
};

/// Constant 'RELATIVE_LANE_6'.
/**
  * Right Shoulder
 */
enum
{
  wauto_vehicle_msgs__msg__LimitLineTrackA__RELATIVE_LANE_6 = 6
};

/// Constant 'RELATIVE_LANE_7'.
/**
  * Overhead
 */
enum
{
  wauto_vehicle_msgs__msg__LimitLineTrackA__RELATIVE_LANE_7 = 7
};

/// Struct defined in msg/LimitLineTrackA in the package wauto_vehicle_msgs.
/**
  * ----------------------------------------------
  * This is an auto generated file. DO NOT EDIT!!!
  * ----------------------------------------------
 */
typedef struct wauto_vehicle_msgs__msg__LimitLineTrackA
{
  /// -------
  /// Signals
  /// -------
  /// Rolling_Count
  uint8_t rolling_count;
  /// LineObjectID
  uint8_t lineobjectid;
  /// Confidence
  uint8_t confidence;
  /// Longitudinal_Length
  uint8_t longitudinal_length;
  /// Width
  uint8_t width;
  /// LongPos
  int16_t longpos;
  /// LatPos
  int16_t latpos;
  /// Relative_Lane
  uint8_t relative_lane;
} wauto_vehicle_msgs__msg__LimitLineTrackA;

// Struct for a sequence of wauto_vehicle_msgs__msg__LimitLineTrackA.
typedef struct wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence
{
  wauto_vehicle_msgs__msg__LimitLineTrackA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINE_TRACK_A__STRUCT_H_
