// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SE3Trajectory.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/se3_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `points`
#include "bosdyn_msgs/msg/detail/se3_trajectory_point__functions.h"
// Member `reference_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `pos_interpolation`
#include "bosdyn_msgs/msg/detail/positional_interpolation__functions.h"
// Member `ang_interpolation`
#include "bosdyn_msgs/msg/detail/angular_interpolation__functions.h"

bool
bosdyn_msgs__msg__SE3Trajectory__init(bosdyn_msgs__msg__SE3Trajectory * msg)
{
  if (!msg) {
    return false;
  }
  // points
  if (!bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence__init(&msg->points, 0)) {
    bosdyn_msgs__msg__SE3Trajectory__fini(msg);
    return false;
  }
  // reference_time
  if (!builtin_interfaces__msg__Time__init(&msg->reference_time)) {
    bosdyn_msgs__msg__SE3Trajectory__fini(msg);
    return false;
  }
  // reference_time_is_set
  // pos_interpolation
  if (!bosdyn_msgs__msg__PositionalInterpolation__init(&msg->pos_interpolation)) {
    bosdyn_msgs__msg__SE3Trajectory__fini(msg);
    return false;
  }
  // ang_interpolation
  if (!bosdyn_msgs__msg__AngularInterpolation__init(&msg->ang_interpolation)) {
    bosdyn_msgs__msg__SE3Trajectory__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__SE3Trajectory__fini(bosdyn_msgs__msg__SE3Trajectory * msg)
{
  if (!msg) {
    return;
  }
  // points
  bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence__fini(&msg->points);
  // reference_time
  builtin_interfaces__msg__Time__fini(&msg->reference_time);
  // reference_time_is_set
  // pos_interpolation
  bosdyn_msgs__msg__PositionalInterpolation__fini(&msg->pos_interpolation);
  // ang_interpolation
  bosdyn_msgs__msg__AngularInterpolation__fini(&msg->ang_interpolation);
}

bool
bosdyn_msgs__msg__SE3Trajectory__are_equal(const bosdyn_msgs__msg__SE3Trajectory * lhs, const bosdyn_msgs__msg__SE3Trajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // points
  if (!bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // reference_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->reference_time), &(rhs->reference_time)))
  {
    return false;
  }
  // reference_time_is_set
  if (lhs->reference_time_is_set != rhs->reference_time_is_set) {
    return false;
  }
  // pos_interpolation
  if (!bosdyn_msgs__msg__PositionalInterpolation__are_equal(
      &(lhs->pos_interpolation), &(rhs->pos_interpolation)))
  {
    return false;
  }
  // ang_interpolation
  if (!bosdyn_msgs__msg__AngularInterpolation__are_equal(
      &(lhs->ang_interpolation), &(rhs->ang_interpolation)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SE3Trajectory__copy(
  const bosdyn_msgs__msg__SE3Trajectory * input,
  bosdyn_msgs__msg__SE3Trajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // points
  if (!bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // reference_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->reference_time), &(output->reference_time)))
  {
    return false;
  }
  // reference_time_is_set
  output->reference_time_is_set = input->reference_time_is_set;
  // pos_interpolation
  if (!bosdyn_msgs__msg__PositionalInterpolation__copy(
      &(input->pos_interpolation), &(output->pos_interpolation)))
  {
    return false;
  }
  // ang_interpolation
  if (!bosdyn_msgs__msg__AngularInterpolation__copy(
      &(input->ang_interpolation), &(output->ang_interpolation)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__SE3Trajectory *
bosdyn_msgs__msg__SE3Trajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SE3Trajectory * msg = (bosdyn_msgs__msg__SE3Trajectory *)allocator.allocate(sizeof(bosdyn_msgs__msg__SE3Trajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SE3Trajectory));
  bool success = bosdyn_msgs__msg__SE3Trajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SE3Trajectory__destroy(bosdyn_msgs__msg__SE3Trajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SE3Trajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SE3Trajectory__Sequence__init(bosdyn_msgs__msg__SE3Trajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SE3Trajectory * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SE3Trajectory *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SE3Trajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SE3Trajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SE3Trajectory__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SE3Trajectory__Sequence__fini(bosdyn_msgs__msg__SE3Trajectory__Sequence * array)
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
      bosdyn_msgs__msg__SE3Trajectory__fini(&array->data[i]);
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

bosdyn_msgs__msg__SE3Trajectory__Sequence *
bosdyn_msgs__msg__SE3Trajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SE3Trajectory__Sequence * array = (bosdyn_msgs__msg__SE3Trajectory__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SE3Trajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SE3Trajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SE3Trajectory__Sequence__destroy(bosdyn_msgs__msg__SE3Trajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SE3Trajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SE3Trajectory__Sequence__are_equal(const bosdyn_msgs__msg__SE3Trajectory__Sequence * lhs, const bosdyn_msgs__msg__SE3Trajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SE3Trajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SE3Trajectory__Sequence__copy(
  const bosdyn_msgs__msg__SE3Trajectory__Sequence * input,
  bosdyn_msgs__msg__SE3Trajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SE3Trajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SE3Trajectory * data =
      (bosdyn_msgs__msg__SE3Trajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SE3Trajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SE3Trajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SE3Trajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
