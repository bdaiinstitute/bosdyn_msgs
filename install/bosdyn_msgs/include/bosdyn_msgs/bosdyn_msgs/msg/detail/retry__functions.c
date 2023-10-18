// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Retry.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/retry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `child`
#include "bosdyn_msgs/msg/detail/node__functions.h"
// Member `attempt_counter_state_name`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__Retry__init(bosdyn_msgs__msg__Retry * msg)
{
  if (!msg) {
    return false;
  }
  // max_attempts
  // child
  if (!bosdyn_msgs__msg__Node__init(&msg->child)) {
    bosdyn_msgs__msg__Retry__fini(msg);
    return false;
  }
  // child_is_set
  // attempt_counter_state_name
  if (!rosidl_runtime_c__String__init(&msg->attempt_counter_state_name)) {
    bosdyn_msgs__msg__Retry__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Retry__fini(bosdyn_msgs__msg__Retry * msg)
{
  if (!msg) {
    return;
  }
  // max_attempts
  // child
  bosdyn_msgs__msg__Node__fini(&msg->child);
  // child_is_set
  // attempt_counter_state_name
  rosidl_runtime_c__String__fini(&msg->attempt_counter_state_name);
}

bool
bosdyn_msgs__msg__Retry__are_equal(const bosdyn_msgs__msg__Retry * lhs, const bosdyn_msgs__msg__Retry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // max_attempts
  if (lhs->max_attempts != rhs->max_attempts) {
    return false;
  }
  // child
  if (!bosdyn_msgs__msg__Node__are_equal(
      &(lhs->child), &(rhs->child)))
  {
    return false;
  }
  // child_is_set
  if (lhs->child_is_set != rhs->child_is_set) {
    return false;
  }
  // attempt_counter_state_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->attempt_counter_state_name), &(rhs->attempt_counter_state_name)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Retry__copy(
  const bosdyn_msgs__msg__Retry * input,
  bosdyn_msgs__msg__Retry * output)
{
  if (!input || !output) {
    return false;
  }
  // max_attempts
  output->max_attempts = input->max_attempts;
  // child
  if (!bosdyn_msgs__msg__Node__copy(
      &(input->child), &(output->child)))
  {
    return false;
  }
  // child_is_set
  output->child_is_set = input->child_is_set;
  // attempt_counter_state_name
  if (!rosidl_runtime_c__String__copy(
      &(input->attempt_counter_state_name), &(output->attempt_counter_state_name)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Retry *
bosdyn_msgs__msg__Retry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Retry * msg = (bosdyn_msgs__msg__Retry *)allocator.allocate(sizeof(bosdyn_msgs__msg__Retry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Retry));
  bool success = bosdyn_msgs__msg__Retry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Retry__destroy(bosdyn_msgs__msg__Retry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Retry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Retry__Sequence__init(bosdyn_msgs__msg__Retry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Retry * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Retry *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Retry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Retry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Retry__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Retry__Sequence__fini(bosdyn_msgs__msg__Retry__Sequence * array)
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
      bosdyn_msgs__msg__Retry__fini(&array->data[i]);
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

bosdyn_msgs__msg__Retry__Sequence *
bosdyn_msgs__msg__Retry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Retry__Sequence * array = (bosdyn_msgs__msg__Retry__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Retry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Retry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Retry__Sequence__destroy(bosdyn_msgs__msg__Retry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Retry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Retry__Sequence__are_equal(const bosdyn_msgs__msg__Retry__Sequence * lhs, const bosdyn_msgs__msg__Retry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Retry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Retry__Sequence__copy(
  const bosdyn_msgs__msg__Retry__Sequence * input,
  bosdyn_msgs__msg__Retry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Retry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Retry * data =
      (bosdyn_msgs__msg__Retry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Retry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Retry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Retry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
