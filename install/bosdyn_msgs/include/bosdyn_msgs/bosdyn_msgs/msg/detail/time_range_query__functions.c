// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/TimeRangeQuery.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/time_range_query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `from_timestamp`
// Member `to_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__TimeRangeQuery__init(bosdyn_msgs__msg__TimeRangeQuery * msg)
{
  if (!msg) {
    return false;
  }
  // from_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->from_timestamp)) {
    bosdyn_msgs__msg__TimeRangeQuery__fini(msg);
    return false;
  }
  // from_timestamp_is_set
  // to_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->to_timestamp)) {
    bosdyn_msgs__msg__TimeRangeQuery__fini(msg);
    return false;
  }
  // to_timestamp_is_set
  return true;
}

void
bosdyn_msgs__msg__TimeRangeQuery__fini(bosdyn_msgs__msg__TimeRangeQuery * msg)
{
  if (!msg) {
    return;
  }
  // from_timestamp
  builtin_interfaces__msg__Time__fini(&msg->from_timestamp);
  // from_timestamp_is_set
  // to_timestamp
  builtin_interfaces__msg__Time__fini(&msg->to_timestamp);
  // to_timestamp_is_set
}

bool
bosdyn_msgs__msg__TimeRangeQuery__are_equal(const bosdyn_msgs__msg__TimeRangeQuery * lhs, const bosdyn_msgs__msg__TimeRangeQuery * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // from_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->from_timestamp), &(rhs->from_timestamp)))
  {
    return false;
  }
  // from_timestamp_is_set
  if (lhs->from_timestamp_is_set != rhs->from_timestamp_is_set) {
    return false;
  }
  // to_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->to_timestamp), &(rhs->to_timestamp)))
  {
    return false;
  }
  // to_timestamp_is_set
  if (lhs->to_timestamp_is_set != rhs->to_timestamp_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__TimeRangeQuery__copy(
  const bosdyn_msgs__msg__TimeRangeQuery * input,
  bosdyn_msgs__msg__TimeRangeQuery * output)
{
  if (!input || !output) {
    return false;
  }
  // from_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->from_timestamp), &(output->from_timestamp)))
  {
    return false;
  }
  // from_timestamp_is_set
  output->from_timestamp_is_set = input->from_timestamp_is_set;
  // to_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->to_timestamp), &(output->to_timestamp)))
  {
    return false;
  }
  // to_timestamp_is_set
  output->to_timestamp_is_set = input->to_timestamp_is_set;
  return true;
}

bosdyn_msgs__msg__TimeRangeQuery *
bosdyn_msgs__msg__TimeRangeQuery__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeRangeQuery * msg = (bosdyn_msgs__msg__TimeRangeQuery *)allocator.allocate(sizeof(bosdyn_msgs__msg__TimeRangeQuery), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__TimeRangeQuery));
  bool success = bosdyn_msgs__msg__TimeRangeQuery__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__TimeRangeQuery__destroy(bosdyn_msgs__msg__TimeRangeQuery * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__TimeRangeQuery__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__TimeRangeQuery__Sequence__init(bosdyn_msgs__msg__TimeRangeQuery__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeRangeQuery * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__TimeRangeQuery *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__TimeRangeQuery), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__TimeRangeQuery__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__TimeRangeQuery__fini(&data[i - 1]);
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
bosdyn_msgs__msg__TimeRangeQuery__Sequence__fini(bosdyn_msgs__msg__TimeRangeQuery__Sequence * array)
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
      bosdyn_msgs__msg__TimeRangeQuery__fini(&array->data[i]);
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

bosdyn_msgs__msg__TimeRangeQuery__Sequence *
bosdyn_msgs__msg__TimeRangeQuery__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeRangeQuery__Sequence * array = (bosdyn_msgs__msg__TimeRangeQuery__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__TimeRangeQuery__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__TimeRangeQuery__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__TimeRangeQuery__Sequence__destroy(bosdyn_msgs__msg__TimeRangeQuery__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__TimeRangeQuery__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__TimeRangeQuery__Sequence__are_equal(const bosdyn_msgs__msg__TimeRangeQuery__Sequence * lhs, const bosdyn_msgs__msg__TimeRangeQuery__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__TimeRangeQuery__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__TimeRangeQuery__Sequence__copy(
  const bosdyn_msgs__msg__TimeRangeQuery__Sequence * input,
  bosdyn_msgs__msg__TimeRangeQuery__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__TimeRangeQuery);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__TimeRangeQuery * data =
      (bosdyn_msgs__msg__TimeRangeQuery *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__TimeRangeQuery__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__TimeRangeQuery__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__TimeRangeQuery__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
