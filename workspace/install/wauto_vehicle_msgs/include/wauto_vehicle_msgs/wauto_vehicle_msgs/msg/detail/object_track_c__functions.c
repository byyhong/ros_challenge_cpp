// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackC.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/object_track_c__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_vehicle_msgs__msg__ObjectTrackC__init(wauto_vehicle_msgs__msg__ObjectTrackC * msg)
{
  if (!msg) {
    return false;
  }
  // rolling_count
  msg->rolling_count = 0;
  // objobjectid
  msg->objobjectid = 0;
  // object_latitude
  msg->object_latitude = 0l;
  // object_absolute_velocity
  msg->object_absolute_velocity = 0;
  // object_course
  msg->object_course = 0;
  // dynprop
  msg->dynprop = 0;
  return true;
}

void
wauto_vehicle_msgs__msg__ObjectTrackC__fini(wauto_vehicle_msgs__msg__ObjectTrackC * msg)
{
  if (!msg) {
    return;
  }
  // rolling_count
  // objobjectid
  // object_latitude
  // object_absolute_velocity
  // object_course
  // dynprop
}

bool
wauto_vehicle_msgs__msg__ObjectTrackC__are_equal(const wauto_vehicle_msgs__msg__ObjectTrackC * lhs, const wauto_vehicle_msgs__msg__ObjectTrackC * rhs)
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
  // object_latitude
  if (lhs->object_latitude != rhs->object_latitude) {
    return false;
  }
  // object_absolute_velocity
  if (lhs->object_absolute_velocity != rhs->object_absolute_velocity) {
    return false;
  }
  // object_course
  if (lhs->object_course != rhs->object_course) {
    return false;
  }
  // dynprop
  if (lhs->dynprop != rhs->dynprop) {
    return false;
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__ObjectTrackC__copy(
  const wauto_vehicle_msgs__msg__ObjectTrackC * input,
  wauto_vehicle_msgs__msg__ObjectTrackC * output)
{
  if (!input || !output) {
    return false;
  }
  // rolling_count
  output->rolling_count = input->rolling_count;
  // objobjectid
  output->objobjectid = input->objobjectid;
  // object_latitude
  output->object_latitude = input->object_latitude;
  // object_absolute_velocity
  output->object_absolute_velocity = input->object_absolute_velocity;
  // object_course
  output->object_course = input->object_course;
  // dynprop
  output->dynprop = input->dynprop;
  return true;
}

wauto_vehicle_msgs__msg__ObjectTrackC *
wauto_vehicle_msgs__msg__ObjectTrackC__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__ObjectTrackC * msg = (wauto_vehicle_msgs__msg__ObjectTrackC *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__ObjectTrackC), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_vehicle_msgs__msg__ObjectTrackC));
  bool success = wauto_vehicle_msgs__msg__ObjectTrackC__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_vehicle_msgs__msg__ObjectTrackC__destroy(wauto_vehicle_msgs__msg__ObjectTrackC * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_vehicle_msgs__msg__ObjectTrackC__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__init(wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__ObjectTrackC * data = NULL;

  if (size) {
    data = (wauto_vehicle_msgs__msg__ObjectTrackC *)allocator.zero_allocate(size, sizeof(wauto_vehicle_msgs__msg__ObjectTrackC), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_vehicle_msgs__msg__ObjectTrackC__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_vehicle_msgs__msg__ObjectTrackC__fini(&data[i - 1]);
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
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__fini(wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * array)
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
      wauto_vehicle_msgs__msg__ObjectTrackC__fini(&array->data[i]);
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

wauto_vehicle_msgs__msg__ObjectTrackC__Sequence *
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * array = (wauto_vehicle_msgs__msg__ObjectTrackC__Sequence *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__ObjectTrackC__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__destroy(wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__are_equal(const wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * lhs, const wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_vehicle_msgs__msg__ObjectTrackC__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__ObjectTrackC__Sequence__copy(
  const wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * input,
  wauto_vehicle_msgs__msg__ObjectTrackC__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_vehicle_msgs__msg__ObjectTrackC);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_vehicle_msgs__msg__ObjectTrackC * data =
      (wauto_vehicle_msgs__msg__ObjectTrackC *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_vehicle_msgs__msg__ObjectTrackC__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_vehicle_msgs__msg__ObjectTrackC__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_vehicle_msgs__msg__ObjectTrackC__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
