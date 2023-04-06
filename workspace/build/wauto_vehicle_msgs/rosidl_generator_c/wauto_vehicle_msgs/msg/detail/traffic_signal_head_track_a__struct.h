// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_vehicle_msgs:msg/TrafficSignalHeadTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_HEAD_TRACK_A__STRUCT_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_HEAD_TRACK_A__STRUCT_H_

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
  * --------------------------------
  * TrafficSignalHead_TrackA Message
  * --------------------------------
  * The name of the message as defined in the DBC file.
 */
static const char * const wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__NAME = "TrafficSignalHead_TrackA";

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
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__CONFIDENCE_3 = 3
};

/// Constant 'CONFIDENCE_2'.
/**
  * speculative
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__CONFIDENCE_2 = 2
};

/// Constant 'CONFIDENCE_1'.
/**
  * highly speculative
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__CONFIDENCE_1 = 1
};

/// Constant 'CONFIDENCE_0'.
/**
  * invalid
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__CONFIDENCE_0 = 0
};

/// Constant 'SIGNAL_HEAD_TYPE_0'.
/**
  * Enum for Signal_Head_Type signal
  * Unknown
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__SIGNAL_HEAD_TYPE_0 = 0
};

/// Constant 'SIGNAL_HEAD_TYPE_1'.
/**
  * Other
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__SIGNAL_HEAD_TYPE_1 = 1
};

/// Constant 'SIGNAL_HEAD_TYPE_2'.
/**
  * 2-Light
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__SIGNAL_HEAD_TYPE_2 = 2
};

/// Constant 'SIGNAL_HEAD_TYPE_3'.
/**
  * 3-Light
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__SIGNAL_HEAD_TYPE_3 = 3
};

/// Constant 'SIGNAL_HEAD_TYPE_4'.
/**
  * 4-Light
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__SIGNAL_HEAD_TYPE_4 = 4
};

/// Constant 'SIGNAL_HEAD_TYPE_5'.
/**
  * 5-Light
 */
enum
{
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__SIGNAL_HEAD_TYPE_5 = 5
};

/// Struct defined in msg/TrafficSignalHeadTrackA in the package wauto_vehicle_msgs.
/**
  * ----------------------------------------------
  * This is an auto generated file. DO NOT EDIT!!!
  * ----------------------------------------------
 */
typedef struct wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA
{
  /// -------
  /// Signals
  /// -------
  /// Rolling_Count
  uint8_t rolling_count;
  /// SignalObjectID
  uint8_t signalobjectid;
  /// Height_Above_Ground
  uint8_t height_above_ground;
  /// LongPos
  int16_t longpos;
  /// LatPos
  int16_t latpos;
  /// Confidence
  uint8_t confidence;
  /// Signal_Head_Type
  uint8_t signal_head_type;
  /// IllumLtNone
  uint8_t illumltnone;
  /// IllumLtRedBall
  uint8_t illumltredball;
  /// IllumLtYellowBall
  uint8_t illumltyellowball;
  /// IllumLtGreenBall
  uint8_t illumltgreenball;
  /// IllumLtFlshngRedBall
  uint8_t illumltflshngredball;
  /// IllumLtFlshngYellowBall
  uint8_t illumltflshngyellowball;
  /// IllumLtRedLeftArrow
  uint8_t illumltredleftarrow;
  /// IllumLtYellowLeftArrow
  uint8_t illumltyellowleftarrow;
  /// IllumLtGreenLeftArrow
  uint8_t illumltgreenleftarrow;
  /// IllumLtFlshngRedLeftArrow
  uint8_t illumltflshngredleftarrow;
  /// IllumLtFlshngYellowLeftArrow
  uint8_t illumltflshngyellowleftarrow;
  /// IllumLtRedRightArrow
  uint8_t illumltredrightarrow;
  /// IllumLtYellowRightArrow
  uint8_t illumltyellowrightarrow;
  /// IllumLtGreenRightArrow
  uint8_t illumltgreenrightarrow;
  /// IllumLtFlshngRedRightArrow
  uint8_t illumltflshngredrightarrow;
  /// IllumLtFlshngYellowRightArrow
  uint8_t illumltflshngyellowrightarrow;
} wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA;

// Struct for a sequence of wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA.
typedef struct wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence
{
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_HEAD_TRACK_A__STRUCT_H_
