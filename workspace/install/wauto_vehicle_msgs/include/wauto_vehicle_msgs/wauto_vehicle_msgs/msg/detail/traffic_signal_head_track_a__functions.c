// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_vehicle_msgs:msg/TrafficSignalHeadTrackA.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/traffic_signal_head_track_a__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__init(wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * msg)
{
  if (!msg) {
    return false;
  }
  // rolling_count
  msg->rolling_count = 0;
  // signalobjectid
  msg->signalobjectid = 0;
  // height_above_ground
  msg->height_above_ground = 0;
  // longpos
  msg->longpos = 0;
  // latpos
  msg->latpos = 0;
  // confidence
  msg->confidence = 0;
  // signal_head_type
  msg->signal_head_type = 0;
  // illumltnone
  msg->illumltnone = 0;
  // illumltredball
  msg->illumltredball = 0;
  // illumltyellowball
  msg->illumltyellowball = 0;
  // illumltgreenball
  msg->illumltgreenball = 0;
  // illumltflshngredball
  msg->illumltflshngredball = 0;
  // illumltflshngyellowball
  msg->illumltflshngyellowball = 0;
  // illumltredleftarrow
  msg->illumltredleftarrow = 0;
  // illumltyellowleftarrow
  msg->illumltyellowleftarrow = 0;
  // illumltgreenleftarrow
  msg->illumltgreenleftarrow = 0;
  // illumltflshngredleftarrow
  msg->illumltflshngredleftarrow = 0;
  // illumltflshngyellowleftarrow
  msg->illumltflshngyellowleftarrow = 0;
  // illumltredrightarrow
  msg->illumltredrightarrow = 0;
  // illumltyellowrightarrow
  msg->illumltyellowrightarrow = 0;
  // illumltgreenrightarrow
  msg->illumltgreenrightarrow = 0;
  // illumltflshngredrightarrow
  msg->illumltflshngredrightarrow = 0;
  // illumltflshngyellowrightarrow
  msg->illumltflshngyellowrightarrow = 0;
  return true;
}

void
wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__fini(wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * msg)
{
  if (!msg) {
    return;
  }
  // rolling_count
  // signalobjectid
  // height_above_ground
  // longpos
  // latpos
  // confidence
  // signal_head_type
  // illumltnone
  // illumltredball
  // illumltyellowball
  // illumltgreenball
  // illumltflshngredball
  // illumltflshngyellowball
  // illumltredleftarrow
  // illumltyellowleftarrow
  // illumltgreenleftarrow
  // illumltflshngredleftarrow
  // illumltflshngyellowleftarrow
  // illumltredrightarrow
  // illumltyellowrightarrow
  // illumltgreenrightarrow
  // illumltflshngredrightarrow
  // illumltflshngyellowrightarrow
}

