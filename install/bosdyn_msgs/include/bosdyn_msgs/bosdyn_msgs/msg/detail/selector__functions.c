// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Selector.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/selector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `children`
#include "bosdyn_msgs/msg/detail/node__functions.h"

bool
bosdyn_msgs__msg__Selector__init(bosdyn_msgs__msg__Selector * msg)
{
  if (!msg) {
    return false;
  }
  // always_restart
  // children
  if (!bosdyn_msgs__msg__Node__Sequence__init(&msg->children, 0)) {
    bosdyn_msgs__msg__Selector__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Selector__fini(bosdyn_msgs__msg__Selector * msg)
{
  if (!msg) {
    return;
  }
  // always_restart
  // children
  bosdyn_msgs__msg__Node__Sequence__fini(&msg->children);
}

bool
bosdyn_msgs__msg__Selector__are_equal(const bosdyn_msgs__msg__Selector * lhs, const bosdyn_msgs__msg__Selector * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // always_restart
  if (lhs->always_restart != rhs->always_restart) {
    return false;
  }
  // children
  if (!bosdyn_msgs__msg__Node__Sequence__are_equal(
      &(lhs->children), &(rhs->children)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Selector__copy(
  const bosdyn_msgs__msg__Selector * input,
  bosdyn_msgs__msg__Selector * output)
{
  if (!input || !output) {
    return false;
  }
  // always_restart
  output->always_restart = input->always_restart;
  // children
  if (!bosdyn_msgs__msg__Node__Sequence__copy(
      &(input->children), &(output->children)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Selector *
bosdyn_msgs__msg__Selector__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Selector * msg = (bosdyn_msgs__msg__Selector *)allocator.allocate(sizeof(bosdyn_msgs__msg__Selector), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Selector));
  bool success = bosdyn_msgs__msg__Selector__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Selector__destroy(bosdyn_msgs__msg__Selector * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Selector__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Selector__Sequence__init(bosdyn_msgs__msg__Selector__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Selector * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Selector *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Selector), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Selector__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Selector__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Selector__Sequence__fini(bosdyn_msgs__msg__Selector__Sequence * array)
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
      bosdyn_msgs__msg__Selector__fini(&array->data[i]);
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

bosdyn_msgs__msg__Selector__Sequence *
bosdyn_msgs__msg__Selector__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Selector__Sequence * array = (bosdyn_msgs__msg__Selector__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Selector__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Selector__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Selector__Sequence__destroy(bosdyn_msgs__msg__Selector__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Selector__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Selector__Sequence__are_equal(const bosdyn_msgs__msg__Selector__Sequence * lhs, const bosdyn_msgs__msg__Selector__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Selector__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Selector__Sequence__copy(
  const bosdyn_msgs__msg__Selector__Sequence * input,
  bosdyn_msgs__msg__Selector__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Selector);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Selector * data =
      (bosdyn_msgs__msg__Selector *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Selector__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Selector__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Selector__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
