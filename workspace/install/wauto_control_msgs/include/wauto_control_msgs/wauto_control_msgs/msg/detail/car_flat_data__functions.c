// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_control_msgs:msg/CarFlatData.idl
// generated code does not contain a copyright notice
#include "wauto_control_msgs/msg/detail/car_flat_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x`
#include "wauto_control_msgs/msg/detail/car_state__functions.h"

bool
wauto_control_msgs__msg__CarFlatData__init(wauto_control_msgs__msg__CarFlatData * msg)
{
  if (!msg) {
    return false;
  }
  // l
  // nu
  // gamma_max
  // a_max
  // v_max
  // x
  if (!wauto_control_msgs__msg__CarState__init(&msg->x)) {
    wauto_control_msgs__msg__CarFlatData__fini(msg);
    return false;
  }
  return true;
}

void
wauto_control_msgs__msg__CarFlatData__fini(wauto_control_msgs__msg__CarFlatData * msg)
{
  if (!msg) {
    return;
  }
  // l
  // nu
  // gamma_max
  // a_max
  // v_max
  // x
  wauto_control_msgs__msg__CarState__fini(&msg->x);
}

bool
wauto_control_msgs__msg__CarFlatData__are_equal(const wauto_control_msgs__msg__CarFlatData * lhs, const wauto_control_msgs__msg__CarFlatData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // l
  if (lhs->l != rhs->l) {
    return false;
  }
  // nu
  if (lhs->nu != rhs->nu) {
    return false;
  }
  // gamma_max
  if (lhs->gamma_max != rhs->gamma_max) {
    return false;
  }
  // a_max
  if (lhs->a_max != rhs->a_max) {
    return false;
  }
  // v_max
  if (lhs->v_max != rhs->v_max) {
    return false;
  }
  // x
  if (!wauto_control_msgs__msg__CarState__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  return true;
}

bool
wauto_control_msgs__msg__CarFlatData__copy(
  const wauto_control_msgs__msg__CarFlatData * input,
  wauto_control_msgs__msg__CarFlatData * output)
{
  if (!input || !output) {
    return false;
  }
  // l
  output->l = input->l;
  // nu
  output->nu = input->nu;
  // gamma_max
  output->gamma_max = input->gamma_max;
  // a_max
  output->a_max = input->a_max;
  // v_max
  output->v_max = input->v_max;
  // x
  if (!wauto_control_msgs__msg__CarState__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  return true;
}

wauto_control_msgs__msg__CarFlatData *
wauto_control_msgs__msg__CarFlatData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarFlatData * msg = (wauto_control_msgs__msg__CarFlatData *)allocator.allocate(sizeof(wauto_control_msgs__msg__CarFlatData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_control_msgs__msg__CarFlatData));
  bool success = wauto_control_msgs__msg__CarFlatData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_control_msgs__msg__CarFlatData__destroy(wauto_control_msgs__msg__CarFlatData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_control_msgs__msg__CarFlatData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_control_msgs__msg__CarFlatData__Sequence__init(wauto_control_msgs__msg__CarFlatData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarFlatData * data = NULL;

  if (size) {
    data = (wauto_control_msgs__msg__CarFlatData *)allocator.zero_allocate(size, sizeof(wauto_control_msgs__msg__CarFlatData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_control_msgs__msg__CarFlatData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_control_msgs__msg__CarFlatData__fini(&data[i - 1]);
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
wauto_control_msgs__msg__CarFlatData__Sequence__fini(wauto_control_msgs__msg__CarFlatData__Sequence * array)
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
      wauto_control_msgs__msg__CarFlatData__fini(&array->data[i]);
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

wauto_control_msgs__msg__CarFlatData__Sequence *
wauto_control_msgs__msg__CarFlatData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_control_msgs__msg__CarFlatData__Sequence * array = (wauto_control_msgs__msg__CarFlatData__Sequence *)allocator.allocate(sizeof(wauto_control_msgs__msg__CarFlatData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_control_msgs__msg__CarFlatData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_control_msgs__msg__CarFlatData__Sequence__destroy(wauto_control_msgs__msg__CarFlatData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_control_msgs__msg__CarFlatData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_control_msgs__msg__CarFlatData__Sequence__are_equal(const wauto_control_msgs__msg__CarFlatData__Sequence * lhs, const wauto_control_msgs__msg__CarFlatData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_control_msgs__msg__CarFlatData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_control_msgs__msg__CarFlatData__Sequence__copy(
  const wauto_control_msgs__msg__CarFlatData__Sequence * input,
  wauto_control_msgs__msg__CarFlatData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_control_msgs__msg__CarFlatData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_control_msgs__msg__CarFlatData * data =
      (wauto_control_msgs__msg__CarFlatData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_control_msgs__msg__CarFlatData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_control_msgs__msg__CarFlatData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_control_msgs__msg__CarFlatData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
