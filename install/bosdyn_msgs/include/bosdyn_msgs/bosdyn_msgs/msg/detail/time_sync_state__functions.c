// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/TimeSyncState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/time_sync_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `best_estimate`
#include "bosdyn_msgs/msg/detail/time_sync_estimate__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/time_sync_state_status__functions.h"
// Member `measurement_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__TimeSyncState__init(bosdyn_msgs__msg__TimeSyncState * msg)
{
  if (!msg) {
    return false;
  }
  // best_estimate
  if (!bosdyn_msgs__msg__TimeSyncEstimate__init(&msg->best_estimate)) {
    bosdyn_msgs__msg__TimeSyncState__fini(msg);
    return false;
  }
  // best_estimate_is_set
  // status
  if (!bosdyn_msgs__msg__TimeSyncStateStatus__init(&msg->status)) {
    bosdyn_msgs__msg__TimeSyncState__fini(msg);
    return false;
  }
  // measurement_time
  if (!builtin_interfaces__msg__Time__init(&msg->measurement_time)) {
    bosdyn_msgs__msg__TimeSyncState__fini(msg);
    return false;
  }
  // measurement_time_is_set
  return true;
}

void
bosdyn_msgs__msg__TimeSyncState__fini(bosdyn_msgs__msg__TimeSyncState * msg)
{
  if (!msg) {
    return;
  }
  // best_estimate
  bosdyn_msgs__msg__TimeSyncEstimate__fini(&msg->best_estimate);
  // best_estimate_is_set
  // status
  bosdyn_msgs__msg__TimeSyncStateStatus__fini(&msg->status);
  // measurement_time
  builtin_interfaces__msg__Time__fini(&msg->measurement_time);
  // measurement_time_is_set
}

bool
bosdyn_msgs__msg__TimeSyncState__are_equal(const bosdyn_msgs__msg__TimeSyncState * lhs, const bosdyn_msgs__msg__TimeSyncState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // best_estimate
  if (!bosdyn_msgs__msg__TimeSyncEstimate__are_equal(
      &(lhs->best_estimate), &(rhs->best_estimate)))
  {
    return false;
  }
  // best_estimate_is_set
  if (lhs->best_estimate_is_set != rhs->best_estimate_is_set) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__TimeSyncStateStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // measurement_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->measurement_time), &(rhs->measurement_time)))
  {
    return false;
  }
  // measurement_time_is_set
  if (lhs->measurement_time_is_set != rhs->measurement_time_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__TimeSyncState__copy(
  const bosdyn_msgs__msg__TimeSyncState * input,
  bosdyn_msgs__msg__TimeSyncState * output)
{
  if (!input || !output) {
    return false;
  }
  // best_estimate
  if (!bosdyn_msgs__msg__TimeSyncEstimate__copy(
      &(input->best_estimate), &(output->best_estimate)))
  {
    return false;
  }
  // best_estimate_is_set
  output->best_estimate_is_set = input->best_estimate_is_set;
  // status
  if (!bosdyn_msgs__msg__TimeSyncStateStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // measurement_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->measurement_time), &(output->measurement_time)))
  {
    return false;
  }
  // measurement_time_is_set
  output->measurement_time_is_set = input->measurement_time_is_set;
  return true;
}

bosdyn_msgs__msg__TimeSyncState *
bosdyn_msgs__msg__TimeSyncState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeSyncState * msg = (bosdyn_msgs__msg__TimeSyncState *)allocator.allocate(sizeof(bosdyn_msgs__msg__TimeSyncState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__TimeSyncState));
  bool success = bosdyn_msgs__msg__TimeSyncState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__TimeSyncState__destroy(bosdyn_msgs__msg__TimeSyncState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__TimeSyncState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__TimeSyncState__Sequence__init(bosdyn_msgs__msg__TimeSyncState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeSyncState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__TimeSyncState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__TimeSyncState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__TimeSyncState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__TimeSyncState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__TimeSyncState__Sequence__fini(bosdyn_msgs__msg__TimeSyncState__Sequence * array)
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
      bosdyn_msgs__msg__TimeSyncState__fini(&array->data[i]);
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

bosdyn_msgs__msg__TimeSyncState__Sequence *
bosdyn_msgs__msg__TimeSyncState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeSyncState__Sequence * array = (bosdyn_msgs__msg__TimeSyncState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__TimeSyncState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__TimeSyncState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__TimeSyncState__Sequence__destroy(bosdyn_msgs__msg__TimeSyncState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__TimeSyncState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__TimeSyncState__Sequence__are_equal(const bosdyn_msgs__msg__TimeSyncState__Sequence * lhs, const bosdyn_msgs__msg__TimeSyncState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__TimeSyncState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__TimeSyncState__Sequence__copy(
  const bosdyn_msgs__msg__TimeSyncState__Sequence * input,
  bosdyn_msgs__msg__TimeSyncState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__TimeSyncState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__TimeSyncState * data =
      (bosdyn_msgs__msg__TimeSyncState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__TimeSyncState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__TimeSyncState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__TimeSyncState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
