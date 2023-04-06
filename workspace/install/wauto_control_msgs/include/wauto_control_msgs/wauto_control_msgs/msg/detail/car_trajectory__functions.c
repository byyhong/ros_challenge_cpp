// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_control_msgs:msg/CarTrajectory.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/car_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `u`
#include "wauto_control_msgs/msg/detail/car_input__functions.h"
// Member `x`
#include "wauto_control_msgs/msg/detail/car_state__functions.h"

bool
wauto_control_msgs__msg__CarTrajectory__init(wauto_control_msgs__msg__CarTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // u
  if (!wauto_control_msgs__msg__CarInput__init(&msg->u)) {
    wauto_control_msgs__msg__CarTrajectory__fini(msg);
    return false;
  }
  // x
  if (!wauto_control_msgs__msg__CarState__init(&msg->x)) {
    wauto_control_msgs__msg__CarTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
wauto_control_msgs__msg__CarTrajectory__fini(wauto_control_msgs__msg__CarTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // u
  wauto_control_msgs__msg__CarInput__fini(&msg->u);
  // x
  wauto_control_msgs__msg__CarState__fini(&msg->x);
}

bool
wauto_control_msgs__msg__CarTrajectory__are_equal(const wauto_control_msgs__msg__CarTrajectory * lhs, const wauto_control_msgs__msg__CarTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // u
  if (!wauto_control_msgs__msg__CarInput__are_equal(
      &(lhs->u), &(rhs->u)))
  {
    return false;
  }
  // x
  if (!wauto_control_msgs__msg__CarState__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  return true;
}

bool
wauto_control_msgs__msg__CarTrajectory__copy(
  const wauto_control_msgs__msg__CarTrajectory * input,
  wauto_control_msgs__msg__CarTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // u
  if (!wauto_control_msgs__msg__CarInput__copy(
      &(input->u), &(output->u)))
  {
    return false;
  }
  // x
  if (!wauto_control_msgs__msg__CarState__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  return true;
}

wauto_control_msgs__msg__CarTrajectory *
wauto_control_msgs__msg__CarTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarTrajectory * msg = (wauto_control_msgs__msg__CarTrajectory *)allocator.allocate(sizeof(wauto_control_msgs__msg__CarTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_control_msgs__msg__CarTrajectory));
  bool success = wauto_control_msgs__msg__CarTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_control_msgs__msg__CarTrajectory__destroy(wauto_control_msgs__msg__CarTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_control_msgs__msg__CarTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_control_msgs__msg__CarTrajectory__Sequence__init(wauto_control_msgs__msg__CarTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarTrajectory * data = NULL;

  if (size) {
    data = (wauto_control_msgs__msg__CarTrajectory *)allocator.zero_allocate(size, sizeof(wauto_control_msgs__msg__CarTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_control_msgs__msg__CarTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_control_msgs__msg__CarTrajectory__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wauto_control_msgs__msg__CarTrajectory__Sequence__fini(wauto_control_msgs__msg__CarTrajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wauto_control_msgs__msg__CarTrajectory__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wauto_control_msgs__msg__CarTrajectory__Sequence *
wauto_control_msgs__msg__CarTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarTrajectory__Sequence * array = (wauto_control_msgs__msg__CarTrajectory__Sequence *)allocator.allocate(sizeof(wauto_control_msgs__msg__CarTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_control_msgs__msg__CarTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_control_msgs__msg__CarTrajectory__Sequence__destroy(wauto_control_msgs__msg__CarTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_control_msgs__msg__CarTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_control_msgs__msg__CarTrajectory__Sequence__are_equal(const wauto_control_msgs__msg__CarTrajectory__Sequence * lhs, const wauto_control_msgs__msg__CarTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_control_msgs__msg__CarTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_control_msgs__msg__CarTrajectory__Sequence__copy(
  const wauto_control_msgs__msg__CarTrajectory__Sequence * input,
  wauto_control_msgs__msg__CarTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_control_msgs__msg__CarTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_control_msgs__msg__CarTrajectory * data =
      (wauto_control_msgs__msg__CarTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_control_msgs__msg__CarTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_control_msgs__msg__CarTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_control_msgs__msg__CarTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
