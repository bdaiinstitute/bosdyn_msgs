// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/process_topology_request_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `odometry_loop_closure_params`
#include "bosdyn_msgs/msg/detail/process_topology_request_odometry_loop_closure_params__functions.h"
// Member `icp_params`
#include "bosdyn_msgs/msg/detail/process_topology_request_icp_params__functions.h"
// Member `fiducial_loop_closure_params`
#include "bosdyn_msgs/msg/detail/process_topology_request_fiducial_loop_closure_params__functions.h"
// Member `collision_check_params`
#include "bosdyn_msgs/msg/detail/process_topology_request_collision_checking_params__functions.h"

bool
bosdyn_msgs__msg__ProcessTopologyRequestParams__init(bosdyn_msgs__msg__ProcessTopologyRequestParams * msg)
{
  if (!msg) {
    return false;
  }
  // do_odometry_loop_closure
  // do_odometry_loop_closure_is_set
  // odometry_loop_closure_params
  if (!bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__init(&msg->odometry_loop_closure_params)) {
    bosdyn_msgs__msg__ProcessTopologyRequestParams__fini(msg);
    return false;
  }
  // odometry_loop_closure_params_is_set
  // icp_params
  if (!bosdyn_msgs__msg__ProcessTopologyRequestICPParams__init(&msg->icp_params)) {
    bosdyn_msgs__msg__ProcessTopologyRequestParams__fini(msg);
    return false;
  }
  // icp_params_is_set
  // do_fiducial_loop_closure
  // do_fiducial_loop_closure_is_set
  // fiducial_loop_closure_params
  if (!bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__init(&msg->fiducial_loop_closure_params)) {
    bosdyn_msgs__msg__ProcessTopologyRequestParams__fini(msg);
    return false;
  }
  // fiducial_loop_closure_params_is_set
  // collision_check_params
  if (!bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__init(&msg->collision_check_params)) {
    bosdyn_msgs__msg__ProcessTopologyRequestParams__fini(msg);
    return false;
  }
  // collision_check_params_is_set
  // timeout_seconds
  return true;
}

void
bosdyn_msgs__msg__ProcessTopologyRequestParams__fini(bosdyn_msgs__msg__ProcessTopologyRequestParams * msg)
{
  if (!msg) {
    return;
  }
  // do_odometry_loop_closure
  // do_odometry_loop_closure_is_set
  // odometry_loop_closure_params
  bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__fini(&msg->odometry_loop_closure_params);
  // odometry_loop_closure_params_is_set
  // icp_params
  bosdyn_msgs__msg__ProcessTopologyRequestICPParams__fini(&msg->icp_params);
  // icp_params_is_set
  // do_fiducial_loop_closure
  // do_fiducial_loop_closure_is_set
  // fiducial_loop_closure_params
  bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__fini(&msg->fiducial_loop_closure_params);
  // fiducial_loop_closure_params_is_set
  // collision_check_params
  bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__fini(&msg->collision_check_params);
  // collision_check_params_is_set
  // timeout_seconds
}

