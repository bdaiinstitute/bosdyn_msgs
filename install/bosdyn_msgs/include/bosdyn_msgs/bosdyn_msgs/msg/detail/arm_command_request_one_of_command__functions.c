// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_command_request_one_of_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `arm_cartesian_command`
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request__functions.h"
// Member `arm_joint_move_command`
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_request__functions.h"
// Member `named_arm_position_command`
#include "bosdyn_msgs/msg/detail/named_arm_positions_command_request__functions.h"
// Member `arm_velocity_command`
#include "bosdyn_msgs/msg/detail/arm_velocity_command_request__functions.h"
// Member `arm_gaze_command`
#include "bosdyn_msgs/msg/detail/gaze_command_request__functions.h"
// Member `arm_stop_command`
#include "bosdyn_msgs/msg/detail/arm_stop_command_request__functions.h"
// Member `arm_drag_command`
#include "bosdyn_msgs/msg/detail/arm_drag_command_request__functions.h"
// Member `arm_impedance_command`
#include "bosdyn_msgs/msg/detail/arm_impedance_command_request__functions.h"

bool
bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__init(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand * msg)
{
  if (!msg) {
    return false;
  }
  // arm_cartesian_command
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequest__init(&msg->arm_cartesian_command)) {
    bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // arm_joint_move_command
  if (!bosdyn_msgs__msg__ArmJointMoveCommandRequest__init(&msg->arm_joint_move_command)) {
    bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // named_arm_position_command
  if (!bosdyn_msgs__msg__NamedArmPositionsCommandRequest__init(&msg->named_arm_position_command)) {
    bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // arm_velocity_command
  if (!bosdyn_msgs__msg__ArmVelocityCommandRequest__init(&msg->arm_velocity_command)) {
    bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // arm_gaze_command
  if (!bosdyn_msgs__msg__GazeCommandRequest__init(&msg->arm_gaze_command)) {
    bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // arm_stop_command
  if (!bosdyn_msgs__msg__ArmStopCommandRequest__init(&msg->arm_stop_command)) {
    bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // arm_drag_command
  if (!bosdyn_msgs__msg__ArmDragCommandRequest__init(&msg->arm_drag_command)) {
    bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // arm_impedance_command
  if (!bosdyn_msgs__msg__ArmImpedanceCommandRequest__init(&msg->arm_impedance_command)) {
    bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // command_choice
  return true;
}

void
bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand * msg)
{
  if (!msg) {
    return;
  }
  // arm_cartesian_command
  bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(&msg->arm_cartesian_command);
  // arm_joint_move_command
  bosdyn_msgs__msg__ArmJointMoveCommandRequest__fini(&msg->arm_joint_move_command);
  // named_arm_position_command
  bosdyn_msgs__msg__NamedArmPositionsCommandRequest__fini(&msg->named_arm_position_command);
  // arm_velocity_command
  bosdyn_msgs__msg__ArmVelocityCommandRequest__fini(&msg->arm_velocity_command);
  // arm_gaze_command
  bosdyn_msgs__msg__GazeCommandRequest__fini(&msg->arm_gaze_command);
  // arm_stop_command
  bosdyn_msgs__msg__ArmStopCommandRequest__fini(&msg->arm_stop_command);
  // arm_drag_command
  bosdyn_msgs__msg__ArmDragCommandRequest__fini(&msg->arm_drag_command);
  // arm_impedance_command
  bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(&msg->arm_impedance_command);
  // command_choice
}

bool
bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__are_equal(const bosdyn_msgs__msg__ArmCommandRequestOneOfCommand * lhs, const bosdyn_msgs__msg__ArmCommandRequestOneOfCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arm_cartesian_command
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequest__are_equal(
      &(lhs->arm_cartesian_command), &(rhs->arm_cartesian_command)))
  {
    return false;
  }
  // arm_joint_move_command
  if (!bosdyn_msgs__msg__ArmJointMoveCommandRequest__are_equal(
      &(lhs->arm_joint_move_command), &(rhs->arm_joint_move_command)))
  {
    return false;
  }
  // named_arm_position_command
  if (!bosdyn_msgs__msg__NamedArmPositionsCommandRequest__are_equal(
      &(lhs->named_arm_position_command), &(rhs->named_arm_position_command)))
  {
    return false;
  }
  // arm_velocity_command
  if (!bosdyn_msgs__msg__ArmVelocityCommandRequest__are_equal(
      &(lhs->arm_velocity_command), &(rhs->arm_velocity_command)))
  {
    return false;
  }
  // arm_gaze_command
  if (!bosdyn_msgs__msg__GazeCommandRequest__are_equal(
      &(lhs->arm_gaze_command), &(rhs->arm_gaze_command)))
  {
    return false;
  }
  // arm_stop_command
  if (!bosdyn_msgs__msg__ArmStopCommandRequest__are_equal(
      &(lhs->arm_stop_command), &(rhs->arm_stop_command)))
  {
    return false;
  }
  // arm_drag_command
  if (!bosdyn_msgs__msg__ArmDragCommandRequest__are_equal(
      &(lhs->arm_drag_command), &(rhs->arm_drag_command)))
  {
    return false;
  }
  // arm_impedance_command
  if (!bosdyn_msgs__msg__ArmImpedanceCommandRequest__are_equal(
      &(lhs->arm_impedance_command), &(rhs->arm_impedance_command)))
  {
    return false;
  }
  // command_choice
  if (lhs->command_choice != rhs->command_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__copy(
  const bosdyn_msgs__msg__ArmCommandRequestOneOfCommand * input,
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // arm_cartesian_command
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequest__copy(
      &(input->arm_cartesian_command), &(output->arm_cartesian_command)))
  {
    return false;
  }
  // arm_joint_move_command
  if (!bosdyn_msgs__msg__ArmJointMoveCommandRequest__copy(
      &(input->arm_joint_move_command), &(output->arm_joint_move_command)))
  {
    return false;
  }
  // named_arm_position_command
  if (!bosdyn_msgs__msg__NamedArmPositionsCommandRequest__copy(
      &(input->named_arm_position_command), &(output->named_arm_position_command)))
  {
    return false;
  }
  // arm_velocity_command
  if (!bosdyn_msgs__msg__ArmVelocityCommandRequest__copy(
      &(input->arm_velocity_command), &(output->arm_velocity_command)))
  {
    return false;
  }
  // arm_gaze_command
  if (!bosdyn_msgs__msg__GazeCommandRequest__copy(
      &(input->arm_gaze_command), &(output->arm_gaze_command)))
  {
    return false;
  }
  // arm_stop_command
  if (!bosdyn_msgs__msg__ArmStopCommandRequest__copy(
      &(input->arm_stop_command), &(output->arm_stop_command)))
  {
    return false;
  }
  // arm_drag_command
  if (!bosdyn_msgs__msg__ArmDragCommandRequest__copy(
      &(input->arm_drag_command), &(output->arm_drag_command)))
  {
    return false;
  }
  // arm_impedance_command
  if (!bosdyn_msgs__msg__ArmImpedanceCommandRequest__copy(
      &(input->arm_impedance_command), &(output->arm_impedance_command)))
  {
    return false;
  }
  // command_choice
  output->command_choice = input->command_choice;
  return true;
}

bosdyn_msgs__msg__ArmCommandRequestOneOfCommand *
bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand * msg = (bosdyn_msgs__msg__ArmCommandRequestOneOfCommand *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand));
  bool success = bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__destroy(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence__init(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmCommandRequestOneOfCommand *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence__fini(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence * array)
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
      bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence *
bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence * array = (bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence__destroy(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence__are_equal(const bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence * lhs, const bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence__copy(
  const bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence * input,
  bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmCommandRequestOneOfCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmCommandRequestOneOfCommand * data =
      (bosdyn_msgs__msg__ArmCommandRequestOneOfCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmCommandRequestOneOfCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
