// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SE3TrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/se3_trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `time_since_reference`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__SE3TrajectoryPoint__init(bosdyn_msgs__msg__SE3TrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    bosdyn_msgs__msg__SE3TrajectoryPoint__fini(msg);
    return false;
  }
  // pose_is_set
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    bosdyn_msgs__msg__SE3TrajectoryPoint__fini(msg);
    return false;
  }
  // velocity_is_set
  // time_since_reference
  if (!builtin_interfaces__msg__Duration__init(&msg->time_since_reference)) {
    bosdyn_msgs__msg__SE3TrajectoryPoint__fini(msg);
    return false;
  }
  // time_since_reference_is_set
  return true;
}

void
bosdyn_msgs__msg__SE3TrajectoryPoint__fini(bosdyn_msgs__msg__SE3TrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // pose_is_set
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
  // velocity_is_set
  // time_since_reference
  builtin_interfaces__msg__Duration__fini(&msg->time_since_reference);
  // time_since_reference_is_set
}

bool
bosdyn_msgs__msg__SE3TrajectoryPoint__are_equal(const bosdyn_msgs__msg__SE3TrajectoryPoint * lhs, const bosdyn_msgs__msg__SE3TrajectoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // pose_is_set
  if (lhs->pose_is_set != rhs->pose_is_set) {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // velocity_is_set
  if (lhs->velocity_is_set != rhs->velocity_is_set) {
    return false;
  }
  // time_since_reference
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->time_since_reference), &(rhs->time_since_reference)))
  {
    return false;
  }
  // time_since_reference_is_set
  if (lhs->time_since_reference_is_set != rhs->time_since_reference_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SE3TrajectoryPoint__copy(
  const bosdyn_msgs__msg__SE3TrajectoryPoint * input,
  bosdyn_msgs__msg__SE3TrajectoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // pose_is_set
  output->pose_is_set = input->pose_is_set;
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // velocity_is_set
  output->velocity_is_set = input->velocity_is_set;
  // time_since_reference
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->time_since_reference), &(output->time_since_reference)))
  {
    return false;
  }
  // time_since_reference_is_set
  output->time_since_reference_is_set = input->time_since_reference_is_set;
  return true;
}

bosdyn_msgs__msg__SE3TrajectoryPoint *
bosdyn_msgs__msg__SE3TrajectoryPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SE3TrajectoryPoint * msg = (bosdyn_msgs__msg__SE3TrajectoryPoint *)allocator.allocate(sizeof(bosdyn_msgs__msg__SE3TrajectoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SE3TrajectoryPoint));
  bool success = bosdyn_msgs__msg__SE3TrajectoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SE3TrajectoryPoint__destroy(bosdyn_msgs__msg__SE3TrajectoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SE3TrajectoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence__init(bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SE3TrajectoryPoint * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SE3TrajectoryPoint *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SE3TrajectoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SE3TrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SE3TrajectoryPoint__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence__fini(bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence * array)
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
      bosdyn_msgs__msg__SE3TrajectoryPoint__fini(&array->data[i]);
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

bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence *
bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence * array = (bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence__destroy(bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence__are_equal(const bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence * lhs, const bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SE3TrajectoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence__copy(
  const bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence * input,
  bosdyn_msgs__msg__SE3TrajectoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SE3TrajectoryPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SE3TrajectoryPoint * data =
      (bosdyn_msgs__msg__SE3TrajectoryPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SE3TrajectoryPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SE3TrajectoryPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SE3TrajectoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
