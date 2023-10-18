// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ActionAfter.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/action_after__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `action`
#include "bosdyn_msgs/msg/detail/action_after_one_of_action__functions.h"
// Member `after`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__ActionAfter__init(bosdyn_msgs__msg__ActionAfter * msg)
{
  if (!msg) {
    return false;
  }
  // action
  if (!bosdyn_msgs__msg__ActionAfterOneOfAction__init(&msg->action)) {
    bosdyn_msgs__msg__ActionAfter__fini(msg);
    return false;
  }
  // after
  if (!builtin_interfaces__msg__Duration__init(&msg->after)) {
    bosdyn_msgs__msg__ActionAfter__fini(msg);
    return false;
  }
  // after_is_set
  return true;
}

void
bosdyn_msgs__msg__ActionAfter__fini(bosdyn_msgs__msg__ActionAfter * msg)
{
  if (!msg) {
    return;
  }
  // action
  bosdyn_msgs__msg__ActionAfterOneOfAction__fini(&msg->action);
  // after
  builtin_interfaces__msg__Duration__fini(&msg->after);
  // after_is_set
}

bool
bosdyn_msgs__msg__ActionAfter__are_equal(const bosdyn_msgs__msg__ActionAfter * lhs, const bosdyn_msgs__msg__ActionAfter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (!bosdyn_msgs__msg__ActionAfterOneOfAction__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // after
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->after), &(rhs->after)))
  {
    return false;
  }
  // after_is_set
  if (lhs->after_is_set != rhs->after_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionAfter__copy(
  const bosdyn_msgs__msg__ActionAfter * input,
  bosdyn_msgs__msg__ActionAfter * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  if (!bosdyn_msgs__msg__ActionAfterOneOfAction__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // after
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->after), &(output->after)))
  {
    return false;
  }
  // after_is_set
  output->after_is_set = input->after_is_set;
  return true;
}

bosdyn_msgs__msg__ActionAfter *
bosdyn_msgs__msg__ActionAfter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionAfter * msg = (bosdyn_msgs__msg__ActionAfter *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionAfter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ActionAfter));
  bool success = bosdyn_msgs__msg__ActionAfter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ActionAfter__destroy(bosdyn_msgs__msg__ActionAfter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ActionAfter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ActionAfter__Sequence__init(bosdyn_msgs__msg__ActionAfter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionAfter * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ActionAfter *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ActionAfter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ActionAfter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ActionAfter__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ActionAfter__Sequence__fini(bosdyn_msgs__msg__ActionAfter__Sequence * array)
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
      bosdyn_msgs__msg__ActionAfter__fini(&array->data[i]);
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

bosdyn_msgs__msg__ActionAfter__Sequence *
bosdyn_msgs__msg__ActionAfter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionAfter__Sequence * array = (bosdyn_msgs__msg__ActionAfter__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionAfter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ActionAfter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ActionAfter__Sequence__destroy(bosdyn_msgs__msg__ActionAfter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ActionAfter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ActionAfter__Sequence__are_equal(const bosdyn_msgs__msg__ActionAfter__Sequence * lhs, const bosdyn_msgs__msg__ActionAfter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ActionAfter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionAfter__Sequence__copy(
  const bosdyn_msgs__msg__ActionAfter__Sequence * input,
  bosdyn_msgs__msg__ActionAfter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ActionAfter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ActionAfter * data =
      (bosdyn_msgs__msg__ActionAfter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ActionAfter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ActionAfter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ActionAfter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
