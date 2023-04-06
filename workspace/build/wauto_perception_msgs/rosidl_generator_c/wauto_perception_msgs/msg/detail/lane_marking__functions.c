// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_perception_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice
#include "wauto_perception_msgs/msg/detail/lane_marking__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_perception_msgs__msg__LaneMarking__init(wauto_perception_msgs__msg__LaneMarking * msg)
{
  if (!msg) {
    return false;
  }
  // id
  msg->id = 0l;
  // distance
  // type
  // color
  return true;
}

void
wauto_perception_msgs__msg__LaneMarking__fini(wauto_perception_msgs__msg__LaneMarking * msg)
{
  if (!msg) {
    return;
  }
  // id
  // distance
  // type
  // color
}

bool
wauto_perception_msgs__msg__LaneMarking__are_equal(const wauto_perception_msgs__msg__LaneMarking * lhs, const wauto_perception_msgs__msg__LaneMarking * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  return true;
}

bool
wauto_perception_msgs__msg__LaneMarking__copy(
  const wauto_perception_msgs__msg__LaneMarking * input,
  wauto_perception_msgs__msg__LaneMarking * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // distance
  output->distance = input->distance;
  // type
  output->type = input->type;
  // color
  output->color = input->color;
  return true;
}

wauto_perception_msgs__msg__LaneMarking *
wauto_perception_msgs__msg__LaneMarking__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__LaneMarking * msg = (wauto_perception_msgs__msg__LaneMarking *)allocator.allocate(sizeof(wauto_perception_msgs__msg__LaneMarking), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_perception_msgs__msg__LaneMarking));
  bool success = wauto_perception_msgs__msg__LaneMarking__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_perception_msgs__msg__LaneMarking__destroy(wauto_perception_msgs__msg__LaneMarking * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_perception_msgs__msg__LaneMarking__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_perception_msgs__msg__LaneMarking__Sequence__init(wauto_perception_msgs__msg__LaneMarking__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__LaneMarking * data = NULL;

  if (size) {
    data = (wauto_perception_msgs__msg__LaneMarking *)allocator.zero_allocate(size, sizeof(wauto_perception_msgs__msg__LaneMarking), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_perception_msgs__msg__LaneMarking__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_perception_msgs__msg__LaneMarking__fini(&data[i - 1]);
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
wauto_perception_msgs__msg__LaneMarking__Sequence__fini(wauto_perception_msgs__msg__LaneMarking__Sequence * array)
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
      wauto_perception_msgs__msg__LaneMarking__fini(&array->data[i]);
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

wauto_perception_msgs__msg__LaneMarking__Sequence *
wauto_perception_msgs__msg__LaneMarking__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__LaneMarking__Sequence * array = (wauto_perception_msgs__msg__LaneMarking__Sequence *)allocator.allocate(sizeof(wauto_perception_msgs__msg__LaneMarking__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_perception_msgs__msg__LaneMarking__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_perception_msgs__msg__LaneMarking__Sequence__destroy(wauto_perception_msgs__msg__LaneMarking__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_perception_msgs__msg__LaneMarking__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_perception_msgs__msg__LaneMarking__Sequence__are_equal(const wauto_perception_msgs__msg__LaneMarking__Sequence * lhs, const wauto_perception_msgs__msg__LaneMarking__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_perception_msgs__msg__LaneMarking__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_perception_msgs__msg__LaneMarking__Sequence__copy(
  const wauto_perception_msgs__msg__LaneMarking__Sequence * input,
  wauto_perception_msgs__msg__LaneMarking__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_perception_msgs__msg__LaneMarking);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_perception_msgs__msg__LaneMarking * data =
      (wauto_perception_msgs__msg__LaneMarking *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_perception_msgs__msg__LaneMarking__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_perception_msgs__msg__LaneMarking__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_perception_msgs__msg__LaneMarking__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
