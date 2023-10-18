// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SetLocalizationResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/set_localization_response__functions.h"

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
#include "bosdyn_msgs/msg/detail/set_localization_response_status__functions.h"
// Member `error_report`
#include "rosidl_runtime_c/string_functions.h"
// Member `localization`
#include "bosdyn_msgs/msg/detail/localization__functions.h"
// Member `suspected_ambiguity`
#include "bosdyn_msgs/msg/detail/set_localization_response_suspected_ambiguity__functions.h"
// Member `impaired_state`
#include "bosdyn_msgs/msg/detail/robot_impaired_state__functions.h"
// Member `sensor_status`
#include "bosdyn_msgs/msg/detail/sensor_compatibility_status__functions.h"
// Member `quality_check_result`
#include "bosdyn_msgs/msg/detail/set_localization_response_quality_check_result__functions.h"

bool
bosdyn_msgs__msg__SetLocalizationResponse__init(bosdyn_msgs__msg__SetLocalizationResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__SetLocalizationResponse__fini(msg);
    return false;
  }
  // header_is_set
  // lease_use_result
  if (!bosdyn_msgs__msg__LeaseUseResult__init(&msg->lease_use_result)) {
    bosdyn_msgs__msg__SetLocalizationResponse__fini(msg);
    return false;
  }
  // lease_use_result_is_set
  // status
  if (!bosdyn_msgs__msg__SetLocalizationResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__SetLocalizationResponse__fini(msg);
    return false;
  }
  // error_report
  if (!rosidl_runtime_c__String__init(&msg->error_report)) {
    bosdyn_msgs__msg__SetLocalizationResponse__fini(msg);
    return false;
  }
  // localization
  if (!bosdyn_msgs__msg__Localization__init(&msg->localization)) {
    bosdyn_msgs__msg__SetLocalizationResponse__fini(msg);
    return false;
  }
  // localization_is_set
  // suspected_ambiguity
  if (!bosdyn_msgs__msg__SetLocalizationResponseSuspectedAmbiguity__init(&msg->suspected_ambiguity)) {
    bosdyn_msgs__msg__SetLocalizationResponse__fini(msg);
    return false;
  }
  // suspected_ambiguity_is_set
  // impaired_state
  if (!bosdyn_msgs__msg__RobotImpairedState__init(&msg->impaired_state)) {
    bosdyn_msgs__msg__SetLocalizationResponse__fini(msg);
    return false;
  }
  // impaired_state_is_set
  // sensor_status
  if (!bosdyn_msgs__msg__SensorCompatibilityStatus__init(&msg->sensor_status)) {
    bosdyn_msgs__msg__SetLocalizationResponse__fini(msg);
    return false;
  }
  // sensor_status_is_set
  // quality_check_result
  if (!bosdyn_msgs__msg__SetLocalizationResponseQualityCheckResult__init(&msg->quality_check_result)) {
    bosdyn_msgs__msg__SetLocalizationResponse__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__SetLocalizationResponse__fini(bosdyn_msgs__msg__SetLocalizationResponse * msg)
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
  bosdyn_msgs__msg__SetLocalizationResponseStatus__fini(&msg->status);
  // error_report
  rosidl_runtime_c__String__fini(&msg->error_report);
  // localization
  bosdyn_msgs__msg__Localization__fini(&msg->localization);
  // localization_is_set
  // suspected_ambiguity
  bosdyn_msgs__msg__SetLocalizationResponseSuspectedAmbiguity__fini(&msg->suspected_ambiguity);
  // suspected_ambiguity_is_set
  // impaired_state
  bosdyn_msgs__msg__RobotImpairedState__fini(&msg->impaired_state);
  // impaired_state_is_set
  // sensor_status
  bosdyn_msgs__msg__SensorCompatibilityStatus__fini(&msg->sensor_status);
  // sensor_status_is_set
  // quality_check_result
  bosdyn_msgs__msg__SetLocalizationResponseQualityCheckResult__fini(&msg->quality_check_result);
}

