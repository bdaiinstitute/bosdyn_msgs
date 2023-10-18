// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/UploadWaypointSnapshotResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/upload_waypoint_snapshot_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `lease_use_result`
#include "bosdyn_msgs/msg/detail/lease_use_result__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/upload_waypoint_snapshot_response_status__functions.h"
// Member `sensor_status`
#include "bosdyn_msgs/msg/detail/sensor_compatibility_status__functions.h"
// Member `map_stats`
#include "bosdyn_msgs/msg/detail/map_stats__functions.h"

bool
bosdyn_msgs__msg__UploadWaypointSnapshotResponse__init(bosdyn_msgs__msg__UploadWaypointSnapshotResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__UploadWaypointSnapshotResponse__fini(msg);
    return false;
  }
  // header_is_set
  // lease_use_result
  if (!bosdyn_msgs__msg__LeaseUseResult__init(&msg->lease_use_result)) {
    bosdyn_msgs__msg__UploadWaypointSnapshotResponse__fini(msg);
    return false;
  }
  // lease_use_result_is_set
  // status
  if (!bosdyn_msgs__msg__UploadWaypointSnapshotResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__UploadWaypointSnapshotResponse__fini(msg);
    return false;
  }
  // sensor_status
  if (!bosdyn_msgs__msg__SensorCompatibilityStatus__init(&msg->sensor_status)) {
    bosdyn_msgs__msg__UploadWaypointSnapshotResponse__fini(msg);
    return false;
  }
  // sensor_status_is_set
  // map_stats
  if (!bosdyn_msgs__msg__MapStats__init(&msg->map_stats)) {
    bosdyn_msgs__msg__UploadWaypointSnapshotResponse__fini(msg);
    return false;
  }
  // map_stats_is_set
  return true;
}

void
bosdyn_msgs__msg__UploadWaypointSnapshotResponse__fini(bosdyn_msgs__msg__UploadWaypointSnapshotResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // lease_use_result
  bosdyn_msgs__msg__LeaseUseResult__fini(&msg->lease_use_result);
  // lease_use_result_is_set
  // status
  bosdyn_msgs__msg__UploadWaypointSnapshotResponseStatus__fini(&msg->status);
  // sensor_status
  bosdyn_msgs__msg__SensorCompatibilityStatus__fini(&msg->sensor_status);
  // sensor_status_is_set
  // map_stats
  bosdyn_msgs__msg__MapStats__fini(&msg->map_stats);
  // map_stats_is_set
}

bool
bosdyn_msgs__msg__UploadWaypointSnapshotResponse__are_equal(const bosdyn_msgs__msg__UploadWaypointSnapshotResponse * lhs, const bosdyn_msgs__msg__UploadWaypointSnapshotResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // lease_use_result
  if (!bosdyn_msgs__msg__LeaseUseResult__are_equal(
      &(lhs->lease_use_result), &(rhs->lease_use_result)))
  {
    return false;
  }
  // lease_use_result_is_set
  if (lhs->lease_use_result_is_set != rhs->lease_use_result_is_set) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__UploadWaypointSnapshotResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // sensor_status
  if (!bosdyn_msgs__msg__SensorCompatibilityStatus__are_equal(
      &(lhs->sensor_status), &(rhs->sensor_status)))
  {
    return false;
  }
  // sensor_status_is_set
  if (lhs->sensor_status_is_set != rhs->sensor_status_is_set) {
    return false;
  }
  // map_stats
  if (!bosdyn_msgs__msg__MapStats__are_equal(
      &(lhs->map_stats), &(rhs->map_stats)))
  {
    return false;
  }
  // map_stats_is_set
  if (lhs->map_stats_is_set != rhs->map_stats_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__UploadWaypointSnapshotResponse__copy(
  const bosdyn_msgs__msg__UploadWaypointSnapshotResponse * input,
  bosdyn_msgs__msg__UploadWaypointSnapshotResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // lease_use_result
  if (!bosdyn_msgs__msg__LeaseUseResult__copy(
      &(input->lease_use_result), &(output->lease_use_result)))
  {
    return false;
  }
  // lease_use_result_is_set
  output->lease_use_result_is_set = input->lease_use_result_is_set;
  // status
  if (!bosdyn_msgs__msg__UploadWaypointSnapshotResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // sensor_status
  if (!bosdyn_msgs__msg__SensorCompatibilityStatus__copy(
      &(input->sensor_status), &(output->sensor_status)))
  {
    return false;
  }
  // sensor_status_is_set
  output->sensor_status_is_set = input->sensor_status_is_set;
  // map_stats
  if (!bosdyn_msgs__msg__MapStats__copy(
      &(input->map_stats), &(output->map_stats)))
  {
    return false;
  }
  // map_stats_is_set
  output->map_stats_is_set = input->map_stats_is_set;
  return true;
}

bosdyn_msgs__msg__UploadWaypointSnapshotResponse *
bosdyn_msgs__msg__UploadWaypointSnapshotResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UploadWaypointSnapshotResponse * msg = (bosdyn_msgs__msg__UploadWaypointSnapshotResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__UploadWaypointSnapshotResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__UploadWaypointSnapshotResponse));
  bool success = bosdyn_msgs__msg__UploadWaypointSnapshotResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__UploadWaypointSnapshotResponse__destroy(bosdyn_msgs__msg__UploadWaypointSnapshotResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__UploadWaypointSnapshotResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence__init(bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UploadWaypointSnapshotResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__UploadWaypointSnapshotResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__UploadWaypointSnapshotResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__UploadWaypointSnapshotResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__UploadWaypointSnapshotResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence__fini(bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence * array)
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
      bosdyn_msgs__msg__UploadWaypointSnapshotResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence *
bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence * array = (bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence__destroy(bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence__are_equal(const bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence * lhs, const bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__UploadWaypointSnapshotResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence__copy(
  const bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence * input,
  bosdyn_msgs__msg__UploadWaypointSnapshotResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__UploadWaypointSnapshotResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__UploadWaypointSnapshotResponse * data =
      (bosdyn_msgs__msg__UploadWaypointSnapshotResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__UploadWaypointSnapshotResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__UploadWaypointSnapshotResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__UploadWaypointSnapshotResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
