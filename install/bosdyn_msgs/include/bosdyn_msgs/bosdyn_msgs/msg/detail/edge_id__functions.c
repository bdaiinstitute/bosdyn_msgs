// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/EdgeId.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/edge_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `from_waypoint`
// Member `to_waypoint`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__EdgeId__init(bosdyn_msgs__msg__EdgeId * msg)
{
  if (!msg) {
    return false;
  }
  // from_waypoint
  if (!rosidl_runtime_c__String__init(&msg->from_waypoint)) {
    bosdyn_msgs__msg__EdgeId__fini(msg);
    return false;
  }
  // to_waypoint
  if (!rosidl_runtime_c__String__init(&msg->to_waypoint)) {
    bosdyn_msgs__msg__EdgeId__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__EdgeId__fini(bosdyn_msgs__msg__EdgeId * msg)
{
  if (!msg) {
    return;
  }
  // from_waypoint
  rosidl_runtime_c__String__fini(&msg->from_waypoint);
  // to_waypoint
  rosidl_runtime_c__String__fini(&msg->to_waypoint);
}

bool
bosdyn_msgs__msg__EdgeId__are_equal(const bosdyn_msgs__msg__EdgeId * lhs, const bosdyn_msgs__msg__EdgeId * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // from_waypoint
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->from_waypoint), &(rhs->from_waypoint)))
  {
    return false;
  }
  // to_waypoint
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->to_waypoint), &(rhs->to_waypoint)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__EdgeId__copy(
  const bosdyn_msgs__msg__EdgeId * input,
  bosdyn_msgs__msg__EdgeId * output)
{
  if (!input || !output) {
    return false;
  }
  // from_waypoint
  if (!rosidl_runtime_c__String__copy(
      &(input->from_waypoint), &(output->from_waypoint)))
  {
    return false;
  }
  // to_waypoint
  if (!rosidl_runtime_c__String__copy(
      &(input->to_waypoint), &(output->to_waypoint)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__EdgeId *
bosdyn_msgs__msg__EdgeId__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EdgeId * msg = (bosdyn_msgs__msg__EdgeId *)allocator.allocate(sizeof(bosdyn_msgs__msg__EdgeId), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__EdgeId));
  bool success = bosdyn_msgs__msg__EdgeId__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__EdgeId__destroy(bosdyn_msgs__msg__EdgeId * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__EdgeId__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__EdgeId__Sequence__init(bosdyn_msgs__msg__EdgeId__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EdgeId * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__EdgeId *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__EdgeId), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__EdgeId__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__EdgeId__fini(&data[i - 1]);
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
bosdyn_msgs__msg__EdgeId__Sequence__fini(bosdyn_msgs__msg__EdgeId__Sequence * array)
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
      bosdyn_msgs__msg__EdgeId__fini(&array->data[i]);
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

bosdyn_msgs__msg__EdgeId__Sequence *
bosdyn_msgs__msg__EdgeId__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EdgeId__Sequence * array = (bosdyn_msgs__msg__EdgeId__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__EdgeId__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__EdgeId__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__EdgeId__Sequence__destroy(bosdyn_msgs__msg__EdgeId__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__EdgeId__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__EdgeId__Sequence__are_equal(const bosdyn_msgs__msg__EdgeId__Sequence * lhs, const bosdyn_msgs__msg__EdgeId__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__EdgeId__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__EdgeId__Sequence__copy(
  const bosdyn_msgs__msg__EdgeId__Sequence * input,
  bosdyn_msgs__msg__EdgeId__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__EdgeId);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__EdgeId * data =
      (bosdyn_msgs__msg__EdgeId *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__EdgeId__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__EdgeId__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__EdgeId__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
