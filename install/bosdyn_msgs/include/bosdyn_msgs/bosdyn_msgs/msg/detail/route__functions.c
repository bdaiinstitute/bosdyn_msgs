// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Route.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/route__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoint_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `edge_id`
#include "bosdyn_msgs/msg/detail/edge_id__functions.h"

bool
bosdyn_msgs__msg__Route__init(bosdyn_msgs__msg__Route * msg)
{
  if (!msg) {
    return false;
  }
  // waypoint_id
  if (!rosidl_runtime_c__String__Sequence__init(&msg->waypoint_id, 0)) {
    bosdyn_msgs__msg__Route__fini(msg);
    return false;
  }
  // edge_id
  if (!bosdyn_msgs__msg__EdgeId__Sequence__init(&msg->edge_id, 0)) {
    bosdyn_msgs__msg__Route__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Route__fini(bosdyn_msgs__msg__Route * msg)
{
  if (!msg) {
    return;
  }
  // waypoint_id
  rosidl_runtime_c__String__Sequence__fini(&msg->waypoint_id);
  // edge_id
  bosdyn_msgs__msg__EdgeId__Sequence__fini(&msg->edge_id);
}

bool
bosdyn_msgs__msg__Route__are_equal(const bosdyn_msgs__msg__Route * lhs, const bosdyn_msgs__msg__Route * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoint_id
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->waypoint_id), &(rhs->waypoint_id)))
  {
    return false;
  }
  // edge_id
  if (!bosdyn_msgs__msg__EdgeId__Sequence__are_equal(
      &(lhs->edge_id), &(rhs->edge_id)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Route__copy(
  const bosdyn_msgs__msg__Route * input,
  bosdyn_msgs__msg__Route * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoint_id
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->waypoint_id), &(output->waypoint_id)))
  {
    return false;
  }
  // edge_id
  if (!bosdyn_msgs__msg__EdgeId__Sequence__copy(
      &(input->edge_id), &(output->edge_id)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Route *
bosdyn_msgs__msg__Route__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Route * msg = (bosdyn_msgs__msg__Route *)allocator.allocate(sizeof(bosdyn_msgs__msg__Route), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Route));
  bool success = bosdyn_msgs__msg__Route__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Route__destroy(bosdyn_msgs__msg__Route * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Route__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Route__Sequence__init(bosdyn_msgs__msg__Route__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Route * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Route *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Route), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Route__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Route__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Route__Sequence__fini(bosdyn_msgs__msg__Route__Sequence * array)
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
      bosdyn_msgs__msg__Route__fini(&array->data[i]);
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

bosdyn_msgs__msg__Route__Sequence *
bosdyn_msgs__msg__Route__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Route__Sequence * array = (bosdyn_msgs__msg__Route__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Route__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Route__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Route__Sequence__destroy(bosdyn_msgs__msg__Route__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Route__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Route__Sequence__are_equal(const bosdyn_msgs__msg__Route__Sequence * lhs, const bosdyn_msgs__msg__Route__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Route__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Route__Sequence__copy(
  const bosdyn_msgs__msg__Route__Sequence * input,
  bosdyn_msgs__msg__Route__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Route);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Route * data =
      (bosdyn_msgs__msg__Route *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Route__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Route__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Route__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
