// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/BosdynNavigateTo.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/bosdyn_navigate_to__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_name`
// Member `host`
// Member `destination_waypoint_id`
// Member `navigation_feedback_response_blackboard_key`
// Member `navigate_to_response_blackboard_key`
#include "rosidl_runtime_c/string_functions.h"
// Member `route_gen_params`
#include "bosdyn_msgs/msg/detail/route_gen_params__functions.h"
// Member `travel_params`
#include "bosdyn_msgs/msg/detail/travel_params__functions.h"
// Member `route_blocked_behavior`
#include "bosdyn_msgs/msg/detail/route_following_params_route_blocked_behavior__functions.h"

bool
bosdyn_msgs__msg__BosdynNavigateTo__init(bosdyn_msgs__msg__BosdynNavigateTo * msg)
{
  if (!msg) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__BosdynNavigateTo__fini(msg);
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__init(&msg->host)) {
    bosdyn_msgs__msg__BosdynNavigateTo__fini(msg);
    return false;
  }
  // destination_waypoint_id
  if (!rosidl_runtime_c__String__init(&msg->destination_waypoint_id)) {
    bosdyn_msgs__msg__BosdynNavigateTo__fini(msg);
    return false;
  }
  // route_gen_params
  if (!bosdyn_msgs__msg__RouteGenParams__init(&msg->route_gen_params)) {
    bosdyn_msgs__msg__BosdynNavigateTo__fini(msg);
    return false;
  }
  // route_gen_params_is_set
  // travel_params
  if (!bosdyn_msgs__msg__TravelParams__init(&msg->travel_params)) {
    bosdyn_msgs__msg__BosdynNavigateTo__fini(msg);
    return false;
  }
  // travel_params_is_set
  // navigation_feedback_response_blackboard_key
  if (!rosidl_runtime_c__String__init(&msg->navigation_feedback_response_blackboard_key)) {
    bosdyn_msgs__msg__BosdynNavigateTo__fini(msg);
    return false;
  }
  // navigate_to_response_blackboard_key
  if (!rosidl_runtime_c__String__init(&msg->navigate_to_response_blackboard_key)) {
    bosdyn_msgs__msg__BosdynNavigateTo__fini(msg);
    return false;
  }
  // route_blocked_behavior
  if (!bosdyn_msgs__msg__RouteFollowingParamsRouteBlockedBehavior__init(&msg->route_blocked_behavior)) {
    bosdyn_msgs__msg__BosdynNavigateTo__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__BosdynNavigateTo__fini(bosdyn_msgs__msg__BosdynNavigateTo * msg)
{
  if (!msg) {
    return;
  }
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // host
  rosidl_runtime_c__String__fini(&msg->host);
  // destination_waypoint_id
  rosidl_runtime_c__String__fini(&msg->destination_waypoint_id);
  // route_gen_params
  bosdyn_msgs__msg__RouteGenParams__fini(&msg->route_gen_params);
  // route_gen_params_is_set
  // travel_params
  bosdyn_msgs__msg__TravelParams__fini(&msg->travel_params);
  // travel_params_is_set
  // navigation_feedback_response_blackboard_key
  rosidl_runtime_c__String__fini(&msg->navigation_feedback_response_blackboard_key);
  // navigate_to_response_blackboard_key
  rosidl_runtime_c__String__fini(&msg->navigate_to_response_blackboard_key);
  // route_blocked_behavior
  bosdyn_msgs__msg__RouteFollowingParamsRouteBlockedBehavior__fini(&msg->route_blocked_behavior);
}

bool
bosdyn_msgs__msg__BosdynNavigateTo__are_equal(const bosdyn_msgs__msg__BosdynNavigateTo * lhs, const bosdyn_msgs__msg__BosdynNavigateTo * rhs)
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
  // destination_waypoint_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->destination_waypoint_id), &(rhs->destination_waypoint_id)))
  {
    return false;
  }
  // route_gen_params
  if (!bosdyn_msgs__msg__RouteGenParams__are_equal(
      &(lhs->route_gen_params), &(rhs->route_gen_params)))
  {
    return false;
  }
  // route_gen_params_is_set
  if (lhs->route_gen_params_is_set != rhs->route_gen_params_is_set) {
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
  // navigate_to_response_blackboard_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->navigate_to_response_blackboard_key), &(rhs->navigate_to_response_blackboard_key)))
  {
    return false;
  }
  // route_blocked_behavior
  if (!bosdyn_msgs__msg__RouteFollowingParamsRouteBlockedBehavior__are_equal(
      &(lhs->route_blocked_behavior), &(rhs->route_blocked_behavior)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__BosdynNavigateTo__copy(
  const bosdyn_msgs__msg__BosdynNavigateTo * input,
  bosdyn_msgs__msg__BosdynNavigateTo * output)
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
  // destination_waypoint_id
  if (!rosidl_runtime_c__String__copy(
      &(input->destination_waypoint_id), &(output->destination_waypoint_id)))
  {
    return false;
  }
  // route_gen_params
  if (!bosdyn_msgs__msg__RouteGenParams__copy(
      &(input->route_gen_params), &(output->route_gen_params)))
  {
    return false;
  }
  // route_gen_params_is_set
  output->route_gen_params_is_set = input->route_gen_params_is_set;
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
  // navigate_to_response_blackboard_key
  if (!rosidl_runtime_c__String__copy(
      &(input->navigate_to_response_blackboard_key), &(output->navigate_to_response_blackboard_key)))
  {
    return false;
  }
  // route_blocked_behavior
  if (!bosdyn_msgs__msg__RouteFollowingParamsRouteBlockedBehavior__copy(
      &(input->route_blocked_behavior), &(output->route_blocked_behavior)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__BosdynNavigateTo *
bosdyn_msgs__msg__BosdynNavigateTo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynNavigateTo * msg = (bosdyn_msgs__msg__BosdynNavigateTo *)allocator.allocate(sizeof(bosdyn_msgs__msg__BosdynNavigateTo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__BosdynNavigateTo));
  bool success = bosdyn_msgs__msg__BosdynNavigateTo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__BosdynNavigateTo__destroy(bosdyn_msgs__msg__BosdynNavigateTo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__BosdynNavigateTo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__BosdynNavigateTo__Sequence__init(bosdyn_msgs__msg__BosdynNavigateTo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynNavigateTo * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__BosdynNavigateTo *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__BosdynNavigateTo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__BosdynNavigateTo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__BosdynNavigateTo__fini(&data[i - 1]);
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
bosdyn_msgs__msg__BosdynNavigateTo__Sequence__fini(bosdyn_msgs__msg__BosdynNavigateTo__Sequence * array)
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
      bosdyn_msgs__msg__BosdynNavigateTo__fini(&array->data[i]);
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

bosdyn_msgs__msg__BosdynNavigateTo__Sequence *
bosdyn_msgs__msg__BosdynNavigateTo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynNavigateTo__Sequence * array = (bosdyn_msgs__msg__BosdynNavigateTo__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__BosdynNavigateTo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__BosdynNavigateTo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__BosdynNavigateTo__Sequence__destroy(bosdyn_msgs__msg__BosdynNavigateTo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__BosdynNavigateTo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__BosdynNavigateTo__Sequence__are_equal(const bosdyn_msgs__msg__BosdynNavigateTo__Sequence * lhs, const bosdyn_msgs__msg__BosdynNavigateTo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__BosdynNavigateTo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__BosdynNavigateTo__Sequence__copy(
  const bosdyn_msgs__msg__BosdynNavigateTo__Sequence * input,
  bosdyn_msgs__msg__BosdynNavigateTo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__BosdynNavigateTo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__BosdynNavigateTo * data =
      (bosdyn_msgs__msg__BosdynNavigateTo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__BosdynNavigateTo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__BosdynNavigateTo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__BosdynNavigateTo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
