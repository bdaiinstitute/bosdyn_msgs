// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/WrenchTrajectory.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/wrench_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `points`
#include "bosdyn_msgs/msg/detail/wrench_trajectory_point__functions.h"
// Member `reference_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__WrenchTrajectory__init(bosdyn_msgs__msg__WrenchTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // points
  if (!bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence__init(&msg->points, 0)) {
    bosdyn_msgs__msg__WrenchTrajectory__fini(msg);
    return false;
  }
  // reference_time
  if (!builtin_interfaces__msg__Time__init(&msg->reference_time)) {
    bosdyn_msgs__msg__WrenchTrajectory__fini(msg);
    return false;
  }
  // reference_time_is_set
  return true;
}

void
bosdyn_msgs__msg__WrenchTrajectory__fini(bosdyn_msgs__msg__WrenchTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // points
  bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence__fini(&msg->points);
  // reference_time
  builtin_interfaces__msg__Time__fini(&msg->reference_time);
  // reference_time_is_set
}

bool
bosdyn_msgs__msg__WrenchTrajectory__are_equal(const bosdyn_msgs__msg__WrenchTrajectory * lhs, const bosdyn_msgs__msg__WrenchTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // points
  if (!bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence__are_equal(
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
  return true;
}

bool
bosdyn_msgs__msg__WrenchTrajectory__copy(
  const bosdyn_msgs__msg__WrenchTrajectory * input,
  bosdyn_msgs__msg__WrenchTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // points
  if (!bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence__copy(
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
  return true;
}

bosdyn_msgs__msg__WrenchTrajectory *
bosdyn_msgs__msg__WrenchTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WrenchTrajectory * msg = (bosdyn_msgs__msg__WrenchTrajectory *)allocator.allocate(sizeof(bosdyn_msgs__msg__WrenchTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__WrenchTrajectory));
  bool success = bosdyn_msgs__msg__WrenchTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__WrenchTrajectory__destroy(bosdyn_msgs__msg__WrenchTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__WrenchTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__WrenchTrajectory__Sequence__init(bosdyn_msgs__msg__WrenchTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WrenchTrajectory * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__WrenchTrajectory *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__WrenchTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__WrenchTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__WrenchTrajectory__fini(&data[i - 1]);
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
bosdyn_msgs__msg__WrenchTrajectory__Sequence__fini(bosdyn_msgs__msg__WrenchTrajectory__Sequence * array)
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
      bosdyn_msgs__msg__WrenchTrajectory__fini(&array->data[i]);
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

bosdyn_msgs__msg__WrenchTrajectory__Sequence *
bosdyn_msgs__msg__WrenchTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WrenchTrajectory__Sequence * array = (bosdyn_msgs__msg__WrenchTrajectory__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__WrenchTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__WrenchTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__WrenchTrajectory__Sequence__destroy(bosdyn_msgs__msg__WrenchTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__WrenchTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__WrenchTrajectory__Sequence__are_equal(const bosdyn_msgs__msg__WrenchTrajectory__Sequence * lhs, const bosdyn_msgs__msg__WrenchTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__WrenchTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__WrenchTrajectory__Sequence__copy(
  const bosdyn_msgs__msg__WrenchTrajectory__Sequence * input,
  bosdyn_msgs__msg__WrenchTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__WrenchTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__WrenchTrajectory * data =
      (bosdyn_msgs__msg__WrenchTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__WrenchTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__WrenchTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__WrenchTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
