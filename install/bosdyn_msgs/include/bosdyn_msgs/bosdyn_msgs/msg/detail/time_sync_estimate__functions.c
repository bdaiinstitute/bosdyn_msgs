// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/TimeSyncEstimate.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/time_sync_estimate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `round_trip_time`
// Member `clock_skew`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__TimeSyncEstimate__init(bosdyn_msgs__msg__TimeSyncEstimate * msg)
{
  if (!msg) {
    return false;
  }
  // round_trip_time
  if (!builtin_interfaces__msg__Duration__init(&msg->round_trip_time)) {
    bosdyn_msgs__msg__TimeSyncEstimate__fini(msg);
    return false;
  }
  // round_trip_time_is_set
  // clock_skew
  if (!builtin_interfaces__msg__Duration__init(&msg->clock_skew)) {
    bosdyn_msgs__msg__TimeSyncEstimate__fini(msg);
    return false;
  }
  // clock_skew_is_set
  return true;
}

void
bosdyn_msgs__msg__TimeSyncEstimate__fini(bosdyn_msgs__msg__TimeSyncEstimate * msg)
{
  if (!msg) {
    return;
  }
  // round_trip_time
  builtin_interfaces__msg__Duration__fini(&msg->round_trip_time);
  // round_trip_time_is_set
  // clock_skew
  builtin_interfaces__msg__Duration__fini(&msg->clock_skew);
  // clock_skew_is_set
}

bool
bosdyn_msgs__msg__TimeSyncEstimate__are_equal(const bosdyn_msgs__msg__TimeSyncEstimate * lhs, const bosdyn_msgs__msg__TimeSyncEstimate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // round_trip_time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->round_trip_time), &(rhs->round_trip_time)))
  {
    return false;
  }
  // round_trip_time_is_set
  if (lhs->round_trip_time_is_set != rhs->round_trip_time_is_set) {
    return false;
  }
  // clock_skew
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->clock_skew), &(rhs->clock_skew)))
  {
    return false;
  }
  // clock_skew_is_set
  if (lhs->clock_skew_is_set != rhs->clock_skew_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__TimeSyncEstimate__copy(
  const bosdyn_msgs__msg__TimeSyncEstimate * input,
  bosdyn_msgs__msg__TimeSyncEstimate * output)
{
  if (!input || !output) {
    return false;
  }
  // round_trip_time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->round_trip_time), &(output->round_trip_time)))
  {
    return false;
  }
  // round_trip_time_is_set
  output->round_trip_time_is_set = input->round_trip_time_is_set;
  // clock_skew
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->clock_skew), &(output->clock_skew)))
  {
    return false;
  }
  // clock_skew_is_set
  output->clock_skew_is_set = input->clock_skew_is_set;
  return true;
}

bosdyn_msgs__msg__TimeSyncEstimate *
bosdyn_msgs__msg__TimeSyncEstimate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeSyncEstimate * msg = (bosdyn_msgs__msg__TimeSyncEstimate *)allocator.allocate(sizeof(bosdyn_msgs__msg__TimeSyncEstimate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__TimeSyncEstimate));
  bool success = bosdyn_msgs__msg__TimeSyncEstimate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__TimeSyncEstimate__destroy(bosdyn_msgs__msg__TimeSyncEstimate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__TimeSyncEstimate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__TimeSyncEstimate__Sequence__init(bosdyn_msgs__msg__TimeSyncEstimate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeSyncEstimate * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__TimeSyncEstimate *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__TimeSyncEstimate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__TimeSyncEstimate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__TimeSyncEstimate__fini(&data[i - 1]);
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
bosdyn_msgs__msg__TimeSyncEstimate__Sequence__fini(bosdyn_msgs__msg__TimeSyncEstimate__Sequence * array)
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
      bosdyn_msgs__msg__TimeSyncEstimate__fini(&array->data[i]);
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

bosdyn_msgs__msg__TimeSyncEstimate__Sequence *
bosdyn_msgs__msg__TimeSyncEstimate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeSyncEstimate__Sequence * array = (bosdyn_msgs__msg__TimeSyncEstimate__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__TimeSyncEstimate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__TimeSyncEstimate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__TimeSyncEstimate__Sequence__destroy(bosdyn_msgs__msg__TimeSyncEstimate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__TimeSyncEstimate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__TimeSyncEstimate__Sequence__are_equal(const bosdyn_msgs__msg__TimeSyncEstimate__Sequence * lhs, const bosdyn_msgs__msg__TimeSyncEstimate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__TimeSyncEstimate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__TimeSyncEstimate__Sequence__copy(
  const bosdyn_msgs__msg__TimeSyncEstimate__Sequence * input,
  bosdyn_msgs__msg__TimeSyncEstimate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__TimeSyncEstimate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__TimeSyncEstimate * data =
      (bosdyn_msgs__msg__TimeSyncEstimate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__TimeSyncEstimate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__TimeSyncEstimate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__TimeSyncEstimate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
