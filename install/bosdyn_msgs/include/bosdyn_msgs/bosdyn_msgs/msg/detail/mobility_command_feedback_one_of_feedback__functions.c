// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/MobilityCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/mobility_command_feedback_one_of_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `se2_trajectory_feedback`
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_feedback__functions.h"
// Member `se2_velocity_feedback`
#include "bosdyn_msgs/msg/detail/se2_velocity_command_feedback__functions.h"
// Member `sit_feedback`
#include "bosdyn_msgs/msg/detail/sit_command_feedback__functions.h"
// Member `stand_feedback`
#include "bosdyn_msgs/msg/detail/stand_command_feedback__functions.h"
// Member `stance_feedback`
#include "bosdyn_msgs/msg/detail/stance_command_feedback__functions.h"
// Member `stop_feedback`
#include "bosdyn_msgs/msg/detail/stop_command_feedback__functions.h"
// Member `follow_arm_feedback`
#include "bosdyn_msgs/msg/detail/follow_arm_command_feedback__functions.h"

bool
bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__init(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // se2_trajectory_feedback
  if (!bosdyn_msgs__msg__SE2TrajectoryCommandFeedback__init(&msg->se2_trajectory_feedback)) {
    bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // se2_velocity_feedback
  if (!bosdyn_msgs__msg__SE2VelocityCommandFeedback__init(&msg->se2_velocity_feedback)) {
    bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // sit_feedback
  if (!bosdyn_msgs__msg__SitCommandFeedback__init(&msg->sit_feedback)) {
    bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // stand_feedback
  if (!bosdyn_msgs__msg__StandCommandFeedback__init(&msg->stand_feedback)) {
    bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // stance_feedback
  if (!bosdyn_msgs__msg__StanceCommandFeedback__init(&msg->stance_feedback)) {
    bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // stop_feedback
  if (!bosdyn_msgs__msg__StopCommandFeedback__init(&msg->stop_feedback)) {
    bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // follow_arm_feedback
  if (!bosdyn_msgs__msg__FollowArmCommandFeedback__init(&msg->follow_arm_feedback)) {
    bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // feedback_choice
  return true;
}

void
bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback * msg)
{
  if (!msg) {
    return;
  }
  // se2_trajectory_feedback
  bosdyn_msgs__msg__SE2TrajectoryCommandFeedback__fini(&msg->se2_trajectory_feedback);
  // se2_velocity_feedback
  bosdyn_msgs__msg__SE2VelocityCommandFeedback__fini(&msg->se2_velocity_feedback);
  // sit_feedback
  bosdyn_msgs__msg__SitCommandFeedback__fini(&msg->sit_feedback);
  // stand_feedback
  bosdyn_msgs__msg__StandCommandFeedback__fini(&msg->stand_feedback);
  // stance_feedback
  bosdyn_msgs__msg__StanceCommandFeedback__fini(&msg->stance_feedback);
  // stop_feedback
  bosdyn_msgs__msg__StopCommandFeedback__fini(&msg->stop_feedback);
  // follow_arm_feedback
  bosdyn_msgs__msg__FollowArmCommandFeedback__fini(&msg->follow_arm_feedback);
  // feedback_choice
}

bool
bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__are_equal(const bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback * lhs, const bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // se2_trajectory_feedback
  if (!bosdyn_msgs__msg__SE2TrajectoryCommandFeedback__are_equal(
      &(lhs->se2_trajectory_feedback), &(rhs->se2_trajectory_feedback)))
  {
    return false;
  }
  // se2_velocity_feedback
  if (!bosdyn_msgs__msg__SE2VelocityCommandFeedback__are_equal(
      &(lhs->se2_velocity_feedback), &(rhs->se2_velocity_feedback)))
  {
    return false;
  }
  // sit_feedback
  if (!bosdyn_msgs__msg__SitCommandFeedback__are_equal(
      &(lhs->sit_feedback), &(rhs->sit_feedback)))
  {
    return false;
  }
  // stand_feedback
  if (!bosdyn_msgs__msg__StandCommandFeedback__are_equal(
      &(lhs->stand_feedback), &(rhs->stand_feedback)))
  {
    return false;
  }
  // stance_feedback
  if (!bosdyn_msgs__msg__StanceCommandFeedback__are_equal(
      &(lhs->stance_feedback), &(rhs->stance_feedback)))
  {
    return false;
  }
  // stop_feedback
  if (!bosdyn_msgs__msg__StopCommandFeedback__are_equal(
      &(lhs->stop_feedback), &(rhs->stop_feedback)))
  {
    return false;
  }
  // follow_arm_feedback
  if (!bosdyn_msgs__msg__FollowArmCommandFeedback__are_equal(
      &(lhs->follow_arm_feedback), &(rhs->follow_arm_feedback)))
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
bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__copy(
  const bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback * input,
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // se2_trajectory_feedback
  if (!bosdyn_msgs__msg__SE2TrajectoryCommandFeedback__copy(
      &(input->se2_trajectory_feedback), &(output->se2_trajectory_feedback)))
  {
    return false;
  }
  // se2_velocity_feedback
  if (!bosdyn_msgs__msg__SE2VelocityCommandFeedback__copy(
      &(input->se2_velocity_feedback), &(output->se2_velocity_feedback)))
  {
    return false;
  }
  // sit_feedback
  if (!bosdyn_msgs__msg__SitCommandFeedback__copy(
      &(input->sit_feedback), &(output->sit_feedback)))
  {
    return false;
  }
  // stand_feedback
  if (!bosdyn_msgs__msg__StandCommandFeedback__copy(
      &(input->stand_feedback), &(output->stand_feedback)))
  {
    return false;
  }
  // stance_feedback
  if (!bosdyn_msgs__msg__StanceCommandFeedback__copy(
      &(input->stance_feedback), &(output->stance_feedback)))
  {
    return false;
  }
  // stop_feedback
  if (!bosdyn_msgs__msg__StopCommandFeedback__copy(
      &(input->stop_feedback), &(output->stop_feedback)))
  {
    return false;
  }
  // follow_arm_feedback
  if (!bosdyn_msgs__msg__FollowArmCommandFeedback__copy(
      &(input->follow_arm_feedback), &(output->follow_arm_feedback)))
  {
    return false;
  }
  // feedback_choice
  output->feedback_choice = input->feedback_choice;
  return true;
}

bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback *
bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback * msg = (bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback *)allocator.allocate(sizeof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback));
  bool success = bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__destroy(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence__init(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(&data[i - 1]);
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
bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence__fini(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence * array)
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
      bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(&array->data[i]);
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

bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence *
bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence * array = (bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence__destroy(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence__are_equal(const bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence * lhs, const bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence__copy(
  const bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence * input,
  bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback * data =
      (bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__MobilityCommandFeedbackOneOfFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
