// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/BosdynNavigateRoute.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/bosdyn_navigate_route__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_name`
// Member `host`
// Member `navigation_feedback_response_blackboard_key`
// Member `navigate_route_response_blackboard_key`
#include "rosidl_runtime_c/string_functions.h"
// Member `route`
#include "bosdyn_msgs/msg/detail/route__functions.h"
// Member `route_follow_params`
#include "bosdyn_msgs/msg/detail/route_following_params__functions.h"
// Member `travel_params`
#include "bosdyn_msgs/msg/detail/travel_params__functions.h"

bool
bosdyn_msgs__msg__BosdynNavigateRoute__init(bosdyn_msgs__msg__BosdynNavigateRoute * msg)
{
  if (!msg) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__BosdynNavigateRoute__fini(msg);
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__init(&msg->host)) {
    bosdyn_msgs__msg__BosdynNavigateRoute__fini(msg);
    return false;
  }
  // route
  if (!bosdyn_msgs__msg__Route__init(&msg->route)) {
    bosdyn_msgs__msg__BosdynNavigateRoute__fini(msg);
    return false;
  }
  // route_is_set
  // route_follow_params
  if (!bosdyn_msgs__msg__RouteFollowingParams__init(&msg->route_follow_params)) {
    bosdyn_msgs__msg__BosdynNavigateRoute__fini(msg);
    return false;
  }
  // route_follow_params_is_set
  // travel_params
  if (!bosdyn_msgs__msg__TravelParams__init(&msg->travel_params)) {
    bosdyn_msgs__msg__BosdynNavigateRoute__fini(msg);
    return false;
  }
  // travel_params_is_set
  // navigation_feedback_response_blackboard_key
  if (!rosidl_runtime_c__String__init(&msg->navigation_feedback_response_blackboard_key)) {
    bosdyn_msgs__msg__BosdynNavigateRoute__fini(msg);
    return false;
  }
  // navigate_route_response_blackboard_key
  if (!rosidl_runtime_c__String__init(&msg->navigate_route_response_blackboard_key)) {
    bosdyn_msgs__msg__BosdynNavigateRoute__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__BosdynNavigateRoute__fini(bosdyn_msgs__msg__BosdynNavigateRoute * msg)
{
  if (!msg) {
    return;
  }
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // host
  rosidl_runtime_c__String__fini(&msg->host);
  // route
  bosdyn_msgs__msg__Route__fini(&msg->route);
  // route_is_set
  // route_follow_params
  bosdyn_msgs__msg__RouteFollowingParams__fini(&msg->route_follow_params);
  // route_follow_params_is_set
  // travel_params
  bosdyn_msgs__msg__TravelParams__fini(&msg->travel_params);
  // travel_params_is_set
  // navigation_feedback_response_blackboard_key
  rosidl_runtime_c__String__fini(&msg->navigation_feedback_response_blackboard_key);
  // navigate_route_response_blackboard_key
  rosidl_runtime_c__String__fini(&msg->navigate_route_response_blackboard_key);
}

bool
bosdyn_msgs__msg__BosdynNavigateRoute__are_equal(const bosdyn_msgs__msg__BosdynNavigateRoute * lhs, const bosdyn_msgs__msg__BosdynNavigateRoute * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->host), &(rhs->host)))
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
  // navigation_feedback_response_blackboard_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->navigation_feedback_response_blackboard_key), &(rhs->navigation_feedback_response_blackboard_key)))
  {
    return false;
  }
  // navigate_route_response_blackboard_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->navigate_route_response_blackboard_key), &(rhs->navigate_route_response_blackboard_key)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__BosdynNavigateRoute__copy(
  const bosdyn_msgs__msg__BosdynNavigateRoute * input,
  bosdyn_msgs__msg__BosdynNavigateRoute * output)
{
  if (!input || !output) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__copy(
      &(input->host), &(output->host)))
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
  // navigation_feedback_response_blackboard_key
  if (!rosidl_runtime_c__String__copy(
      &(input->navigation_feedback_response_blackboard_key), &(output->navigation_feedback_response_blackboard_key)))
  {
    return false;
  }
  // navigate_route_response_blackboard_key
  if (!rosidl_runtime_c__String__copy(
      &(input->navigate_route_response_blackboard_key), &(output->navigate_route_response_blackboard_key)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__BosdynNavigateRoute *
bosdyn_msgs__msg__BosdynNavigateRoute__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynNavigateRoute * msg = (bosdyn_msgs__msg__BosdynNavigateRoute *)allocator.allocate(sizeof(bosdyn_msgs__msg__BosdynNavigateRoute), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__BosdynNavigateRoute));
  bool success = bosdyn_msgs__msg__BosdynNavigateRoute__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__BosdynNavigateRoute__destroy(bosdyn_msgs__msg__BosdynNavigateRoute * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__BosdynNavigateRoute__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__BosdynNavigateRoute__Sequence__init(bosdyn_msgs__msg__BosdynNavigateRoute__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynNavigateRoute * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__BosdynNavigateRoute *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__BosdynNavigateRoute), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__BosdynNavigateRoute__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__BosdynNavigateRoute__fini(&data[i - 1]);
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
bosdyn_msgs__msg__BosdynNavigateRoute__Sequence__fini(bosdyn_msgs__msg__BosdynNavigateRoute__Sequence * array)
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
      bosdyn_msgs__msg__BosdynNavigateRoute__fini(&array->data[i]);
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

bosdyn_msgs__msg__BosdynNavigateRoute__Sequence *
bosdyn_msgs__msg__BosdynNavigateRoute__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynNavigateRoute__Sequence * array = (bosdyn_msgs__msg__BosdynNavigateRoute__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__BosdynNavigateRoute__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__BosdynNavigateRoute__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__BosdynNavigateRoute__Sequence__destroy(bosdyn_msgs__msg__BosdynNavigateRoute__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__BosdynNavigateRoute__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__BosdynNavigateRoute__Sequence__are_equal(const bosdyn_msgs__msg__BosdynNavigateRoute__Sequence * lhs, const bosdyn_msgs__msg__BosdynNavigateRoute__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__BosdynNavigateRoute__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__BosdynNavigateRoute__Sequence__copy(
  const bosdyn_msgs__msg__BosdynNavigateRoute__Sequence * input,
  bosdyn_msgs__msg__BosdynNavigateRoute__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__BosdynNavigateRoute);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__BosdynNavigateRoute * data =
      (bosdyn_msgs__msg__BosdynNavigateRoute *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__BosdynNavigateRoute__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__BosdynNavigateRoute__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__BosdynNavigateRoute__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