bool
bosdyn_msgs__msg__ProcessTopologyRequestParams__are_equal(const bosdyn_msgs__msg__ProcessTopologyRequestParams * lhs, const bosdyn_msgs__msg__ProcessTopologyRequestParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // do_odometry_loop_closure
  if (lhs->do_odometry_loop_closure != rhs->do_odometry_loop_closure) {
    return false;
  }
  // do_odometry_loop_closure_is_set
  if (lhs->do_odometry_loop_closure_is_set != rhs->do_odometry_loop_closure_is_set) {
    return false;
  }
  // odometry_loop_closure_params
  if (!bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__are_equal(
      &(lhs->odometry_loop_closure_params), &(rhs->odometry_loop_closure_params)))
  {
    return false;
  }
  // odometry_loop_closure_params_is_set
  if (lhs->odometry_loop_closure_params_is_set != rhs->odometry_loop_closure_params_is_set) {
    return false;
  }
  // icp_params
  if (!bosdyn_msgs__msg__ProcessTopologyRequestICPParams__are_equal(
      &(lhs->icp_params), &(rhs->icp_params)))
  {
    return false;
  }
  // icp_params_is_set
  if (lhs->icp_params_is_set != rhs->icp_params_is_set) {
    return false;
  }
  // do_fiducial_loop_closure
  if (lhs->do_fiducial_loop_closure != rhs->do_fiducial_loop_closure) {
    return false;
  }
  // do_fiducial_loop_closure_is_set
  if (lhs->do_fiducial_loop_closure_is_set != rhs->do_fiducial_loop_closure_is_set) {
    return false;
  }
  // fiducial_loop_closure_params
  if (!bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__are_equal(
      &(lhs->fiducial_loop_closure_params), &(rhs->fiducial_loop_closure_params)))
  {
    return false;
  }
  // fiducial_loop_closure_params_is_set
  if (lhs->fiducial_loop_closure_params_is_set != rhs->fiducial_loop_closure_params_is_set) {
    return false;
  }
  // collision_check_params
  if (!bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__are_equal(
      &(lhs->collision_check_params), &(rhs->collision_check_params)))
  {
    return false;
  }
  // collision_check_params_is_set
  if (lhs->collision_check_params_is_set != rhs->collision_check_params_is_set) {
    return false;
  }
  // timeout_seconds
  if (lhs->timeout_seconds != rhs->timeout_seconds) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessTopologyRequestParams__copy(
  const bosdyn_msgs__msg__ProcessTopologyRequestParams * input,
  bosdyn_msgs__msg__ProcessTopologyRequestParams * output)
{
  if (!input || !output) {
    return false;
  }
  // do_odometry_loop_closure
  output->do_odometry_loop_closure = input->do_odometry_loop_closure;
  // do_odometry_loop_closure_is_set
  output->do_odometry_loop_closure_is_set = input->do_odometry_loop_closure_is_set;
  // odometry_loop_closure_params
  if (!bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__copy(
      &(input->odometry_loop_closure_params), &(output->odometry_loop_closure_params)))
  {
    return false;
  }
  // odometry_loop_closure_params_is_set
  output->odometry_loop_closure_params_is_set = input->odometry_loop_closure_params_is_set;
  // icp_params
  if (!bosdyn_msgs__msg__ProcessTopologyRequestICPParams__copy(
      &(input->icp_params), &(output->icp_params)))
  {
    return false;
  }
  // icp_params_is_set
  output->icp_params_is_set = input->icp_params_is_set;
  // do_fiducial_loop_closure
  output->do_fiducial_loop_closure = input->do_fiducial_loop_closure;
  // do_fiducial_loop_closure_is_set
  output->do_fiducial_loop_closure_is_set = input->do_fiducial_loop_closure_is_set;
  // fiducial_loop_closure_params
  if (!bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__copy(
      &(input->fiducial_loop_closure_params), &(output->fiducial_loop_closure_params)))
  {
    return false;
  }
  // fiducial_loop_closure_params_is_set
  output->fiducial_loop_closure_params_is_set = input->fiducial_loop_closure_params_is_set;
  // collision_check_params
  if (!bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__copy(
      &(input->collision_check_params), &(output->collision_check_params)))
  {
    return false;
  }
  // collision_check_params_is_set
  output->collision_check_params_is_set = input->collision_check_params_is_set;
  // timeout_seconds
  output->timeout_seconds = input->timeout_seconds;
  return true;
}

bosdyn_msgs__msg__ProcessTopologyRequestParams *
bosdyn_msgs__msg__ProcessTopologyRequestParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessTopologyRequestParams * msg = (bosdyn_msgs__msg__ProcessTopologyRequestParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessTopologyRequestParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ProcessTopologyRequestParams));
  bool success = bosdyn_msgs__msg__ProcessTopologyRequestParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ProcessTopologyRequestParams__destroy(bosdyn_msgs__msg__ProcessTopologyRequestParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ProcessTopologyRequestParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence__init(bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessTopologyRequestParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ProcessTopologyRequestParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ProcessTopologyRequestParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ProcessTopologyRequestParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ProcessTopologyRequestParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence__fini(bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence * array)
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
      bosdyn_msgs__msg__ProcessTopologyRequestParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence *
bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence * array = (bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence__destroy(bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence__are_equal(const bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence * lhs, const bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessTopologyRequestParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence__copy(
  const bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence * input,
  bosdyn_msgs__msg__ProcessTopologyRequestParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ProcessTopologyRequestParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ProcessTopologyRequestParams * data =
      (bosdyn_msgs__msg__ProcessTopologyRequestParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ProcessTopologyRequestParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ProcessTopologyRequestParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessTopologyRequestParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
