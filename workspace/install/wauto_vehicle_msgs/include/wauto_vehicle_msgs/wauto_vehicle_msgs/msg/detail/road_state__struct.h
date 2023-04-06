// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_vehicle_msgs:msg/RoadState.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__ROAD_STATE__STRUCT_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__ROAD_STATE__STRUCT_H_

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
  * -----------------
  * RoadState Message
  * -----------------
  * The name of the message as defined in the DBC file.
 */
static const char * const wauto_vehicle_msgs__msg__RoadState__NAME = "RoadState";

/// Constant 'LLNDISTANCEVALID_1'.
/**
  * -----
  * Enums
  * -----
  * Enum for LLnDistanceValid signal
  * Invalid
 */
enum
{
  wauto_vehicle_msgs__msg__RoadState__LLNDISTANCEVALID_1 = 1
};

/// Constant 'LLNDISTANCEVALID_0'.
/**
  * Valid
 */
enum
{
  wauto_vehicle_msgs__msg__RoadState__LLNDISTANCEVALID_0 = 0
};

/// Constant 'RLNDISTANCEVALID_1'.
/**
  * Enum for RLnDistanceValid signal
  * Invalid
 */
enum
{
  wauto_vehicle_msgs__msg__RoadState__RLNDISTANCEVALID_1 = 1
};

/// Constant 'RLNDISTANCEVALID_0'.
/**
  * Valid
 */
enum
{
  wauto_vehicle_msgs__msg__RoadState__RLNDISTANCEVALID_0 = 0
};

/// Struct defined in msg/RoadState in the package wauto_vehicle_msgs.
/**
  * ----------------------------------------------
  * This is an auto generated file. DO NOT EDIT!!!
  * ----------------------------------------------
 */
typedef struct wauto_vehicle_msgs__msg__RoadState
{
  /// -------
  /// Signals
  /// -------
  /// Rolling_Count
  uint8_t rolling_count;
  /// Active_Traffic_Signal_Head_ID
  uint8_t active_traffic_signal_head_id;
  /// Current_Observed_Speed_Limit
  uint8_t current_observed_speed_limit;
  /// Next_Observed_Speed_Limit
  uint8_t next_observed_speed_limit;
  /// Next_Observed_Speed_Limit_Longit
  uint8_t next_observed_speed_limit_longit;
  /// Active_Lane_Number
  uint8_t active_lane_number;
  /// Left_Lane_Marking_ID
  uint8_t left_lane_marking_id;
  /// Right_Lane_Marking_ID
  uint8_t right_lane_marking_id;
  /// LLnDistanceValid
  uint8_t llndistancevalid;
  /// DistToLLnEdge
  uint8_t disttollnedge;
  /// RLnDistanceValid
  uint8_t rlndistancevalid;
  /// DistToRLnEdge
  uint8_t disttorlnedge;
} wauto_vehicle_msgs__msg__RoadState;

// Struct for a sequence of wauto_vehicle_msgs__msg__RoadState.
typedef struct wauto_vehicle_msgs__msg__RoadState__Sequence
{
  wauto_vehicle_msgs__msg__RoadState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_vehicle_msgs__msg__RoadState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__ROAD_STATE__STRUCT_H_
