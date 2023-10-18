// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/FollowArmCommandRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/follow_arm_command_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `body_offset_from_hand`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
bosdyn_msgs__msg__FollowArmCommandRequest__init(bosdyn_msgs__msg__FollowArmCommandRequest * msg)
{
  if (!msg) {
    return false;
  }
  // body_offset_from_hand
  if (!geometry_msgs__msg__Vector3__init(&msg->body_offset_from_hand)) {
    bosdyn_msgs__msg__FollowArmCommandRequest__fini(msg);
    return false;
  }
  // body_offset_from_hand_is_set
  return true;
}

void
bosdyn_msgs__msg__FollowArmCommandRequest__fini(bosdyn_msgs__msg__FollowArmCommandRequest * msg)
{
  if (!msg) {
    return;
  }
  // body_offset_from_hand
  geometry_msgs__msg__Vector3__fini(&msg->body_offset_from_hand);
  // body_offset_from_hand_is_set
}

bool
bosdyn_msgs__msg__FollowArmCommandRequest__are_equal(const bosdyn_msgs__msg__FollowArmCommandRequest * lhs, const bosdyn_msgs__msg__FollowArmCommandRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // body_offset_from_hand
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->body_offset_from_hand), &(rhs->body_offset_from_hand)))
  {
    return false;
  }
  // body_offset_from_hand_is_set
  if (lhs->body_offset_from_hand_is_set != rhs->body_offset_from_hand_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__FollowArmCommandRequest__copy(
  const bosdyn_msgs__msg__FollowArmCommandRequest * input,
  bosdyn_msgs__msg__FollowArmCommandRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // body_offset_from_hand
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->body_offset_from_hand), &(output->body_offset_from_hand)))
  {
    return false;
  }
  // body_offset_from_hand_is_set
  output->body_offset_from_hand_is_set = input->body_offset_from_hand_is_set;
  return true;
}

bosdyn_msgs__msg__FollowArmCommandRequest *
bosdyn_msgs__msg__FollowArmCommandRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FollowArmCommandRequest * msg = (bosdyn_msgs__msg__FollowArmCommandRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__FollowArmCommandRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__FollowArmCommandRequest));
  bool success = bosdyn_msgs__msg__FollowArmCommandRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__FollowArmCommandRequest__destroy(bosdyn_msgs__msg__FollowArmCommandRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__FollowArmCommandRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__FollowArmCommandRequest__Sequence__init(bosdyn_msgs__msg__FollowArmCommandRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FollowArmCommandRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__FollowArmCommandRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__FollowArmCommandRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__FollowArmCommandRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__FollowArmCommandRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__FollowArmCommandRequest__Sequence__fini(bosdyn_msgs__msg__FollowArmCommandRequest__Sequence * array)
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
      bosdyn_msgs__msg__FollowArmCommandRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__FollowArmCommandRequest__Sequence *
bosdyn_msgs__msg__FollowArmCommandRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FollowArmCommandRequest__Sequence * array = (bosdyn_msgs__msg__FollowArmCommandRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__FollowArmCommandRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__FollowArmCommandRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__FollowArmCommandRequest__Sequence__destroy(bosdyn_msgs__msg__FollowArmCommandRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__FollowArmCommandRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__FollowArmCommandRequest__Sequence__are_equal(const bosdyn_msgs__msg__FollowArmCommandRequest__Sequence * lhs, const bosdyn_msgs__msg__FollowArmCommandRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__FollowArmCommandRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__FollowArmCommandRequest__Sequence__copy(
  const bosdyn_msgs__msg__FollowArmCommandRequest__Sequence * input,
  bosdyn_msgs__msg__FollowArmCommandRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__FollowArmCommandRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__FollowArmCommandRequest * data =
      (bosdyn_msgs__msg__FollowArmCommandRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__FollowArmCommandRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__FollowArmCommandRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__FollowArmCommandRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
