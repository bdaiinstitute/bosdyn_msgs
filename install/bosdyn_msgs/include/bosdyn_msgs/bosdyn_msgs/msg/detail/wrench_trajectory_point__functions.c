// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/WrenchTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/wrench_trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `wrench`
#include "geometry_msgs/msg/detail/wrench__functions.h"
// Member `time_since_reference`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__WrenchTrajectoryPoint__init(bosdyn_msgs__msg__WrenchTrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__init(&msg->wrench)) {
    bosdyn_msgs__msg__WrenchTrajectoryPoint__fini(msg);
    return false;
  }
  // wrench_is_set
  // time_since_reference
  if (!builtin_interfaces__msg__Duration__init(&msg->time_since_reference)) {
    bosdyn_msgs__msg__WrenchTrajectoryPoint__fini(msg);
    return false;
  }
  // time_since_reference_is_set
  return true;
}

void
bosdyn_msgs__msg__WrenchTrajectoryPoint__fini(bosdyn_msgs__msg__WrenchTrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // wrench
  geometry_msgs__msg__Wrench__fini(&msg->wrench);
  // wrench_is_set
  // time_since_reference
  builtin_interfaces__msg__Duration__fini(&msg->time_since_reference);
  // time_since_reference_is_set
}

bool
bosdyn_msgs__msg__WrenchTrajectoryPoint__are_equal(const bosdyn_msgs__msg__WrenchTrajectoryPoint * lhs, const bosdyn_msgs__msg__WrenchTrajectoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->wrench), &(rhs->wrench)))
  {
    return false;
  }
  // wrench_is_set
  if (lhs->wrench_is_set != rhs->wrench_is_set) {
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
bosdyn_msgs__msg__WrenchTrajectoryPoint__copy(
  const bosdyn_msgs__msg__WrenchTrajectoryPoint * input,
  bosdyn_msgs__msg__WrenchTrajectoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // wrench
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->wrench), &(output->wrench)))
  {
    return false;
  }
  // wrench_is_set
  output->wrench_is_set = input->wrench_is_set;
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

bosdyn_msgs__msg__WrenchTrajectoryPoint *
bosdyn_msgs__msg__WrenchTrajectoryPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WrenchTrajectoryPoint * msg = (bosdyn_msgs__msg__WrenchTrajectoryPoint *)allocator.allocate(sizeof(bosdyn_msgs__msg__WrenchTrajectoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__WrenchTrajectoryPoint));
  bool success = bosdyn_msgs__msg__WrenchTrajectoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__WrenchTrajectoryPoint__destroy(bosdyn_msgs__msg__WrenchTrajectoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__WrenchTrajectoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence__init(bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WrenchTrajectoryPoint * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__WrenchTrajectoryPoint *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__WrenchTrajectoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__WrenchTrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__WrenchTrajectoryPoint__fini(&data[i - 1]);
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
bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence__fini(bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence * array)
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
      bosdyn_msgs__msg__WrenchTrajectoryPoint__fini(&array->data[i]);
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

bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence *
bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence * array = (bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence__destroy(bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence__are_equal(const bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence * lhs, const bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__WrenchTrajectoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence__copy(
  const bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence * input,
  bosdyn_msgs__msg__WrenchTrajectoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__WrenchTrajectoryPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__WrenchTrajectoryPoint * data =
      (bosdyn_msgs__msg__WrenchTrajectoryPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__WrenchTrajectoryPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__WrenchTrajectoryPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__WrenchTrajectoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
