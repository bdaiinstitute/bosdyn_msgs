// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ManipulatorStateCarryState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/manipulator_state_carry_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__ManipulatorStateCarryState__init(bosdyn_msgs__msg__ManipulatorStateCarryState * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
bosdyn_msgs__msg__ManipulatorStateCarryState__fini(bosdyn_msgs__msg__ManipulatorStateCarryState * msg)
{
  if (!msg) {
    return;
  }
  // value
}

bool
bosdyn_msgs__msg__ManipulatorStateCarryState__are_equal(const bosdyn_msgs__msg__ManipulatorStateCarryState * lhs, const bosdyn_msgs__msg__ManipulatorStateCarryState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ManipulatorStateCarryState__copy(
  const bosdyn_msgs__msg__ManipulatorStateCarryState * input,
  bosdyn_msgs__msg__ManipulatorStateCarryState * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

bosdyn_msgs__msg__ManipulatorStateCarryState *
bosdyn_msgs__msg__ManipulatorStateCarryState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ManipulatorStateCarryState * msg = (bosdyn_msgs__msg__ManipulatorStateCarryState *)allocator.allocate(sizeof(bosdyn_msgs__msg__ManipulatorStateCarryState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ManipulatorStateCarryState));
  bool success = bosdyn_msgs__msg__ManipulatorStateCarryState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ManipulatorStateCarryState__destroy(bosdyn_msgs__msg__ManipulatorStateCarryState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ManipulatorStateCarryState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence__init(bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ManipulatorStateCarryState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ManipulatorStateCarryState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ManipulatorStateCarryState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ManipulatorStateCarryState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ManipulatorStateCarryState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence__fini(bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence * array)
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
      bosdyn_msgs__msg__ManipulatorStateCarryState__fini(&array->data[i]);
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

bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence *
bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence * array = (bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence__destroy(bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence__are_equal(const bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence * lhs, const bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ManipulatorStateCarryState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence__copy(
  const bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence * input,
  bosdyn_msgs__msg__ManipulatorStateCarryState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ManipulatorStateCarryState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ManipulatorStateCarryState * data =
      (bosdyn_msgs__msg__ManipulatorStateCarryState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ManipulatorStateCarryState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ManipulatorStateCarryState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ManipulatorStateCarryState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
