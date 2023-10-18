// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_command_feedback_one_of_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `arm_cartesian_feedback`
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_feedback__functions.h"
// Member `arm_joint_move_feedback`
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback__functions.h"
// Member `named_arm_position_feedback`
#include "bosdyn_msgs/msg/detail/named_arm_positions_command_feedback__functions.h"
// Member `arm_velocity_feedback`
#include "bosdyn_msgs/msg/detail/arm_velocity_command_feedback__functions.h"
// Member `arm_gaze_feedback`
#include "bosdyn_msgs/msg/detail/gaze_command_feedback__functions.h"
// Member `arm_stop_feedback`
#include "bosdyn_msgs/msg/detail/arm_stop_command_feedback__functions.h"
// Member `arm_drag_feedback`
#include "bosdyn_msgs/msg/detail/arm_drag_command_feedback__functions.h"
// Member `arm_impedance_feedback`
#include "bosdyn_msgs/msg/detail/arm_impedance_command_feedback__functions.h"

bool
bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__init(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // arm_cartesian_feedback
  if (!bosdyn_msgs__msg__ArmCartesianCommandFeedback__init(&msg->arm_cartesian_feedback)) {
    bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // arm_joint_move_feedback
  if (!bosdyn_msgs__msg__ArmJointMoveCommandFeedback__init(&msg->arm_joint_move_feedback)) {
    bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // named_arm_position_feedback
  if (!bosdyn_msgs__msg__NamedArmPositionsCommandFeedback__init(&msg->named_arm_position_feedback)) {
    bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // arm_velocity_feedback
  if (!bosdyn_msgs__msg__ArmVelocityCommandFeedback__init(&msg->arm_velocity_feedback)) {
    bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // arm_gaze_feedback
  if (!bosdyn_msgs__msg__GazeCommandFeedback__init(&msg->arm_gaze_feedback)) {
    bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // arm_stop_feedback
  if (!bosdyn_msgs__msg__ArmStopCommandFeedback__init(&msg->arm_stop_feedback)) {
    bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // arm_drag_feedback
  if (!bosdyn_msgs__msg__ArmDragCommandFeedback__init(&msg->arm_drag_feedback)) {
    bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // arm_impedance_feedback
  if (!bosdyn_msgs__msg__ArmImpedanceCommandFeedback__init(&msg->arm_impedance_feedback)) {
    bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // feedback_choice
  return true;
}

void
bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback * msg)
{
  if (!msg) {
    return;
  }
  // arm_cartesian_feedback
  bosdyn_msgs__msg__ArmCartesianCommandFeedback__fini(&msg->arm_cartesian_feedback);
  // arm_joint_move_feedback
  bosdyn_msgs__msg__ArmJointMoveCommandFeedback__fini(&msg->arm_joint_move_feedback);
  // named_arm_position_feedback
  bosdyn_msgs__msg__NamedArmPositionsCommandFeedback__fini(&msg->named_arm_position_feedback);
  // arm_velocity_feedback
  bosdyn_msgs__msg__ArmVelocityCommandFeedback__fini(&msg->arm_velocity_feedback);
  // arm_gaze_feedback
  bosdyn_msgs__msg__GazeCommandFeedback__fini(&msg->arm_gaze_feedback);
  // arm_stop_feedback
  bosdyn_msgs__msg__ArmStopCommandFeedback__fini(&msg->arm_stop_feedback);
  // arm_drag_feedback
  bosdyn_msgs__msg__ArmDragCommandFeedback__fini(&msg->arm_drag_feedback);
  // arm_impedance_feedback
  bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(&msg->arm_impedance_feedback);
  // feedback_choice
}

bool
bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__are_equal(const bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback * lhs, const bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arm_cartesian_feedback
  if (!bosdyn_msgs__msg__ArmCartesianCommandFeedback__are_equal(
      &(lhs->arm_cartesian_feedback), &(rhs->arm_cartesian_feedback)))
  {
    return false;
  }
  // arm_joint_move_feedback
  if (!bosdyn_msgs__msg__ArmJointMoveCommandFeedback__are_equal(
      &(lhs->arm_joint_move_feedback), &(rhs->arm_joint_move_feedback)))
  {
    return false;
  }
  // named_arm_position_feedback
  if (!bosdyn_msgs__msg__NamedArmPositionsCommandFeedback__are_equal(
      &(lhs->named_arm_position_feedback), &(rhs->named_arm_position_feedback)))
  {
    return false;
  }
  // arm_velocity_feedback
  if (!bosdyn_msgs__msg__ArmVelocityCommandFeedback__are_equal(
      &(lhs->arm_velocity_feedback), &(rhs->arm_velocity_feedback)))
  {
    return false;
  }
  // arm_gaze_feedback
  if (!bosdyn_msgs__msg__GazeCommandFeedback__are_equal(
      &(lhs->arm_gaze_feedback), &(rhs->arm_gaze_feedback)))
  {
    return false;
  }
  // arm_stop_feedback
  if (!bosdyn_msgs__msg__ArmStopCommandFeedback__are_equal(
      &(lhs->arm_stop_feedback), &(rhs->arm_stop_feedback)))
  {
    return false;
  }
  // arm_drag_feedback
  if (!bosdyn_msgs__msg__ArmDragCommandFeedback__are_equal(
      &(lhs->arm_drag_feedback), &(rhs->arm_drag_feedback)))
  {
    return false;
  }
  // arm_impedance_feedback
  if (!bosdyn_msgs__msg__ArmImpedanceCommandFeedback__are_equal(
      &(lhs->arm_impedance_feedback), &(rhs->arm_impedance_feedback)))
  {
    return false;
  }
  // feedback_choice
  if (lhs->feedback_choice != rhs->feedback_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__copy(
  const bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback * input,
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // arm_cartesian_feedback
  if (!bosdyn_msgs__msg__ArmCartesianCommandFeedback__copy(
      &(input->arm_cartesian_feedback), &(output->arm_cartesian_feedback)))
  {
    return false;
  }
  // arm_joint_move_feedback
  if (!bosdyn_msgs__msg__ArmJointMoveCommandFeedback__copy(
      &(input->arm_joint_move_feedback), &(output->arm_joint_move_feedback)))
  {
    return false;
  }
  // named_arm_position_feedback
  if (!bosdyn_msgs__msg__NamedArmPositionsCommandFeedback__copy(
      &(input->named_arm_position_feedback), &(output->named_arm_position_feedback)))
  {
    return false;
  }
  // arm_velocity_feedback
  if (!bosdyn_msgs__msg__ArmVelocityCommandFeedback__copy(
      &(input->arm_velocity_feedback), &(output->arm_velocity_feedback)))
  {
    return false;
  }
  // arm_gaze_feedback
  if (!bosdyn_msgs__msg__GazeCommandFeedback__copy(
      &(input->arm_gaze_feedback), &(output->arm_gaze_feedback)))
  {
    return false;
  }
  // arm_stop_feedback
  if (!bosdyn_msgs__msg__ArmStopCommandFeedback__copy(
      &(input->arm_stop_feedback), &(output->arm_stop_feedback)))
  {
    return false;
  }
  // arm_drag_feedback
  if (!bosdyn_msgs__msg__ArmDragCommandFeedback__copy(
      &(input->arm_drag_feedback), &(output->arm_drag_feedback)))
  {
    return false;
  }
  // arm_impedance_feedback
  if (!bosdyn_msgs__msg__ArmImpedanceCommandFeedback__copy(
      &(input->arm_impedance_feedback), &(output->arm_impedance_feedback)))
  {
    return false;
  }
  // feedback_choice
  output->feedback_choice = input->feedback_choice;
  return true;
}

bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback *
bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback * msg = (bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback));
  bool success = bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__destroy(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence__init(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence__fini(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence * array)
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
      bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence *
bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence * array = (bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence__destroy(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence__are_equal(const bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence * lhs, const bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence__copy(
  const bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence * input,
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback * data =
      (bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
