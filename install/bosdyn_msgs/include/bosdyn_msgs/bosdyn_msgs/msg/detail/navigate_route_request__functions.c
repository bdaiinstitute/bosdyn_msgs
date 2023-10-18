// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/NavigateRouteRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/navigate_route_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `leases`
#include "bosdyn_msgs/msg/detail/lease__functions.h"
// Member `route`
#include "bosdyn_msgs/msg/detail/route__functions.h"
// Member `route_follow_params`
#include "bosdyn_msgs/msg/detail/route_following_params__functions.h"
// Member `travel_params`
#include "bosdyn_msgs/msg/detail/travel_params__functions.h"
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `clock_identifier`
#include "rosidl_runtime_c/string_functions.h"
// Member `destination_waypoint_tform_body_goal`
#include "bosdyn_msgs/msg/detail/se2_pose__functions.h"

bool
bosdyn_msgs__msg__NavigateRouteRequest__init(bosdyn_msgs__msg__NavigateRouteRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__NavigateRouteRequest__fini(msg);
    return false;
  }
  // header_is_set
  // leases
  if (!bosdyn_msgs__msg__Lease__Sequence__init(&msg->leases, 0)) {
    bosdyn_msgs__msg__NavigateRouteRequest__fini(msg);
    return false;
  }
  // route
  if (!bosdyn_msgs__msg__Route__init(&msg->route)) {
    bosdyn_msgs__msg__NavigateRouteRequest__fini(msg);
    return false;
  }
  // route_is_set
  // route_follow_params
  if (!bosdyn_msgs__msg__RouteFollowingParams__init(&msg->route_follow_params)) {
    bosdyn_msgs__msg__NavigateRouteRequest__fini(msg);
    return false;
  }
  // route_follow_params_is_set
  // travel_params
  if (!bosdyn_msgs__msg__TravelParams__init(&msg->travel_params)) {
    bosdyn_msgs__msg__NavigateRouteRequest__fini(msg);
    return false;
  }
  // travel_params_is_set
  // end_time
  if (!builtin_interfaces__msg__Time__init(&msg->end_time)) {
    bosdyn_msgs__msg__NavigateRouteRequest__fini(msg);
    return false;
  }
  // end_time_is_set
  // clock_identifier
  if (!rosidl_runtime_c__String__init(&msg->clock_identifier)) {
    bosdyn_msgs__msg__NavigateRouteRequest__fini(msg);
    return false;
  }
  // destination_waypoint_tform_body_goal
  if (!bosdyn_msgs__msg__SE2Pose__init(&msg->destination_waypoint_tform_body_goal)) {
    bosdyn_msgs__msg__NavigateRouteRequest__fini(msg);
    return false;
  }
  // destination_waypoint_tform_body_goal_is_set
  // command_id
  return true;
}

void
bosdyn_msgs__msg__NavigateRouteRequest__fini(bosdyn_msgs__msg__NavigateRouteRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // leases
  bosdyn_msgs__msg__Lease__Sequence__fini(&msg->leases);
  // route
  bosdyn_msgs__msg__Route__fini(&msg->route);
  // route_is_set
  // route_follow_params
  bosdyn_msgs__msg__RouteFollowingParams__fini(&msg->route_follow_params);
  // route_follow_params_is_set
  // travel_params
  bosdyn_msgs__msg__TravelParams__fini(&msg->travel_params);
  // travel_params_is_set
  // end_time
  builtin_interfaces__msg__Time__fini(&msg->end_time);
  // end_time_is_set
  // clock_identifier
  rosidl_runtime_c__String__fini(&msg->clock_identifier);
  // destination_waypoint_tform_body_goal
  bosdyn_msgs__msg__SE2Pose__fini(&msg->destination_waypoint_tform_body_goal);
  // destination_waypoint_tform_body_goal_is_set
  // command_id
}

