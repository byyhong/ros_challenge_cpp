// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_perception_msgs:msg/LaneMarkingArray.idl
// generated code does not contain a copyright notice
#include "wauto_perception_msgs/msg/detail/lane_marking_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `lane_markings`
#include "wauto_perception_msgs/msg/detail/lane_marking__functions.h"

bool
wauto_perception_msgs__msg__LaneMarkingArray__init(wauto_perception_msgs__msg__LaneMarkingArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    wauto_perception_msgs__msg__LaneMarkingArray__fini(msg);
    return false;
  }
  // lane_markings
  if (!wauto_perception_msgs__msg__LaneMarking__Sequence__init(&msg->lane_markings, 0)) {
    wauto_perception_msgs__msg__LaneMarkingArray__fini(msg);
    return false;
  }
  return true;
}

void
wauto_perception_msgs__msg__LaneMarkingArray__fini(wauto_perception_msgs__msg__LaneMarkingArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // lane_markings
  wauto_perception_msgs__msg__LaneMarking__Sequence__fini(&msg->lane_markings);
}

bool
wauto_perception_msgs__msg__LaneMarkingArray__are_equal(const wauto_perception_msgs__msg__LaneMarkingArray * lhs, const wauto_perception_msgs__msg__LaneMarkingArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // lane_markings
  if (!wauto_perception_msgs__msg__LaneMarking__Sequence__are_equal(
      &(lhs->lane_markings), &(rhs->lane_markings)))
  {
    return false;
  }
  return true;
}

bool
wauto_perception_msgs__msg__LaneMarkingArray__copy(
  const wauto_perception_msgs__msg__LaneMarkingArray * input,
  wauto_perception_msgs__msg__LaneMarkingArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // lane_markings
  if (!wauto_perception_msgs__msg__LaneMarking__Sequence__copy(
      &(input->lane_markings), &(output->lane_markings)))
  {
    return false;
  }
  return true;
}

wauto_perception_msgs__msg__LaneMarkingArray *
wauto_perception_msgs__msg__LaneMarkingArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__LaneMarkingArray * msg = (wauto_perception_msgs__msg__LaneMarkingArray *)allocator.allocate(sizeof(wauto_perception_msgs__msg__LaneMarkingArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_perception_msgs__msg__LaneMarkingArray));
  bool success = wauto_perception_msgs__msg__LaneMarkingArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_perception_msgs__msg__LaneMarkingArray__destroy(wauto_perception_msgs__msg__LaneMarkingArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_perception_msgs__msg__LaneMarkingArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_perception_msgs__msg__LaneMarkingArray__Sequence__init(wauto_perception_msgs__msg__LaneMarkingArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__LaneMarkingArray * data = NULL;

  if (size) {
    data = (wauto_perception_msgs__msg__LaneMarkingArray *)allocator.zero_allocate(size, sizeof(wauto_perception_msgs__msg__LaneMarkingArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_perception_msgs__msg__LaneMarkingArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_perception_msgs__msg__LaneMarkingArray__fini(&data[i - 1]);
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
wauto_perception_msgs__msg__LaneMarkingArray__Sequence__fini(wauto_perception_msgs__msg__LaneMarkingArray__Sequence * array)
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
      wauto_perception_msgs__msg__LaneMarkingArray__fini(&array->data[i]);
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

wauto_perception_msgs__msg__LaneMarkingArray__Sequence *
wauto_perception_msgs__msg__LaneMarkingArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__LaneMarkingArray__Sequence * array = (wauto_perception_msgs__msg__LaneMarkingArray__Sequence *)allocator.allocate(sizeof(wauto_perception_msgs__msg__LaneMarkingArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_perception_msgs__msg__LaneMarkingArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_perception_msgs__msg__LaneMarkingArray__Sequence__destroy(wauto_perception_msgs__msg__LaneMarkingArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_perception_msgs__msg__LaneMarkingArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_perception_msgs__msg__LaneMarkingArray__Sequence__are_equal(const wauto_perception_msgs__msg__LaneMarkingArray__Sequence * lhs, const wauto_perception_msgs__msg__LaneMarkingArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_perception_msgs__msg__LaneMarkingArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_perception_msgs__msg__LaneMarkingArray__Sequence__copy(
  const wauto_perception_msgs__msg__LaneMarkingArray__Sequence * input,
  wauto_perception_msgs__msg__LaneMarkingArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_perception_msgs__msg__LaneMarkingArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_perception_msgs__msg__LaneMarkingArray * data =
      (wauto_perception_msgs__msg__LaneMarkingArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_perception_msgs__msg__LaneMarkingArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_perception_msgs__msg__LaneMarkingArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_perception_msgs__msg__LaneMarkingArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
