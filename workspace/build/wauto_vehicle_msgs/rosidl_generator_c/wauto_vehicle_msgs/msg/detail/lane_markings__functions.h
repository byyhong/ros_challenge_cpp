// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wauto_vehicle_msgs:msg/LaneMarkings.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKINGS__FUNCTIONS_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKINGS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wauto_vehicle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wauto_vehicle_msgs/msg/detail/lane_markings__struct.h"

/// Initialize msg/LaneMarkings message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wauto_vehicle_msgs__msg__LaneMarkings
 * )) before or use
 * wauto_vehicle_msgs__msg__LaneMarkings__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__LaneMarkings__init(wauto_vehicle_msgs__msg__LaneMarkings * msg);

/// Finalize msg/LaneMarkings message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__LaneMarkings__fini(wauto_vehicle_msgs__msg__LaneMarkings * msg);

/// Create msg/LaneMarkings message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wauto_vehicle_msgs__msg__LaneMarkings__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
wauto_vehicle_msgs__msg__LaneMarkings *
wauto_vehicle_msgs__msg__LaneMarkings__create();

/// Destroy msg/LaneMarkings message.
/**
 * It calls
 * wauto_vehicle_msgs__msg__LaneMarkings__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__LaneMarkings__destroy(wauto_vehicle_msgs__msg__LaneMarkings * msg);

/// Check for msg/LaneMarkings message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__LaneMarkings__are_equal(const wauto_vehicle_msgs__msg__LaneMarkings * lhs, const wauto_vehicle_msgs__msg__LaneMarkings * rhs);

/// Copy a msg/LaneMarkings message.
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
wauto_vehicle_msgs__msg__LaneMarkings__copy(
  const wauto_vehicle_msgs__msg__LaneMarkings * input,
  wauto_vehicle_msgs__msg__LaneMarkings * output);

/// Initialize array of msg/LaneMarkings messages.
/**
 * It allocates the memory for the number of elements and calls
 * wauto_vehicle_msgs__msg__LaneMarkings__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__LaneMarkings__Sequence__init(wauto_vehicle_msgs__msg__LaneMarkings__Sequence * array, size_t size);

/// Finalize array of msg/LaneMarkings messages.
/**
 * It calls
 * wauto_vehicle_msgs__msg__LaneMarkings__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__LaneMarkings__Sequence__fini(wauto_vehicle_msgs__msg__LaneMarkings__Sequence * array);

/// Create array of msg/LaneMarkings messages.
/**
 * It allocates the memory for the array and calls
 * wauto_vehicle_msgs__msg__LaneMarkings__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
wauto_vehicle_msgs__msg__LaneMarkings__Sequence *
wauto_vehicle_msgs__msg__LaneMarkings__Sequence__create(size_t size);

/// Destroy array of msg/LaneMarkings messages.
/**
 * It calls
 * wauto_vehicle_msgs__msg__LaneMarkings__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__LaneMarkings__Sequence__destroy(wauto_vehicle_msgs__msg__LaneMarkings__Sequence * array);

/// Check for msg/LaneMarkings message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__LaneMarkings__Sequence__are_equal(const wauto_vehicle_msgs__msg__LaneMarkings__Sequence * lhs, const wauto_vehicle_msgs__msg__LaneMarkings__Sequence * rhs);

/// Copy an array of msg/LaneMarkings messages.
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
wauto_vehicle_msgs__msg__LaneMarkings__Sequence__copy(
  const wauto_vehicle_msgs__msg__LaneMarkings__Sequence * input,
  wauto_vehicle_msgs__msg__LaneMarkings__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKINGS__FUNCTIONS_H_