bool
bosdyn_msgs__msg__NavigateRouteRequest__are_equal(const bosdyn_msgs__msg__NavigateRouteRequest * lhs, const bosdyn_msgs__msg__NavigateRouteRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // leases
  if (!bosdyn_msgs__msg__Lease__Sequence__are_equal(
      &(lhs->leases), &(rhs->leases)))
  {
    return false;
  }
  // route
  if (!bosdyn_msgs__msg__Route__are_equal(
      &(lhs->route), &(rhs->route)))
  {
    return false;
  }
  // route_is_set
  if (lhs->route_is_set != rhs->route_is_set) {
    return false;
  }
  // route_follow_params
  if (!bosdyn_msgs__msg__RouteFollowingParams__are_equal(
      &(lhs->route_follow_params), &(rhs->route_follow_params)))
  {
    return false;
  }
  // route_follow_params_is_set
  if (lhs->route_follow_params_is_set != rhs->route_follow_params_is_set) {
    return false;
  }
  // travel_params
  if (!bosdyn_msgs__msg__TravelParams__are_equal(
      &(lhs->travel_params), &(rhs->travel_params)))
  {
    return false;
  }
  // travel_params_is_set
  if (lhs->travel_params_is_set != rhs->travel_params_is_set) {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->end_time), &(rhs->end_time)))
  {
    return false;
  }
  // end_time_is_set
  if (lhs->end_time_is_set != rhs->end_time_is_set) {
    return false;
  }
  // clock_identifier
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->clock_identifier), &(rhs->clock_identifier)))
  {
    return false;
  }
  // destination_waypoint_tform_body_goal
  if (!bosdyn_msgs__msg__SE2Pose__are_equal(
      &(lhs->destination_waypoint_tform_body_goal), &(rhs->destination_waypoint_tform_body_goal)))
  {
    return false;
  }
  // destination_waypoint_tform_body_goal_is_set
  if (lhs->destination_waypoint_tform_body_goal_is_set != rhs->destination_waypoint_tform_body_goal_is_set) {
    return false;
  }
  // command_id
  if (lhs->command_id != rhs->command_id) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__NavigateRouteRequest__copy(
  const bosdyn_msgs__msg__NavigateRouteRequest * input,
  bosdyn_msgs__msg__NavigateRouteRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // leases
  if (!bosdyn_msgs__msg__Lease__Sequence__copy(
      &(input->leases), &(output->leases)))
  {
    return false;
  }
  // route
  if (!bosdyn_msgs__msg__Route__copy(
      &(input->route), &(output->route)))
  {
    return false;
  }
  // route_is_set
  output->route_is_set = input->route_is_set;
  // route_follow_params
  if (!bosdyn_msgs__msg__RouteFollowingParams__copy(
      &(input->route_follow_params), &(output->route_follow_params)))
  {
    return false;
  }
  // route_follow_params_is_set
  output->route_follow_params_is_set = input->route_follow_params_is_set;
  // travel_params
  if (!bosdyn_msgs__msg__TravelParams__copy(
      &(input->travel_params), &(output->travel_params)))
  {
    return false;
  }
  // travel_params_is_set
  output->travel_params_is_set = input->travel_params_is_set;
  // end_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end_time), &(output->end_time)))
  {
    return false;
  }
  // end_time_is_set
  output->end_time_is_set = input->end_time_is_set;
  // clock_identifier
  if (!rosidl_runtime_c__String__copy(
      &(input->clock_identifier), &(output->clock_identifier)))
  {
    return false;
  }
  // destination_waypoint_tform_body_goal
  if (!bosdyn_msgs__msg__SE2Pose__copy(
      &(input->destination_waypoint_tform_body_goal), &(output->destination_waypoint_tform_body_goal)))
  {
    return false;
  }
  // destination_waypoint_tform_body_goal_is_set
  output->destination_waypoint_tform_body_goal_is_set = input->destination_waypoint_tform_body_goal_is_set;
  // command_id
  output->command_id = input->command_id;
  return true;
}

bosdyn_msgs__msg__NavigateRouteRequest *
bosdyn_msgs__msg__NavigateRouteRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NavigateRouteRequest * msg = (bosdyn_msgs__msg__NavigateRouteRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__NavigateRouteRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__NavigateRouteRequest));
  bool success = bosdyn_msgs__msg__NavigateRouteRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__NavigateRouteRequest__destroy(bosdyn_msgs__msg__NavigateRouteRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__NavigateRouteRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__NavigateRouteRequest__Sequence__init(bosdyn_msgs__msg__NavigateRouteRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NavigateRouteRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__NavigateRouteRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__NavigateRouteRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__NavigateRouteRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__NavigateRouteRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__NavigateRouteRequest__Sequence__fini(bosdyn_msgs__msg__NavigateRouteRequest__Sequence * array)
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
      bosdyn_msgs__msg__NavigateRouteRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__NavigateRouteRequest__Sequence *
bosdyn_msgs__msg__NavigateRouteRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NavigateRouteRequest__Sequence * array = (bosdyn_msgs__msg__NavigateRouteRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__NavigateRouteRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__NavigateRouteRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__NavigateRouteRequest__Sequence__destroy(bosdyn_msgs__msg__NavigateRouteRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__NavigateRouteRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__NavigateRouteRequest__Sequence__are_equal(const bosdyn_msgs__msg__NavigateRouteRequest__Sequence * lhs, const bosdyn_msgs__msg__NavigateRouteRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__NavigateRouteRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__NavigateRouteRequest__Sequence__copy(
  const bosdyn_msgs__msg__NavigateRouteRequest__Sequence * input,
  bosdyn_msgs__msg__NavigateRouteRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__NavigateRouteRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__NavigateRouteRequest * data =
      (bosdyn_msgs__msg__NavigateRouteRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__NavigateRouteRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__NavigateRouteRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__NavigateRouteRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
