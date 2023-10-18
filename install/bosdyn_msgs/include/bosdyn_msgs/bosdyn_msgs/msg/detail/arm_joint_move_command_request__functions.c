// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmJointMoveCommandRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `trajectory`
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory__functions.h"

bool
bosdyn_msgs__msg__ArmJointMoveCommandRequest__init(bosdyn_msgs__msg__ArmJointMoveCommandRequest * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!bosdyn_msgs__msg__ArmJointTrajectory__init(&msg->trajectory)) {
    bosdyn_msgs__msg__ArmJointMoveCommandRequest__fini(msg);
    return false;
  }
  // trajectory_is_set
  return true;
}

void
bosdyn_msgs__msg__ArmJointMoveCommandRequest__fini(bosdyn_msgs__msg__ArmJointMoveCommandRequest * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  bosdyn_msgs__msg__ArmJointTrajectory__fini(&msg->trajectory);
  // trajectory_is_set
}

bool
bosdyn_msgs__msg__ArmJointMoveCommandRequest__are_equal(const bosdyn_msgs__msg__ArmJointMoveCommandRequest * lhs, const bosdyn_msgs__msg__ArmJointMoveCommandRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trajectory
  if (!bosdyn_msgs__msg__ArmJointTrajectory__are_equal(
      &(lhs->trajectory), &(rhs->trajectory)))
  {
    return false;
  }
  // trajectory_is_set
  if (lhs->trajectory_is_set != rhs->trajectory_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmJointMoveCommandRequest__copy(
  const bosdyn_msgs__msg__ArmJointMoveCommandRequest * input,
  bosdyn_msgs__msg__ArmJointMoveCommandRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // trajectory
  if (!bosdyn_msgs__msg__ArmJointTrajectory__copy(
      &(input->trajectory), &(output->trajectory)))
  {
    return false;
  }
  // trajectory_is_set
  output->trajectory_is_set = input->trajectory_is_set;
  return true;
}

bosdyn_msgs__msg__ArmJointMoveCommandRequest *
bosdyn_msgs__msg__ArmJointMoveCommandRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmJointMoveCommandRequest * msg = (bosdyn_msgs__msg__ArmJointMoveCommandRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmJointMoveCommandRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmJointMoveCommandRequest));
  bool success = bosdyn_msgs__msg__ArmJointMoveCommandRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmJointMoveCommandRequest__destroy(bosdyn_msgs__msg__ArmJointMoveCommandRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmJointMoveCommandRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence__init(bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmJointMoveCommandRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmJointMoveCommandRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmJointMoveCommandRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmJointMoveCommandRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmJointMoveCommandRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence__fini(bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence * array)
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
      bosdyn_msgs__msg__ArmJointMoveCommandRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence *
bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence * array = (bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence__destroy(bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence__are_equal(const bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence * lhs, const bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmJointMoveCommandRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence__copy(
  const bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence * input,
  bosdyn_msgs__msg__ArmJointMoveCommandRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmJointMoveCommandRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmJointMoveCommandRequest * data =
      (bosdyn_msgs__msg__ArmJointMoveCommandRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmJointMoveCommandRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmJointMoveCommandRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmJointMoveCommandRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
