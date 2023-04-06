// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_vehicle_msgs:msg/TrafficSigns.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/traffic_signs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_vehicle_msgs__msg__TrafficSigns__init(wauto_vehicle_msgs__msg__TrafficSigns * msg)
{
  if (!msg) {
    return false;
  }
  // rolling_count
  msg->rolling_count = 0;
  // current_sign_count
  msg->current_sign_count = 0;
  // observation_time_of_hour
  msg->observation_time_of_hour = 0;
  return true;
}

void
wauto_vehicle_msgs__msg__TrafficSigns__fini(wauto_vehicle_msgs__msg__TrafficSigns * msg)
{
  if (!msg) {
    return;
  }
  // rolling_count
  // current_sign_count
  // observation_time_of_hour
}

bool
wauto_vehicle_msgs__msg__TrafficSigns__are_equal(const wauto_vehicle_msgs__msg__TrafficSigns * lhs, const wauto_vehicle_msgs__msg__TrafficSigns * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rolling_count
  if (lhs->rolling_count != rhs->rolling_count) {
    return false;
  }
  // current_sign_count
  if (lhs->current_sign_count != rhs->current_sign_count) {
    return false;
  }
  // observation_time_of_hour
  if (lhs->observation_time_of_hour != rhs->observation_time_of_hour) {
    return false;
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__TrafficSigns__copy(
  const wauto_vehicle_msgs__msg__TrafficSigns * input,
  wauto_vehicle_msgs__msg__TrafficSigns * output)
{
  if (!input || !output) {
    return false;
  }
  // rolling_count
  output->rolling_count = input->rolling_count;
  // current_sign_count
  output->current_sign_count = input->current_sign_count;
  // observation_time_of_hour
  output->observation_time_of_hour = input->observation_time_of_hour;
  return true;
}

wauto_vehicle_msgs__msg__TrafficSigns *
wauto_vehicle_msgs__msg__TrafficSigns__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__TrafficSigns * msg = (wauto_vehicle_msgs__msg__TrafficSigns *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__TrafficSigns), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_vehicle_msgs__msg__TrafficSigns));
  bool success = wauto_vehicle_msgs__msg__TrafficSigns__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_vehicle_msgs__msg__TrafficSigns__destroy(wauto_vehicle_msgs__msg__TrafficSigns * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_vehicle_msgs__msg__TrafficSigns__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_vehicle_msgs__msg__TrafficSigns__Sequence__init(wauto_vehicle_msgs__msg__TrafficSigns__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__TrafficSigns * data = NULL;

  if (size) {
    data = (wauto_vehicle_msgs__msg__TrafficSigns *)allocator.zero_allocate(size, sizeof(wauto_vehicle_msgs__msg__TrafficSigns), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_vehicle_msgs__msg__TrafficSigns__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_vehicle_msgs__msg__TrafficSigns__fini(&data[i - 1]);
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
wauto_vehicle_msgs__msg__TrafficSigns__Sequence__fini(wauto_vehicle_msgs__msg__TrafficSigns__Sequence * array)
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
      wauto_vehicle_msgs__msg__TrafficSigns__fini(&array->data[i]);
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

wauto_vehicle_msgs__msg__TrafficSigns__Sequence *
wauto_vehicle_msgs__msg__TrafficSigns__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__TrafficSigns__Sequence * array = (wauto_vehicle_msgs__msg__TrafficSigns__Sequence *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__TrafficSigns__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_vehicle_msgs__msg__TrafficSigns__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_vehicle_msgs__msg__TrafficSigns__Sequence__destroy(wauto_vehicle_msgs__msg__TrafficSigns__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_vehicle_msgs__msg__TrafficSigns__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_vehicle_msgs__msg__TrafficSigns__Sequence__are_equal(const wauto_vehicle_msgs__msg__TrafficSigns__Sequence * lhs, const wauto_vehicle_msgs__msg__TrafficSigns__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_vehicle_msgs__msg__TrafficSigns__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__TrafficSigns__Sequence__copy(
  const wauto_vehicle_msgs__msg__TrafficSigns__Sequence * input,
  wauto_vehicle_msgs__msg__TrafficSigns__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_vehicle_msgs__msg__TrafficSigns);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_vehicle_msgs__msg__TrafficSigns * data =
      (wauto_vehicle_msgs__msg__TrafficSigns *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_vehicle_msgs__msg__TrafficSigns__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_vehicle_msgs__msg__TrafficSigns__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_vehicle_msgs__msg__TrafficSigns__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
