// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_vehicle_msgs:msg/LaneMarkingTrackA.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/lane_marking_track_a__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_vehicle_msgs__msg__LaneMarkingTrackA__init(wauto_vehicle_msgs__msg__LaneMarkingTrackA * msg)
{
  if (!msg) {
    return false;
  }
  // rolling_count
  msg->rolling_count = 0;
  // lanemarkingid
  msg->lanemarkingid = 0;
  // lanemarkinglnhdngtngtv
  msg->lanemarkinglnhdngtngtv = 0;
  // lanemarkinglnhdngtngt
  msg->lanemarkinglnhdngtngt = 0;
  // lanemarkinglndstv
  msg->lanemarkinglndstv = 0;
  // lanemarkinglndst
  msg->lanemarkinglndst = 0;
  // lanemarkinglncrvtv
  msg->lanemarkinglncrvtv = 0;
  // lanemarkinglncrvtgradv
  msg->lanemarkinglncrvtgradv = 0;
  // lanemarkinglncrvtgrad
  msg->lanemarkinglncrvtgrad = 0;
  // lanemarkinglncrvt
  msg->lanemarkinglncrvt = 0;
  // lanemarkinglnqltyconflvl
  msg->lanemarkinglnqltyconflvl = 0;
  // lanemarkinglnmrkrtyp
  msg->lanemarkinglnmrkrtyp = 0;
  // lanemarkingcolor
  msg->lanemarkingcolor = 0;
  return true;
}

void
wauto_vehicle_msgs__msg__LaneMarkingTrackA__fini(wauto_vehicle_msgs__msg__LaneMarkingTrackA * msg)
{
  if (!msg) {
    return;
  }
  // rolling_count
  // lanemarkingid
  // lanemarkinglnhdngtngtv
  // lanemarkinglnhdngtngt
  // lanemarkinglndstv
  // lanemarkinglndst
  // lanemarkinglncrvtv
  // lanemarkinglncrvtgradv
  // lanemarkinglncrvtgrad
  // lanemarkinglncrvt
  // lanemarkinglnqltyconflvl
  // lanemarkinglnmrkrtyp
  // lanemarkingcolor
}

