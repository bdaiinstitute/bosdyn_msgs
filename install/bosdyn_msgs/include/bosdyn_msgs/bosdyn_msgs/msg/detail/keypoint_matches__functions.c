// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/KeypointMatches.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/keypoint_matches__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reference_keypoints`
// Member `live_keypoints`
#include "bosdyn_msgs/msg/detail/keypoint_set__functions.h"
// Member `matches`
#include "bosdyn_msgs/msg/detail/match__functions.h"

bool
bosdyn_msgs__msg__KeypointMatches__init(bosdyn_msgs__msg__KeypointMatches * msg)
{
  if (!msg) {
    return false;
  }
  // reference_keypoints
  if (!bosdyn_msgs__msg__KeypointSet__init(&msg->reference_keypoints)) {
    bosdyn_msgs__msg__KeypointMatches__fini(msg);
    return false;
  }
  // reference_keypoints_is_set
  // live_keypoints
  if (!bosdyn_msgs__msg__KeypointSet__init(&msg->live_keypoints)) {
    bosdyn_msgs__msg__KeypointMatches__fini(msg);
    return false;
  }
  // live_keypoints_is_set
  // matches
  if (!bosdyn_msgs__msg__Match__Sequence__init(&msg->matches, 0)) {
    bosdyn_msgs__msg__KeypointMatches__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__KeypointMatches__fini(bosdyn_msgs__msg__KeypointMatches * msg)
{
  if (!msg) {
    return;
  }
  // reference_keypoints
  bosdyn_msgs__msg__KeypointSet__fini(&msg->reference_keypoints);
  // reference_keypoints_is_set
  // live_keypoints
  bosdyn_msgs__msg__KeypointSet__fini(&msg->live_keypoints);
  // live_keypoints_is_set
  // matches
  bosdyn_msgs__msg__Match__Sequence__fini(&msg->matches);
}

bool
bosdyn_msgs__msg__KeypointMatches__are_equal(const bosdyn_msgs__msg__KeypointMatches * lhs, const bosdyn_msgs__msg__KeypointMatches * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reference_keypoints
  if (!bosdyn_msgs__msg__KeypointSet__are_equal(
      &(lhs->reference_keypoints), &(rhs->reference_keypoints)))
  {
    return false;
  }
  // reference_keypoints_is_set
  if (lhs->reference_keypoints_is_set != rhs->reference_keypoints_is_set) {
    return false;
  }
  // live_keypoints
  if (!bosdyn_msgs__msg__KeypointSet__are_equal(
      &(lhs->live_keypoints), &(rhs->live_keypoints)))
  {
    return false;
  }
  // live_keypoints_is_set
  if (lhs->live_keypoints_is_set != rhs->live_keypoints_is_set) {
    return false;
  }
  // matches
  if (!bosdyn_msgs__msg__Match__Sequence__are_equal(
      &(lhs->matches), &(rhs->matches)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__KeypointMatches__copy(
  const bosdyn_msgs__msg__KeypointMatches * input,
  bosdyn_msgs__msg__KeypointMatches * output)
{
  if (!input || !output) {
    return false;
  }
  // reference_keypoints
  if (!bosdyn_msgs__msg__KeypointSet__copy(
      &(input->reference_keypoints), &(output->reference_keypoints)))
  {
    return false;
  }
  // reference_keypoints_is_set
  output->reference_keypoints_is_set = input->reference_keypoints_is_set;
  // live_keypoints
  if (!bosdyn_msgs__msg__KeypointSet__copy(
      &(input->live_keypoints), &(output->live_keypoints)))
  {
    return false;
  }
  // live_keypoints_is_set
  output->live_keypoints_is_set = input->live_keypoints_is_set;
  // matches
  if (!bosdyn_msgs__msg__Match__Sequence__copy(
      &(input->matches), &(output->matches)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__KeypointMatches *
bosdyn_msgs__msg__KeypointMatches__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__KeypointMatches * msg = (bosdyn_msgs__msg__KeypointMatches *)allocator.allocate(sizeof(bosdyn_msgs__msg__KeypointMatches), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__KeypointMatches));
  bool success = bosdyn_msgs__msg__KeypointMatches__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__KeypointMatches__destroy(bosdyn_msgs__msg__KeypointMatches * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__KeypointMatches__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__KeypointMatches__Sequence__init(bosdyn_msgs__msg__KeypointMatches__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__KeypointMatches * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__KeypointMatches *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__KeypointMatches), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__KeypointMatches__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__KeypointMatches__fini(&data[i - 1]);
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
bosdyn_msgs__msg__KeypointMatches__Sequence__fini(bosdyn_msgs__msg__KeypointMatches__Sequence * array)
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
      bosdyn_msgs__msg__KeypointMatches__fini(&array->data[i]);
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

bosdyn_msgs__msg__KeypointMatches__Sequence *
bosdyn_msgs__msg__KeypointMatches__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__KeypointMatches__Sequence * array = (bosdyn_msgs__msg__KeypointMatches__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__KeypointMatches__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__KeypointMatches__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__KeypointMatches__Sequence__destroy(bosdyn_msgs__msg__KeypointMatches__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__KeypointMatches__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__KeypointMatches__Sequence__are_equal(const bosdyn_msgs__msg__KeypointMatches__Sequence * lhs, const bosdyn_msgs__msg__KeypointMatches__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__KeypointMatches__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__KeypointMatches__Sequence__copy(
  const bosdyn_msgs__msg__KeypointMatches__Sequence * input,
  bosdyn_msgs__msg__KeypointMatches__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__KeypointMatches);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__KeypointMatches * data =
      (bosdyn_msgs__msg__KeypointMatches *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__KeypointMatches__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__KeypointMatches__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__KeypointMatches__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
