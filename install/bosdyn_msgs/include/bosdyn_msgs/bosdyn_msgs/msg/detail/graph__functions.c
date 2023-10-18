// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Graph.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoints`
#include "bosdyn_msgs/msg/detail/waypoint__functions.h"
// Member `edges`
#include "bosdyn_msgs/msg/detail/edge__functions.h"
// Member `anchoring`
#include "bosdyn_msgs/msg/detail/anchoring__functions.h"

bool
bosdyn_msgs__msg__Graph__init(bosdyn_msgs__msg__Graph * msg)
{
  if (!msg) {
    return false;
  }
  // waypoints
  if (!bosdyn_msgs__msg__Waypoint__Sequence__init(&msg->waypoints, 0)) {
    bosdyn_msgs__msg__Graph__fini(msg);
    return false;
  }
  // edges
  if (!bosdyn_msgs__msg__Edge__Sequence__init(&msg->edges, 0)) {
    bosdyn_msgs__msg__Graph__fini(msg);
    return false;
  }
  // anchoring
  if (!bosdyn_msgs__msg__Anchoring__init(&msg->anchoring)) {
    bosdyn_msgs__msg__Graph__fini(msg);
    return false;
  }
  // anchoring_is_set
  return true;
}

void
bosdyn_msgs__msg__Graph__fini(bosdyn_msgs__msg__Graph * msg)
{
  if (!msg) {
    return;
  }
  // waypoints
  bosdyn_msgs__msg__Waypoint__Sequence__fini(&msg->waypoints);
  // edges
  bosdyn_msgs__msg__Edge__Sequence__fini(&msg->edges);
  // anchoring
  bosdyn_msgs__msg__Anchoring__fini(&msg->anchoring);
  // anchoring_is_set
}

bool
bosdyn_msgs__msg__Graph__are_equal(const bosdyn_msgs__msg__Graph * lhs, const bosdyn_msgs__msg__Graph * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoints
  if (!bosdyn_msgs__msg__Waypoint__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  // edges
  if (!bosdyn_msgs__msg__Edge__Sequence__are_equal(
      &(lhs->edges), &(rhs->edges)))
  {
    return false;
  }
  // anchoring
  if (!bosdyn_msgs__msg__Anchoring__are_equal(
      &(lhs->anchoring), &(rhs->anchoring)))
  {
    return false;
  }
  // anchoring_is_set
  if (lhs->anchoring_is_set != rhs->anchoring_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Graph__copy(
  const bosdyn_msgs__msg__Graph * input,
  bosdyn_msgs__msg__Graph * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoints
  if (!bosdyn_msgs__msg__Waypoint__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  // edges
  if (!bosdyn_msgs__msg__Edge__Sequence__copy(
      &(input->edges), &(output->edges)))
  {
    return false;
  }
  // anchoring
  if (!bosdyn_msgs__msg__Anchoring__copy(
      &(input->anchoring), &(output->anchoring)))
  {
    return false;
  }
  // anchoring_is_set
  output->anchoring_is_set = input->anchoring_is_set;
  return true;
}

bosdyn_msgs__msg__Graph *
bosdyn_msgs__msg__Graph__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Graph * msg = (bosdyn_msgs__msg__Graph *)allocator.allocate(sizeof(bosdyn_msgs__msg__Graph), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Graph));
  bool success = bosdyn_msgs__msg__Graph__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Graph__destroy(bosdyn_msgs__msg__Graph * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Graph__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Graph__Sequence__init(bosdyn_msgs__msg__Graph__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Graph * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Graph *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Graph), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Graph__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Graph__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Graph__Sequence__fini(bosdyn_msgs__msg__Graph__Sequence * array)
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
      bosdyn_msgs__msg__Graph__fini(&array->data[i]);
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

bosdyn_msgs__msg__Graph__Sequence *
bosdyn_msgs__msg__Graph__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Graph__Sequence * array = (bosdyn_msgs__msg__Graph__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Graph__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Graph__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Graph__Sequence__destroy(bosdyn_msgs__msg__Graph__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Graph__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Graph__Sequence__are_equal(const bosdyn_msgs__msg__Graph__Sequence * lhs, const bosdyn_msgs__msg__Graph__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Graph__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Graph__Sequence__copy(
  const bosdyn_msgs__msg__Graph__Sequence * input,
  bosdyn_msgs__msg__Graph__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Graph);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Graph * data =
      (bosdyn_msgs__msg__Graph *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Graph__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Graph__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Graph__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
