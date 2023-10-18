// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmJointMoveCommandFeedback.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback_status__functions.h"
// Member `planner_status`
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback_planner_status__functions.h"
// Member `planned_points`
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory_point__functions.h"
// Member `time_to_goal`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__ArmJointMoveCommandFeedback__init(bosdyn_msgs__msg__ArmJointMoveCommandFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__ArmJointMoveCommandFeedbackStatus__init(&msg->status)) {
    bosdyn_msgs__msg__ArmJointMoveCommandFeedback__fini(msg);
    return false;
  }
  // planner_status
  if (!bosdyn_msgs__msg__ArmJointMoveCommandFeedbackPlannerStatus__init(&msg->planner_status)) {
    bosdyn_msgs__msg__ArmJointMoveCommandFeedback__fini(msg);
    return false;
  }
  // planned_points
  if (!bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence__init(&msg->planned_points, 0)) {
    bosdyn_msgs__msg__ArmJointMoveCommandFeedback__fini(msg);
    return false;
  }
  // time_to_goal
  if (!builtin_interfaces__msg__Duration__init(&msg->time_to_goal)) {
    bosdyn_msgs__msg__ArmJointMoveCommandFeedback__fini(msg);
    return false;
  }
  // time_to_goal_is_set
  return true;
}

void
bosdyn_msgs__msg__ArmJointMoveCommandFeedback__fini(bosdyn_msgs__msg__ArmJointMoveCommandFeedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  bosdyn_msgs__msg__ArmJointMoveCommandFeedbackStatus__fini(&msg->status);
  // planner_status
  bosdyn_msgs__msg__ArmJointMoveCommandFeedbackPlannerStatus__fini(&msg->planner_status);
  // planned_points
  bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence__fini(&msg->planned_points);
  // time_to_goal
  builtin_interfaces__msg__Duration__fini(&msg->time_to_goal);
  // time_to_goal_is_set
}

bool
bosdyn_msgs__msg__ArmJointMoveCommandFeedback__are_equal(const bosdyn_msgs__msg__ArmJointMoveCommandFeedback * lhs, const bosdyn_msgs__msg__ArmJointMoveCommandFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__ArmJointMoveCommandFeedbackStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // planner_status
  if (!bosdyn_msgs__msg__ArmJointMoveCommandFeedbackPlannerStatus__are_equal(
      &(lhs->planner_status), &(rhs->planner_status)))
  {
    return false;
  }
  // planned_points
  if (!bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence__are_equal(
      &(lhs->planned_points), &(rhs->planned_points)))
  {
    return false;
  }
  // time_to_goal
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->time_to_goal), &(rhs->time_to_goal)))
  {
    return false;
  }
  // time_to_goal_is_set
  if (lhs->time_to_goal_is_set != rhs->time_to_goal_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmJointMoveCommandFeedback__copy(
  const bosdyn_msgs__msg__ArmJointMoveCommandFeedback * input,
  bosdyn_msgs__msg__ArmJointMoveCommandFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__ArmJointMoveCommandFeedbackStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // planner_status
  if (!bosdyn_msgs__msg__ArmJointMoveCommandFeedbackPlannerStatus__copy(
      &(input->planner_status), &(output->planner_status)))
  {
    return false;
  }
  // planned_points
  if (!bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence__copy(
      &(input->planned_points), &(output->planned_points)))
  {
    return false;
  }
  // time_to_goal
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->time_to_goal), &(output->time_to_goal)))
  {
    return false;
  }
  // time_to_goal_is_set
  output->time_to_goal_is_set = input->time_to_goal_is_set;
  return true;
}

bosdyn_msgs__msg__ArmJointMoveCommandFeedback *
bosdyn_msgs__msg__ArmJointMoveCommandFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmJointMoveCommandFeedback * msg = (bosdyn_msgs__msg__ArmJointMoveCommandFeedback *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmJointMoveCommandFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmJointMoveCommandFeedback));
  bool success = bosdyn_msgs__msg__ArmJointMoveCommandFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmJointMoveCommandFeedback__destroy(bosdyn_msgs__msg__ArmJointMoveCommandFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmJointMoveCommandFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence__init(bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmJointMoveCommandFeedback * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmJointMoveCommandFeedback *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmJointMoveCommandFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmJointMoveCommandFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmJointMoveCommandFeedback__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence__fini(bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence * array)
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
      bosdyn_msgs__msg__ArmJointMoveCommandFeedback__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence *
bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence * array = (bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence__destroy(bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence__are_equal(const bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence * lhs, const bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmJointMoveCommandFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence__copy(
  const bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence * input,
  bosdyn_msgs__msg__ArmJointMoveCommandFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmJointMoveCommandFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmJointMoveCommandFeedback * data =
      (bosdyn_msgs__msg__ArmJointMoveCommandFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmJointMoveCommandFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmJointMoveCommandFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmJointMoveCommandFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
