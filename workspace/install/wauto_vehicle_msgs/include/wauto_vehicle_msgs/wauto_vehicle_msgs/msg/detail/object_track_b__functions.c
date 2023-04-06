// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackB.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/object_track_b__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_vehicle_msgs__msg__ObjectTrackB__init(wauto_vehicle_msgs__msg__ObjectTrackB * msg)
{
  if (!msg) {
    return false;
  }
  // rolling_count
  msg->rolling_count = 0;
  // objobjectid
  msg->objobjectid = 0;
  // width
  msg->width = 0;
  // height
  msg->height = 0;
  // object_relative_orientation
  msg->object_relative_orientation = 0;
  // rellnposition
  msg->rellnposition = 0;
  // object_source_camera
  msg->object_source_camera = 0;
  // object_source_radar
  msg->object_source_radar = 0;
  // object_source_ultrasonic
  msg->object_source_ultrasonic = 0;
  // object_source_v2x
  msg->object_source_v2x = 0;
  // object_source_lidar
  msg->object_source_lidar = 0;
  // object_source_other
  msg->object_source_other = 0;
  return true;
}

void
wauto_vehicle_msgs__msg__ObjectTrackB__fini(wauto_vehicle_msgs__msg__ObjectTrackB * msg)
{
  if (!msg) {
    return;
  }
  // rolling_count
  // objobjectid
  // width
  // height
  // object_relative_orientation
  // rellnposition
  // object_source_camera
  // object_source_radar
  // object_source_ultrasonic
  // object_source_v2x
  // object_source_lidar
  // object_source_other
}

bool
wauto_vehicle_msgs__msg__ObjectTrackB__are_equal(const wauto_vehicle_msgs__msg__ObjectTrackB * lhs, const wauto_vehicle_msgs__msg__ObjectTrackB * rhs)
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
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // object_relative_orientation
  if (lhs->object_relative_orientation != rhs->object_relative_orientation) {
    return false;
  }
  // rellnposition
  if (lhs->rellnposition != rhs->rellnposition) {
    return false;
  }
  // object_source_camera
  if (lhs->object_source_camera != rhs->object_source_camera) {
    return false;
  }
  // object_source_radar
  if (lhs->object_source_radar != rhs->object_source_radar) {
    return false;
  }
  // object_source_ultrasonic
  if (lhs->object_source_ultrasonic != rhs->object_source_ultrasonic) {
    return false;
  }
  // object_source_v2x
  if (lhs->object_source_v2x != rhs->object_source_v2x) {
    return false;
  }
  // object_source_lidar
  if (lhs->object_source_lidar != rhs->object_source_lidar) {
    return false;
  }
  // object_source_other
  if (lhs->object_source_other != rhs->object_source_other) {
    return false;
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__ObjectTrackB__copy(
  const wauto_vehicle_msgs__msg__ObjectTrackB * input,
  wauto_vehicle_msgs__msg__ObjectTrackB * output)
{
  if (!input || !output) {
    return false;
  }
  // rolling_count
  output->rolling_count = input->rolling_count;
  // objobjectid
  output->objobjectid = input->objobjectid;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // object_relative_orientation
  output->object_relative_orientation = input->object_relative_orientation;
  // rellnposition
  output->rellnposition = input->rellnposition;
  // object_source_camera
  output->object_source_camera = input->object_source_camera;
  // object_source_radar
  output->object_source_radar = input->object_source_radar;
  // object_source_ultrasonic
  output->object_source_ultrasonic = input->object_source_ultrasonic;
  // object_source_v2x
  output->object_source_v2x = input->object_source_v2x;
  // object_source_lidar
  output->object_source_lidar = input->object_source_lidar;
  // object_source_other
  output->object_source_other = input->object_source_other;
  return true;
}

wauto_vehicle_msgs__msg__ObjectTrackB *
wauto_vehicle_msgs__msg__ObjectTrackB__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__ObjectTrackB * msg = (wauto_vehicle_msgs__msg__ObjectTrackB *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__ObjectTrackB), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_vehicle_msgs__msg__ObjectTrackB));
  bool success = wauto_vehicle_msgs__msg__ObjectTrackB__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_vehicle_msgs__msg__ObjectTrackB__destroy(wauto_vehicle_msgs__msg__ObjectTrackB * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_vehicle_msgs__msg__ObjectTrackB__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__init(wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__ObjectTrackB * data = NULL;

  if (size) {
    data = (wauto_vehicle_msgs__msg__ObjectTrackB *)allocator.zero_allocate(size, sizeof(wauto_vehicle_msgs__msg__ObjectTrackB), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_vehicle_msgs__msg__ObjectTrackB__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_vehicle_msgs__msg__ObjectTrackB__fini(&data[i - 1]);
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
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__fini(wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * array)
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
      wauto_vehicle_msgs__msg__ObjectTrackB__fini(&array->data[i]);
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

wauto_vehicle_msgs__msg__ObjectTrackB__Sequence *
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * array = (wauto_vehicle_msgs__msg__ObjectTrackB__Sequence *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__ObjectTrackB__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__destroy(wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__are_equal(const wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * lhs, const wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_vehicle_msgs__msg__ObjectTrackB__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__ObjectTrackB__Sequence__copy(
  const wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * input,
  wauto_vehicle_msgs__msg__ObjectTrackB__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_vehicle_msgs__msg__ObjectTrackB);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_vehicle_msgs__msg__ObjectTrackB * data =
      (wauto_vehicle_msgs__msg__ObjectTrackB *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_vehicle_msgs__msg__ObjectTrackB__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_vehicle_msgs__msg__ObjectTrackB__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_vehicle_msgs__msg__ObjectTrackB__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
