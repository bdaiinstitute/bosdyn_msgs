// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/TimeRange.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/time_range__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start`
// Member `end`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__TimeRange__init(bosdyn_msgs__msg__TimeRange * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!builtin_interfaces__msg__Time__init(&msg->start)) {
    bosdyn_msgs__msg__TimeRange__fini(msg);
    return false;
  }
  // start_is_set
  // end
  if (!builtin_interfaces__msg__Time__init(&msg->end)) {
    bosdyn_msgs__msg__TimeRange__fini(msg);
    return false;
  }
  // end_is_set
  return true;
}

void
bosdyn_msgs__msg__TimeRange__fini(bosdyn_msgs__msg__TimeRange * msg)
{
  if (!msg) {
    return;
  }
  // start
  builtin_interfaces__msg__Time__fini(&msg->start);
  // start_is_set
  // end
  builtin_interfaces__msg__Time__fini(&msg->end);
  // end_is_set
}

bool
bosdyn_msgs__msg__TimeRange__are_equal(const bosdyn_msgs__msg__TimeRange * lhs, const bosdyn_msgs__msg__TimeRange * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // start_is_set
  if (lhs->start_is_set != rhs->start_is_set) {
    return false;
  }
  // end
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->end), &(rhs->end)))
  {
    return false;
  }
  // end_is_set
  if (lhs->end_is_set != rhs->end_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__TimeRange__copy(
  const bosdyn_msgs__msg__TimeRange * input,
  bosdyn_msgs__msg__TimeRange * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // start_is_set
  output->start_is_set = input->start_is_set;
  // end
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end), &(output->end)))
  {
    return false;
  }
  // end_is_set
  output->end_is_set = input->end_is_set;
  return true;
}

bosdyn_msgs__msg__TimeRange *
bosdyn_msgs__msg__TimeRange__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeRange * msg = (bosdyn_msgs__msg__TimeRange *)allocator.allocate(sizeof(bosdyn_msgs__msg__TimeRange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__TimeRange));
  bool success = bosdyn_msgs__msg__TimeRange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__TimeRange__destroy(bosdyn_msgs__msg__TimeRange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__TimeRange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__TimeRange__Sequence__init(bosdyn_msgs__msg__TimeRange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeRange * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__TimeRange *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__TimeRange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__TimeRange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__TimeRange__fini(&data[i - 1]);
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
bosdyn_msgs__msg__TimeRange__Sequence__fini(bosdyn_msgs__msg__TimeRange__Sequence * array)
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
      bosdyn_msgs__msg__TimeRange__fini(&array->data[i]);
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

bosdyn_msgs__msg__TimeRange__Sequence *
bosdyn_msgs__msg__TimeRange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeRange__Sequence * array = (bosdyn_msgs__msg__TimeRange__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__TimeRange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__TimeRange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__TimeRange__Sequence__destroy(bosdyn_msgs__msg__TimeRange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__TimeRange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__TimeRange__Sequence__are_equal(const bosdyn_msgs__msg__TimeRange__Sequence * lhs, const bosdyn_msgs__msg__TimeRange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__TimeRange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__TimeRange__Sequence__copy(
  const bosdyn_msgs__msg__TimeRange__Sequence * input,
  bosdyn_msgs__msg__TimeRange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__TimeRange);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__TimeRange * data =
      (bosdyn_msgs__msg__TimeRange *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__TimeRange__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__TimeRange__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__TimeRange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
