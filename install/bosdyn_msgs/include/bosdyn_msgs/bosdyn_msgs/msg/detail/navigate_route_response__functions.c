// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/NavigateRouteResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/navigate_route_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `lease_use_results`
#include "bosdyn_msgs/msg/detail/lease_use_result__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/navigate_route_response_status__functions.h"
// Member `impaired_state`
#include "bosdyn_msgs/msg/detail/robot_impaired_state__functions.h"
// Member `error_waypoint_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `error_edge_ids`
#include "bosdyn_msgs/msg/detail/edge_id__functions.h"
// Member `area_callback_error`
#include "bosdyn_msgs/msg/detail/area_callback_service_error__functions.h"

bool
bosdyn_msgs__msg__NavigateRouteResponse__init(bosdyn_msgs__msg__NavigateRouteResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__NavigateRouteResponse__fini(msg);
    return false;
  }
  // header_is_set
  // lease_use_results
  if (!bosdyn_msgs__msg__LeaseUseResult__Sequence__init(&msg->lease_use_results, 0)) {
    bosdyn_msgs__msg__NavigateRouteResponse__fini(msg);
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__NavigateRouteResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__NavigateRouteResponse__fini(msg);
    return false;
  }
  // impaired_state
  if (!bosdyn_msgs__msg__RobotImpairedState__init(&msg->impaired_state)) {
    bosdyn_msgs__msg__NavigateRouteResponse__fini(msg);
    return false;
  }
  // impaired_state_is_set
  // command_id
  // error_waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->error_waypoint_ids, 0)) {
    bosdyn_msgs__msg__NavigateRouteResponse__fini(msg);
    return false;
  }
  // error_edge_ids
  if (!bosdyn_msgs__msg__EdgeId__Sequence__init(&msg->error_edge_ids, 0)) {
    bosdyn_msgs__msg__NavigateRouteResponse__fini(msg);
    return false;
  }
  // area_callback_error
  if (!bosdyn_msgs__msg__AreaCallbackServiceError__init(&msg->area_callback_error)) {
    bosdyn_msgs__msg__NavigateRouteResponse__fini(msg);
    return false;
  }
  // area_callback_error_is_set
  return true;
}

void
bosdyn_msgs__msg__NavigateRouteResponse__fini(bosdyn_msgs__msg__NavigateRouteResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // lease_use_results
  bosdyn_msgs__msg__LeaseUseResult__Sequence__fini(&msg->lease_use_results);
  // status
  bosdyn_msgs__msg__NavigateRouteResponseStatus__fini(&msg->status);
  // impaired_state
  bosdyn_msgs__msg__RobotImpairedState__fini(&msg->impaired_state);
  // impaired_state_is_set
  // command_id
  // error_waypoint_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->error_waypoint_ids);
  // error_edge_ids
  bosdyn_msgs__msg__EdgeId__Sequence__fini(&msg->error_edge_ids);
  // area_callback_error
  bosdyn_msgs__msg__AreaCallbackServiceError__fini(&msg->area_callback_error);
  // area_callback_error_is_set
}

bool
bosdyn_msgs__msg__NavigateRouteResponse__are_equal(const bosdyn_msgs__msg__NavigateRouteResponse * lhs, const bosdyn_msgs__msg__NavigateRouteResponse * rhs)
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
  // lease_use_results
  if (!bosdyn_msgs__msg__LeaseUseResult__Sequence__are_equal(
      &(lhs->lease_use_results), &(rhs->lease_use_results)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__NavigateRouteResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
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
  // command_id
  if (lhs->command_id != rhs->command_id) {
    return false;
  }
  // error_waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->error_waypoint_ids), &(rhs->error_waypoint_ids)))
  {
    return false;
  }
  // error_edge_ids
  if (!bosdyn_msgs__msg__EdgeId__Sequence__are_equal(
      &(lhs->error_edge_ids), &(rhs->error_edge_ids)))
  {
    return false;
  }
  // area_callback_error
  if (!bosdyn_msgs__msg__AreaCallbackServiceError__are_equal(
      &(lhs->area_callback_error), &(rhs->area_callback_error)))
  {
    return false;
  }
  // area_callback_error_is_set
  if (lhs->area_callback_error_is_set != rhs->area_callback_error_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__NavigateRouteResponse__copy(
  const bosdyn_msgs__msg__NavigateRouteResponse * input,
  bosdyn_msgs__msg__NavigateRouteResponse * output)
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
  // lease_use_results
  if (!bosdyn_msgs__msg__LeaseUseResult__Sequence__copy(
      &(input->lease_use_results), &(output->lease_use_results)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__NavigateRouteResponseStatus__copy(
      &(input->status), &(output->status)))
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
  // command_id
  output->command_id = input->command_id;
  // error_waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->error_waypoint_ids), &(output->error_waypoint_ids)))
  {
    return false;
  }
  // error_edge_ids
  if (!bosdyn_msgs__msg__EdgeId__Sequence__copy(
      &(input->error_edge_ids), &(output->error_edge_ids)))
  {
    return false;
  }
  // area_callback_error
  if (!bosdyn_msgs__msg__AreaCallbackServiceError__copy(
      &(input->area_callback_error), &(output->area_callback_error)))
  {
    return false;
  }
  // area_callback_error_is_set
  output->area_callback_error_is_set = input->area_callback_error_is_set;
  return true;
}

bosdyn_msgs__msg__NavigateRouteResponse *
bosdyn_msgs__msg__NavigateRouteResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NavigateRouteResponse * msg = (bosdyn_msgs__msg__NavigateRouteResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__NavigateRouteResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__NavigateRouteResponse));
  bool success = bosdyn_msgs__msg__NavigateRouteResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__NavigateRouteResponse__destroy(bosdyn_msgs__msg__NavigateRouteResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__NavigateRouteResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__NavigateRouteResponse__Sequence__init(bosdyn_msgs__msg__NavigateRouteResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NavigateRouteResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__NavigateRouteResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__NavigateRouteResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__NavigateRouteResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__NavigateRouteResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__NavigateRouteResponse__Sequence__fini(bosdyn_msgs__msg__NavigateRouteResponse__Sequence * array)
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
      bosdyn_msgs__msg__NavigateRouteResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__NavigateRouteResponse__Sequence *
bosdyn_msgs__msg__NavigateRouteResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NavigateRouteResponse__Sequence * array = (bosdyn_msgs__msg__NavigateRouteResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__NavigateRouteResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__NavigateRouteResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__NavigateRouteResponse__Sequence__destroy(bosdyn_msgs__msg__NavigateRouteResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__NavigateRouteResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__NavigateRouteResponse__Sequence__are_equal(const bosdyn_msgs__msg__NavigateRouteResponse__Sequence * lhs, const bosdyn_msgs__msg__NavigateRouteResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__NavigateRouteResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__NavigateRouteResponse__Sequence__copy(
  const bosdyn_msgs__msg__NavigateRouteResponse__Sequence * input,
  bosdyn_msgs__msg__NavigateRouteResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__NavigateRouteResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__NavigateRouteResponse * data =
      (bosdyn_msgs__msg__NavigateRouteResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__NavigateRouteResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__NavigateRouteResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__NavigateRouteResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
