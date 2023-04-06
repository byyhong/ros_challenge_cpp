// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_control_msgs:msg/CarTBS.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/car_tbs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_control_msgs__msg__CarTBS__init(wauto_control_msgs__msg__CarTBS * msg)
{
  if (!msg) {
    return false;
  }
  // t
  // b
  // s
  return true;
}

void
wauto_control_msgs__msg__CarTBS__fini(wauto_control_msgs__msg__CarTBS * msg)
{
  if (!msg) {
    return;
  }
  // t
  // b
  // s
}

bool
wauto_control_msgs__msg__CarTBS__are_equal(const wauto_control_msgs__msg__CarTBS * lhs, const wauto_control_msgs__msg__CarTBS * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // t
  if (lhs->t != rhs->t) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
    return false;
  }
  return true;
}

bool
wauto_control_msgs__msg__CarTBS__copy(
  const wauto_control_msgs__msg__CarTBS * input,
  wauto_control_msgs__msg__CarTBS * output)
{
  if (!input || !output) {
    return false;
  }
  // t
  output->t = input->t;
  // b
  output->b = input->b;
  // s
  output->s = input->s;
  return true;
}

wauto_control_msgs__msg__CarTBS *
wauto_control_msgs__msg__CarTBS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarTBS * msg = (wauto_control_msgs__msg__CarTBS *)allocator.allocate(sizeof(wauto_control_msgs__msg__CarTBS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_control_msgs__msg__CarTBS));
  bool success = wauto_control_msgs__msg__CarTBS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_control_msgs__msg__CarTBS__destroy(wauto_control_msgs__msg__CarTBS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_control_msgs__msg__CarTBS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_control_msgs__msg__CarTBS__Sequence__init(wauto_control_msgs__msg__CarTBS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarTBS * data = NULL;

  if (size) {
    data = (wauto_control_msgs__msg__CarTBS *)allocator.zero_allocate(size, sizeof(wauto_control_msgs__msg__CarTBS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_control_msgs__msg__CarTBS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_control_msgs__msg__CarTBS__fini(&data[i - 1]);
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
wauto_control_msgs__msg__CarTBS__Sequence__fini(wauto_control_msgs__msg__CarTBS__Sequence * array)
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
      wauto_control_msgs__msg__CarTBS__fini(&array->data[i]);
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

wauto_control_msgs__msg__CarTBS__Sequence *
wauto_control_msgs__msg__CarTBS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarTBS__Sequence * array = (wauto_control_msgs__msg__CarTBS__Sequence *)allocator.allocate(sizeof(wauto_control_msgs__msg__CarTBS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_control_msgs__msg__CarTBS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_control_msgs__msg__CarTBS__Sequence__destroy(wauto_control_msgs__msg__CarTBS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_control_msgs__msg__CarTBS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_control_msgs__msg__CarTBS__Sequence__are_equal(const wauto_control_msgs__msg__CarTBS__Sequence * lhs, const wauto_control_msgs__msg__CarTBS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_control_msgs__msg__CarTBS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_control_msgs__msg__CarTBS__Sequence__copy(
  const wauto_control_msgs__msg__CarTBS__Sequence * input,
  wauto_control_msgs__msg__CarTBS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_control_msgs__msg__CarTBS);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_control_msgs__msg__CarTBS * data =
      (wauto_control_msgs__msg__CarTBS *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_control_msgs__msg__CarTBS__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_control_msgs__msg__CarTBS__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_control_msgs__msg__CarTBS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
