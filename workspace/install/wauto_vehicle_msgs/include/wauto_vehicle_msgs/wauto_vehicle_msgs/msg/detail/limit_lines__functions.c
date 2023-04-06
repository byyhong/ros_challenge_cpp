// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_vehicle_msgs:msg/LimitLines.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/limit_lines__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_vehicle_msgs__msg__LimitLines__init(wauto_vehicle_msgs__msg__LimitLines * msg)
{
  if (!msg) {
    return false;
  }
  // rolling_count
  msg->rolling_count = 0;
  // current_limit_line_count
  msg->current_limit_line_count = 0;
  // observation_time_of_hour
  msg->observation_time_of_hour = 0;
  return true;
}

void
wauto_vehicle_msgs__msg__LimitLines__fini(wauto_vehicle_msgs__msg__LimitLines * msg)
{
  if (!msg) {
    return;
  }
  // rolling_count
  // current_limit_line_count
  // observation_time_of_hour
}

bool
wauto_vehicle_msgs__msg__LimitLines__are_equal(const wauto_vehicle_msgs__msg__LimitLines * lhs, const wauto_vehicle_msgs__msg__LimitLines * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rolling_count
  if (lhs->rolling_count != rhs->rolling_count) {
    return false;
  }
  // current_limit_line_count
  if (lhs->current_limit_line_count != rhs->current_limit_line_count) {
    return false;
  }
  // observation_time_of_hour
  if (lhs->observation_time_of_hour != rhs->observation_time_of_hour) {
    return false;
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__LimitLines__copy(
  const wauto_vehicle_msgs__msg__LimitLines * input,
  wauto_vehicle_msgs__msg__LimitLines * output)
{
  if (!input || !output) {
    return false;
  }
  // rolling_count
  output->rolling_count = input->rolling_count;
  // current_limit_line_count
  output->current_limit_line_count = input->current_limit_line_count;
  // observation_time_of_hour
  output->observation_time_of_hour = input->observation_time_of_hour;
  return true;
}

wauto_vehicle_msgs__msg__LimitLines *
wauto_vehicle_msgs__msg__LimitLines__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__LimitLines * msg = (wauto_vehicle_msgs__msg__LimitLines *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__LimitLines), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_vehicle_msgs__msg__LimitLines));
  bool success = wauto_vehicle_msgs__msg__LimitLines__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_vehicle_msgs__msg__LimitLines__destroy(wauto_vehicle_msgs__msg__LimitLines * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_vehicle_msgs__msg__LimitLines__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_vehicle_msgs__msg__LimitLines__Sequence__init(wauto_vehicle_msgs__msg__LimitLines__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__LimitLines * data = NULL;

  if (size) {
    data = (wauto_vehicle_msgs__msg__LimitLines *)allocator.zero_allocate(size, sizeof(wauto_vehicle_msgs__msg__LimitLines), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_vehicle_msgs__msg__LimitLines__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_vehicle_msgs__msg__LimitLines__fini(&data[i - 1]);
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
wauto_vehicle_msgs__msg__LimitLines__Sequence__fini(wauto_vehicle_msgs__msg__LimitLines__Sequence * array)
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
      wauto_vehicle_msgs__msg__LimitLines__fini(&array->data[i]);
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

wauto_vehicle_msgs__msg__LimitLines__Sequence *
wauto_vehicle_msgs__msg__LimitLines__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__LimitLines__Sequence * array = (wauto_vehicle_msgs__msg__LimitLines__Sequence *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__LimitLines__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_vehicle_msgs__msg__LimitLines__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_vehicle_msgs__msg__LimitLines__Sequence__destroy(wauto_vehicle_msgs__msg__LimitLines__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_vehicle_msgs__msg__LimitLines__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_vehicle_msgs__msg__LimitLines__Sequence__are_equal(const wauto_vehicle_msgs__msg__LimitLines__Sequence * lhs, const wauto_vehicle_msgs__msg__LimitLines__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_vehicle_msgs__msg__LimitLines__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__LimitLines__Sequence__copy(
  const wauto_vehicle_msgs__msg__LimitLines__Sequence * input,
  wauto_vehicle_msgs__msg__LimitLines__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_vehicle_msgs__msg__LimitLines);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_vehicle_msgs__msg__LimitLines * data =
      (wauto_vehicle_msgs__msg__LimitLines *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_vehicle_msgs__msg__LimitLines__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_vehicle_msgs__msg__LimitLines__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_vehicle_msgs__msg__LimitLines__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
