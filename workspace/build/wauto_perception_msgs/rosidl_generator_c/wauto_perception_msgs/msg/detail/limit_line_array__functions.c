// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_perception_msgs:msg/LimitLineArray.idl
// generated code does not contain a copyright notice
#include "wauto_perception_msgs/msg/detail/limit_line_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `limit_lines`
#include "wauto_perception_msgs/msg/detail/limit_line__functions.h"

bool
wauto_perception_msgs__msg__LimitLineArray__init(wauto_perception_msgs__msg__LimitLineArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    wauto_perception_msgs__msg__LimitLineArray__fini(msg);
    return false;
  }
  // limit_lines
  if (!wauto_perception_msgs__msg__LimitLine__Sequence__init(&msg->limit_lines, 0)) {
    wauto_perception_msgs__msg__LimitLineArray__fini(msg);
    return false;
  }
  return true;
}

void
wauto_perception_msgs__msg__LimitLineArray__fini(wauto_perception_msgs__msg__LimitLineArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // limit_lines
  wauto_perception_msgs__msg__LimitLine__Sequence__fini(&msg->limit_lines);
}

bool
wauto_perception_msgs__msg__LimitLineArray__are_equal(const wauto_perception_msgs__msg__LimitLineArray * lhs, const wauto_perception_msgs__msg__LimitLineArray * rhs)
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
  // limit_lines
  if (!wauto_perception_msgs__msg__LimitLine__Sequence__are_equal(
      &(lhs->limit_lines), &(rhs->limit_lines)))
  {
    return false;
  }
  return true;
}

bool
wauto_perception_msgs__msg__LimitLineArray__copy(
  const wauto_perception_msgs__msg__LimitLineArray * input,
  wauto_perception_msgs__msg__LimitLineArray * output)
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
  // limit_lines
  if (!wauto_perception_msgs__msg__LimitLine__Sequence__copy(
      &(input->limit_lines), &(output->limit_lines)))
  {
    return false;
  }
  return true;
}

wauto_perception_msgs__msg__LimitLineArray *
wauto_perception_msgs__msg__LimitLineArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__LimitLineArray * msg = (wauto_perception_msgs__msg__LimitLineArray *)allocator.allocate(sizeof(wauto_perception_msgs__msg__LimitLineArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_perception_msgs__msg__LimitLineArray));
  bool success = wauto_perception_msgs__msg__LimitLineArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_perception_msgs__msg__LimitLineArray__destroy(wauto_perception_msgs__msg__LimitLineArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_perception_msgs__msg__LimitLineArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_perception_msgs__msg__LimitLineArray__Sequence__init(wauto_perception_msgs__msg__LimitLineArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__LimitLineArray * data = NULL;

  if (size) {
    data = (wauto_perception_msgs__msg__LimitLineArray *)allocator.zero_allocate(size, sizeof(wauto_perception_msgs__msg__LimitLineArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_perception_msgs__msg__LimitLineArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_perception_msgs__msg__LimitLineArray__fini(&data[i - 1]);
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
wauto_perception_msgs__msg__LimitLineArray__Sequence__fini(wauto_perception_msgs__msg__LimitLineArray__Sequence * array)
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
      wauto_perception_msgs__msg__LimitLineArray__fini(&array->data[i]);
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

wauto_perception_msgs__msg__LimitLineArray__Sequence *
wauto_perception_msgs__msg__LimitLineArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__LimitLineArray__Sequence * array = (wauto_perception_msgs__msg__LimitLineArray__Sequence *)allocator.allocate(sizeof(wauto_perception_msgs__msg__LimitLineArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_perception_msgs__msg__LimitLineArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_perception_msgs__msg__LimitLineArray__Sequence__destroy(wauto_perception_msgs__msg__LimitLineArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_perception_msgs__msg__LimitLineArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_perception_msgs__msg__LimitLineArray__Sequence__are_equal(const wauto_perception_msgs__msg__LimitLineArray__Sequence * lhs, const wauto_perception_msgs__msg__LimitLineArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_perception_msgs__msg__LimitLineArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_perception_msgs__msg__LimitLineArray__Sequence__copy(
  const wauto_perception_msgs__msg__LimitLineArray__Sequence * input,
  wauto_perception_msgs__msg__LimitLineArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_perception_msgs__msg__LimitLineArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_perception_msgs__msg__LimitLineArray * data =
      (wauto_perception_msgs__msg__LimitLineArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_perception_msgs__msg__LimitLineArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_perception_msgs__msg__LimitLineArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_perception_msgs__msg__LimitLineArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
