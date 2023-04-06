// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_control_msgs:msg/LaneBoundaries.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/lane_boundaries__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `right`
// Member `left`
#include "wauto_control_msgs/msg/detail/lane_marking__functions.h"

bool
wauto_control_msgs__msg__LaneBoundaries__init(wauto_control_msgs__msg__LaneBoundaries * msg)
{
  if (!msg) {
    return false;
  }
  // right
  if (!wauto_control_msgs__msg__LaneMarking__init(&msg->right)) {
    wauto_control_msgs__msg__LaneBoundaries__fini(msg);
    return false;
  }
  // left
  if (!wauto_control_msgs__msg__LaneMarking__init(&msg->left)) {
    wauto_control_msgs__msg__LaneBoundaries__fini(msg);
    return false;
  }
  return true;
}

void
wauto_control_msgs__msg__LaneBoundaries__fini(wauto_control_msgs__msg__LaneBoundaries * msg)
{
  if (!msg) {
    return;
  }
  // right
  wauto_control_msgs__msg__LaneMarking__fini(&msg->right);
  // left
  wauto_control_msgs__msg__LaneMarking__fini(&msg->left);
}

bool
wauto_control_msgs__msg__LaneBoundaries__are_equal(const wauto_control_msgs__msg__LaneBoundaries * lhs, const wauto_control_msgs__msg__LaneBoundaries * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // right
  if (!wauto_control_msgs__msg__LaneMarking__are_equal(
      &(lhs->right), &(rhs->right)))
  {
    return false;
  }
  // left
  if (!wauto_control_msgs__msg__LaneMarking__are_equal(
      &(lhs->left), &(rhs->left)))
  {
    return false;
  }
  return true;
}

bool
wauto_control_msgs__msg__LaneBoundaries__copy(
  const wauto_control_msgs__msg__LaneBoundaries * input,
  wauto_control_msgs__msg__LaneBoundaries * output)
{
  if (!input || !output) {
    return false;
  }
  // right
  if (!wauto_control_msgs__msg__LaneMarking__copy(
      &(input->right), &(output->right)))
  {
    return false;
  }
  // left
  if (!wauto_control_msgs__msg__LaneMarking__copy(
      &(input->left), &(output->left)))
  {
    return false;
  }
  return true;
}

wauto_control_msgs__msg__LaneBoundaries *
wauto_control_msgs__msg__LaneBoundaries__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__LaneBoundaries * msg = (wauto_control_msgs__msg__LaneBoundaries *)allocator.allocate(sizeof(wauto_control_msgs__msg__LaneBoundaries), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_control_msgs__msg__LaneBoundaries));
  bool success = wauto_control_msgs__msg__LaneBoundaries__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_control_msgs__msg__LaneBoundaries__destroy(wauto_control_msgs__msg__LaneBoundaries * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_control_msgs__msg__LaneBoundaries__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_control_msgs__msg__LaneBoundaries__Sequence__init(wauto_control_msgs__msg__LaneBoundaries__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__LaneBoundaries * data = NULL;

  if (size) {
    data = (wauto_control_msgs__msg__LaneBoundaries *)allocator.zero_allocate(size, sizeof(wauto_control_msgs__msg__LaneBoundaries), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_control_msgs__msg__LaneBoundaries__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_control_msgs__msg__LaneBoundaries__fini(&data[i - 1]);
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
wauto_control_msgs__msg__LaneBoundaries__Sequence__fini(wauto_control_msgs__msg__LaneBoundaries__Sequence * array)
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
      wauto_control_msgs__msg__LaneBoundaries__fini(&array->data[i]);
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

wauto_control_msgs__msg__LaneBoundaries__Sequence *
wauto_control_msgs__msg__LaneBoundaries__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__LaneBoundaries__Sequence * array = (wauto_control_msgs__msg__LaneBoundaries__Sequence *)allocator.allocate(sizeof(wauto_control_msgs__msg__LaneBoundaries__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_control_msgs__msg__LaneBoundaries__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_control_msgs__msg__LaneBoundaries__Sequence__destroy(wauto_control_msgs__msg__LaneBoundaries__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_control_msgs__msg__LaneBoundaries__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_control_msgs__msg__LaneBoundaries__Sequence__are_equal(const wauto_control_msgs__msg__LaneBoundaries__Sequence * lhs, const wauto_control_msgs__msg__LaneBoundaries__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_control_msgs__msg__LaneBoundaries__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_control_msgs__msg__LaneBoundaries__Sequence__copy(
  const wauto_control_msgs__msg__LaneBoundaries__Sequence * input,
  wauto_control_msgs__msg__LaneBoundaries__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_control_msgs__msg__LaneBoundaries);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_control_msgs__msg__LaneBoundaries * data =
      (wauto_control_msgs__msg__LaneBoundaries *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_control_msgs__msg__LaneBoundaries__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_control_msgs__msg__LaneBoundaries__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_control_msgs__msg__LaneBoundaries__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
