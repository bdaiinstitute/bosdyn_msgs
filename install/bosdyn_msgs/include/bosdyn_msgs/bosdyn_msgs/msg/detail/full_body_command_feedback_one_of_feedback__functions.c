// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/FullBodyCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/full_body_command_feedback_one_of_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stop_feedback`
#include "bosdyn_msgs/msg/detail/stop_command_feedback__functions.h"
// Member `freeze_feedback`
#include "bosdyn_msgs/msg/detail/freeze_command_feedback__functions.h"
// Member `selfright_feedback`
#include "bosdyn_msgs/msg/detail/self_right_command_feedback__functions.h"
// Member `safe_power_off_feedback`
#include "bosdyn_msgs/msg/detail/safe_power_off_command_feedback__functions.h"
// Member `battery_change_pose_feedback`
#include "bosdyn_msgs/msg/detail/battery_change_pose_command_feedback__functions.h"
// Member `payload_estimation_feedback`
#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback__functions.h"
// Member `constrained_manipulation_feedback`
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_feedback__functions.h"

bool
bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__init(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // stop_feedback
  if (!bosdyn_msgs__msg__StopCommandFeedback__init(&msg->stop_feedback)) {
    bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // freeze_feedback
  if (!bosdyn_msgs__msg__FreezeCommandFeedback__init(&msg->freeze_feedback)) {
    bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // selfright_feedback
  if (!bosdyn_msgs__msg__SelfRightCommandFeedback__init(&msg->selfright_feedback)) {
    bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // safe_power_off_feedback
  if (!bosdyn_msgs__msg__SafePowerOffCommandFeedback__init(&msg->safe_power_off_feedback)) {
    bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // battery_change_pose_feedback
  if (!bosdyn_msgs__msg__BatteryChangePoseCommandFeedback__init(&msg->battery_change_pose_feedback)) {
    bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // payload_estimation_feedback
  if (!bosdyn_msgs__msg__PayloadEstimationCommandFeedback__init(&msg->payload_estimation_feedback)) {
    bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // constrained_manipulation_feedback
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__init(&msg->constrained_manipulation_feedback)) {
    bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(msg);
    return false;
  }
  // feedback_choice
  return true;
}

void
bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback * msg)
{
  if (!msg) {
    return;
  }
  // stop_feedback
  bosdyn_msgs__msg__StopCommandFeedback__fini(&msg->stop_feedback);
  // freeze_feedback
  bosdyn_msgs__msg__FreezeCommandFeedback__fini(&msg->freeze_feedback);
  // selfright_feedback
  bosdyn_msgs__msg__SelfRightCommandFeedback__fini(&msg->selfright_feedback);
  // safe_power_off_feedback
  bosdyn_msgs__msg__SafePowerOffCommandFeedback__fini(&msg->safe_power_off_feedback);
  // battery_change_pose_feedback
  bosdyn_msgs__msg__BatteryChangePoseCommandFeedback__fini(&msg->battery_change_pose_feedback);
  // payload_estimation_feedback
  bosdyn_msgs__msg__PayloadEstimationCommandFeedback__fini(&msg->payload_estimation_feedback);
  // constrained_manipulation_feedback
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__fini(&msg->constrained_manipulation_feedback);
  // feedback_choice
}

bool
bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__are_equal(const bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback * lhs, const bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stop_feedback
  if (!bosdyn_msgs__msg__StopCommandFeedback__are_equal(
      &(lhs->stop_feedback), &(rhs->stop_feedback)))
  {
    return false;
  }
  // freeze_feedback
  if (!bosdyn_msgs__msg__FreezeCommandFeedback__are_equal(
      &(lhs->freeze_feedback), &(rhs->freeze_feedback)))
  {
    return false;
  }
  // selfright_feedback
  if (!bosdyn_msgs__msg__SelfRightCommandFeedback__are_equal(
      &(lhs->selfright_feedback), &(rhs->selfright_feedback)))
  {
    return false;
  }
  // safe_power_off_feedback
  if (!bosdyn_msgs__msg__SafePowerOffCommandFeedback__are_equal(
      &(lhs->safe_power_off_feedback), &(rhs->safe_power_off_feedback)))
  {
    return false;
  }
  // battery_change_pose_feedback
  if (!bosdyn_msgs__msg__BatteryChangePoseCommandFeedback__are_equal(
      &(lhs->battery_change_pose_feedback), &(rhs->battery_change_pose_feedback)))
  {
    return false;
  }
  // payload_estimation_feedback
  if (!bosdyn_msgs__msg__PayloadEstimationCommandFeedback__are_equal(
      &(lhs->payload_estimation_feedback), &(rhs->payload_estimation_feedback)))
  {
    return false;
  }
  // constrained_manipulation_feedback
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__are_equal(
      &(lhs->constrained_manipulation_feedback), &(rhs->constrained_manipulation_feedback)))
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
bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__copy(
  const bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback * input,
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // stop_feedback
  if (!bosdyn_msgs__msg__StopCommandFeedback__copy(
      &(input->stop_feedback), &(output->stop_feedback)))
  {
    return false;
  }
  // freeze_feedback
  if (!bosdyn_msgs__msg__FreezeCommandFeedback__copy(
      &(input->freeze_feedback), &(output->freeze_feedback)))
  {
    return false;
  }
  // selfright_feedback
  if (!bosdyn_msgs__msg__SelfRightCommandFeedback__copy(
      &(input->selfright_feedback), &(output->selfright_feedback)))
  {
    return false;
  }
  // safe_power_off_feedback
  if (!bosdyn_msgs__msg__SafePowerOffCommandFeedback__copy(
      &(input->safe_power_off_feedback), &(output->safe_power_off_feedback)))
  {
    return false;
  }
  // battery_change_pose_feedback
  if (!bosdyn_msgs__msg__BatteryChangePoseCommandFeedback__copy(
      &(input->battery_change_pose_feedback), &(output->battery_change_pose_feedback)))
  {
    return false;
  }
  // payload_estimation_feedback
  if (!bosdyn_msgs__msg__PayloadEstimationCommandFeedback__copy(
      &(input->payload_estimation_feedback), &(output->payload_estimation_feedback)))
  {
    return false;
  }
  // constrained_manipulation_feedback
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__copy(
      &(input->constrained_manipulation_feedback), &(output->constrained_manipulation_feedback)))
  {
    return false;
  }
  // feedback_choice
  output->feedback_choice = input->feedback_choice;
  return true;
}

bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback *
bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback * msg = (bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback *)allocator.allocate(sizeof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback));
  bool success = bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__destroy(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence__init(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(&data[i - 1]);
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
bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence__fini(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence * array)
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
      bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(&array->data[i]);
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

bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence *
bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence * array = (bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence__destroy(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence__are_equal(const bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence * lhs, const bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence__copy(
  const bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence * input,
  bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback * data =
      (bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__FullBodyCommandFeedbackOneOfFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
