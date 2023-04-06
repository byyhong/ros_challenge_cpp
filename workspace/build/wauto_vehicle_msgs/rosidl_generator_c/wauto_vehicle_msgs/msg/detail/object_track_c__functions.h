// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackC.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__FUNCTIONS_H_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wauto_vehicle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wauto_vehicle_msgs/msg/detail/object_track_c__struct.h"

/// Initialize msg/ObjectTrackC message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wauto_vehicle_msgs__msg__ObjectTrackC
 * )) before or use
 * wauto_vehicle_msgs__msg__ObjectTrackC__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__ObjectTrackC__init(wauto_vehicle_msgs__msg__ObjectTrackC * msg);

/// Finalize msg/ObjectTrackC message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__ObjectTrackC__fini(wauto_vehicle_msgs__msg__ObjectTrackC * msg);

/// Create msg/ObjectTrackC message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wauto_vehicle_msgs__msg__ObjectTrackC__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
wauto_vehicle_msgs__msg__ObjectTrackC *
wauto_vehicle_msgs__msg__ObjectTrackC__create();

/// Destroy msg/ObjectTrackC message.
/**
 * It calls
 * wauto_vehicle_msgs__msg__ObjectTrackC__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__ObjectTrackC__destroy(wauto_vehicle_msgs__msg__ObjectTrackC * msg);

/// Check for msg/ObjectTrackC message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__ObjectTrackC__are_equal(const wauto_vehicle_msgs__msg__ObjectTrackC * lhs, const wauto_vehicle_msgs__msg__ObjectTrackC * rhs);

/// Copy a msg/ObjectTrackC message.
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
wauto_vehicle_msgs__msg__ObjectTrackC__copy(
  const wauto_vehicle_msgs__msg__ObjectTrackC * input,
  wauto_vehicle_msgs__msg__ObjectTrackC * output);

/// Initialize array of msg/ObjectTrackC messages.
/**
 * It allocates the memory for the number of elements and calls
 * wauto_vehicle_msgs__msg__ObjectTrackC__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__init(wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * array, size_t size);

/// Finalize array of msg/ObjectTrackC messages.
/**
 * It calls
 * wauto_vehicle_msgs__msg__ObjectTrackC__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__fini(wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * array);

/// Create array of msg/ObjectTrackC messages.
/**
 * It allocates the memory for the array and calls
 * wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence *
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__create(size_t size);

/// Destroy array of msg/ObjectTrackC messages.
/**
 * It calls
 * wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
void
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__destroy(wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * array);

/// Check for msg/ObjectTrackC message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wauto_vehicle_msgs
bool
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__are_equal(const wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * lhs, const wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * rhs);

/// Copy an array of msg/ObjectTrackC messages.
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
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__copy(
  const wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * input,
  wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__FUNCTIONS_H_
