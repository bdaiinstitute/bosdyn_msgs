// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SynchronizedCommandRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/synchronized_command_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `arm_command`
#include "bosdyn_msgs/msg/detail/arm_command_request__functions.h"
// Member `mobility_command`
#include "bosdyn_msgs/msg/detail/mobility_command_request__functions.h"
// Member `gripper_command`
#include "bosdyn_msgs/msg/detail/gripper_command_request__functions.h"

bool
bosdyn_msgs__msg__SynchronizedCommandRequest__init(bosdyn_msgs__msg__SynchronizedCommandRequest * msg)
{
  if (!msg) {
    return false;
  }
  // arm_command
  if (!bosdyn_msgs__msg__ArmCommandRequest__init(&msg->arm_command)) {
    bosdyn_msgs__msg__SynchronizedCommandRequest__fini(msg);
    return false;
  }
  // arm_command_is_set
  // mobility_command
  if (!bosdyn_msgs__msg__MobilityCommandRequest__init(&msg->mobility_command)) {
    bosdyn_msgs__msg__SynchronizedCommandRequest__fini(msg);
    return false;
  }
  // mobility_command_is_set
  // gripper_command
  if (!bosdyn_msgs__msg__GripperCommandRequest__init(&msg->gripper_command)) {
    bosdyn_msgs__msg__SynchronizedCommandRequest__fini(msg);
    return false;
  }
  // gripper_command_is_set
  return true;
}

void
bosdyn_msgs__msg__SynchronizedCommandRequest__fini(bosdyn_msgs__msg__SynchronizedCommandRequest * msg)
{
  if (!msg) {
    return;
  }
  // arm_command
  bosdyn_msgs__msg__ArmCommandRequest__fini(&msg->arm_command);
  // arm_command_is_set
  // mobility_command
  bosdyn_msgs__msg__MobilityCommandRequest__fini(&msg->mobility_command);
  // mobility_command_is_set
  // gripper_command
  bosdyn_msgs__msg__GripperCommandRequest__fini(&msg->gripper_command);
  // gripper_command_is_set
}

bool
bosdyn_msgs__msg__SynchronizedCommandRequest__are_equal(const bosdyn_msgs__msg__SynchronizedCommandRequest * lhs, const bosdyn_msgs__msg__SynchronizedCommandRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arm_command
  if (!bosdyn_msgs__msg__ArmCommandRequest__are_equal(
      &(lhs->arm_command), &(rhs->arm_command)))
  {
    return false;
  }
  // arm_command_is_set
  if (lhs->arm_command_is_set != rhs->arm_command_is_set) {
    return false;
  }
  // mobility_command
  if (!bosdyn_msgs__msg__MobilityCommandRequest__are_equal(
      &(lhs->mobility_command), &(rhs->mobility_command)))
  {
    return false;
  }
  // mobility_command_is_set
  if (lhs->mobility_command_is_set != rhs->mobility_command_is_set) {
    return false;
  }
  // gripper_command
  if (!bosdyn_msgs__msg__GripperCommandRequest__are_equal(
      &(lhs->gripper_command), &(rhs->gripper_command)))
  {
    return false;
  }
  // gripper_command_is_set
  if (lhs->gripper_command_is_set != rhs->gripper_command_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SynchronizedCommandRequest__copy(
  const bosdyn_msgs__msg__SynchronizedCommandRequest * input,
  bosdyn_msgs__msg__SynchronizedCommandRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // arm_command
  if (!bosdyn_msgs__msg__ArmCommandRequest__copy(
      &(input->arm_command), &(output->arm_command)))
  {
    return false;
  }
  // arm_command_is_set
  output->arm_command_is_set = input->arm_command_is_set;
  // mobility_command
  if (!bosdyn_msgs__msg__MobilityCommandRequest__copy(
      &(input->mobility_command), &(output->mobility_command)))
  {
    return false;
  }
  // mobility_command_is_set
  output->mobility_command_is_set = input->mobility_command_is_set;
  // gripper_command
  if (!bosdyn_msgs__msg__GripperCommandRequest__copy(
      &(input->gripper_command), &(output->gripper_command)))
  {
    return false;
  }
  // gripper_command_is_set
  output->gripper_command_is_set = input->gripper_command_is_set;
  return true;
}

bosdyn_msgs__msg__SynchronizedCommandRequest *
bosdyn_msgs__msg__SynchronizedCommandRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SynchronizedCommandRequest * msg = (bosdyn_msgs__msg__SynchronizedCommandRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__SynchronizedCommandRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SynchronizedCommandRequest));
  bool success = bosdyn_msgs__msg__SynchronizedCommandRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SynchronizedCommandRequest__destroy(bosdyn_msgs__msg__SynchronizedCommandRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SynchronizedCommandRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence__init(bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SynchronizedCommandRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SynchronizedCommandRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SynchronizedCommandRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SynchronizedCommandRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SynchronizedCommandRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence__fini(bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence * array)
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
      bosdyn_msgs__msg__SynchronizedCommandRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence *
bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence * array = (bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence__destroy(bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence__are_equal(const bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence * lhs, const bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SynchronizedCommandRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence__copy(
  const bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence * input,
  bosdyn_msgs__msg__SynchronizedCommandRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SynchronizedCommandRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SynchronizedCommandRequest * data =
      (bosdyn_msgs__msg__SynchronizedCommandRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SynchronizedCommandRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SynchronizedCommandRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SynchronizedCommandRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
