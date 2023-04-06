// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_vehicle_msgs:msg/TrafficSignTrackA.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/traffic_sign_track_a__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_vehicle_msgs__msg__TrafficSignTrackA__init(wauto_vehicle_msgs__msg__TrafficSignTrackA * msg)
{
  if (!msg) {
    return false;
  }
  // rolling_count
  msg->rolling_count = 0;
  // signobjectid
  msg->signobjectid = 0;
  // confidence
  msg->confidence = 0;
  // longpos
  msg->longpos = 0;
  // height_above_ground
  msg->height_above_ground = 0;
  // latpos
  msg->latpos = 0;
  // sign_type
  msg->sign_type = 0;
  // sign_value
  msg->sign_value = 0;
  return true;
}

void
wauto_vehicle_msgs__msg__TrafficSignTrackA__fini(wauto_vehicle_msgs__msg__TrafficSignTrackA * msg)
{
  if (!msg) {
    return;
  }
  // rolling_count
  // signobjectid
  // confidence
  // longpos
  // height_above_ground
  // latpos
  // sign_type
  // sign_value
}

bool
wauto_vehicle_msgs__msg__TrafficSignTrackA__are_equal(const wauto_vehicle_msgs__msg__TrafficSignTrackA * lhs, const wauto_vehicle_msgs__msg__TrafficSignTrackA * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rolling_count
  if (lhs->rolling_count != rhs->rolling_count) {
    return false;
  }
  // signobjectid
  if (lhs->signobjectid != rhs->signobjectid) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // longpos
  if (lhs->longpos != rhs->longpos) {
    return false;
  }
  // height_above_ground
  if (lhs->height_above_ground != rhs->height_above_ground) {
    return false;
  }
  // latpos
  if (lhs->latpos != rhs->latpos) {
    return false;
  }
  // sign_type
  if (lhs->sign_type != rhs->sign_type) {
    return false;
  }
  // sign_value
  if (lhs->sign_value != rhs->sign_value) {
    return false;
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__TrafficSignTrackA__copy(
  const wauto_vehicle_msgs__msg__TrafficSignTrackA * input,
  wauto_vehicle_msgs__msg__TrafficSignTrackA * output)
{
  if (!input || !output) {
    return false;
  }
  // rolling_count
  output->rolling_count = input->rolling_count;
  // signobjectid
  output->signobjectid = input->signobjectid;
  // confidence
  output->confidence = input->confidence;
  // longpos
  output->longpos = input->longpos;
  // height_above_ground
  output->height_above_ground = input->height_above_ground;
  // latpos
  output->latpos = input->latpos;
  // sign_type
  output->sign_type = input->sign_type;
  // sign_value
  output->sign_value = input->sign_value;
  return true;
}

wauto_vehicle_msgs__msg__TrafficSignTrackA *
wauto_vehicle_msgs__msg__TrafficSignTrackA__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__TrafficSignTrackA * msg = (wauto_vehicle_msgs__msg__TrafficSignTrackA *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__TrafficSignTrackA), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_vehicle_msgs__msg__TrafficSignTrackA));
  bool success = wauto_vehicle_msgs__msg__TrafficSignTrackA__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_vehicle_msgs__msg__TrafficSignTrackA__destroy(wauto_vehicle_msgs__msg__TrafficSignTrackA * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_vehicle_msgs__msg__TrafficSignTrackA__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence__init(wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__TrafficSignTrackA * data = NULL;

  if (size) {
    data = (wauto_vehicle_msgs__msg__TrafficSignTrackA *)allocator.zero_allocate(size, sizeof(wauto_vehicle_msgs__msg__TrafficSignTrackA), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_vehicle_msgs__msg__TrafficSignTrackA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_vehicle_msgs__msg__TrafficSignTrackA__fini(&data[i - 1]);
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
wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence__fini(wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence * array)
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
      wauto_vehicle_msgs__msg__TrafficSignTrackA__fini(&array->data[i]);
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

wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence *
wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence * array = (wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence__destroy(wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence__are_equal(const wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence * lhs, const wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_vehicle_msgs__msg__TrafficSignTrackA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence__copy(
  const wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence * input,
  wauto_vehicle_msgs__msg__TrafficSignTrackA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_vehicle_msgs__msg__TrafficSignTrackA);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_vehicle_msgs__msg__TrafficSignTrackA * data =
      (wauto_vehicle_msgs__msg__TrafficSignTrackA *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_vehicle_msgs__msg__TrafficSignTrackA__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_vehicle_msgs__msg__TrafficSignTrackA__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_vehicle_msgs__msg__TrafficSignTrackA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
