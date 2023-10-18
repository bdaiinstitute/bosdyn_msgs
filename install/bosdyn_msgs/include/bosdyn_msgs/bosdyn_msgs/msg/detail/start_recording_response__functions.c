// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StartRecordingResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/start_recording_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `created_waypoint`
#include "bosdyn_msgs/msg/detail/waypoint__functions.h"
// Member `lease_use_result`
#include "bosdyn_msgs/msg/detail/lease_use_result__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/start_recording_response_status__functions.h"
// Member `missing_fiducials`
// Member `bad_pose_fiducials`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `license_status`
#include "bosdyn_msgs/msg/detail/license_info_status__functions.h"
// Member `impaired_state`
#include "bosdyn_msgs/msg/detail/robot_impaired_state__functions.h"
// Member `session_start_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `map_stats`
#include "bosdyn_msgs/msg/detail/map_stats__functions.h"

bool
bosdyn_msgs__msg__StartRecordingResponse__init(bosdyn_msgs__msg__StartRecordingResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__StartRecordingResponse__fini(msg);
    return false;
  }
  // header_is_set
  // created_waypoint
  if (!bosdyn_msgs__msg__Waypoint__init(&msg->created_waypoint)) {
    bosdyn_msgs__msg__StartRecordingResponse__fini(msg);
    return false;
  }
  // created_waypoint_is_set
  // lease_use_result
  if (!bosdyn_msgs__msg__LeaseUseResult__init(&msg->lease_use_result)) {
    bosdyn_msgs__msg__StartRecordingResponse__fini(msg);
    return false;
  }
  // lease_use_result_is_set
  // status
  if (!bosdyn_msgs__msg__StartRecordingResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__StartRecordingResponse__fini(msg);
    return false;
  }
  // missing_fiducials
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->missing_fiducials, 0)) {
    bosdyn_msgs__msg__StartRecordingResponse__fini(msg);
    return false;
  }
  // bad_pose_fiducials
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->bad_pose_fiducials, 0)) {
    bosdyn_msgs__msg__StartRecordingResponse__fini(msg);
    return false;
  }
  // license_status
  if (!bosdyn_msgs__msg__LicenseInfoStatus__init(&msg->license_status)) {
    bosdyn_msgs__msg__StartRecordingResponse__fini(msg);
    return false;
  }
  // impaired_state
  if (!bosdyn_msgs__msg__RobotImpairedState__init(&msg->impaired_state)) {
    bosdyn_msgs__msg__StartRecordingResponse__fini(msg);
    return false;
  }
  // impaired_state_is_set
  // session_start_time
  if (!builtin_interfaces__msg__Time__init(&msg->session_start_time)) {
    bosdyn_msgs__msg__StartRecordingResponse__fini(msg);
    return false;
  }
  // session_start_time_is_set
  // map_stats
  if (!bosdyn_msgs__msg__MapStats__init(&msg->map_stats)) {
    bosdyn_msgs__msg__StartRecordingResponse__fini(msg);
    return false;
  }
  // map_stats_is_set
  return true;
}

void
bosdyn_msgs__msg__StartRecordingResponse__fini(bosdyn_msgs__msg__StartRecordingResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // created_waypoint
  bosdyn_msgs__msg__Waypoint__fini(&msg->created_waypoint);
  // created_waypoint_is_set
  // lease_use_result
  bosdyn_msgs__msg__LeaseUseResult__fini(&msg->lease_use_result);
  // lease_use_result_is_set
  // status
  bosdyn_msgs__msg__StartRecordingResponseStatus__fini(&msg->status);
  // missing_fiducials
  rosidl_runtime_c__int32__Sequence__fini(&msg->missing_fiducials);
  // bad_pose_fiducials
  rosidl_runtime_c__int32__Sequence__fini(&msg->bad_pose_fiducials);
  // license_status
  bosdyn_msgs__msg__LicenseInfoStatus__fini(&msg->license_status);
  // impaired_state
  bosdyn_msgs__msg__RobotImpairedState__fini(&msg->impaired_state);
  // impaired_state_is_set
  // session_start_time
  builtin_interfaces__msg__Time__fini(&msg->session_start_time);
  // session_start_time_is_set
  // map_stats
  bosdyn_msgs__msg__MapStats__fini(&msg->map_stats);
  // map_stats_is_set
}

