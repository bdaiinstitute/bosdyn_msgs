// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestToolGazeTask.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_tool_gaze_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_in_task`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `task_tform_desired_tool`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__init(bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask * msg)
{
  if (!msg) {
    return false;
  }
  // target_in_task
  if (!geometry_msgs__msg__Vector3__init(&msg->target_in_task)) {
    bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__fini(msg);
    return false;
  }
  // target_in_task_is_set
  // task_tform_desired_tool
  if (!geometry_msgs__msg__Pose__init(&msg->task_tform_desired_tool)) {
    bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__fini(msg);
    return false;
  }
  // task_tform_desired_tool_is_set
  return true;
}

void
bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__fini(bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask * msg)
{
  if (!msg) {
    return;
  }
  // target_in_task
  geometry_msgs__msg__Vector3__fini(&msg->target_in_task);
  // target_in_task_is_set
  // task_tform_desired_tool
  geometry_msgs__msg__Pose__fini(&msg->task_tform_desired_tool);
  // task_tform_desired_tool_is_set
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__are_equal(const bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask * lhs, const bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_in_task
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->target_in_task), &(rhs->target_in_task)))
  {
    return false;
  }
  // target_in_task_is_set
  if (lhs->target_in_task_is_set != rhs->target_in_task_is_set) {
    return false;
  }
  // task_tform_desired_tool
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->task_tform_desired_tool), &(rhs->task_tform_desired_tool)))
  {
    return false;
  }
  // task_tform_desired_tool_is_set
  if (lhs->task_tform_desired_tool_is_set != rhs->task_tform_desired_tool_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__copy(
  const bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask * input,
  bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask * output)
{
  if (!input || !output) {
    return false;
  }
  // target_in_task
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->target_in_task), &(output->target_in_task)))
  {
    return false;
  }
  // target_in_task_is_set
  output->target_in_task_is_set = input->target_in_task_is_set;
  // task_tform_desired_tool
  if (!geometry_msgs__msg__Pose__copy(
      &(input->task_tform_desired_tool), &(output->task_tform_desired_tool)))
  {
    return false;
  }
  // task_tform_desired_tool_is_set
  output->task_tform_desired_tool_is_set = input->task_tform_desired_tool_is_set;
  return true;
}

bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask *
bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask * msg = (bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask *)allocator.allocate(sizeof(bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask));
  bool success = bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__destroy(bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence__init(bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__fini(&data[i - 1]);
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
bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence__fini(bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence * array)
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
      bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__fini(&array->data[i]);
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

bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence *
bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence * array = (bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence__destroy(bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence__are_equal(const bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence * lhs, const bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence__copy(
  const bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence * input,
  bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask * data =
      (bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__InverseKinematicsRequestToolGazeTask__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
