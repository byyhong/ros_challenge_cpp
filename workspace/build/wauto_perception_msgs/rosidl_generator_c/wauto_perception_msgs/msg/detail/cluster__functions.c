// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_perception_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice
#include "wauto_perception_msgs/msg/detail/cluster__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cloud`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `size`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
wauto_perception_msgs__msg__Cluster__init(wauto_perception_msgs__msg__Cluster * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    wauto_perception_msgs__msg__Cluster__fini(msg);
    return false;
  }
  // id
  // cloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cloud)) {
    wauto_perception_msgs__msg__Cluster__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    wauto_perception_msgs__msg__Cluster__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Vector3__init(&msg->size)) {
    wauto_perception_msgs__msg__Cluster__fini(msg);
    return false;
  }
  return true;
}

void
wauto_perception_msgs__msg__Cluster__fini(wauto_perception_msgs__msg__Cluster * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // cloud
  sensor_msgs__msg__PointCloud2__fini(&msg->cloud);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // size
  geometry_msgs__msg__Vector3__fini(&msg->size);
}

bool
wauto_perception_msgs__msg__Cluster__are_equal(const wauto_perception_msgs__msg__Cluster * lhs, const wauto_perception_msgs__msg__Cluster * rhs)
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
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // cloud
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->cloud), &(rhs->cloud)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
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
wauto_perception_msgs__msg__Cluster__copy(
  const wauto_perception_msgs__msg__Cluster * input,
  wauto_perception_msgs__msg__Cluster * output)
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
  // id
  output->id = input->id;
  // cloud
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->cloud), &(output->cloud)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
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

wauto_perception_msgs__msg__Cluster *
wauto_perception_msgs__msg__Cluster__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__Cluster * msg = (wauto_perception_msgs__msg__Cluster *)allocator.allocate(sizeof(wauto_perception_msgs__msg__Cluster), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_perception_msgs__msg__Cluster));
  bool success = wauto_perception_msgs__msg__Cluster__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_perception_msgs__msg__Cluster__destroy(wauto_perception_msgs__msg__Cluster * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_perception_msgs__msg__Cluster__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_perception_msgs__msg__Cluster__Sequence__init(wauto_perception_msgs__msg__Cluster__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__Cluster * data = NULL;

  if (size) {
    data = (wauto_perception_msgs__msg__Cluster *)allocator.zero_allocate(size, sizeof(wauto_perception_msgs__msg__Cluster), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_perception_msgs__msg__Cluster__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_perception_msgs__msg__Cluster__fini(&data[i - 1]);
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
wauto_perception_msgs__msg__Cluster__Sequence__fini(wauto_perception_msgs__msg__Cluster__Sequence * array)
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
      wauto_perception_msgs__msg__Cluster__fini(&array->data[i]);
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

wauto_perception_msgs__msg__Cluster__Sequence *
wauto_perception_msgs__msg__Cluster__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__Cluster__Sequence * array = (wauto_perception_msgs__msg__Cluster__Sequence *)allocator.allocate(sizeof(wauto_perception_msgs__msg__Cluster__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_perception_msgs__msg__Cluster__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_perception_msgs__msg__Cluster__Sequence__destroy(wauto_perception_msgs__msg__Cluster__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_perception_msgs__msg__Cluster__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_perception_msgs__msg__Cluster__Sequence__are_equal(const wauto_perception_msgs__msg__Cluster__Sequence * lhs, const wauto_perception_msgs__msg__Cluster__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_perception_msgs__msg__Cluster__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_perception_msgs__msg__Cluster__Sequence__copy(
  const wauto_perception_msgs__msg__Cluster__Sequence * input,
  wauto_perception_msgs__msg__Cluster__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_perception_msgs__msg__Cluster);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_perception_msgs__msg__Cluster * data =
      (wauto_perception_msgs__msg__Cluster *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_perception_msgs__msg__Cluster__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_perception_msgs__msg__Cluster__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_perception_msgs__msg__Cluster__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