bool
wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__are_equal(const wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * lhs, const wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rolling_count
  if (lhs->rolling_count != rhs->rolling_count) {
    return false;
  }
  // signalobjectid
  if (lhs->signalobjectid != rhs->signalobjectid) {
    return false;
  }
  // height_above_ground
  if (lhs->height_above_ground != rhs->height_above_ground) {
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
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // signal_head_type
  if (lhs->signal_head_type != rhs->signal_head_type) {
    return false;
  }
  // illumltnone
  if (lhs->illumltnone != rhs->illumltnone) {
    return false;
  }
  // illumltredball
  if (lhs->illumltredball != rhs->illumltredball) {
    return false;
  }
  // illumltyellowball
  if (lhs->illumltyellowball != rhs->illumltyellowball) {
    return false;
  }
  // illumltgreenball
  if (lhs->illumltgreenball != rhs->illumltgreenball) {
    return false;
  }
  // illumltflshngredball
  if (lhs->illumltflshngredball != rhs->illumltflshngredball) {
    return false;
  }
  // illumltflshngyellowball
  if (lhs->illumltflshngyellowball != rhs->illumltflshngyellowball) {
    return false;
  }
  // illumltredleftarrow
  if (lhs->illumltredleftarrow != rhs->illumltredleftarrow) {
    return false;
  }
  // illumltyellowleftarrow
  if (lhs->illumltyellowleftarrow != rhs->illumltyellowleftarrow) {
    return false;
  }
  // illumltgreenleftarrow
  if (lhs->illumltgreenleftarrow != rhs->illumltgreenleftarrow) {
    return false;
  }
  // illumltflshngredleftarrow
  if (lhs->illumltflshngredleftarrow != rhs->illumltflshngredleftarrow) {
    return false;
  }
  // illumltflshngyellowleftarrow
  if (lhs->illumltflshngyellowleftarrow != rhs->illumltflshngyellowleftarrow) {
    return false;
  }
  // illumltredrightarrow
  if (lhs->illumltredrightarrow != rhs->illumltredrightarrow) {
    return false;
  }
  // illumltyellowrightarrow
  if (lhs->illumltyellowrightarrow != rhs->illumltyellowrightarrow) {
    return false;
  }
  // illumltgreenrightarrow
  if (lhs->illumltgreenrightarrow != rhs->illumltgreenrightarrow) {
    return false;
  }
  // illumltflshngredrightarrow
  if (lhs->illumltflshngredrightarrow != rhs->illumltflshngredrightarrow) {
    return false;
  }
  // illumltflshngyellowrightarrow
  if (lhs->illumltflshngyellowrightarrow != rhs->illumltflshngyellowrightarrow) {
    return false;
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__copy(
  const wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * input,
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * output)
{
  if (!input || !output) {
    return false;
  }
  // rolling_count
  output->rolling_count = input->rolling_count;
  // signalobjectid
  output->signalobjectid = input->signalobjectid;
  // height_above_ground
  output->height_above_ground = input->height_above_ground;
  // longpos
  output->longpos = input->longpos;
  // latpos
  output->latpos = input->latpos;
  // confidence
  output->confidence = input->confidence;
  // signal_head_type
  output->signal_head_type = input->signal_head_type;
  // illumltnone
  output->illumltnone = input->illumltnone;
  // illumltredball
  output->illumltredball = input->illumltredball;
  // illumltyellowball
  output->illumltyellowball = input->illumltyellowball;
  // illumltgreenball
  output->illumltgreenball = input->illumltgreenball;
  // illumltflshngredball
  output->illumltflshngredball = input->illumltflshngredball;
  // illumltflshngyellowball
  output->illumltflshngyellowball = input->illumltflshngyellowball;
  // illumltredleftarrow
  output->illumltredleftarrow = input->illumltredleftarrow;
  // illumltyellowleftarrow
  output->illumltyellowleftarrow = input->illumltyellowleftarrow;
  // illumltgreenleftarrow
  output->illumltgreenleftarrow = input->illumltgreenleftarrow;
  // illumltflshngredleftarrow
  output->illumltflshngredleftarrow = input->illumltflshngredleftarrow;
  // illumltflshngyellowleftarrow
  output->illumltflshngyellowleftarrow = input->illumltflshngyellowleftarrow;
  // illumltredrightarrow
  output->illumltredrightarrow = input->illumltredrightarrow;
  // illumltyellowrightarrow
  output->illumltyellowrightarrow = input->illumltyellowrightarrow;
  // illumltgreenrightarrow
  output->illumltgreenrightarrow = input->illumltgreenrightarrow;
  // illumltflshngredrightarrow
  output->illumltflshngredrightarrow = input->illumltflshngredrightarrow;
  // illumltflshngyellowrightarrow
  output->illumltflshngyellowrightarrow = input->illumltflshngyellowrightarrow;
  return true;
}

wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA *
wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * msg = (wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA));
  bool success = wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__destroy(wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence__init(wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * data = NULL;

  if (size) {
    data = (wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA *)allocator.zero_allocate(size, sizeof(wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__fini(&data[i - 1]);
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
wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence__fini(wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence * array)
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
      wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__fini(&array->data[i]);
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

wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence *
wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence * array = (wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence__destroy(wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence__are_equal(const wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence * lhs, const wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence__copy(
  const wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence * input,
  wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA * data =
      (wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
