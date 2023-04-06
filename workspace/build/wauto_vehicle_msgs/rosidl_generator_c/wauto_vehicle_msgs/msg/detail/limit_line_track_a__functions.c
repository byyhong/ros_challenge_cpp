// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_vehicle_msgs:msg/LimitLineTrackA.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/limit_line_track_a__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_vehicle_msgs__msg__LimitLineTrackA__init(wauto_vehicle_msgs__msg__LimitLineTrackA * msg)
{
  if (!msg) {
    return false;
  }
  // rolling_count
  msg->rolling_count = 0;
  // lineobjectid
  msg->lineobjectid = 0;
  // confidence
  msg->confidence = 0;
  // longitudinal_length
  msg->longitudinal_length = 0;
  // width
  msg->width = 0;
  // longpos
  msg->longpos = 0;
  // latpos
  msg->latpos = 0;
  // relative_lane
  msg->relative_lane = 0;
  return true;
}

void
wauto_vehicle_msgs__msg__LimitLineTrackA__fini(wauto_vehicle_msgs__msg__LimitLineTrackA * msg)
{
  if (!msg) {
    return;
  }
  // rolling_count
  // lineobjectid
  // confidence
  // longitudinal_length
  // width
  // longpos
  // latpos
  // relative_lane
}

bool
wauto_vehicle_msgs__msg__LimitLineTrackA__are_equal(const wauto_vehicle_msgs__msg__LimitLineTrackA * lhs, const wauto_vehicle_msgs__msg__LimitLineTrackA * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rolling_count
  if (lhs->rolling_count != rhs->rolling_count) {
    return false;
  }
  // lineobjectid
  if (lhs->lineobjectid != rhs->lineobjectid) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // longitudinal_length
  if (lhs->longitudinal_length != rhs->longitudinal_length) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // longpos
  if (lhs->longpos != rhs->longpos) {
    return false;
  }
  // latpos
  if (lhs->latpos != rhs->latpos) {
    return false;
  }
  // relative_lane
  if (lhs->relative_lane != rhs->relative_lane) {
    return false;
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__LimitLineTrackA__copy(
  const wauto_vehicle_msgs__msg__LimitLineTrackA * input,
  wauto_vehicle_msgs__msg__LimitLineTrackA * output)
{
  if (!input || !output) {
    return false;
  }
  // rolling_count
  output->rolling_count = input->rolling_count;
  // lineobjectid
  output->lineobjectid = input->lineobjectid;
  // confidence
  output->confidence = input->confidence;
  // longitudinal_length
  output->longitudinal_length = input->longitudinal_length;
  // width
  output->width = input->width;
  // longpos
  output->longpos = input->longpos;
  // latpos
  output->latpos = input->latpos;
  // relative_lane
  output->relative_lane = input->relative_lane;
  return true;
}

wauto_vehicle_msgs__msg__LimitLineTrackA *
wauto_vehicle_msgs__msg__LimitLineTrackA__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__LimitLineTrackA * msg = (wauto_vehicle_msgs__msg__LimitLineTrackA *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__LimitLineTrackA), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_vehicle_msgs__msg__LimitLineTrackA));
  bool success = wauto_vehicle_msgs__msg__LimitLineTrackA__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_vehicle_msgs__msg__LimitLineTrackA__destroy(wauto_vehicle_msgs__msg__LimitLineTrackA * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_vehicle_msgs__msg__LimitLineTrackA__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence__init(wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__LimitLineTrackA * data = NULL;

  if (size) {
    data = (wauto_vehicle_msgs__msg__LimitLineTrackA *)allocator.zero_allocate(size, sizeof(wauto_vehicle_msgs__msg__LimitLineTrackA), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_vehicle_msgs__msg__LimitLineTrackA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_vehicle_msgs__msg__LimitLineTrackA__fini(&data[i - 1]);
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
wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence__fini(wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence * array)
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
      wauto_vehicle_msgs__msg__LimitLineTrackA__fini(&array->data[i]);
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

wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence *
wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence * array = (wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence__destroy(wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence__are_equal(const wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence * lhs, const wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_vehicle_msgs__msg__LimitLineTrackA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence__copy(
  const wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence * input,
  wauto_vehicle_msgs__msg__LimitLineTrackA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_vehicle_msgs__msg__LimitLineTrackA);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_vehicle_msgs__msg__LimitLineTrackA * data =
      (wauto_vehicle_msgs__msg__LimitLineTrackA *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_vehicle_msgs__msg__LimitLineTrackA__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_vehicle_msgs__msg__LimitLineTrackA__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_vehicle_msgs__msg__LimitLineTrackA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
