// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_perception_msgs:msg/Object.idl
// generated code does not contain a copyright notice
#include "wauto_perception_msgs/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `classification`
#include "wauto_perception_msgs/msg/detail/object_classification__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"
// Member `size`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
wauto_perception_msgs__msg__Object__init(wauto_perception_msgs__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // id
  msg->id = 0;
  // classification
  if (!wauto_perception_msgs__msg__ObjectClassification__init(&msg->classification)) {
    wauto_perception_msgs__msg__Object__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose)) {
    wauto_perception_msgs__msg__Object__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->twist)) {
    wauto_perception_msgs__msg__Object__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__init(&msg->size)) {
    wauto_perception_msgs__msg__Object__fini(msg);
    return false;
  }
  return true;
}

void
wauto_perception_msgs__msg__Object__fini(wauto_perception_msgs__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // id
  // classification
  wauto_perception_msgs__msg__ObjectClassification__fini(&msg->classification);
  // pose
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose);
  // twist
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->twist);
  // size
  geometry_msgs__msg__Vector3__fini(&msg->size);
}

bool
wauto_perception_msgs__msg__Object__are_equal(const wauto_perception_msgs__msg__Object * lhs, const wauto_perception_msgs__msg__Object * rhs)
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
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  return true;
}

bool
wauto_perception_msgs__msg__Object__copy(
  const wauto_perception_msgs__msg__Object * input,
  wauto_perception_msgs__msg__Object * output)
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
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  return true;
}

wauto_perception_msgs__msg__Object *
wauto_perception_msgs__msg__Object__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__Object * msg = (wauto_perception_msgs__msg__Object *)allocator.allocate(sizeof(wauto_perception_msgs__msg__Object), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_perception_msgs__msg__Object));
  bool success = wauto_perception_msgs__msg__Object__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_perception_msgs__msg__Object__destroy(wauto_perception_msgs__msg__Object * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_perception_msgs__msg__Object__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_perception_msgs__msg__Object__Sequence__init(wauto_perception_msgs__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__Object * data = NULL;

  if (size) {
    data = (wauto_perception_msgs__msg__Object *)allocator.zero_allocate(size, sizeof(wauto_perception_msgs__msg__Object), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_perception_msgs__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_perception_msgs__msg__Object__fini(&data[i - 1]);
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
wauto_perception_msgs__msg__Object__Sequence__fini(wauto_perception_msgs__msg__Object__Sequence * array)
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
      wauto_perception_msgs__msg__Object__fini(&array->data[i]);
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

wauto_perception_msgs__msg__Object__Sequence *
wauto_perception_msgs__msg__Object__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__Object__Sequence * array = (wauto_perception_msgs__msg__Object__Sequence *)allocator.allocate(sizeof(wauto_perception_msgs__msg__Object__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_perception_msgs__msg__Object__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_perception_msgs__msg__Object__Sequence__destroy(wauto_perception_msgs__msg__Object__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_perception_msgs__msg__Object__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_perception_msgs__msg__Object__Sequence__are_equal(const wauto_perception_msgs__msg__Object__Sequence * lhs, const wauto_perception_msgs__msg__Object__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_perception_msgs__msg__Object__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_perception_msgs__msg__Object__Sequence__copy(
  const wauto_perception_msgs__msg__Object__Sequence * input,
  wauto_perception_msgs__msg__Object__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_perception_msgs__msg__Object);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_perception_msgs__msg__Object * data =
      (wauto_perception_msgs__msg__Object *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_perception_msgs__msg__Object__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_perception_msgs__msg__Object__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_perception_msgs__msg__Object__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
