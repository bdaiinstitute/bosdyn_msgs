// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/GazeCommandFeedback.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/gaze_command_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "bosdyn_msgs/msg/detail/gaze_command_feedback_status__functions.h"

bool
bosdyn_msgs__msg__GazeCommandFeedback__init(bosdyn_msgs__msg__GazeCommandFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__GazeCommandFeedbackStatus__init(&msg->status)) {
    bosdyn_msgs__msg__GazeCommandFeedback__fini(msg);
    return false;
  }
  // gazing_at_target
  // gaze_to_target_rotation_measured
  // hand_position_at_goal
  // hand_distance_to_goal_measured
  // hand_roll_at_goal
  // hand_roll_to_target_roll_measured
  return true;
}

void
bosdyn_msgs__msg__GazeCommandFeedback__fini(bosdyn_msgs__msg__GazeCommandFeedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  bosdyn_msgs__msg__GazeCommandFeedbackStatus__fini(&msg->status);
  // gazing_at_target
  // gaze_to_target_rotation_measured
  // hand_position_at_goal
  // hand_distance_to_goal_measured
  // hand_roll_at_goal
  // hand_roll_to_target_roll_measured
}

bool
bosdyn_msgs__msg__GazeCommandFeedback__are_equal(const bosdyn_msgs__msg__GazeCommandFeedback * lhs, const bosdyn_msgs__msg__GazeCommandFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__GazeCommandFeedbackStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // gazing_at_target
  if (lhs->gazing_at_target != rhs->gazing_at_target) {
    return false;
  }
  // gaze_to_target_rotation_measured
  if (lhs->gaze_to_target_rotation_measured != rhs->gaze_to_target_rotation_measured) {
    return false;
  }
  // hand_position_at_goal
  if (lhs->hand_position_at_goal != rhs->hand_position_at_goal) {
    return false;
  }
  // hand_distance_to_goal_measured
  if (lhs->hand_distance_to_goal_measured != rhs->hand_distance_to_goal_measured) {
    return false;
  }
  // hand_roll_at_goal
  if (lhs->hand_roll_at_goal != rhs->hand_roll_at_goal) {
    return false;
  }
  // hand_roll_to_target_roll_measured
  if (lhs->hand_roll_to_target_roll_measured != rhs->hand_roll_to_target_roll_measured) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__GazeCommandFeedback__copy(
  const bosdyn_msgs__msg__GazeCommandFeedback * input,
  bosdyn_msgs__msg__GazeCommandFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__GazeCommandFeedbackStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // gazing_at_target
  output->gazing_at_target = input->gazing_at_target;
  // gaze_to_target_rotation_measured
  output->gaze_to_target_rotation_measured = input->gaze_to_target_rotation_measured;
  // hand_position_at_goal
  output->hand_position_at_goal = input->hand_position_at_goal;
  // hand_distance_to_goal_measured
  output->hand_distance_to_goal_measured = input->hand_distance_to_goal_measured;
  // hand_roll_at_goal
  output->hand_roll_at_goal = input->hand_roll_at_goal;
  // hand_roll_to_target_roll_measured
  output->hand_roll_to_target_roll_measured = input->hand_roll_to_target_roll_measured;
  return true;
}

bosdyn_msgs__msg__GazeCommandFeedback *
bosdyn_msgs__msg__GazeCommandFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GazeCommandFeedback * msg = (bosdyn_msgs__msg__GazeCommandFeedback *)allocator.allocate(sizeof(bosdyn_msgs__msg__GazeCommandFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__GazeCommandFeedback));
  bool success = bosdyn_msgs__msg__GazeCommandFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__GazeCommandFeedback__destroy(bosdyn_msgs__msg__GazeCommandFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__GazeCommandFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__GazeCommandFeedback__Sequence__init(bosdyn_msgs__msg__GazeCommandFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GazeCommandFeedback * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__GazeCommandFeedback *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__GazeCommandFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__GazeCommandFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__GazeCommandFeedback__fini(&data[i - 1]);
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
bosdyn_msgs__msg__GazeCommandFeedback__Sequence__fini(bosdyn_msgs__msg__GazeCommandFeedback__Sequence * array)
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
      bosdyn_msgs__msg__GazeCommandFeedback__fini(&array->data[i]);
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

bosdyn_msgs__msg__GazeCommandFeedback__Sequence *
bosdyn_msgs__msg__GazeCommandFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GazeCommandFeedback__Sequence * array = (bosdyn_msgs__msg__GazeCommandFeedback__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__GazeCommandFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__GazeCommandFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__GazeCommandFeedback__Sequence__destroy(bosdyn_msgs__msg__GazeCommandFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__GazeCommandFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__GazeCommandFeedback__Sequence__are_equal(const bosdyn_msgs__msg__GazeCommandFeedback__Sequence * lhs, const bosdyn_msgs__msg__GazeCommandFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__GazeCommandFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__GazeCommandFeedback__Sequence__copy(
  const bosdyn_msgs__msg__GazeCommandFeedback__Sequence * input,
  bosdyn_msgs__msg__GazeCommandFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__GazeCommandFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__GazeCommandFeedback * data =
      (bosdyn_msgs__msg__GazeCommandFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__GazeCommandFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__GazeCommandFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__GazeCommandFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
