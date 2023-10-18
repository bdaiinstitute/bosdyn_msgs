// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DataDescriptor.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/data_descriptor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `additional_indexes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bosdyn_msgs__msg__DataDescriptor__init(bosdyn_msgs__msg__DataDescriptor * msg)
{
  if (!msg) {
    return false;
  }
  // series_index
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    bosdyn_msgs__msg__DataDescriptor__fini(msg);
    return false;
  }
  // timestamp_is_set
  // additional_indexes
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->additional_indexes, 0)) {
    bosdyn_msgs__msg__DataDescriptor__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__DataDescriptor__fini(bosdyn_msgs__msg__DataDescriptor * msg)
{
  if (!msg) {
    return;
  }
  // series_index
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // timestamp_is_set
  // additional_indexes
  rosidl_runtime_c__int64__Sequence__fini(&msg->additional_indexes);
}

bool
bosdyn_msgs__msg__DataDescriptor__are_equal(const bosdyn_msgs__msg__DataDescriptor * lhs, const bosdyn_msgs__msg__DataDescriptor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // series_index
  if (lhs->series_index != rhs->series_index) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  if (lhs->timestamp_is_set != rhs->timestamp_is_set) {
    return false;
  }
  // additional_indexes
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->additional_indexes), &(rhs->additional_indexes)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DataDescriptor__copy(
  const bosdyn_msgs__msg__DataDescriptor * input,
  bosdyn_msgs__msg__DataDescriptor * output)
{
  if (!input || !output) {
    return false;
  }
  // series_index
  output->series_index = input->series_index;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  output->timestamp_is_set = input->timestamp_is_set;
  // additional_indexes
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->additional_indexes), &(output->additional_indexes)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__DataDescriptor *
bosdyn_msgs__msg__DataDescriptor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataDescriptor * msg = (bosdyn_msgs__msg__DataDescriptor *)allocator.allocate(sizeof(bosdyn_msgs__msg__DataDescriptor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DataDescriptor));
  bool success = bosdyn_msgs__msg__DataDescriptor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DataDescriptor__destroy(bosdyn_msgs__msg__DataDescriptor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DataDescriptor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DataDescriptor__Sequence__init(bosdyn_msgs__msg__DataDescriptor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataDescriptor * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DataDescriptor *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DataDescriptor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DataDescriptor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DataDescriptor__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DataDescriptor__Sequence__fini(bosdyn_msgs__msg__DataDescriptor__Sequence * array)
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
      bosdyn_msgs__msg__DataDescriptor__fini(&array->data[i]);
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

bosdyn_msgs__msg__DataDescriptor__Sequence *
bosdyn_msgs__msg__DataDescriptor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataDescriptor__Sequence * array = (bosdyn_msgs__msg__DataDescriptor__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DataDescriptor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DataDescriptor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DataDescriptor__Sequence__destroy(bosdyn_msgs__msg__DataDescriptor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DataDescriptor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DataDescriptor__Sequence__are_equal(const bosdyn_msgs__msg__DataDescriptor__Sequence * lhs, const bosdyn_msgs__msg__DataDescriptor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DataDescriptor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DataDescriptor__Sequence__copy(
  const bosdyn_msgs__msg__DataDescriptor__Sequence * input,
  bosdyn_msgs__msg__DataDescriptor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DataDescriptor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DataDescriptor * data =
      (bosdyn_msgs__msg__DataDescriptor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DataDescriptor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DataDescriptor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DataDescriptor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
