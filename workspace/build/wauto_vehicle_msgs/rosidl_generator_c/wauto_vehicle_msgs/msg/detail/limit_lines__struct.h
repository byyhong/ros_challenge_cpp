// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_vehicle_msgs:msg/LimitLines.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINES__STRUCT_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINES__STRUCT_H_

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
  * ------------------
  * LimitLines Message
  * ------------------
  * The name of the message as defined in the DBC file.
 */
static const char * const wauto_vehicle_msgs__msg__LimitLines__NAME = "LimitLines";

/// Struct defined in msg/LimitLines in the package wauto_vehicle_msgs.
/**
  * ----------------------------------------------
  * This is an auto generated file. DO NOT EDIT!!!
  * ----------------------------------------------
 */
typedef struct wauto_vehicle_msgs__msg__LimitLines
{
  /// -------
  /// Signals
  /// -------
  /// Rolling_Count
  uint8_t rolling_count;
  /// Current_Limit_Line_Count
  uint8_t current_limit_line_count;
  /// Observation_Time_of_Hour
  uint16_t observation_time_of_hour;
} wauto_vehicle_msgs__msg__LimitLines;

// Struct for a sequence of wauto_vehicle_msgs__msg__LimitLines.
typedef struct wauto_vehicle_msgs__msg__LimitLines__Sequence
{
  wauto_vehicle_msgs__msg__LimitLines * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_vehicle_msgs__msg__LimitLines__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINES__STRUCT_H_
