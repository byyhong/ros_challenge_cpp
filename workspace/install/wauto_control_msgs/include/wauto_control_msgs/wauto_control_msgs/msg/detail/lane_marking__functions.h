// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wauto_control_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__FUNCTIONS_H_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wauto_control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wauto_control_msgs/msg/detail/lane_marking__struct.h"

/// Initialize msg/LaneMarking message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wauto_control_msgs__msg__LaneMarking
 * )) before or use
 * wauto_control_msgs__msg__LaneMarking__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__LaneMarking__init(wauto_control_msgs__msg__LaneMarking * msg);

/// Finalize msg/LaneMarking message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
void
wauto_control_msgs__msg__LaneMarking__fini(wauto_control_msgs__msg__LaneMarking * msg);

/// Create msg/LaneMarking message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wauto_control_msgs__msg__LaneMarking__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
wauto_control_msgs__msg__LaneMarking *
wauto_control_msgs__msg__LaneMarking__create();

/// Destroy msg/LaneMarking message.
/**
 * It calls
 * wauto_control_msgs__msg__LaneMarking__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
void
wauto_control_msgs__msg__LaneMarking__destroy(wauto_control_msgs__msg__LaneMarking * msg);

/// Check for msg/LaneMarking message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__LaneMarking__are_equal(const wauto_control_msgs__msg__LaneMarking * lhs, const wauto_control_msgs__msg__LaneMarking * rhs);

/// Copy a msg/LaneMarking message.
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
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__LaneMarking__copy(
  const wauto_control_msgs__msg__LaneMarking * input,
  wauto_control_msgs__msg__LaneMarking * output);

/// Initialize array of msg/LaneMarking messages.
/**
 * It allocates the memory for the number of elements and calls
 * wauto_control_msgs__msg__LaneMarking__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__LaneMarking__Sequence__init(wauto_control_msgs__msg__LaneMarking__Sequence * array, size_t size);

/// Finalize array of msg/LaneMarking messages.
/**
 * It calls
 * wauto_control_msgs__msg__LaneMarking__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
void
wauto_control_msgs__msg__LaneMarking__Sequence__fini(wauto_control_msgs__msg__LaneMarking__Sequence * array);

/// Create array of msg/LaneMarking messages.
/**
 * It allocates the memory for the array and calls
 * wauto_control_msgs__msg__LaneMarking__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
wauto_control_msgs__msg__LaneMarking__Sequence *
wauto_control_msgs__msg__LaneMarking__Sequence__create(size_t size);

/// Destroy array of msg/LaneMarking messages.
/**
 * It calls
 * wauto_control_msgs__msg__LaneMarking__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
void
wauto_control_msgs__msg__LaneMarking__Sequence__destroy(wauto_control_msgs__msg__LaneMarking__Sequence * array);

/// Check for msg/LaneMarking message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__LaneMarking__Sequence__are_equal(const wauto_control_msgs__msg__LaneMarking__Sequence * lhs, const wauto_control_msgs__msg__LaneMarking__Sequence * rhs);

/// Copy an array of msg/LaneMarking messages.
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
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__LaneMarking__Sequence__copy(
  const wauto_control_msgs__msg__LaneMarking__Sequence * input,
  wauto_control_msgs__msg__LaneMarking__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__FUNCTIONS_H_
