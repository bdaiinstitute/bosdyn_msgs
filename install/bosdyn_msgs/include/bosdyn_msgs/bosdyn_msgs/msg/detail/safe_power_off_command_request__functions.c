// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SafePowerOffCommandRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/safe_power_off_command_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `unsafe_action`
#include "bosdyn_msgs/msg/detail/safe_power_off_command_request_unsafe_action__functions.h"

bool
bosdyn_msgs__msg__SafePowerOffCommandRequest__init(bosdyn_msgs__msg__SafePowerOffCommandRequest * msg)
{
  if (!msg) {
    return false;
  }
  // unsafe_action
  if (!bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction__init(&msg->unsafe_action)) {
    bosdyn_msgs__msg__SafePowerOffCommandRequest__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__SafePowerOffCommandRequest__fini(bosdyn_msgs__msg__SafePowerOffCommandRequest * msg)
{
  if (!msg) {
    return;
  }
  // unsafe_action
  bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction__fini(&msg->unsafe_action);
}

bool
bosdyn_msgs__msg__SafePowerOffCommandRequest__are_equal(const bosdyn_msgs__msg__SafePowerOffCommandRequest * lhs, const bosdyn_msgs__msg__SafePowerOffCommandRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // unsafe_action
  if (!bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction__are_equal(
      &(lhs->unsafe_action), &(rhs->unsafe_action)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SafePowerOffCommandRequest__copy(
  const bosdyn_msgs__msg__SafePowerOffCommandRequest * input,
  bosdyn_msgs__msg__SafePowerOffCommandRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // unsafe_action
  if (!bosdyn_msgs__msg__SafePowerOffCommandRequestUnsafeAction__copy(
      &(input->unsafe_action), &(output->unsafe_action)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__SafePowerOffCommandRequest *
bosdyn_msgs__msg__SafePowerOffCommandRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SafePowerOffCommandRequest * msg = (bosdyn_msgs__msg__SafePowerOffCommandRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__SafePowerOffCommandRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SafePowerOffCommandRequest));
  bool success = bosdyn_msgs__msg__SafePowerOffCommandRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SafePowerOffCommandRequest__destroy(bosdyn_msgs__msg__SafePowerOffCommandRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SafePowerOffCommandRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence__init(bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SafePowerOffCommandRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SafePowerOffCommandRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SafePowerOffCommandRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SafePowerOffCommandRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SafePowerOffCommandRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence__fini(bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence * array)
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
      bosdyn_msgs__msg__SafePowerOffCommandRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence *
bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence * array = (bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence__destroy(bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence__are_equal(const bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence * lhs, const bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SafePowerOffCommandRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence__copy(
  const bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence * input,
  bosdyn_msgs__msg__SafePowerOffCommandRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SafePowerOffCommandRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SafePowerOffCommandRequest * data =
      (bosdyn_msgs__msg__SafePowerOffCommandRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SafePowerOffCommandRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SafePowerOffCommandRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SafePowerOffCommandRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
