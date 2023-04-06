// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackB.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__FUNCTIONS_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wauto_vehicle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wauto_vehicle_msgs/msg/detail/object_track_b__struct.h"

/// Initialize msg/ObjectTrackB message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wauto_vehicle_msgs__msg__ObjectTrackB
 * )) before or use
 * wauto_vehicle_msgs__msg__ObjectTrackB__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__ObjectTrackB__init(wauto_vehicle_msgs__msg__ObjectTrackB * msg);

/// Finalize msg/ObjectTrackB message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__ObjectTrackB__fini(wauto_vehicle_msgs__msg__ObjectTrackB * msg);

/// Create msg/ObjectTrackB message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wauto_vehicle_msgs__msg__ObjectTrackB__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
wauto_vehicle_msgs__msg__ObjectTrackB *
wauto_vehicle_msgs__msg__ObjectTrackB__create();

/// Destroy msg/ObjectTrackB message.
/**
 * It calls
 * wauto_vehicle_msgs__msg__ObjectTrackB__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__ObjectTrackB__destroy(wauto_vehicle_msgs__msg__ObjectTrackB * msg);

/// Check for msg/ObjectTrackB message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__ObjectTrackB__are_equal(const wauto_vehicle_msgs__msg__ObjectTrackB * lhs, const wauto_vehicle_msgs__msg__ObjectTrackB * rhs);

/// Copy a msg/ObjectTrackB message.
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
wauto_vehicle_msgs__msg__ObjectTrackB__copy(
  const wauto_vehicle_msgs__msg__ObjectTrackB * input,
  wauto_vehicle_msgs__msg__ObjectTrackB * output);

/// Initialize array of msg/ObjectTrackB messages.
/**
 * It allocates the memory for the number of elements and calls
 * wauto_vehicle_msgs__msg__ObjectTrackB__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__init(wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * array, size_t size);

/// Finalize array of msg/ObjectTrackB messages.
/**
 * It calls
 * wauto_vehicle_msgs__msg__ObjectTrackB__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__fini(wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * array);

/// Create array of msg/ObjectTrackB messages.
/**
 * It allocates the memory for the array and calls
 * wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence *
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__create(size_t size);

/// Destroy array of msg/ObjectTrackB messages.
/**
 * It calls
 * wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__destroy(wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * array);

/// Check for msg/ObjectTrackB message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__are_equal(const wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * lhs, const wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * rhs);

/// Copy an array of msg/ObjectTrackB messages.
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
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__copy(
  const wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * input,
  wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__FUNCTIONS_H_
