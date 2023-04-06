// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wauto_vehicle_msgs:msg/VehicleLocation.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_LOCATION__STRUCT_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_LOCATION__STRUCT_H_

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
  * -----------------------
  * VehicleLocation Message
  * -----------------------
  * The name of the message as defined in the DBC file.
 */
static const char * const wauto_vehicle_msgs__msg__VehicleLocation__NAME = "VehicleLocation";

/// Struct defined in msg/VehicleLocation in the package wauto_vehicle_msgs.
/**
  * ----------------------------------------------
  * This is an auto generated file. DO NOT EDIT!!!
  * ----------------------------------------------
 */
typedef struct wauto_vehicle_msgs__msg__VehicleLocation
{
  /// -------
  /// Signals
  /// -------
  /// VehicleLatitude
  int32_t vehiclelatitude;
  /// VehicleLongitude
  int32_t vehiclelongitude;
} wauto_vehicle_msgs__msg__VehicleLocation;

// Struct for a sequence of wauto_vehicle_msgs__msg__VehicleLocation.
typedef struct wauto_vehicle_msgs__msg__VehicleLocation__Sequence
{
  wauto_vehicle_msgs__msg__VehicleLocation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wauto_vehicle_msgs__msg__VehicleLocation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_LOCATION__STRUCT_H_
