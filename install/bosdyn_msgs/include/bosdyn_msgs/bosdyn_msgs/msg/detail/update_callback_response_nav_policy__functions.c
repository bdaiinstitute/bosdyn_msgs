// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseNavPolicy.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/update_callback_response_nav_policy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `at_start`
// Member `at_end`
#include "bosdyn_msgs/msg/detail/update_callback_response_nav_policy_option__functions.h"

bool
bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__init(bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy * msg)
{
  if (!msg) {
    return false;
  }
  // at_start
  if (!bosdyn_msgs__msg__UpdateCallbackResponseNavPolicyOption__init(&msg->at_start)) {
    bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__fini(msg);
    return false;
  }
  // at_end
  if (!bosdyn_msgs__msg__UpdateCallbackResponseNavPolicyOption__init(&msg->at_end)) {
    bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__fini(bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy * msg)
{
  if (!msg) {
    return;
  }
  // at_start
  bosdyn_msgs__msg__UpdateCallbackResponseNavPolicyOption__fini(&msg->at_start);
  // at_end
  bosdyn_msgs__msg__UpdateCallbackResponseNavPolicyOption__fini(&msg->at_end);
}

bool
bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__are_equal(const bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy * lhs, const bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // at_start
  if (!bosdyn_msgs__msg__UpdateCallbackResponseNavPolicyOption__are_equal(
      &(lhs->at_start), &(rhs->at_start)))
  {
    return false;
  }
  // at_end
  if (!bosdyn_msgs__msg__UpdateCallbackResponseNavPolicyOption__are_equal(
      &(lhs->at_end), &(rhs->at_end)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__copy(
  const bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy * input,
  bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy * output)
{
  if (!input || !output) {
    return false;
  }
  // at_start
  if (!bosdyn_msgs__msg__UpdateCallbackResponseNavPolicyOption__copy(
      &(input->at_start), &(output->at_start)))
  {
    return false;
  }
  // at_end
  if (!bosdyn_msgs__msg__UpdateCallbackResponseNavPolicyOption__copy(
      &(input->at_end), &(output->at_end)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy *
bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy * msg = (bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy *)allocator.allocate(sizeof(bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy));
  bool success = bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__destroy(bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence__init(bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__fini(&data[i - 1]);
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
bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence__fini(bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence * array)
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
      bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__fini(&array->data[i]);
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

bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence *
bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence * array = (bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence__destroy(bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence__are_equal(const bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence * lhs, const bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence__copy(
  const bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence * input,
  bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy * data =
      (bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
