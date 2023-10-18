// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/FailureBehaviorReturnToStartAndTerminate.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/failure_behavior_return_to_start_and_terminate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__init(bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__fini(bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__are_equal(const bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate * lhs, const bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__copy(
  const bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate * input,
  bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate *
bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate * msg = (bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate *)allocator.allocate(sizeof(bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate));
  bool success = bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__destroy(bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence__init(bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__fini(&data[i - 1]);
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
bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence__fini(bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence * array)
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
      bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__fini(&array->data[i]);
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

bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence *
bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence * array = (bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence__destroy(bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence__are_equal(const bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence * lhs, const bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence__copy(
  const bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence * input,
  bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate * data =
      (bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
