// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SpotCheckFeedbackResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `state`
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response_state__functions.h"
// Member `last_command`
#include "bosdyn_msgs/msg/detail/spot_check_command_request_command__functions.h"
// Member `error`
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response_error__functions.h"
// Member `camera_results`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_depth_plane_spot_check_result__functions.h"
// Member `load_cell_results`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_load_cell_spot_check_result__functions.h"
// Member `kinematic_cal_results`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_joint_kinematic_check_result__functions.h"
// Member `payload_result`
#include "bosdyn_msgs/msg/detail/payload_check_result__functions.h"
// Member `hip_range_of_motion_results`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_hip_range_of_motion_result__functions.h"
// Member `last_cal_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__SpotCheckFeedbackResponse__init(bosdyn_msgs__msg__SpotCheckFeedbackResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(msg);
    return false;
  }
  // header_is_set
  // state
  if (!bosdyn_msgs__msg__SpotCheckFeedbackResponseState__init(&msg->state)) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(msg);
    return false;
  }
  // last_command
  if (!bosdyn_msgs__msg__SpotCheckCommandRequestCommand__init(&msg->last_command)) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(msg);
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__SpotCheckFeedbackResponseError__init(&msg->error)) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(msg);
    return false;
  }
  // camera_results
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence__init(&msg->camera_results, 0)) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(msg);
    return false;
  }
  // load_cell_results
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence__init(&msg->load_cell_results, 0)) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(msg);
    return false;
  }
  // kinematic_cal_results
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence__init(&msg->kinematic_cal_results, 0)) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(msg);
    return false;
  }
  // payload_result
  if (!bosdyn_msgs__msg__PayloadCheckResult__init(&msg->payload_result)) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(msg);
    return false;
  }
  // payload_result_is_set
  // hip_range_of_motion_results
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence__init(&msg->hip_range_of_motion_results, 0)) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(msg);
    return false;
  }
  // progress
  // last_cal_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->last_cal_timestamp)) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(msg);
    return false;
  }
  // last_cal_timestamp_is_set
  return true;
}

void
bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(bosdyn_msgs__msg__SpotCheckFeedbackResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // state
  bosdyn_msgs__msg__SpotCheckFeedbackResponseState__fini(&msg->state);
  // last_command
  bosdyn_msgs__msg__SpotCheckCommandRequestCommand__fini(&msg->last_command);
  // error
  bosdyn_msgs__msg__SpotCheckFeedbackResponseError__fini(&msg->error);
  // camera_results
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence__fini(&msg->camera_results);
  // load_cell_results
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence__fini(&msg->load_cell_results);
  // kinematic_cal_results
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence__fini(&msg->kinematic_cal_results);
  // payload_result
  bosdyn_msgs__msg__PayloadCheckResult__fini(&msg->payload_result);
  // payload_result_is_set
  // hip_range_of_motion_results
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence__fini(&msg->hip_range_of_motion_results);
  // progress
  // last_cal_timestamp
  builtin_interfaces__msg__Time__fini(&msg->last_cal_timestamp);
  // last_cal_timestamp_is_set
}

bool
bosdyn_msgs__msg__SpotCheckFeedbackResponse__are_equal(const bosdyn_msgs__msg__SpotCheckFeedbackResponse * lhs, const bosdyn_msgs__msg__SpotCheckFeedbackResponse * rhs)
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
  // state
  if (!bosdyn_msgs__msg__SpotCheckFeedbackResponseState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // last_command
  if (!bosdyn_msgs__msg__SpotCheckCommandRequestCommand__are_equal(
      &(lhs->last_command), &(rhs->last_command)))
  {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__SpotCheckFeedbackResponseError__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  // camera_results
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence__are_equal(
      &(lhs->camera_results), &(rhs->camera_results)))
  {
    return false;
  }
  // load_cell_results
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence__are_equal(
      &(lhs->load_cell_results), &(rhs->load_cell_results)))
  {
    return false;
  }
  // kinematic_cal_results
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence__are_equal(
      &(lhs->kinematic_cal_results), &(rhs->kinematic_cal_results)))
  {
    return false;
  }
  // payload_result
  if (!bosdyn_msgs__msg__PayloadCheckResult__are_equal(
      &(lhs->payload_result), &(rhs->payload_result)))
  {
    return false;
  }
  // payload_result_is_set
  if (lhs->payload_result_is_set != rhs->payload_result_is_set) {
    return false;
  }
  // hip_range_of_motion_results
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence__are_equal(
      &(lhs->hip_range_of_motion_results), &(rhs->hip_range_of_motion_results)))
  {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  // last_cal_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->last_cal_timestamp), &(rhs->last_cal_timestamp)))
  {
    return false;
  }
  // last_cal_timestamp_is_set
  if (lhs->last_cal_timestamp_is_set != rhs->last_cal_timestamp_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SpotCheckFeedbackResponse__copy(
  const bosdyn_msgs__msg__SpotCheckFeedbackResponse * input,
  bosdyn_msgs__msg__SpotCheckFeedbackResponse * output)
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
  // state
  if (!bosdyn_msgs__msg__SpotCheckFeedbackResponseState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // last_command
  if (!bosdyn_msgs__msg__SpotCheckCommandRequestCommand__copy(
      &(input->last_command), &(output->last_command)))
  {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__SpotCheckFeedbackResponseError__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  // camera_results
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence__copy(
      &(input->camera_results), &(output->camera_results)))
  {
    return false;
  }
  // load_cell_results
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence__copy(
      &(input->load_cell_results), &(output->load_cell_results)))
  {
    return false;
  }
  // kinematic_cal_results
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence__copy(
      &(input->kinematic_cal_results), &(output->kinematic_cal_results)))
  {
    return false;
  }
  // payload_result
  if (!bosdyn_msgs__msg__PayloadCheckResult__copy(
      &(input->payload_result), &(output->payload_result)))
  {
    return false;
  }
  // payload_result_is_set
  output->payload_result_is_set = input->payload_result_is_set;
  // hip_range_of_motion_results
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence__copy(
      &(input->hip_range_of_motion_results), &(output->hip_range_of_motion_results)))
  {
    return false;
  }
  // progress
  output->progress = input->progress;
  // last_cal_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->last_cal_timestamp), &(output->last_cal_timestamp)))
  {
    return false;
  }
  // last_cal_timestamp_is_set
  output->last_cal_timestamp_is_set = input->last_cal_timestamp_is_set;
  return true;
}

bosdyn_msgs__msg__SpotCheckFeedbackResponse *
bosdyn_msgs__msg__SpotCheckFeedbackResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SpotCheckFeedbackResponse * msg = (bosdyn_msgs__msg__SpotCheckFeedbackResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__SpotCheckFeedbackResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SpotCheckFeedbackResponse));
  bool success = bosdyn_msgs__msg__SpotCheckFeedbackResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SpotCheckFeedbackResponse__destroy(bosdyn_msgs__msg__SpotCheckFeedbackResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence__init(bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SpotCheckFeedbackResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SpotCheckFeedbackResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SpotCheckFeedbackResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SpotCheckFeedbackResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence__fini(bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence * array)
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
      bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence *
bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence * array = (bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence__destroy(bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence__are_equal(const bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence * lhs, const bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SpotCheckFeedbackResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence__copy(
  const bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence * input,
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SpotCheckFeedbackResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SpotCheckFeedbackResponse * data =
      (bosdyn_msgs__msg__SpotCheckFeedbackResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SpotCheckFeedbackResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SpotCheckFeedbackResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
