// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/FailureBehavior.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/failure_behavior__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `prompt_duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `default_behavior`
#include "bosdyn_msgs/msg/detail/failure_behavior_one_of_default_behavior__functions.h"

bool
bosdyn_msgs__msg__FailureBehavior__init(bosdyn_msgs__msg__FailureBehavior * msg)
{
  if (!msg) {
    return false;
  }
  // retry_count
  // prompt_duration
  if (!builtin_interfaces__msg__Duration__init(&msg->prompt_duration)) {
    bosdyn_msgs__msg__FailureBehavior__fini(msg);
    return false;
  }
  // prompt_duration_is_set
  // default_behavior
  if (!bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__init(&msg->default_behavior)) {
    bosdyn_msgs__msg__FailureBehavior__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__FailureBehavior__fini(bosdyn_msgs__msg__FailureBehavior * msg)
{
  if (!msg) {
    return;
  }
  // retry_count
  // prompt_duration
  builtin_interfaces__msg__Duration__fini(&msg->prompt_duration);
  // prompt_duration_is_set
  // default_behavior
  bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__fini(&msg->default_behavior);
}

bool
bosdyn_msgs__msg__FailureBehavior__are_equal(const bosdyn_msgs__msg__FailureBehavior * lhs, const bosdyn_msgs__msg__FailureBehavior * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // retry_count
  if (lhs->retry_count != rhs->retry_count) {
    return false;
  }
  // prompt_duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->prompt_duration), &(rhs->prompt_duration)))
  {
    return false;
  }
  // prompt_duration_is_set
  if (lhs->prompt_duration_is_set != rhs->prompt_duration_is_set) {
    return false;
  }
  // default_behavior
  if (!bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__are_equal(
      &(lhs->default_behavior), &(rhs->default_behavior)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__FailureBehavior__copy(
  const bosdyn_msgs__msg__FailureBehavior * input,
  bosdyn_msgs__msg__FailureBehavior * output)
{
  if (!input || !output) {
    return false;
  }
  // retry_count
  output->retry_count = input->retry_count;
  // prompt_duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->prompt_duration), &(output->prompt_duration)))
  {
    return false;
  }
  // prompt_duration_is_set
  output->prompt_duration_is_set = input->prompt_duration_is_set;
  // default_behavior
  if (!bosdyn_msgs__msg__FailureBehaviorOneOfDefaultBehavior__copy(
      &(input->default_behavior), &(output->default_behavior)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__FailureBehavior *
bosdyn_msgs__msg__FailureBehavior__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FailureBehavior * msg = (bosdyn_msgs__msg__FailureBehavior *)allocator.allocate(sizeof(bosdyn_msgs__msg__FailureBehavior), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__FailureBehavior));
  bool success = bosdyn_msgs__msg__FailureBehavior__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__FailureBehavior__destroy(bosdyn_msgs__msg__FailureBehavior * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__FailureBehavior__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__FailureBehavior__Sequence__init(bosdyn_msgs__msg__FailureBehavior__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FailureBehavior * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__FailureBehavior *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__FailureBehavior), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__FailureBehavior__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__FailureBehavior__fini(&data[i - 1]);
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
bosdyn_msgs__msg__FailureBehavior__Sequence__fini(bosdyn_msgs__msg__FailureBehavior__Sequence * array)
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
      bosdyn_msgs__msg__FailureBehavior__fini(&array->data[i]);
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

bosdyn_msgs__msg__FailureBehavior__Sequence *
bosdyn_msgs__msg__FailureBehavior__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FailureBehavior__Sequence * array = (bosdyn_msgs__msg__FailureBehavior__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__FailureBehavior__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__FailureBehavior__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__FailureBehavior__Sequence__destroy(bosdyn_msgs__msg__FailureBehavior__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__FailureBehavior__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__FailureBehavior__Sequence__are_equal(const bosdyn_msgs__msg__FailureBehavior__Sequence * lhs, const bosdyn_msgs__msg__FailureBehavior__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__FailureBehavior__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__FailureBehavior__Sequence__copy(
  const bosdyn_msgs__msg__FailureBehavior__Sequence * input,
  bosdyn_msgs__msg__FailureBehavior__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__FailureBehavior);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__FailureBehavior * data =
      (bosdyn_msgs__msg__FailureBehavior *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__FailureBehavior__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__FailureBehavior__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__FailureBehavior__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
