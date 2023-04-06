// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackA.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/object_track_a__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_vehicle_msgs__msg__ObjectTrackA__init(wauto_vehicle_msgs__msg__ObjectTrackA * msg)
{
  if (!msg) {
    return false;
  }
  // rolling_count
  msg->rolling_count = 0;
  // objobjectid
  msg->objobjectid = 0;
  // objobjecttype
  msg->objobjecttype = 0;
  // longpos
  msg->longpos = 0;
  // latpos
  msg->latpos = 0;
  // rellongvel
  msg->rellongvel = 0;
  // rellatvel
  msg->rellatvel = 0;
  // confidence
  msg->confidence = 0;
  // relative_lane
  msg->relative_lane = 0;
  return true;
}

void
wauto_vehicle_msgs__msg__ObjectTrackA__fini(wauto_vehicle_msgs__msg__ObjectTrackA * msg)
{
  if (!msg) {
    return;
  }
  // rolling_count
  // objobjectid
  // objobjecttype
  // longpos
  // latpos
  // rellongvel
  // rellatvel
  // confidence
  // relative_lane
}

bool
wauto_vehicle_msgs__msg__ObjectTrackA__are_equal(const wauto_vehicle_msgs__msg__ObjectTrackA * lhs, const wauto_vehicle_msgs__msg__ObjectTrackA * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rolling_count
  if (lhs->rolling_count != rhs->rolling_count) {
    return false;
  }
  // objobjectid
  if (lhs->objobjectid != rhs->objobjectid) {
    return false;
  }
  // objobjecttype
  if (lhs->objobjecttype != rhs->objobjecttype) {
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
  // rellongvel
  if (lhs->rellongvel != rhs->rellongvel) {
    return false;
  }
  // rellatvel
  if (lhs->rellatvel != rhs->rellatvel) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // relative_lane
  if (lhs->relative_lane != rhs->relative_lane) {
    return false;
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__ObjectTrackA__copy(
  const wauto_vehicle_msgs__msg__ObjectTrackA * input,
  wauto_vehicle_msgs__msg__ObjectTrackA * output)
{
  if (!input || !output) {
    return false;
  }
  // rolling_count
  output->rolling_count = input->rolling_count;
  // objobjectid
  output->objobjectid = input->objobjectid;
  // objobjecttype
  output->objobjecttype = input->objobjecttype;
  // longpos
  output->longpos = input->longpos;
  // latpos
  output->latpos = input->latpos;
  // rellongvel
  output->rellongvel = input->rellongvel;
  // rellatvel
  output->rellatvel = input->rellatvel;
  // confidence
  output->confidence = input->confidence;
  // relative_lane
  output->relative_lane = input->relative_lane;
  return true;
}

wauto_vehicle_msgs__msg__ObjectTrackA *
wauto_vehicle_msgs__msg__ObjectTrackA__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__ObjectTrackA * msg = (wauto_vehicle_msgs__msg__ObjectTrackA *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__ObjectTrackA), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_vehicle_msgs__msg__ObjectTrackA));
  bool success = wauto_vehicle_msgs__msg__ObjectTrackA__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_vehicle_msgs__msg__ObjectTrackA__destroy(wauto_vehicle_msgs__msg__ObjectTrackA * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_vehicle_msgs__msg__ObjectTrackA__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_vehicle_msgs__msg__ObjectTrackA__Sequence__init(wauto_vehicle_msgs__msg__ObjectTrackA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__ObjectTrackA * data = NULL;

  if (size) {
    data = (wauto_vehicle_msgs__msg__ObjectTrackA *)allocator.zero_allocate(size, sizeof(wauto_vehicle_msgs__msg__ObjectTrackA), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_vehicle_msgs__msg__ObjectTrackA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_vehicle_msgs__msg__ObjectTrackA__fini(&data[i - 1]);
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
wauto_vehicle_msgs__msg__ObjectTrackA__Sequence__fini(wauto_vehicle_msgs__msg__ObjectTrackA__Sequence * array)
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
      wauto_vehicle_msgs__msg__ObjectTrackA__fini(&array->data[i]);
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

wauto_vehicle_msgs__msg__ObjectTrackA__Sequence *
wauto_vehicle_msgs__msg__ObjectTrackA__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__ObjectTrackA__Sequence * array = (wauto_vehicle_msgs__msg__ObjectTrackA__Sequence *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__ObjectTrackA__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_vehicle_msgs__msg__ObjectTrackA__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_vehicle_msgs__msg__ObjectTrackA__Sequence__destroy(wauto_vehicle_msgs__msg__ObjectTrackA__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_vehicle_msgs__msg__ObjectTrackA__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_vehicle_msgs__msg__ObjectTrackA__Sequence__are_equal(const wauto_vehicle_msgs__msg__ObjectTrackA__Sequence * lhs, const wauto_vehicle_msgs__msg__ObjectTrackA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_vehicle_msgs__msg__ObjectTrackA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__ObjectTrackA__Sequence__copy(
  const wauto_vehicle_msgs__msg__ObjectTrackA__Sequence * input,
  wauto_vehicle_msgs__msg__ObjectTrackA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_vehicle_msgs__msg__ObjectTrackA);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_vehicle_msgs__msg__ObjectTrackA * data =
      (wauto_vehicle_msgs__msg__ObjectTrackA *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_vehicle_msgs__msg__ObjectTrackA__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_vehicle_msgs__msg__ObjectTrackA__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_vehicle_msgs__msg__ObjectTrackA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
