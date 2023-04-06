// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wauto_control_msgs:msg/CarTrajectory.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__FUNCTIONS_H_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wauto_control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wauto_control_msgs/msg/detail/car_trajectory__struct.h"

/// Initialize msg/CarTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wauto_control_msgs__msg__CarTrajectory
 * )) before or use
 * wauto_control_msgs__msg__CarTrajectory__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__CarTrajectory__init(wauto_control_msgs__msg__CarTrajectory * msg);

/// Finalize msg/CarTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
void
wauto_control_msgs__msg__CarTrajectory__fini(wauto_control_msgs__msg__CarTrajectory * msg);

/// Create msg/CarTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wauto_control_msgs__msg__CarTrajectory__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
wauto_control_msgs__msg__CarTrajectory *
wauto_control_msgs__msg__CarTrajectory__create();

/// Destroy msg/CarTrajectory message.
/**
 * It calls
 * wauto_control_msgs__msg__CarTrajectory__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
void
wauto_control_msgs__msg__CarTrajectory__destroy(wauto_control_msgs__msg__CarTrajectory * msg);

/// Check for msg/CarTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__CarTrajectory__are_equal(const wauto_control_msgs__msg__CarTrajectory * lhs, const wauto_control_msgs__msg__CarTrajectory * rhs);

/// Copy a msg/CarTrajectory message.
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
wauto_control_msgs__msg__CarTrajectory__copy(
  const wauto_control_msgs__msg__CarTrajectory * input,
  wauto_control_msgs__msg__CarTrajectory * output);

/// Initialize array of msg/CarTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * wauto_control_msgs__msg__CarTrajectory__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__CarTrajectory__Sequence__init(wauto_control_msgs__msg__CarTrajectory__Sequence * array, size_t size);

/// Finalize array of msg/CarTrajectory messages.
/**
 * It calls
 * wauto_control_msgs__msg__CarTrajectory__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
void
wauto_control_msgs__msg__CarTrajectory__Sequence__fini(wauto_control_msgs__msg__CarTrajectory__Sequence * array);

/// Create array of msg/CarTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * wauto_control_msgs__msg__CarTrajectory__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
wauto_control_msgs__msg__CarTrajectory__Sequence *
wauto_control_msgs__msg__CarTrajectory__Sequence__create(size_t size);

/// Destroy array of msg/CarTrajectory messages.
/**
 * It calls
 * wauto_control_msgs__msg__CarTrajectory__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
void
wauto_control_msgs__msg__CarTrajectory__Sequence__destroy(wauto_control_msgs__msg__CarTrajectory__Sequence * array);

/// Check for msg/CarTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__CarTrajectory__Sequence__are_equal(const wauto_control_msgs__msg__CarTrajectory__Sequence * lhs, const wauto_control_msgs__msg__CarTrajectory__Sequence * rhs);

/// Copy an array of msg/CarTrajectory messages.
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
wauto_control_msgs__msg__CarTrajectory__Sequence__copy(
  const wauto_control_msgs__msg__CarTrajectory__Sequence * input,
  wauto_control_msgs__msg__CarTrajectory__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__FUNCTIONS_H_