bool
bosdyn_msgs__msg__StartRecordingResponse__are_equal(const bosdyn_msgs__msg__StartRecordingResponse * lhs, const bosdyn_msgs__msg__StartRecordingResponse * rhs)
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
  // created_waypoint
  if (!bosdyn_msgs__msg__Waypoint__are_equal(
      &(lhs->created_waypoint), &(rhs->created_waypoint)))
  {
    return false;
  }
  // created_waypoint_is_set
  if (lhs->created_waypoint_is_set != rhs->created_waypoint_is_set) {
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
  if (!bosdyn_msgs__msg__StartRecordingResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // missing_fiducials
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->missing_fiducials), &(rhs->missing_fiducials)))
  {
    return false;
  }
  // bad_pose_fiducials
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->bad_pose_fiducials), &(rhs->bad_pose_fiducials)))
  {
    return false;
  }
  // license_status
  if (!bosdyn_msgs__msg__LicenseInfoStatus__are_equal(
      &(lhs->license_status), &(rhs->license_status)))
  {
    return false;
  }
  // impaired_state
  if (!bosdyn_msgs__msg__RobotImpairedState__are_equal(
      &(lhs->impaired_state), &(rhs->impaired_state)))
  {
    return false;
  }
  // impaired_state_is_set
  if (lhs->impaired_state_is_set != rhs->impaired_state_is_set) {
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
bosdyn_msgs__msg__StartRecordingResponse__copy(
  const bosdyn_msgs__msg__StartRecordingResponse * input,
  bosdyn_msgs__msg__StartRecordingResponse * output)
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
  // created_waypoint
  if (!bosdyn_msgs__msg__Waypoint__copy(
      &(input->created_waypoint), &(output->created_waypoint)))
  {
    return false;
  }
  // created_waypoint_is_set
  output->created_waypoint_is_set = input->created_waypoint_is_set;
  // lease_use_result
  if (!bosdyn_msgs__msg__LeaseUseResult__copy(
      &(input->lease_use_result), &(output->lease_use_result)))
  {
    return false;
  }
  // lease_use_result_is_set
  output->lease_use_result_is_set = input->lease_use_result_is_set;
  // status
  if (!bosdyn_msgs__msg__StartRecordingResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // missing_fiducials
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->missing_fiducials), &(output->missing_fiducials)))
  {
    return false;
  }
  // bad_pose_fiducials
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->bad_pose_fiducials), &(output->bad_pose_fiducials)))
  {
    return false;
  }
  // license_status
  if (!bosdyn_msgs__msg__LicenseInfoStatus__copy(
      &(input->license_status), &(output->license_status)))
  {
    return false;
  }
  // impaired_state
  if (!bosdyn_msgs__msg__RobotImpairedState__copy(
      &(input->impaired_state), &(output->impaired_state)))
  {
    return false;
  }
  // impaired_state_is_set
  output->impaired_state_is_set = input->impaired_state_is_set;
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

bosdyn_msgs__msg__StartRecordingResponse *
bosdyn_msgs__msg__StartRecordingResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StartRecordingResponse * msg = (bosdyn_msgs__msg__StartRecordingResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__StartRecordingResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StartRecordingResponse));
  bool success = bosdyn_msgs__msg__StartRecordingResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StartRecordingResponse__destroy(bosdyn_msgs__msg__StartRecordingResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StartRecordingResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StartRecordingResponse__Sequence__init(bosdyn_msgs__msg__StartRecordingResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StartRecordingResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StartRecordingResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StartRecordingResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StartRecordingResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StartRecordingResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StartRecordingResponse__Sequence__fini(bosdyn_msgs__msg__StartRecordingResponse__Sequence * array)
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
      bosdyn_msgs__msg__StartRecordingResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__StartRecordingResponse__Sequence *
bosdyn_msgs__msg__StartRecordingResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StartRecordingResponse__Sequence * array = (bosdyn_msgs__msg__StartRecordingResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StartRecordingResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StartRecordingResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StartRecordingResponse__Sequence__destroy(bosdyn_msgs__msg__StartRecordingResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StartRecordingResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StartRecordingResponse__Sequence__are_equal(const bosdyn_msgs__msg__StartRecordingResponse__Sequence * lhs, const bosdyn_msgs__msg__StartRecordingResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StartRecordingResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StartRecordingResponse__Sequence__copy(
  const bosdyn_msgs__msg__StartRecordingResponse__Sequence * input,
  bosdyn_msgs__msg__StartRecordingResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StartRecordingResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StartRecordingResponse * data =
      (bosdyn_msgs__msg__StartRecordingResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StartRecordingResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StartRecordingResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StartRecordingResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
