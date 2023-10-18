// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ScalarTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/scalar_trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_since_reference`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__ScalarTrajectoryPoint__init(bosdyn_msgs__msg__ScalarTrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // point
  // velocity
  // velocity_is_set
  // time_since_reference
  if (!builtin_interfaces__msg__Duration__init(&msg->time_since_reference)) {
    bosdyn_msgs__msg__ScalarTrajectoryPoint__fini(msg);
    return false;
  }
  // time_since_reference_is_set
  return true;
}

void
bosdyn_msgs__msg__ScalarTrajectoryPoint__fini(bosdyn_msgs__msg__ScalarTrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // point
  // velocity
  // velocity_is_set
  // time_since_reference
  builtin_interfaces__msg__Duration__fini(&msg->time_since_reference);
  // time_since_reference_is_set
}

bool
bosdyn_msgs__msg__ScalarTrajectoryPoint__are_equal(const bosdyn_msgs__msg__ScalarTrajectoryPoint * lhs, const bosdyn_msgs__msg__ScalarTrajectoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point
  if (lhs->point != rhs->point) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
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
bosdyn_msgs__msg__ScalarTrajectoryPoint__copy(
  const bosdyn_msgs__msg__ScalarTrajectoryPoint * input,
  bosdyn_msgs__msg__ScalarTrajectoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // point
  output->point = input->point;
  // velocity
  output->velocity = input->velocity;
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

bosdyn_msgs__msg__ScalarTrajectoryPoint *
bosdyn_msgs__msg__ScalarTrajectoryPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ScalarTrajectoryPoint * msg = (bosdyn_msgs__msg__ScalarTrajectoryPoint *)allocator.allocate(sizeof(bosdyn_msgs__msg__ScalarTrajectoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ScalarTrajectoryPoint));
  bool success = bosdyn_msgs__msg__ScalarTrajectoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ScalarTrajectoryPoint__destroy(bosdyn_msgs__msg__ScalarTrajectoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ScalarTrajectoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence__init(bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ScalarTrajectoryPoint * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ScalarTrajectoryPoint *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ScalarTrajectoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ScalarTrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ScalarTrajectoryPoint__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence__fini(bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence * array)
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
      bosdyn_msgs__msg__ScalarTrajectoryPoint__fini(&array->data[i]);
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

bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence *
bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence * array = (bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence__destroy(bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence__are_equal(const bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence * lhs, const bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ScalarTrajectoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence__copy(
  const bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence * input,
  bosdyn_msgs__msg__ScalarTrajectoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ScalarTrajectoryPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ScalarTrajectoryPoint * data =
      (bosdyn_msgs__msg__ScalarTrajectoryPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ScalarTrajectoryPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ScalarTrajectoryPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ScalarTrajectoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
