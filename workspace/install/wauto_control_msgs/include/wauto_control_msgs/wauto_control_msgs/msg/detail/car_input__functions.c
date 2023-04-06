// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_control_msgs:msg/CarInput.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/car_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_control_msgs__msg__CarInput__init(wauto_control_msgs__msg__CarInput * msg)
{
  if (!msg) {
    return false;
  }
  // v_dot
  // psi_dot
  // gamma
  return true;
}

void
wauto_control_msgs__msg__CarInput__fini(wauto_control_msgs__msg__CarInput * msg)
{
  if (!msg) {
    return;
  }
  // v_dot
  // psi_dot
  // gamma
}

bool
wauto_control_msgs__msg__CarInput__are_equal(const wauto_control_msgs__msg__CarInput * lhs, const wauto_control_msgs__msg__CarInput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // v_dot
  if (lhs->v_dot != rhs->v_dot) {
    return false;
  }
  // psi_dot
  if (lhs->psi_dot != rhs->psi_dot) {
    return false;
  }
  // gamma
  if (lhs->gamma != rhs->gamma) {
    return false;
  }
  return true;
}

bool
wauto_control_msgs__msg__CarInput__copy(
  const wauto_control_msgs__msg__CarInput * input,
  wauto_control_msgs__msg__CarInput * output)
{
  if (!input || !output) {
    return false;
  }
  // v_dot
  output->v_dot = input->v_dot;
  // psi_dot
  output->psi_dot = input->psi_dot;
  // gamma
  output->gamma = input->gamma;
  return true;
}

wauto_control_msgs__msg__CarInput *
wauto_control_msgs__msg__CarInput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarInput * msg = (wauto_control_msgs__msg__CarInput *)allocator.allocate(sizeof(wauto_control_msgs__msg__CarInput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_control_msgs__msg__CarInput));
  bool success = wauto_control_msgs__msg__CarInput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_control_msgs__msg__CarInput__destroy(wauto_control_msgs__msg__CarInput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_control_msgs__msg__CarInput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_control_msgs__msg__CarInput__Sequence__init(wauto_control_msgs__msg__CarInput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarInput * data = NULL;

  if (size) {
    data = (wauto_control_msgs__msg__CarInput *)allocator.zero_allocate(size, sizeof(wauto_control_msgs__msg__CarInput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_control_msgs__msg__CarInput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_control_msgs__msg__CarInput__fini(&data[i - 1]);
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
wauto_control_msgs__msg__CarInput__Sequence__fini(wauto_control_msgs__msg__CarInput__Sequence * array)
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
      wauto_control_msgs__msg__CarInput__fini(&array->data[i]);
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

wauto_control_msgs__msg__CarInput__Sequence *
wauto_control_msgs__msg__CarInput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarInput__Sequence * array = (wauto_control_msgs__msg__CarInput__Sequence *)allocator.allocate(sizeof(wauto_control_msgs__msg__CarInput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_control_msgs__msg__CarInput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_control_msgs__msg__CarInput__Sequence__destroy(wauto_control_msgs__msg__CarInput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_control_msgs__msg__CarInput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_control_msgs__msg__CarInput__Sequence__are_equal(const wauto_control_msgs__msg__CarInput__Sequence * lhs, const wauto_control_msgs__msg__CarInput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_control_msgs__msg__CarInput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_control_msgs__msg__CarInput__Sequence__copy(
  const wauto_control_msgs__msg__CarInput__Sequence * input,
  wauto_control_msgs__msg__CarInput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_control_msgs__msg__CarInput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_control_msgs__msg__CarInput * data =
      (wauto_control_msgs__msg__CarInput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_control_msgs__msg__CarInput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_control_msgs__msg__CarInput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_control_msgs__msg__CarInput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
