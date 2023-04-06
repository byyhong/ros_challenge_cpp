// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wauto_control_msgs:msg/CarFlatData.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__FUNCTIONS_H_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wauto_control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wauto_control_msgs/msg/detail/car_flat_data__struct.h"

/// Initialize msg/CarFlatData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wauto_control_msgs__msg__CarFlatData
 * )) before or use
 * wauto_control_msgs__msg__CarFlatData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__CarFlatData__init(wauto_control_msgs__msg__CarFlatData * msg);

/// Finalize msg/CarFlatData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
void
wauto_control_msgs__msg__CarFlatData__fini(wauto_control_msgs__msg__CarFlatData * msg);

/// Create msg/CarFlatData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wauto_control_msgs__msg__CarFlatData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
wauto_control_msgs__msg__CarFlatData *
wauto_control_msgs__msg__CarFlatData__create();

/// Destroy msg/CarFlatData message.
/**
 * It calls
 * wauto_control_msgs__msg__CarFlatData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
void
wauto_control_msgs__msg__CarFlatData__destroy(wauto_control_msgs__msg__CarFlatData * msg);

/// Check for msg/CarFlatData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__CarFlatData__are_equal(const wauto_control_msgs__msg__CarFlatData * lhs, const wauto_control_msgs__msg__CarFlatData * rhs);

/// Copy a msg/CarFlatData message.
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
wauto_control_msgs__msg__CarFlatData__copy(
  const wauto_control_msgs__msg__CarFlatData * input,
  wauto_control_msgs__msg__CarFlatData * output);

/// Initialize array of msg/CarFlatData messages.
/**
 * It allocates the memory for the number of elements and calls
 * wauto_control_msgs__msg__CarFlatData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__CarFlatData__Sequence__init(wauto_control_msgs__msg__CarFlatData__Sequence * array, size_t size);

/// Finalize array of msg/CarFlatData messages.
/**
 * It calls
 * wauto_control_msgs__msg__CarFlatData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
void
wauto_control_msgs__msg__CarFlatData__Sequence__fini(wauto_control_msgs__msg__CarFlatData__Sequence * array);

/// Create array of msg/CarFlatData messages.
/**
 * It allocates the memory for the array and calls
 * wauto_control_msgs__msg__CarFlatData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
wauto_control_msgs__msg__CarFlatData__Sequence *
wauto_control_msgs__msg__CarFlatData__Sequence__create(size_t size);

/// Destroy array of msg/CarFlatData messages.
/**
 * It calls
 * wauto_control_msgs__msg__CarFlatData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
void
wauto_control_msgs__msg__CarFlatData__Sequence__destroy(wauto_control_msgs__msg__CarFlatData__Sequence * array);

/// Check for msg/CarFlatData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_control_msgs
bool
wauto_control_msgs__msg__CarFlatData__Sequence__are_equal(const wauto_control_msgs__msg__CarFlatData__Sequence * lhs, const wauto_control_msgs__msg__CarFlatData__Sequence * rhs);

/// Copy an array of msg/CarFlatData messages.
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
wauto_control_msgs__msg__CarFlatData__Sequence__copy(
  const wauto_control_msgs__msg__CarFlatData__Sequence * input,
  wauto_control_msgs__msg__CarFlatData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__FUNCTIONS_H_
