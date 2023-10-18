// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ForDuration.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/for_duration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `child`
// Member `timeout_child`
#include "bosdyn_msgs/msg/detail/node__functions.h"
// Member `time_remaining_name`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__ForDuration__init(bosdyn_msgs__msg__ForDuration * msg)
{
  if (!msg) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__init(&msg->duration)) {
    bosdyn_msgs__msg__ForDuration__fini(msg);
    return false;
  }
  // duration_is_set
  // child
  if (!bosdyn_msgs__msg__Node__init(&msg->child)) {
    bosdyn_msgs__msg__ForDuration__fini(msg);
    return false;
  }
  // child_is_set
  // time_remaining_name
  if (!rosidl_runtime_c__String__init(&msg->time_remaining_name)) {
    bosdyn_msgs__msg__ForDuration__fini(msg);
    return false;
  }
  // timeout_child
  if (!bosdyn_msgs__msg__Node__init(&msg->timeout_child)) {
    bosdyn_msgs__msg__ForDuration__fini(msg);
    return false;
  }
  // timeout_child_is_set
  return true;
}

void
bosdyn_msgs__msg__ForDuration__fini(bosdyn_msgs__msg__ForDuration * msg)
{
  if (!msg) {
    return;
  }
  // duration
  builtin_interfaces__msg__Duration__fini(&msg->duration);
  // duration_is_set
  // child
  bosdyn_msgs__msg__Node__fini(&msg->child);
  // child_is_set
  // time_remaining_name
  rosidl_runtime_c__String__fini(&msg->time_remaining_name);
  // timeout_child
  bosdyn_msgs__msg__Node__fini(&msg->timeout_child);
  // timeout_child_is_set
}

bool
bosdyn_msgs__msg__ForDuration__are_equal(const bosdyn_msgs__msg__ForDuration * lhs, const bosdyn_msgs__msg__ForDuration * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->duration), &(rhs->duration)))
  {
    return false;
  }
  // duration_is_set
  if (lhs->duration_is_set != rhs->duration_is_set) {
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
  // time_remaining_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->time_remaining_name), &(rhs->time_remaining_name)))
  {
    return false;
  }
  // timeout_child
  if (!bosdyn_msgs__msg__Node__are_equal(
      &(lhs->timeout_child), &(rhs->timeout_child)))
  {
    return false;
  }
  // timeout_child_is_set
  if (lhs->timeout_child_is_set != rhs->timeout_child_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ForDuration__copy(
  const bosdyn_msgs__msg__ForDuration * input,
  bosdyn_msgs__msg__ForDuration * output)
{
  if (!input || !output) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->duration), &(output->duration)))
  {
    return false;
  }
  // duration_is_set
  output->duration_is_set = input->duration_is_set;
  // child
  if (!bosdyn_msgs__msg__Node__copy(
      &(input->child), &(output->child)))
  {
    return false;
  }
  // child_is_set
  output->child_is_set = input->child_is_set;
  // time_remaining_name
  if (!rosidl_runtime_c__String__copy(
      &(input->time_remaining_name), &(output->time_remaining_name)))
  {
    return false;
  }
  // timeout_child
  if (!bosdyn_msgs__msg__Node__copy(
      &(input->timeout_child), &(output->timeout_child)))
  {
    return false;
  }
  // timeout_child_is_set
  output->timeout_child_is_set = input->timeout_child_is_set;
  return true;
}

bosdyn_msgs__msg__ForDuration *
bosdyn_msgs__msg__ForDuration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ForDuration * msg = (bosdyn_msgs__msg__ForDuration *)allocator.allocate(sizeof(bosdyn_msgs__msg__ForDuration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ForDuration));
  bool success = bosdyn_msgs__msg__ForDuration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ForDuration__destroy(bosdyn_msgs__msg__ForDuration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ForDuration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ForDuration__Sequence__init(bosdyn_msgs__msg__ForDuration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ForDuration * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ForDuration *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ForDuration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ForDuration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ForDuration__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ForDuration__Sequence__fini(bosdyn_msgs__msg__ForDuration__Sequence * array)
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
      bosdyn_msgs__msg__ForDuration__fini(&array->data[i]);
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

bosdyn_msgs__msg__ForDuration__Sequence *
bosdyn_msgs__msg__ForDuration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ForDuration__Sequence * array = (bosdyn_msgs__msg__ForDuration__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ForDuration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ForDuration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ForDuration__Sequence__destroy(bosdyn_msgs__msg__ForDuration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ForDuration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ForDuration__Sequence__are_equal(const bosdyn_msgs__msg__ForDuration__Sequence * lhs, const bosdyn_msgs__msg__ForDuration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ForDuration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ForDuration__Sequence__copy(
  const bosdyn_msgs__msg__ForDuration__Sequence * input,
  bosdyn_msgs__msg__ForDuration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ForDuration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ForDuration * data =
      (bosdyn_msgs__msg__ForDuration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ForDuration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ForDuration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ForDuration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
