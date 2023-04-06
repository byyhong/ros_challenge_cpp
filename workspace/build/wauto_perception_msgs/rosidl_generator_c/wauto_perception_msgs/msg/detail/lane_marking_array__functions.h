// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wauto_perception_msgs:msg/LaneMarkingArray.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__FUNCTIONS_H_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wauto_perception_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wauto_perception_msgs/msg/detail/lane_marking_array__struct.h"

/// Initialize msg/LaneMarkingArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wauto_perception_msgs__msg__LaneMarkingArray
 * )) before or use
 * wauto_perception_msgs__msg__LaneMarkingArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
bool
wauto_perception_msgs__msg__LaneMarkingArray__init(wauto_perception_msgs__msg__LaneMarkingArray * msg);

/// Finalize msg/LaneMarkingArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
void
wauto_perception_msgs__msg__LaneMarkingArray__fini(wauto_perception_msgs__msg__LaneMarkingArray * msg);

/// Create msg/LaneMarkingArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wauto_perception_msgs__msg__LaneMarkingArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
wauto_perception_msgs__msg__LaneMarkingArray *
wauto_perception_msgs__msg__LaneMarkingArray__create();

/// Destroy msg/LaneMarkingArray message.
/**
 * It calls
 * wauto_perception_msgs__msg__LaneMarkingArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
void
wauto_perception_msgs__msg__LaneMarkingArray__destroy(wauto_perception_msgs__msg__LaneMarkingArray * msg);

/// Check for msg/LaneMarkingArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
bool
wauto_perception_msgs__msg__LaneMarkingArray__are_equal(const wauto_perception_msgs__msg__LaneMarkingArray * lhs, const wauto_perception_msgs__msg__LaneMarkingArray * rhs);

/// Copy a msg/LaneMarkingArray message.
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
wauto_perception_msgs__msg__LaneMarkingArray__copy(
  const wauto_perception_msgs__msg__LaneMarkingArray * input,
  wauto_perception_msgs__msg__LaneMarkingArray * output);

/// Initialize array of msg/LaneMarkingArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * wauto_perception_msgs__msg__LaneMarkingArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
bool
wauto_perception_msgs__msg__LaneMarkingArray__Sequence__init(wauto_perception_msgs__msg__LaneMarkingArray__Sequence * array, size_t size);

/// Finalize array of msg/LaneMarkingArray messages.
/**
 * It calls
 * wauto_perception_msgs__msg__LaneMarkingArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
void
wauto_perception_msgs__msg__LaneMarkingArray__Sequence__fini(wauto_perception_msgs__msg__LaneMarkingArray__Sequence * array);

/// Create array of msg/LaneMarkingArray messages.
/**
 * It allocates the memory for the array and calls
 * wauto_perception_msgs__msg__LaneMarkingArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
wauto_perception_msgs__msg__LaneMarkingArray__Sequence *
wauto_perception_msgs__msg__LaneMarkingArray__Sequence__create(size_t size);

/// Destroy array of msg/LaneMarkingArray messages.
/**
 * It calls
 * wauto_perception_msgs__msg__LaneMarkingArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
void
wauto_perception_msgs__msg__LaneMarkingArray__Sequence__destroy(wauto_perception_msgs__msg__LaneMarkingArray__Sequence * array);

/// Check for msg/LaneMarkingArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_perception_msgs
bool
wauto_perception_msgs__msg__LaneMarkingArray__Sequence__are_equal(const wauto_perception_msgs__msg__LaneMarkingArray__Sequence * lhs, const wauto_perception_msgs__msg__LaneMarkingArray__Sequence * rhs);

/// Copy an array of msg/LaneMarkingArray messages.
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
wauto_perception_msgs__msg__LaneMarkingArray__Sequence__copy(
  const wauto_perception_msgs__msg__LaneMarkingArray__Sequence * input,
  wauto_perception_msgs__msg__LaneMarkingArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY__FUNCTIONS_H_
