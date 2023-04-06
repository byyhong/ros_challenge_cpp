// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wauto_vehicle_msgs:msg/VehicleOrientation.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ORIENTATION__FUNCTIONS_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ORIENTATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wauto_vehicle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wauto_vehicle_msgs/msg/detail/vehicle_orientation__struct.h"

/// Initialize msg/VehicleOrientation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wauto_vehicle_msgs__msg__VehicleOrientation
 * )) before or use
 * wauto_vehicle_msgs__msg__VehicleOrientation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__VehicleOrientation__init(wauto_vehicle_msgs__msg__VehicleOrientation * msg);

/// Finalize msg/VehicleOrientation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__VehicleOrientation__fini(wauto_vehicle_msgs__msg__VehicleOrientation * msg);

/// Create msg/VehicleOrientation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wauto_vehicle_msgs__msg__VehicleOrientation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
wauto_vehicle_msgs__msg__VehicleOrientation *
wauto_vehicle_msgs__msg__VehicleOrientation__create();

/// Destroy msg/VehicleOrientation message.
/**
 * It calls
 * wauto_vehicle_msgs__msg__VehicleOrientation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__VehicleOrientation__destroy(wauto_vehicle_msgs__msg__VehicleOrientation * msg);

/// Check for msg/VehicleOrientation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__VehicleOrientation__are_equal(const wauto_vehicle_msgs__msg__VehicleOrientation * lhs, const wauto_vehicle_msgs__msg__VehicleOrientation * rhs);

/// Copy a msg/VehicleOrientation message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__VehicleOrientation__copy(
  const wauto_vehicle_msgs__msg__VehicleOrientation * input,
  wauto_vehicle_msgs__msg__VehicleOrientation * output);

/// Initialize array of msg/VehicleOrientation messages.
/**
 * It allocates the memory for the number of elements and calls
 * wauto_vehicle_msgs__msg__VehicleOrientation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__VehicleOrientation__Sequence__init(wauto_vehicle_msgs__msg__VehicleOrientation__Sequence * array, size_t size);

/// Finalize array of msg/VehicleOrientation messages.
/**
 * It calls
 * wauto_vehicle_msgs__msg__VehicleOrientation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__VehicleOrientation__Sequence__fini(wauto_vehicle_msgs__msg__VehicleOrientation__Sequence * array);

/// Create array of msg/VehicleOrientation messages.
/**
 * It allocates the memory for the array and calls
 * wauto_vehicle_msgs__msg__VehicleOrientation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
wauto_vehicle_msgs__msg__VehicleOrientation__Sequence *
wauto_vehicle_msgs__msg__VehicleOrientation__Sequence__create(size_t size);

/// Destroy array of msg/VehicleOrientation messages.
/**
 * It calls
 * wauto_vehicle_msgs__msg__VehicleOrientation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__VehicleOrientation__Sequence__destroy(wauto_vehicle_msgs__msg__VehicleOrientation__Sequence * array);

/// Check for msg/VehicleOrientation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__VehicleOrientation__Sequence__are_equal(const wauto_vehicle_msgs__msg__VehicleOrientation__Sequence * lhs, const wauto_vehicle_msgs__msg__VehicleOrientation__Sequence * rhs);

/// Copy an array of msg/VehicleOrientation messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__VehicleOrientation__Sequence__copy(
  const wauto_vehicle_msgs__msg__VehicleOrientation__Sequence * input,
  wauto_vehicle_msgs__msg__VehicleOrientation__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_ORIENTATION__FUNCTIONS_H_
