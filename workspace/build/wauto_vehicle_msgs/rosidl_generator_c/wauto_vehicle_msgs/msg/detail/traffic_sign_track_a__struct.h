// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_vehicle_msgs:msg/TrafficSignTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGN_TRACK_A__STRUCT_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGN_TRACK_A__STRUCT_H_

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
  * --------------------------
  * TrafficSign_TrackA Message
  * --------------------------
  * The name of the message as defined in the DBC file.
 */
static const char * const wauto_vehicle_msgs__msg__TrafficSignTrackA__NAME = "TrafficSign_TrackA";

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
  wauto_vehicle_msgs__msg__TrafficSignTrackA__CONFIDENCE_3 = 3
};

/// Constant 'CONFIDENCE_2'.
/**
  * speculative
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__CONFIDENCE_2 = 2
};

/// Constant 'CONFIDENCE_1'.
/**
  * highly speculative
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__CONFIDENCE_1 = 1
};

/// Constant 'CONFIDENCE_0'.
/**
  * invalid
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__CONFIDENCE_0 = 0
};

/// Constant 'SIGN_TYPE_0'.
/**
  * Enum for Sign_Type signal
  * Unknown
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_0 = 0
};

/// Constant 'SIGN_TYPE_1'.
/**
  * Speed Limit (MPH)
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_1 = 1
};

/// Constant 'SIGN_TYPE_2'.
/**
  * Speed Limit (KPH)
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_2 = 2
};

/// Constant 'SIGN_TYPE_3'.
/**
  * Stop
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_3 = 3
};

/// Constant 'SIGN_TYPE_4'.
/**
  * Yield
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_4 = 4
};

/// Constant 'SIGN_TYPE_5'.
/**
  * No Left Turn
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_5 = 5
};

/// Constant 'SIGN_TYPE_6'.
/**
  * No Right Turn
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_6 = 6
};

/// Constant 'SIGN_TYPE_7'.
/**
  * Do Not Enter
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_7 = 7
};

/// Constant 'SIGN_TYPE_8'.
/**
  * Left Turn Only
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_8 = 8
};

/// Constant 'SIGN_TYPE_9'.
/**
  * Right Turn Only
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_9 = 9
};

/// Constant 'SIGN_TYPE_10'.
/**
  * Railroad Crossing
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_10 = 10
};

/// Constant 'SIGN_TYPE_11'.
/**
  * Crosswalk
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_11 = 11
};

/// Constant 'SIGN_TYPE_12'.
/**
  * No Turn On Red
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_12 = 12
};

/// Constant 'SIGN_TYPE_13'.
/**
  * No U-Turn
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_13 = 13
};

/// Constant 'SIGN_TYPE_14'.
/**
  * One Way (Left)
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_14 = 14
};

/// Constant 'SIGN_TYPE_15'.
/**
  * One Way (Right)
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_15 = 15
};

/// Constant 'SIGN_TYPE_16'.
/**
  * No Parking
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_16 = 16
};

/// Constant 'SIGN_TYPE_17'.
/**
  * Handicap Parking
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA__SIGN_TYPE_17 = 17
};

/// Struct defined in msg/TrafficSignTrackA in the package wauto_vehicle_msgs.
/**
  * ----------------------------------------------
  * This is an auto generated file. DO NOT EDIT!!!
  * ----------------------------------------------
 */
typedef struct wauto_vehicle_msgs__msg__TrafficSignTrackA
{
  /// -------
  /// Signals
  /// -------
  /// Rolling_Count
  uint8_t rolling_count;
  /// SignObjectID
  uint8_t signobjectid;
  /// Confidence
  uint8_t confidence;
  /// LongPos
  int16_t longpos;
  /// Height_Above_Ground
  uint8_t height_above_ground;
  /// LatPos
  int16_t latpos;
  /// Sign_Type
  uint8_t sign_type;
  /// Sign_Value
  uint8_t sign_value;
} wauto_vehicle_msgs__msg__TrafficSignTrackA;

// Struct for a sequence of wauto_vehicle_msgs__msg__TrafficSignTrackA.
typedef struct wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence
{
  wauto_vehicle_msgs__msg__TrafficSignTrackA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGN_TRACK_A__STRUCT_H_