bool
bosdyn_msgs__msg__SetLocalizationResponse__are_equal(const bosdyn_msgs__msg__SetLocalizationResponse * lhs, const bosdyn_msgs__msg__SetLocalizationResponse * rhs)
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
  if (!bosdyn_msgs__msg__SetLocalizationResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // error_report
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_report), &(rhs->error_report)))
  {
    return false;
  }
  // localization
  if (!bosdyn_msgs__msg__Localization__are_equal(
      &(lhs->localization), &(rhs->localization)))
  {
    return false;
  }
  // localization_is_set
  if (lhs->localization_is_set != rhs->localization_is_set) {
    return false;
  }
  // suspected_ambiguity
  if (!bosdyn_msgs__msg__SetLocalizationResponseSuspectedAmbiguity__are_equal(
      &(lhs->suspected_ambiguity), &(rhs->suspected_ambiguity)))
  {
    return false;
  }
  // suspected_ambiguity_is_set
  if (lhs->suspected_ambiguity_is_set != rhs->suspected_ambiguity_is_set) {
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
  // quality_check_result
  if (!bosdyn_msgs__msg__SetLocalizationResponseQualityCheckResult__are_equal(
      &(lhs->quality_check_result), &(rhs->quality_check_result)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SetLocalizationResponse__copy(
  const bosdyn_msgs__msg__SetLocalizationResponse * input,
  bosdyn_msgs__msg__SetLocalizationResponse * output)
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
  if (!bosdyn_msgs__msg__SetLocalizationResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // error_report
  if (!rosidl_runtime_c__String__copy(
      &(input->error_report), &(output->error_report)))
  {
    return false;
  }
  // localization
  if (!bosdyn_msgs__msg__Localization__copy(
      &(input->localization), &(output->localization)))
  {
    return false;
  }
  // localization_is_set
  output->localization_is_set = input->localization_is_set;
  // suspected_ambiguity
  if (!bosdyn_msgs__msg__SetLocalizationResponseSuspectedAmbiguity__copy(
      &(input->suspected_ambiguity), &(output->suspected_ambiguity)))
  {
    return false;
  }
  // suspected_ambiguity_is_set
  output->suspected_ambiguity_is_set = input->suspected_ambiguity_is_set;
  // impaired_state
  if (!bosdyn_msgs__msg__RobotImpairedState__copy(
      &(input->impaired_state), &(output->impaired_state)))
  {
    return false;
  }
  // impaired_state_is_set
  output->impaired_state_is_set = input->impaired_state_is_set;
  // sensor_status
  if (!bosdyn_msgs__msg__SensorCompatibilityStatus__copy(
      &(input->sensor_status), &(output->sensor_status)))
  {
    return false;
  }
  // sensor_status_is_set
  output->sensor_status_is_set = input->sensor_status_is_set;
  // quality_check_result
  if (!bosdyn_msgs__msg__SetLocalizationResponseQualityCheckResult__copy(
      &(input->quality_check_result), &(output->quality_check_result)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__SetLocalizationResponse *
bosdyn_msgs__msg__SetLocalizationResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SetLocalizationResponse * msg = (bosdyn_msgs__msg__SetLocalizationResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__SetLocalizationResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SetLocalizationResponse));
  bool success = bosdyn_msgs__msg__SetLocalizationResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SetLocalizationResponse__destroy(bosdyn_msgs__msg__SetLocalizationResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SetLocalizationResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SetLocalizationResponse__Sequence__init(bosdyn_msgs__msg__SetLocalizationResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SetLocalizationResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SetLocalizationResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SetLocalizationResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SetLocalizationResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SetLocalizationResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SetLocalizationResponse__Sequence__fini(bosdyn_msgs__msg__SetLocalizationResponse__Sequence * array)
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
      bosdyn_msgs__msg__SetLocalizationResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__SetLocalizationResponse__Sequence *
bosdyn_msgs__msg__SetLocalizationResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SetLocalizationResponse__Sequence * array = (bosdyn_msgs__msg__SetLocalizationResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SetLocalizationResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SetLocalizationResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SetLocalizationResponse__Sequence__destroy(bosdyn_msgs__msg__SetLocalizationResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SetLocalizationResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SetLocalizationResponse__Sequence__are_equal(const bosdyn_msgs__msg__SetLocalizationResponse__Sequence * lhs, const bosdyn_msgs__msg__SetLocalizationResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SetLocalizationResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SetLocalizationResponse__Sequence__copy(
  const bosdyn_msgs__msg__SetLocalizationResponse__Sequence * input,
  bosdyn_msgs__msg__SetLocalizationResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SetLocalizationResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SetLocalizationResponse * data =
      (bosdyn_msgs__msg__SetLocalizationResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SetLocalizationResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SetLocalizationResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SetLocalizationResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
