// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/LoadMissionResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/load_mission_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/load_mission_response_status__functions.h"
// Member `lease_use_results`
#include "bosdyn_msgs/msg/detail/lease_use_result__functions.h"
// Member `mission_info`
#include "bosdyn_msgs/msg/detail/mission_info__functions.h"
// Member `failed_nodes`
#include "bosdyn_msgs/msg/detail/failed_node__functions.h"

bool
bosdyn_msgs__msg__LoadMissionResponse__init(bosdyn_msgs__msg__LoadMissionResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__LoadMissionResponse__fini(msg);
    return false;
  }
  // header_is_set
  // status
  if (!bosdyn_msgs__msg__LoadMissionResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__LoadMissionResponse__fini(msg);
    return false;
  }
  // lease_use_results
  if (!bosdyn_msgs__msg__LeaseUseResult__Sequence__init(&msg->lease_use_results, 0)) {
    bosdyn_msgs__msg__LoadMissionResponse__fini(msg);
    return false;
  }
  // mission_info
  if (!bosdyn_msgs__msg__MissionInfo__init(&msg->mission_info)) {
    bosdyn_msgs__msg__LoadMissionResponse__fini(msg);
    return false;
  }
  // mission_info_is_set
  // failed_nodes
  if (!bosdyn_msgs__msg__FailedNode__Sequence__init(&msg->failed_nodes, 0)) {
    bosdyn_msgs__msg__LoadMissionResponse__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__LoadMissionResponse__fini(bosdyn_msgs__msg__LoadMissionResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // status
  bosdyn_msgs__msg__LoadMissionResponseStatus__fini(&msg->status);
  // lease_use_results
  bosdyn_msgs__msg__LeaseUseResult__Sequence__fini(&msg->lease_use_results);
  // mission_info
  bosdyn_msgs__msg__MissionInfo__fini(&msg->mission_info);
  // mission_info_is_set
  // failed_nodes
  bosdyn_msgs__msg__FailedNode__Sequence__fini(&msg->failed_nodes);
}

bool
bosdyn_msgs__msg__LoadMissionResponse__are_equal(const bosdyn_msgs__msg__LoadMissionResponse * lhs, const bosdyn_msgs__msg__LoadMissionResponse * rhs)
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
  if (!bosdyn_msgs__msg__LoadMissionResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // lease_use_results
  if (!bosdyn_msgs__msg__LeaseUseResult__Sequence__are_equal(
      &(lhs->lease_use_results), &(rhs->lease_use_results)))
  {
    return false;
  }
  // mission_info
  if (!bosdyn_msgs__msg__MissionInfo__are_equal(
      &(lhs->mission_info), &(rhs->mission_info)))
  {
    return false;
  }
  // mission_info_is_set
  if (lhs->mission_info_is_set != rhs->mission_info_is_set) {
    return false;
  }
  // failed_nodes
  if (!bosdyn_msgs__msg__FailedNode__Sequence__are_equal(
      &(lhs->failed_nodes), &(rhs->failed_nodes)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__LoadMissionResponse__copy(
  const bosdyn_msgs__msg__LoadMissionResponse * input,
  bosdyn_msgs__msg__LoadMissionResponse * output)
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
  if (!bosdyn_msgs__msg__LoadMissionResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // lease_use_results
  if (!bosdyn_msgs__msg__LeaseUseResult__Sequence__copy(
      &(input->lease_use_results), &(output->lease_use_results)))
  {
    return false;
  }
  // mission_info
  if (!bosdyn_msgs__msg__MissionInfo__copy(
      &(input->mission_info), &(output->mission_info)))
  {
    return false;
  }
  // mission_info_is_set
  output->mission_info_is_set = input->mission_info_is_set;
  // failed_nodes
  if (!bosdyn_msgs__msg__FailedNode__Sequence__copy(
      &(input->failed_nodes), &(output->failed_nodes)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__LoadMissionResponse *
bosdyn_msgs__msg__LoadMissionResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LoadMissionResponse * msg = (bosdyn_msgs__msg__LoadMissionResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__LoadMissionResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__LoadMissionResponse));
  bool success = bosdyn_msgs__msg__LoadMissionResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__LoadMissionResponse__destroy(bosdyn_msgs__msg__LoadMissionResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__LoadMissionResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__LoadMissionResponse__Sequence__init(bosdyn_msgs__msg__LoadMissionResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LoadMissionResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__LoadMissionResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__LoadMissionResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__LoadMissionResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__LoadMissionResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__LoadMissionResponse__Sequence__fini(bosdyn_msgs__msg__LoadMissionResponse__Sequence * array)
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
      bosdyn_msgs__msg__LoadMissionResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__LoadMissionResponse__Sequence *
bosdyn_msgs__msg__LoadMissionResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LoadMissionResponse__Sequence * array = (bosdyn_msgs__msg__LoadMissionResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__LoadMissionResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__LoadMissionResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__LoadMissionResponse__Sequence__destroy(bosdyn_msgs__msg__LoadMissionResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__LoadMissionResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__LoadMissionResponse__Sequence__are_equal(const bosdyn_msgs__msg__LoadMissionResponse__Sequence * lhs, const bosdyn_msgs__msg__LoadMissionResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__LoadMissionResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__LoadMissionResponse__Sequence__copy(
  const bosdyn_msgs__msg__LoadMissionResponse__Sequence * input,
  bosdyn_msgs__msg__LoadMissionResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__LoadMissionResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__LoadMissionResponse * data =
      (bosdyn_msgs__msg__LoadMissionResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__LoadMissionResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__LoadMissionResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__LoadMissionResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
