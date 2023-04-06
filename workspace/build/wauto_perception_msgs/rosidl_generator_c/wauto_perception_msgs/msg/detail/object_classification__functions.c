// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_perception_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice
#include "wauto_perception_msgs/msg/detail/object_classification__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_perception_msgs__msg__ObjectClassification__init(wauto_perception_msgs__msg__ObjectClassification * msg)
{
  if (!msg) {
    return false;
  }
  // confidence
  // classification
  // dynprop
  // custom_classification
  // value
  msg->value = 0;
  return true;
}

void
wauto_perception_msgs__msg__ObjectClassification__fini(wauto_perception_msgs__msg__ObjectClassification * msg)
{
  if (!msg) {
    return;
  }
  // confidence
  // classification
  // dynprop
  // custom_classification
  // value
}

bool
wauto_perception_msgs__msg__ObjectClassification__are_equal(const wauto_perception_msgs__msg__ObjectClassification * lhs, const wauto_perception_msgs__msg__ObjectClassification * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // classification
  if (lhs->classification != rhs->classification) {
    return false;
  }
  // dynprop
  if (lhs->dynprop != rhs->dynprop) {
    return false;
  }
  // custom_classification
  if (lhs->custom_classification != rhs->custom_classification) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
wauto_perception_msgs__msg__ObjectClassification__copy(
  const wauto_perception_msgs__msg__ObjectClassification * input,
  wauto_perception_msgs__msg__ObjectClassification * output)
{
  if (!input || !output) {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // classification
  output->classification = input->classification;
  // dynprop
  output->dynprop = input->dynprop;
  // custom_classification
  output->custom_classification = input->custom_classification;
  // value
  output->value = input->value;
  return true;
}

wauto_perception_msgs__msg__ObjectClassification *
wauto_perception_msgs__msg__ObjectClassification__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__ObjectClassification * msg = (wauto_perception_msgs__msg__ObjectClassification *)allocator.allocate(sizeof(wauto_perception_msgs__msg__ObjectClassification), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_perception_msgs__msg__ObjectClassification));
  bool success = wauto_perception_msgs__msg__ObjectClassification__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_perception_msgs__msg__ObjectClassification__destroy(wauto_perception_msgs__msg__ObjectClassification * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_perception_msgs__msg__ObjectClassification__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_perception_msgs__msg__ObjectClassification__Sequence__init(wauto_perception_msgs__msg__ObjectClassification__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__ObjectClassification * data = NULL;

  if (size) {
    data = (wauto_perception_msgs__msg__ObjectClassification *)allocator.zero_allocate(size, sizeof(wauto_perception_msgs__msg__ObjectClassification), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_perception_msgs__msg__ObjectClassification__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_perception_msgs__msg__ObjectClassification__fini(&data[i - 1]);
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
wauto_perception_msgs__msg__ObjectClassification__Sequence__fini(wauto_perception_msgs__msg__ObjectClassification__Sequence * array)
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
      wauto_perception_msgs__msg__ObjectClassification__fini(&array->data[i]);
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

wauto_perception_msgs__msg__ObjectClassification__Sequence *
wauto_perception_msgs__msg__ObjectClassification__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_perception_msgs__msg__ObjectClassification__Sequence * array = (wauto_perception_msgs__msg__ObjectClassification__Sequence *)allocator.allocate(sizeof(wauto_perception_msgs__msg__ObjectClassification__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_perception_msgs__msg__ObjectClassification__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_perception_msgs__msg__ObjectClassification__Sequence__destroy(wauto_perception_msgs__msg__ObjectClassification__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_perception_msgs__msg__ObjectClassification__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_perception_msgs__msg__ObjectClassification__Sequence__are_equal(const wauto_perception_msgs__msg__ObjectClassification__Sequence * lhs, const wauto_perception_msgs__msg__ObjectClassification__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_perception_msgs__msg__ObjectClassification__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_perception_msgs__msg__ObjectClassification__Sequence__copy(
  const wauto_perception_msgs__msg__ObjectClassification__Sequence * input,
  wauto_perception_msgs__msg__ObjectClassification__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_perception_msgs__msg__ObjectClassification);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_perception_msgs__msg__ObjectClassification * data =
      (wauto_perception_msgs__msg__ObjectClassification *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_perception_msgs__msg__ObjectClassification__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_perception_msgs__msg__ObjectClassification__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_perception_msgs__msg__ObjectClassification__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
