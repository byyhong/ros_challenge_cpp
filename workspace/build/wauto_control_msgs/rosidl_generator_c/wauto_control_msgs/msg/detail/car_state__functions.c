// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_control_msgs:msg/CarState.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/car_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_control_msgs__msg__CarState__init(wauto_control_msgs__msg__CarState * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // v
  // psi
  return true;
}

void
wauto_control_msgs__msg__CarState__fini(wauto_control_msgs__msg__CarState * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // v
  // psi
}

bool
wauto_control_msgs__msg__CarState__are_equal(const wauto_control_msgs__msg__CarState * lhs, const wauto_control_msgs__msg__CarState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // v
  if (lhs->v != rhs->v) {
    return false;
  }
  // psi
  if (lhs->psi != rhs->psi) {
    return false;
  }
  return true;
}

bool
wauto_control_msgs__msg__CarState__copy(
  const wauto_control_msgs__msg__CarState * input,
  wauto_control_msgs__msg__CarState * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // v
  output->v = input->v;
  // psi
  output->psi = input->psi;
  return true;
}

wauto_control_msgs__msg__CarState *
wauto_control_msgs__msg__CarState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarState * msg = (wauto_control_msgs__msg__CarState *)allocator.allocate(sizeof(wauto_control_msgs__msg__CarState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_control_msgs__msg__CarState));
  bool success = wauto_control_msgs__msg__CarState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_control_msgs__msg__CarState__destroy(wauto_control_msgs__msg__CarState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_control_msgs__msg__CarState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_control_msgs__msg__CarState__Sequence__init(wauto_control_msgs__msg__CarState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarState * data = NULL;

  if (size) {
    data = (wauto_control_msgs__msg__CarState *)allocator.zero_allocate(size, sizeof(wauto_control_msgs__msg__CarState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_control_msgs__msg__CarState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_control_msgs__msg__CarState__fini(&data[i - 1]);
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
wauto_control_msgs__msg__CarState__Sequence__fini(wauto_control_msgs__msg__CarState__Sequence * array)
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
      wauto_control_msgs__msg__CarState__fini(&array->data[i]);
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

wauto_control_msgs__msg__CarState__Sequence *
wauto_control_msgs__msg__CarState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarState__Sequence * array = (wauto_control_msgs__msg__CarState__Sequence *)allocator.allocate(sizeof(wauto_control_msgs__msg__CarState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_control_msgs__msg__CarState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_control_msgs__msg__CarState__Sequence__destroy(wauto_control_msgs__msg__CarState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_control_msgs__msg__CarState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_control_msgs__msg__CarState__Sequence__are_equal(const wauto_control_msgs__msg__CarState__Sequence * lhs, const wauto_control_msgs__msg__CarState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_control_msgs__msg__CarState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_control_msgs__msg__CarState__Sequence__copy(
  const wauto_control_msgs__msg__CarState__Sequence * input,
  wauto_control_msgs__msg__CarState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_control_msgs__msg__CarState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_control_msgs__msg__CarState * data =
      (wauto_control_msgs__msg__CarState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_control_msgs__msg__CarState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_control_msgs__msg__CarState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_control_msgs__msg__CarState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