bool
wauto_vehicle_msgs__msg__LaneMarkingTrackA__are_equal(const wauto_vehicle_msgs__msg__LaneMarkingTrackA * lhs, const wauto_vehicle_msgs__msg__LaneMarkingTrackA * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rolling_count
  if (lhs->rolling_count != rhs->rolling_count) {
    return false;
  }
  // lanemarkingid
  if (lhs->lanemarkingid != rhs->lanemarkingid) {
    return false;
  }
  // lanemarkinglnhdngtngtv
  if (lhs->lanemarkinglnhdngtngtv != rhs->lanemarkinglnhdngtngtv) {
    return false;
  }
  // lanemarkinglnhdngtngt
  if (lhs->lanemarkinglnhdngtngt != rhs->lanemarkinglnhdngtngt) {
    return false;
  }
  // lanemarkinglndstv
  if (lhs->lanemarkinglndstv != rhs->lanemarkinglndstv) {
    return false;
  }
  // lanemarkinglndst
  if (lhs->lanemarkinglndst != rhs->lanemarkinglndst) {
    return false;
  }
  // lanemarkinglncrvtv
  if (lhs->lanemarkinglncrvtv != rhs->lanemarkinglncrvtv) {
    return false;
  }
  // lanemarkinglncrvtgradv
  if (lhs->lanemarkinglncrvtgradv != rhs->lanemarkinglncrvtgradv) {
    return false;
  }
  // lanemarkinglncrvtgrad
  if (lhs->lanemarkinglncrvtgrad != rhs->lanemarkinglncrvtgrad) {
    return false;
  }
  // lanemarkinglncrvt
  if (lhs->lanemarkinglncrvt != rhs->lanemarkinglncrvt) {
    return false;
  }
  // lanemarkinglnqltyconflvl
  if (lhs->lanemarkinglnqltyconflvl != rhs->lanemarkinglnqltyconflvl) {
    return false;
  }
  // lanemarkinglnmrkrtyp
  if (lhs->lanemarkinglnmrkrtyp != rhs->lanemarkinglnmrkrtyp) {
    return false;
  }
  // lanemarkingcolor
  if (lhs->lanemarkingcolor != rhs->lanemarkingcolor) {
    return false;
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__LaneMarkingTrackA__copy(
  const wauto_vehicle_msgs__msg__LaneMarkingTrackA * input,
  wauto_vehicle_msgs__msg__LaneMarkingTrackA * output)
{
  if (!input || !output) {
    return false;
  }
  // rolling_count
  output->rolling_count = input->rolling_count;
  // lanemarkingid
  output->lanemarkingid = input->lanemarkingid;
  // lanemarkinglnhdngtngtv
  output->lanemarkinglnhdngtngtv = input->lanemarkinglnhdngtngtv;
  // lanemarkinglnhdngtngt
  output->lanemarkinglnhdngtngt = input->lanemarkinglnhdngtngt;
  // lanemarkinglndstv
  output->lanemarkinglndstv = input->lanemarkinglndstv;
  // lanemarkinglndst
  output->lanemarkinglndst = input->lanemarkinglndst;
  // lanemarkinglncrvtv
  output->lanemarkinglncrvtv = input->lanemarkinglncrvtv;
  // lanemarkinglncrvtgradv
  output->lanemarkinglncrvtgradv = input->lanemarkinglncrvtgradv;
  // lanemarkinglncrvtgrad
  output->lanemarkinglncrvtgrad = input->lanemarkinglncrvtgrad;
  // lanemarkinglncrvt
  output->lanemarkinglncrvt = input->lanemarkinglncrvt;
  // lanemarkinglnqltyconflvl
  output->lanemarkinglnqltyconflvl = input->lanemarkinglnqltyconflvl;
  // lanemarkinglnmrkrtyp
  output->lanemarkinglnmrkrtyp = input->lanemarkinglnmrkrtyp;
  // lanemarkingcolor
  output->lanemarkingcolor = input->lanemarkingcolor;
  return true;
}

wauto_vehicle_msgs__msg__LaneMarkingTrackA *
wauto_vehicle_msgs__msg__LaneMarkingTrackA__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__LaneMarkingTrackA * msg = (wauto_vehicle_msgs__msg__LaneMarkingTrackA *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__LaneMarkingTrackA), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_vehicle_msgs__msg__LaneMarkingTrackA));
  bool success = wauto_vehicle_msgs__msg__LaneMarkingTrackA__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_vehicle_msgs__msg__LaneMarkingTrackA__destroy(wauto_vehicle_msgs__msg__LaneMarkingTrackA * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_vehicle_msgs__msg__LaneMarkingTrackA__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence__init(wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__LaneMarkingTrackA * data = NULL;

  if (size) {
    data = (wauto_vehicle_msgs__msg__LaneMarkingTrackA *)allocator.zero_allocate(size, sizeof(wauto_vehicle_msgs__msg__LaneMarkingTrackA), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_vehicle_msgs__msg__LaneMarkingTrackA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_vehicle_msgs__msg__LaneMarkingTrackA__fini(&data[i - 1]);
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
wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence__fini(wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence * array)
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
      wauto_vehicle_msgs__msg__LaneMarkingTrackA__fini(&array->data[i]);
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

wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence *
wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence * array = (wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence__destroy(wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence__are_equal(const wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence * lhs, const wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_vehicle_msgs__msg__LaneMarkingTrackA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence__copy(
  const wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence * input,
  wauto_vehicle_msgs__msg__LaneMarkingTrackA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_vehicle_msgs__msg__LaneMarkingTrackA);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_vehicle_msgs__msg__LaneMarkingTrackA * data =
      (wauto_vehicle_msgs__msg__LaneMarkingTrackA *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_vehicle_msgs__msg__LaneMarkingTrackA__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_vehicle_msgs__msg__LaneMarkingTrackA__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_vehicle_msgs__msg__LaneMarkingTrackA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
