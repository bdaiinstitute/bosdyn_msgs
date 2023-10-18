// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RouteFollowingParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/route_following_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `new_cmd_behavior`
#include "bosdyn_msgs/msg/detail/route_following_params_start_route_behavior__functions.h"
// Member `existing_cmd_behavior`
#include "bosdyn_msgs/msg/detail/route_following_params_resume_behavior__functions.h"
// Member `route_blocked_behavior`
#include "bosdyn_msgs/msg/detail/route_following_params_route_blocked_behavior__functions.h"

bool
bosdyn_msgs__msg__RouteFollowingParams__init(bosdyn_msgs__msg__RouteFollowingParams * msg)
{
  if (!msg) {
    return false;
  }
  // new_cmd_behavior
  if (!bosdyn_msgs__msg__RouteFollowingParamsStartRouteBehavior__init(&msg->new_cmd_behavior)) {
    bosdyn_msgs__msg__RouteFollowingParams__fini(msg);
    return false;
  }
  // existing_cmd_behavior
  if (!bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior__init(&msg->existing_cmd_behavior)) {
    bosdyn_msgs__msg__RouteFollowingParams__fini(msg);
    return false;
  }
  // route_blocked_behavior
  if (!bosdyn_msgs__msg__RouteFollowingParamsRouteBlockedBehavior__init(&msg->route_blocked_behavior)) {
    bosdyn_msgs__msg__RouteFollowingParams__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__RouteFollowingParams__fini(bosdyn_msgs__msg__RouteFollowingParams * msg)
{
  if (!msg) {
    return;
  }
  // new_cmd_behavior
  bosdyn_msgs__msg__RouteFollowingParamsStartRouteBehavior__fini(&msg->new_cmd_behavior);
  // existing_cmd_behavior
  bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior__fini(&msg->existing_cmd_behavior);
  // route_blocked_behavior
  bosdyn_msgs__msg__RouteFollowingParamsRouteBlockedBehavior__fini(&msg->route_blocked_behavior);
}

bool
bosdyn_msgs__msg__RouteFollowingParams__are_equal(const bosdyn_msgs__msg__RouteFollowingParams * lhs, const bosdyn_msgs__msg__RouteFollowingParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // new_cmd_behavior
  if (!bosdyn_msgs__msg__RouteFollowingParamsStartRouteBehavior__are_equal(
      &(lhs->new_cmd_behavior), &(rhs->new_cmd_behavior)))
  {
    return false;
  }
  // existing_cmd_behavior
  if (!bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior__are_equal(
      &(lhs->existing_cmd_behavior), &(rhs->existing_cmd_behavior)))
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
bosdyn_msgs__msg__RouteFollowingParams__copy(
  const bosdyn_msgs__msg__RouteFollowingParams * input,
  bosdyn_msgs__msg__RouteFollowingParams * output)
{
  if (!input || !output) {
    return false;
  }
  // new_cmd_behavior
  if (!bosdyn_msgs__msg__RouteFollowingParamsStartRouteBehavior__copy(
      &(input->new_cmd_behavior), &(output->new_cmd_behavior)))
  {
    return false;
  }
  // existing_cmd_behavior
  if (!bosdyn_msgs__msg__RouteFollowingParamsResumeBehavior__copy(
      &(input->existing_cmd_behavior), &(output->existing_cmd_behavior)))
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

bosdyn_msgs__msg__RouteFollowingParams *
bosdyn_msgs__msg__RouteFollowingParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RouteFollowingParams * msg = (bosdyn_msgs__msg__RouteFollowingParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__RouteFollowingParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RouteFollowingParams));
  bool success = bosdyn_msgs__msg__RouteFollowingParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RouteFollowingParams__destroy(bosdyn_msgs__msg__RouteFollowingParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RouteFollowingParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RouteFollowingParams__Sequence__init(bosdyn_msgs__msg__RouteFollowingParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RouteFollowingParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RouteFollowingParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RouteFollowingParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RouteFollowingParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RouteFollowingParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RouteFollowingParams__Sequence__fini(bosdyn_msgs__msg__RouteFollowingParams__Sequence * array)
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
      bosdyn_msgs__msg__RouteFollowingParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__RouteFollowingParams__Sequence *
bosdyn_msgs__msg__RouteFollowingParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RouteFollowingParams__Sequence * array = (bosdyn_msgs__msg__RouteFollowingParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RouteFollowingParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RouteFollowingParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RouteFollowingParams__Sequence__destroy(bosdyn_msgs__msg__RouteFollowingParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RouteFollowingParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RouteFollowingParams__Sequence__are_equal(const bosdyn_msgs__msg__RouteFollowingParams__Sequence * lhs, const bosdyn_msgs__msg__RouteFollowingParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RouteFollowingParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RouteFollowingParams__Sequence__copy(
  const bosdyn_msgs__msg__RouteFollowingParams__Sequence * input,
  bosdyn_msgs__msg__RouteFollowingParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RouteFollowingParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RouteFollowingParams * data =
      (bosdyn_msgs__msg__RouteFollowingParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RouteFollowingParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RouteFollowingParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RouteFollowingParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
