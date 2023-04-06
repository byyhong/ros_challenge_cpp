// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_vehicle_msgs:msg/AVState.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/av_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_vehicle_msgs__msg__AVState__init(wauto_vehicle_msgs__msg__AVState * msg)
{
  if (!msg) {
    return false;
  }
  // unused_msg_placeholder
  msg->unused_msg_placeholder = 0;
  return true;
}

void
wauto_vehicle_msgs__msg__AVState__fini(wauto_vehicle_msgs__msg__AVState * msg)
{
  if (!msg) {
    return;
  }
  // unused_msg_placeholder
}

bool
wauto_vehicle_msgs__msg__AVState__are_equal(const wauto_vehicle_msgs__msg__AVState * lhs, const wauto_vehicle_msgs__msg__AVState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // unused_msg_placeholder
  if (lhs->unused_msg_placeholder != rhs->unused_msg_placeholder) {
    return false;
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__AVState__copy(
  const wauto_vehicle_msgs__msg__AVState * input,
  wauto_vehicle_msgs__msg__AVState * output)
{
  if (!input || !output) {
    return false;
  }
  // unused_msg_placeholder
  output->unused_msg_placeholder = input->unused_msg_placeholder;
  return true;
}

wauto_vehicle_msgs__msg__AVState *
wauto_vehicle_msgs__msg__AVState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__AVState * msg = (wauto_vehicle_msgs__msg__AVState *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__AVState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_vehicle_msgs__msg__AVState));
  bool success = wauto_vehicle_msgs__msg__AVState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_vehicle_msgs__msg__AVState__destroy(wauto_vehicle_msgs__msg__AVState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_vehicle_msgs__msg__AVState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_vehicle_msgs__msg__AVState__Sequence__init(wauto_vehicle_msgs__msg__AVState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__AVState * data = NULL;

  if (size) {
    data = (wauto_vehicle_msgs__msg__AVState *)allocator.zero_allocate(size, sizeof(wauto_vehicle_msgs__msg__AVState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_vehicle_msgs__msg__AVState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_vehicle_msgs__msg__AVState__fini(&data[i - 1]);
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
wauto_vehicle_msgs__msg__AVState__Sequence__fini(wauto_vehicle_msgs__msg__AVState__Sequence * array)
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
      wauto_vehicle_msgs__msg__AVState__fini(&array->data[i]);
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

wauto_vehicle_msgs__msg__AVState__Sequence *
wauto_vehicle_msgs__msg__AVState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__AVState__Sequence * array = (wauto_vehicle_msgs__msg__AVState__Sequence *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__AVState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_vehicle_msgs__msg__AVState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_vehicle_msgs__msg__AVState__Sequence__destroy(wauto_vehicle_msgs__msg__AVState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_vehicle_msgs__msg__AVState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_vehicle_msgs__msg__AVState__Sequence__are_equal(const wauto_vehicle_msgs__msg__AVState__Sequence * lhs, const wauto_vehicle_msgs__msg__AVState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_vehicle_msgs__msg__AVState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__AVState__Sequence__copy(
  const wauto_vehicle_msgs__msg__AVState__Sequence * input,
  wauto_vehicle_msgs__msg__AVState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_vehicle_msgs__msg__AVState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_vehicle_msgs__msg__AVState * data =
      (wauto_vehicle_msgs__msg__AVState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_vehicle_msgs__msg__AVState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_vehicle_msgs__msg__AVState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_vehicle_msgs__msg__AVState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
