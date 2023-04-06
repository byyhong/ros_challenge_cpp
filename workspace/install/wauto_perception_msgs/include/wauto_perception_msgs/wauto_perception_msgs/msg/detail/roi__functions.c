// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_perception_msgs:msg/Roi.idl
// generated code does not contain a copyright notice
#include "wauto_perception_msgs/msg/detail/roi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `classification`
#include "wauto_perception_msgs/msg/detail/object_classification__functions.h"
// Member `bottom_left`
// Member `top_right`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
wauto_perception_msgs__msg__Roi__init(wauto_perception_msgs__msg__Roi * msg)
{
  if (!msg) {
    return false;
  }
  // id
  msg->id = 0;
  // classification
  if (!wauto_perception_msgs__msg__ObjectClassification__init(&msg->classification)) {
    wauto_perception_msgs__msg__Roi__fini(msg);
    return false;
  }
  // bottom_left
  if (!geometry_msgs__msg__Point__init(&msg->bottom_left)) {
    wauto_perception_msgs__msg__Roi__fini(msg);
    return false;
  }
  // top_right
  if (!geometry_msgs__msg__Point__init(&msg->top_right)) {
    wauto_perception_msgs__msg__Roi__fini(msg);
    return false;
  }
  return true;
}

void
wauto_perception_msgs__msg__Roi__fini(wauto_perception_msgs__msg__Roi * msg)
{
  if (!msg) {
    return;
  }
  // id
  // classification
  wauto_perception_msgs__msg__ObjectClassification__fini(&msg->classification);
  // bottom_left
  geometry_msgs__msg__Point__fini(&msg->bottom_left);
  // top_right
  geometry_msgs__msg__Point__fini(&msg->top_right);
}

bool
wauto_perception_msgs__msg__Roi__are_equal(const wauto_perception_msgs__msg__Roi * lhs, const wauto_perception_msgs__msg__Roi * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // classification
  if (!wauto_perception_msgs__msg__ObjectClassification__are_equal(
      &(lhs->classification), &(rhs->classification)))
  {
    return false;
  }
  // bottom_left
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->bottom_left), &(rhs->bottom_left)))
  {
    return false;
  }
  // top_right
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->top_right), &(rhs->top_right)))
  {
    return false;
  }
  return true;
}

bool
wauto_perception_msgs__msg__Roi__copy(
  const wauto_perception_msgs__msg__Roi * input,
  wauto_perception_msgs__msg__Roi * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // classification
  if (!wauto_perception_msgs__msg__ObjectClassification__copy(
      &(input->classification), &(output->classification)))
  {
    return false;
  }
  // bottom_left
  if (!geometry_msgs__msg__Point__copy(
      &(input->bottom_left), &(output->bottom_left)))
  {
    return false;
  }
  // top_right
  if (!geometry_msgs__msg__Point__copy(
      &(input->top_right), &(output->top_right)))
  {
    return false;
  }
  return true;
}

wauto_perception_msgs__msg__Roi *
wauto_perception_msgs__msg__Roi__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__Roi * msg = (wauto_perception_msgs__msg__Roi *)allocator.allocate(sizeof(wauto_perception_msgs__msg__Roi), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_perception_msgs__msg__Roi));
  bool success = wauto_perception_msgs__msg__Roi__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_perception_msgs__msg__Roi__destroy(wauto_perception_msgs__msg__Roi * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_perception_msgs__msg__Roi__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_perception_msgs__msg__Roi__Sequence__init(wauto_perception_msgs__msg__Roi__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__Roi * data = NULL;

  if (size) {
    data = (wauto_perception_msgs__msg__Roi *)allocator.zero_allocate(size, sizeof(wauto_perception_msgs__msg__Roi), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_perception_msgs__msg__Roi__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_perception_msgs__msg__Roi__fini(&data[i - 1]);
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
wauto_perception_msgs__msg__Roi__Sequence__fini(wauto_perception_msgs__msg__Roi__Sequence * array)
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
      wauto_perception_msgs__msg__Roi__fini(&array->data[i]);
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

wauto_perception_msgs__msg__Roi__Sequence *
wauto_perception_msgs__msg__Roi__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__Roi__Sequence * array = (wauto_perception_msgs__msg__Roi__Sequence *)allocator.allocate(sizeof(wauto_perception_msgs__msg__Roi__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_perception_msgs__msg__Roi__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_perception_msgs__msg__Roi__Sequence__destroy(wauto_perception_msgs__msg__Roi__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_perception_msgs__msg__Roi__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_perception_msgs__msg__Roi__Sequence__are_equal(const wauto_perception_msgs__msg__Roi__Sequence * lhs, const wauto_perception_msgs__msg__Roi__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_perception_msgs__msg__Roi__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_perception_msgs__msg__Roi__Sequence__copy(
  const wauto_perception_msgs__msg__Roi__Sequence * input,
  wauto_perception_msgs__msg__Roi__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_perception_msgs__msg__Roi);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_perception_msgs__msg__Roi * data =
      (wauto_perception_msgs__msg__Roi *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_perception_msgs__msg__Roi__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_perception_msgs__msg__Roi__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_perception_msgs__msg__Roi__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
