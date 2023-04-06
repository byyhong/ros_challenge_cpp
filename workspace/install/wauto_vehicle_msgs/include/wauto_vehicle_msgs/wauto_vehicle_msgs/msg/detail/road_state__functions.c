// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wauto_vehicle_msgs:msg/RoadState.idl
// generated code does not contain a copyright notice
#include "wauto_vehicle_msgs/msg/detail/road_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wauto_vehicle_msgs__msg__RoadState__init(wauto_vehicle_msgs__msg__RoadState * msg)
{
  if (!msg) {
    return false;
  }
  // rolling_count
  msg->rolling_count = 0;
  // active_traffic_signal_head_id
  msg->active_traffic_signal_head_id = 0;
  // current_observed_speed_limit
  msg->current_observed_speed_limit = 0;
  // next_observed_speed_limit
  msg->next_observed_speed_limit = 0;
  // next_observed_speed_limit_longit
  msg->next_observed_speed_limit_longit = 0;
  // active_lane_number
  msg->active_lane_number = 0;
  // left_lane_marking_id
  msg->left_lane_marking_id = 0;
  // right_lane_marking_id
  msg->right_lane_marking_id = 0;
  // llndistancevalid
  msg->llndistancevalid = 0;
  // disttollnedge
  msg->disttollnedge = 0;
  // rlndistancevalid
  msg->rlndistancevalid = 0;
  // disttorlnedge
  msg->disttorlnedge = 0;
  return true;
}

void
wauto_vehicle_msgs__msg__RoadState__fini(wauto_vehicle_msgs__msg__RoadState * msg)
{
  if (!msg) {
    return;
  }
  // rolling_count
  // active_traffic_signal_head_id
  // current_observed_speed_limit
  // next_observed_speed_limit
  // next_observed_speed_limit_longit
  // active_lane_number
  // left_lane_marking_id
  // right_lane_marking_id
  // llndistancevalid
  // disttollnedge
  // rlndistancevalid
  // disttorlnedge
}

bool
wauto_vehicle_msgs__msg__RoadState__are_equal(const wauto_vehicle_msgs__msg__RoadState * lhs, const wauto_vehicle_msgs__msg__RoadState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rolling_count
  if (lhs->rolling_count != rhs->rolling_count) {
    return false;
  }
  // active_traffic_signal_head_id
  if (lhs->active_traffic_signal_head_id != rhs->active_traffic_signal_head_id) {
    return false;
  }
  // current_observed_speed_limit
  if (lhs->current_observed_speed_limit != rhs->current_observed_speed_limit) {
    return false;
  }
  // next_observed_speed_limit
  if (lhs->next_observed_speed_limit != rhs->next_observed_speed_limit) {
    return false;
  }
  // next_observed_speed_limit_longit
  if (lhs->next_observed_speed_limit_longit != rhs->next_observed_speed_limit_longit) {
    return false;
  }
  // active_lane_number
  if (lhs->active_lane_number != rhs->active_lane_number) {
    return false;
  }
  // left_lane_marking_id
  if (lhs->left_lane_marking_id != rhs->left_lane_marking_id) {
    return false;
  }
  // right_lane_marking_id
  if (lhs->right_lane_marking_id != rhs->right_lane_marking_id) {
    return false;
  }
  // llndistancevalid
  if (lhs->llndistancevalid != rhs->llndistancevalid) {
    return false;
  }
  // disttollnedge
  if (lhs->disttollnedge != rhs->disttollnedge) {
    return false;
  }
  // rlndistancevalid
  if (lhs->rlndistancevalid != rhs->rlndistancevalid) {
    return false;
  }
  // disttorlnedge
  if (lhs->disttorlnedge != rhs->disttorlnedge) {
    return false;
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__RoadState__copy(
  const wauto_vehicle_msgs__msg__RoadState * input,
  wauto_vehicle_msgs__msg__RoadState * output)
{
  if (!input || !output) {
    return false;
  }
  // rolling_count
  output->rolling_count = input->rolling_count;
  // active_traffic_signal_head_id
  output->active_traffic_signal_head_id = input->active_traffic_signal_head_id;
  // current_observed_speed_limit
  output->current_observed_speed_limit = input->current_observed_speed_limit;
  // next_observed_speed_limit
  output->next_observed_speed_limit = input->next_observed_speed_limit;
  // next_observed_speed_limit_longit
  output->next_observed_speed_limit_longit = input->next_observed_speed_limit_longit;
  // active_lane_number
  output->active_lane_number = input->active_lane_number;
  // left_lane_marking_id
  output->left_lane_marking_id = input->left_lane_marking_id;
  // right_lane_marking_id
  output->right_lane_marking_id = input->right_lane_marking_id;
  // llndistancevalid
  output->llndistancevalid = input->llndistancevalid;
  // disttollnedge
  output->disttollnedge = input->disttollnedge;
  // rlndistancevalid
  output->rlndistancevalid = input->rlndistancevalid;
  // disttorlnedge
  output->disttorlnedge = input->disttorlnedge;
  return true;
}

wauto_vehicle_msgs__msg__RoadState *
wauto_vehicle_msgs__msg__RoadState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__RoadState * msg = (wauto_vehicle_msgs__msg__RoadState *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__RoadState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wauto_vehicle_msgs__msg__RoadState));
  bool success = wauto_vehicle_msgs__msg__RoadState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wauto_vehicle_msgs__msg__RoadState__destroy(wauto_vehicle_msgs__msg__RoadState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wauto_vehicle_msgs__msg__RoadState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wauto_vehicle_msgs__msg__RoadState__Sequence__init(wauto_vehicle_msgs__msg__RoadState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__RoadState * data = NULL;

  if (size) {
    data = (wauto_vehicle_msgs__msg__RoadState *)allocator.zero_allocate(size, sizeof(wauto_vehicle_msgs__msg__RoadState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wauto_vehicle_msgs__msg__RoadState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wauto_vehicle_msgs__msg__RoadState__fini(&data[i - 1]);
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
wauto_vehicle_msgs__msg__RoadState__Sequence__fini(wauto_vehicle_msgs__msg__RoadState__Sequence * array)
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
      wauto_vehicle_msgs__msg__RoadState__fini(&array->data[i]);
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

wauto_vehicle_msgs__msg__RoadState__Sequence *
wauto_vehicle_msgs__msg__RoadState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wauto_vehicle_msgs__msg__RoadState__Sequence * array = (wauto_vehicle_msgs__msg__RoadState__Sequence *)allocator.allocate(sizeof(wauto_vehicle_msgs__msg__RoadState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wauto_vehicle_msgs__msg__RoadState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wauto_vehicle_msgs__msg__RoadState__Sequence__destroy(wauto_vehicle_msgs__msg__RoadState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wauto_vehicle_msgs__msg__RoadState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wauto_vehicle_msgs__msg__RoadState__Sequence__are_equal(const wauto_vehicle_msgs__msg__RoadState__Sequence * lhs, const wauto_vehicle_msgs__msg__RoadState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wauto_vehicle_msgs__msg__RoadState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wauto_vehicle_msgs__msg__RoadState__Sequence__copy(
  const wauto_vehicle_msgs__msg__RoadState__Sequence * input,
  wauto_vehicle_msgs__msg__RoadState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wauto_vehicle_msgs__msg__RoadState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wauto_vehicle_msgs__msg__RoadState * data =
      (wauto_vehicle_msgs__msg__RoadState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wauto_vehicle_msgs__msg__RoadState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wauto_vehicle_msgs__msg__RoadState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wauto_vehicle_msgs__msg__RoadState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
