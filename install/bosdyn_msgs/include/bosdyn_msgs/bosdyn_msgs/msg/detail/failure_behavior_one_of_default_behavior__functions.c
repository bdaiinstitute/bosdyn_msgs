// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/FailureBehaviorOneOfDefaultBehavior.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/failure_behavior_one_of_default_behavior__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `safe_power_off`
#include "bosdyn_msgs/msg/detail/failure_behavior_safe_power_off__functions.h"
// Member `proceed_if_able`
#include "bosdyn_msgs/msg/detail/failure_behavior_proceed_if_able__functions.h"
// Member `return_to_start_and_try_again_later`
#include "bosdyn_msgs/msg/detail/failure_behavior_return_to_start_and_try_again_later__functions.h"
// Member `return_to_start_and_terminate`
#include "bosdyn_msgs/msg/detail/failure_behavior_return_to_start_and_terminate__functions.h"

bool
bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__init(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior * msg)
{
  if (!msg) {
    return false;
  }
  // safe_power_off
  if (!bosdyn_msgs__msg__FailureBehaviorSafePowerOff__init(&msg->safe_power_off)) {
    bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__fini(msg);
    return false;
  }
  // proceed_if_able
  if (!bosdyn_msgs__msg__FailureBehaviorProceedIfAble__init(&msg->proceed_if_able)) {
    bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__fini(msg);
    return false;
  }
  // return_to_start_and_try_again_later
  if (!bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTryAgainLater__init(&msg->return_to_start_and_try_again_later)) {
    bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__fini(msg);
    return false;
  }
  // return_to_start_and_terminate
  if (!bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__init(&msg->return_to_start_and_terminate)) {
    bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__fini(msg);
    return false;
  }
  // default_behavior_choice
  return true;
}

void
bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__fini(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior * msg)
{
  if (!msg) {
    return;
  }
  // safe_power_off
  bosdyn_msgs__msg__FailureBehaviorSafePowerOff__fini(&msg->safe_power_off);
  // proceed_if_able
  bosdyn_msgs__msg__FailureBehaviorProceedIfAble__fini(&msg->proceed_if_able);
  // return_to_start_and_try_again_later
  bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTryAgainLater__fini(&msg->return_to_start_and_try_again_later);
  // return_to_start_and_terminate
  bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__fini(&msg->return_to_start_and_terminate);
  // default_behavior_choice
}

bool
bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__are_equal(const bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior * lhs, const bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // safe_power_off
  if (!bosdyn_msgs__msg__FailureBehaviorSafePowerOff__are_equal(
      &(lhs->safe_power_off), &(rhs->safe_power_off)))
  {
    return false;
  }
  // proceed_if_able
  if (!bosdyn_msgs__msg__FailureBehaviorProceedIfAble__are_equal(
      &(lhs->proceed_if_able), &(rhs->proceed_if_able)))
  {
    return false;
  }
  // return_to_start_and_try_again_later
  if (!bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTryAgainLater__are_equal(
      &(lhs->return_to_start_and_try_again_later), &(rhs->return_to_start_and_try_again_later)))
  {
    return false;
  }
  // return_to_start_and_terminate
  if (!bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__are_equal(
      &(lhs->return_to_start_and_terminate), &(rhs->return_to_start_and_terminate)))
  {
    return false;
  }
  // default_behavior_choice
  if (lhs->default_behavior_choice != rhs->default_behavior_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__copy(
  const bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior * input,
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior * output)
{
  if (!input || !output) {
    return false;
  }
  // safe_power_off
  if (!bosdyn_msgs__msg__FailureBehaviorSafePowerOff__copy(
      &(input->safe_power_off), &(output->safe_power_off)))
  {
    return false;
  }
  // proceed_if_able
  if (!bosdyn_msgs__msg__FailureBehaviorProceedIfAble__copy(
      &(input->proceed_if_able), &(output->proceed_if_able)))
  {
    return false;
  }
  // return_to_start_and_try_again_later
  if (!bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTryAgainLater__copy(
      &(input->return_to_start_and_try_again_later), &(output->return_to_start_and_try_again_later)))
  {
    return false;
  }
  // return_to_start_and_terminate
  if (!bosdyn_msgs__msg__FailureBehaviorReturnToStartAndTerminate__copy(
      &(input->return_to_start_and_terminate), &(output->return_to_start_and_terminate)))
  {
    return false;
  }
  // default_behavior_choice
  output->default_behavior_choice = input->default_behavior_choice;
  return true;
}

bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior *
bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior * msg = (bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior *)allocator.allocate(sizeof(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior));
  bool success = bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__destroy(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence__init(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__fini(&data[i - 1]);
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
bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence__fini(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence * array)
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
      bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__fini(&array->data[i]);
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

bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence *
bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence * array = (bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence__destroy(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence__are_equal(const bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence * lhs, const bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence__copy(
  const bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence * input,
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior * data =
      (bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
