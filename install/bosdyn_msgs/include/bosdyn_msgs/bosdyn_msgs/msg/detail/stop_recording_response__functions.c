// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StopRecordingResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/stop_recording_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/stop_recording_response_status__functions.h"
// Member `error_waypoint_localized_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `lease_use_result`
#include "bosdyn_msgs/msg/detail/lease_use_result__functions.h"
// Member `session_start_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `map_stats`
#include "bosdyn_msgs/msg/detail/map_stats__functions.h"

bool
bosdyn_msgs__msg__StopRecordingResponse__init(bosdyn_msgs__msg__StopRecordingResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__StopRecordingResponse__fini(msg);
    return false;
  }
  // header_is_set
  // status
  if (!bosdyn_msgs__msg__StopRecordingResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__StopRecordingResponse__fini(msg);
    return false;
  }
  // error_waypoint_localized_id
  if (!rosidl_runtime_c__String__init(&msg->error_waypoint_localized_id)) {
    bosdyn_msgs__msg__StopRecordingResponse__fini(msg);
    return false;
  }
  // lease_use_result
  if (!bosdyn_msgs__msg__LeaseUseResult__init(&msg->lease_use_result)) {
    bosdyn_msgs__msg__StopRecordingResponse__fini(msg);
    return false;
  }
  // lease_use_result_is_set
  // session_start_time
  if (!builtin_interfaces__msg__Time__init(&msg->session_start_time)) {
    bosdyn_msgs__msg__StopRecordingResponse__fini(msg);
    return false;
  }
  // session_start_time_is_set
  // map_stats
  if (!bosdyn_msgs__msg__MapStats__init(&msg->map_stats)) {
    bosdyn_msgs__msg__StopRecordingResponse__fini(msg);
    return false;
  }
  // map_stats_is_set
  return true;
}

void
bosdyn_msgs__msg__StopRecordingResponse__fini(bosdyn_msgs__msg__StopRecordingResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // status
  bosdyn_msgs__msg__StopRecordingResponseStatus__fini(&msg->status);
  // error_waypoint_localized_id
  rosidl_runtime_c__String__fini(&msg->error_waypoint_localized_id);
  // lease_use_result
  bosdyn_msgs__msg__LeaseUseResult__fini(&msg->lease_use_result);
  // lease_use_result_is_set
  // session_start_time
  builtin_interfaces__msg__Time__fini(&msg->session_start_time);
  // session_start_time_is_set
  // map_stats
  bosdyn_msgs__msg__MapStats__fini(&msg->map_stats);
  // map_stats_is_set
}

bool
bosdyn_msgs__msg__StopRecordingResponse__are_equal(const bosdyn_msgs__msg__StopRecordingResponse * lhs, const bosdyn_msgs__msg__StopRecordingResponse * rhs)
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
  // status
  if (!bosdyn_msgs__msg__StopRecordingResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // error_waypoint_localized_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_waypoint_localized_id), &(rhs->error_waypoint_localized_id)))
  {
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
  // session_start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->session_start_time), &(rhs->session_start_time)))
  {
    return false;
  }
  // session_start_time_is_set
  if (lhs->session_start_time_is_set != rhs->session_start_time_is_set) {
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
bosdyn_msgs__msg__StopRecordingResponse__copy(
  const bosdyn_msgs__msg__StopRecordingResponse * input,
  bosdyn_msgs__msg__StopRecordingResponse * output)
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
  // status
  if (!bosdyn_msgs__msg__StopRecordingResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // error_waypoint_localized_id
  if (!rosidl_runtime_c__String__copy(
      &(input->error_waypoint_localized_id), &(output->error_waypoint_localized_id)))
  {
    return false;
  }
  // lease_use_result
  if (!bosdyn_msgs__msg__LeaseUseResult__copy(
      &(input->lease_use_result), &(output->lease_use_result)))
  {
    return false;
  }
  // lease_use_result_is_set
  output->lease_use_result_is_set = input->lease_use_result_is_set;
  // session_start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->session_start_time), &(output->session_start_time)))
  {
    return false;
  }
  // session_start_time_is_set
  output->session_start_time_is_set = input->session_start_time_is_set;
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

bosdyn_msgs__msg__StopRecordingResponse *
bosdyn_msgs__msg__StopRecordingResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StopRecordingResponse * msg = (bosdyn_msgs__msg__StopRecordingResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__StopRecordingResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StopRecordingResponse));
  bool success = bosdyn_msgs__msg__StopRecordingResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StopRecordingResponse__destroy(bosdyn_msgs__msg__StopRecordingResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StopRecordingResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StopRecordingResponse__Sequence__init(bosdyn_msgs__msg__StopRecordingResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StopRecordingResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StopRecordingResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StopRecordingResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StopRecordingResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StopRecordingResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StopRecordingResponse__Sequence__fini(bosdyn_msgs__msg__StopRecordingResponse__Sequence * array)
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
      bosdyn_msgs__msg__StopRecordingResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__StopRecordingResponse__Sequence *
bosdyn_msgs__msg__StopRecordingResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StopRecordingResponse__Sequence * array = (bosdyn_msgs__msg__StopRecordingResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StopRecordingResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StopRecordingResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StopRecordingResponse__Sequence__destroy(bosdyn_msgs__msg__StopRecordingResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StopRecordingResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StopRecordingResponse__Sequence__are_equal(const bosdyn_msgs__msg__StopRecordingResponse__Sequence * lhs, const bosdyn_msgs__msg__StopRecordingResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StopRecordingResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StopRecordingResponse__Sequence__copy(
  const bosdyn_msgs__msg__StopRecordingResponse__Sequence * input,
  bosdyn_msgs__msg__StopRecordingResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StopRecordingResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StopRecordingResponse * data =
      (bosdyn_msgs__msg__StopRecordingResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StopRecordingResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StopRecordingResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StopRecordingResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
