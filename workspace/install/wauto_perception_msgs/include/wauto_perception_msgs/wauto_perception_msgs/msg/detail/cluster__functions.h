// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wauto_perception_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__FUNCTIONS_H_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wauto_perception_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wauto_perception_msgs/msg/detail/cluster__struct.h"

/// Initialize msg/Cluster message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wauto_perception_msgs__msg__Cluster
 * )) before or use
 * wauto_perception_msgs__msg__Cluster__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
bool
wauto_perception_msgs__msg__Cluster__init(wauto_perception_msgs__msg__Cluster * msg);

/// Finalize msg/Cluster message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
void
wauto_perception_msgs__msg__Cluster__fini(wauto_perception_msgs__msg__Cluster * msg);

/// Create msg/Cluster message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wauto_perception_msgs__msg__Cluster__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
wauto_perception_msgs__msg__Cluster *
wauto_perception_msgs__msg__Cluster__create();

/// Destroy msg/Cluster message.
/**
 * It calls
 * wauto_perception_msgs__msg__Cluster__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
void
wauto_perception_msgs__msg__Cluster__destroy(wauto_perception_msgs__msg__Cluster * msg);

/// Check for msg/Cluster message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
bool
wauto_perception_msgs__msg__Cluster__are_equal(const wauto_perception_msgs__msg__Cluster * lhs, const wauto_perception_msgs__msg__Cluster * rhs);

/// Copy a msg/Cluster message.
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
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
bool
wauto_perception_msgs__msg__Cluster__copy(
  const wauto_perception_msgs__msg__Cluster * input,
  wauto_perception_msgs__msg__Cluster * output);

/// Initialize array of msg/Cluster messages.
/**
 * It allocates the memory for the number of elements and calls
 * wauto_perception_msgs__msg__Cluster__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
bool
wauto_perception_msgs__msg__Cluster__Sequence__init(wauto_perception_msgs__msg__Cluster__Sequence * array, size_t size);

/// Finalize array of msg/Cluster messages.
/**
 * It calls
 * wauto_perception_msgs__msg__Cluster__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
void
wauto_perception_msgs__msg__Cluster__Sequence__fini(wauto_perception_msgs__msg__Cluster__Sequence * array);

/// Create array of msg/Cluster messages.
/**
 * It allocates the memory for the array and calls
 * wauto_perception_msgs__msg__Cluster__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
wauto_perception_msgs__msg__Cluster__Sequence *
wauto_perception_msgs__msg__Cluster__Sequence__create(size_t size);

/// Destroy array of msg/Cluster messages.
/**
 * It calls
 * wauto_perception_msgs__msg__Cluster__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
void
wauto_perception_msgs__msg__Cluster__Sequence__destroy(wauto_perception_msgs__msg__Cluster__Sequence * array);

/// Check for msg/Cluster message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
bool
wauto_perception_msgs__msg__Cluster__Sequence__are_equal(const wauto_perception_msgs__msg__Cluster__Sequence * lhs, const wauto_perception_msgs__msg__Cluster__Sequence * rhs);

/// Copy an array of msg/Cluster messages.
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
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
bool
wauto_perception_msgs__msg__Cluster__Sequence__copy(
  const wauto_perception_msgs__msg__Cluster__Sequence * input,
  wauto_perception_msgs__msg__Cluster__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__FUNCTIONS_H_
