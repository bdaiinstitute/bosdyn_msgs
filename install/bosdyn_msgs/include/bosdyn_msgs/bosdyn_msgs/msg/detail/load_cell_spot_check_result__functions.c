// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/LoadCellSpotCheckResult.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/load_cell_spot_check_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `error`
#include "bosdyn_msgs/msg/detail/load_cell_spot_check_result_error__functions.h"

bool
bosdyn_msgs__msg__LoadCellSpotCheckResult__init(bosdyn_msgs__msg__LoadCellSpotCheckResult * msg)
{
  if (!msg) {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__LoadCellSpotCheckResultError__init(&msg->error)) {
    bosdyn_msgs__msg__LoadCellSpotCheckResult__fini(msg);
    return false;
  }
  // zero
  // old_zero
  return true;
}

void
bosdyn_msgs__msg__LoadCellSpotCheckResult__fini(bosdyn_msgs__msg__LoadCellSpotCheckResult * msg)
{
  if (!msg) {
    return;
  }
  // error
  bosdyn_msgs__msg__LoadCellSpotCheckResultError__fini(&msg->error);
  // zero
  // old_zero
}

bool
bosdyn_msgs__msg__LoadCellSpotCheckResult__are_equal(const bosdyn_msgs__msg__LoadCellSpotCheckResult * lhs, const bosdyn_msgs__msg__LoadCellSpotCheckResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__LoadCellSpotCheckResultError__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  // zero
  if (lhs->zero != rhs->zero) {
    return false;
  }
  // old_zero
  if (lhs->old_zero != rhs->old_zero) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__LoadCellSpotCheckResult__copy(
  const bosdyn_msgs__msg__LoadCellSpotCheckResult * input,
  bosdyn_msgs__msg__LoadCellSpotCheckResult * output)
{
  if (!input || !output) {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__LoadCellSpotCheckResultError__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  // zero
  output->zero = input->zero;
  // old_zero
  output->old_zero = input->old_zero;
  return true;
}

bosdyn_msgs__msg__LoadCellSpotCheckResult *
bosdyn_msgs__msg__LoadCellSpotCheckResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LoadCellSpotCheckResult * msg = (bosdyn_msgs__msg__LoadCellSpotCheckResult *)allocator.allocate(sizeof(bosdyn_msgs__msg__LoadCellSpotCheckResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__LoadCellSpotCheckResult));
  bool success = bosdyn_msgs__msg__LoadCellSpotCheckResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__LoadCellSpotCheckResult__destroy(bosdyn_msgs__msg__LoadCellSpotCheckResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__LoadCellSpotCheckResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence__init(bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LoadCellSpotCheckResult * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__LoadCellSpotCheckResult *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__LoadCellSpotCheckResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__LoadCellSpotCheckResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__LoadCellSpotCheckResult__fini(&data[i - 1]);
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
bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence__fini(bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence * array)
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
      bosdyn_msgs__msg__LoadCellSpotCheckResult__fini(&array->data[i]);
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

bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence *
bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence * array = (bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence__destroy(bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence__are_equal(const bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence * lhs, const bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__LoadCellSpotCheckResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence__copy(
  const bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence * input,
  bosdyn_msgs__msg__LoadCellSpotCheckResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__LoadCellSpotCheckResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__LoadCellSpotCheckResult * data =
      (bosdyn_msgs__msg__LoadCellSpotCheckResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__LoadCellSpotCheckResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__LoadCellSpotCheckResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__LoadCellSpotCheckResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
