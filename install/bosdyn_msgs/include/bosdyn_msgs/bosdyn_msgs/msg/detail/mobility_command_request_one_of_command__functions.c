// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/MobilityCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/mobility_command_request_one_of_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `se2_trajectory_request`
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_request__functions.h"
// Member `se2_velocity_request`
#include "bosdyn_msgs/msg/detail/se2_velocity_command_request__functions.h"
// Member `sit_request`
#include "bosdyn_msgs/msg/detail/sit_command_request__functions.h"
// Member `stand_request`
#include "bosdyn_msgs/msg/detail/stand_command_request__functions.h"
// Member `stance_request`
#include "bosdyn_msgs/msg/detail/stance_command_request__functions.h"
// Member `stop_request`
#include "bosdyn_msgs/msg/detail/stop_command_request__functions.h"
// Member `follow_arm_request`
#include "bosdyn_msgs/msg/detail/follow_arm_command_request__functions.h"

bool
bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__init(bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand * msg)
{
  if (!msg) {
    return false;
  }
  // se2_trajectory_request
  if (!bosdyn_msgs__msg__SE2TrajectoryCommandRequest__init(&msg->se2_trajectory_request)) {
    bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // se2_velocity_request
  if (!bosdyn_msgs__msg__SE2VelocityCommandRequest__init(&msg->se2_velocity_request)) {
    bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // sit_request
  if (!bosdyn_msgs__msg__SitCommandRequest__init(&msg->sit_request)) {
    bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // stand_request
  if (!bosdyn_msgs__msg__StandCommandRequest__init(&msg->stand_request)) {
    bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // stance_request
  if (!bosdyn_msgs__msg__StanceCommandRequest__init(&msg->stance_request)) {
    bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // stop_request
  if (!bosdyn_msgs__msg__StopCommandRequest__init(&msg->stop_request)) {
    bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // follow_arm_request
  if (!bosdyn_msgs__msg__FollowArmCommandRequest__init(&msg->follow_arm_request)) {
    bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // command_choice
  return true;
}

void
bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__fini(bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand * msg)
{
  if (!msg) {
    return;
  }
  // se2_trajectory_request
  bosdyn_msgs__msg__SE2TrajectoryCommandRequest__fini(&msg->se2_trajectory_request);
  // se2_velocity_request
  bosdyn_msgs__msg__SE2VelocityCommandRequest__fini(&msg->se2_velocity_request);
  // sit_request
  bosdyn_msgs__msg__SitCommandRequest__fini(&msg->sit_request);
  // stand_request
  bosdyn_msgs__msg__StandCommandRequest__fini(&msg->stand_request);
  // stance_request
  bosdyn_msgs__msg__StanceCommandRequest__fini(&msg->stance_request);
  // stop_request
  bosdyn_msgs__msg__StopCommandRequest__fini(&msg->stop_request);
  // follow_arm_request
  bosdyn_msgs__msg__FollowArmCommandRequest__fini(&msg->follow_arm_request);
  // command_choice
}

bool
bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__are_equal(const bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand * lhs, const bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // se2_trajectory_request
  if (!bosdyn_msgs__msg__SE2TrajectoryCommandRequest__are_equal(
      &(lhs->se2_trajectory_request), &(rhs->se2_trajectory_request)))
  {
    return false;
  }
  // se2_velocity_request
  if (!bosdyn_msgs__msg__SE2VelocityCommandRequest__are_equal(
      &(lhs->se2_velocity_request), &(rhs->se2_velocity_request)))
  {
    return false;
  }
  // sit_request
  if (!bosdyn_msgs__msg__SitCommandRequest__are_equal(
      &(lhs->sit_request), &(rhs->sit_request)))
  {
    return false;
  }
  // stand_request
  if (!bosdyn_msgs__msg__StandCommandRequest__are_equal(
      &(lhs->stand_request), &(rhs->stand_request)))
  {
    return false;
  }
  // stance_request
  if (!bosdyn_msgs__msg__StanceCommandRequest__are_equal(
      &(lhs->stance_request), &(rhs->stance_request)))
  {
    return false;
  }
  // stop_request
  if (!bosdyn_msgs__msg__StopCommandRequest__are_equal(
      &(lhs->stop_request), &(rhs->stop_request)))
  {
    return false;
  }
  // follow_arm_request
  if (!bosdyn_msgs__msg__FollowArmCommandRequest__are_equal(
      &(lhs->follow_arm_request), &(rhs->follow_arm_request)))
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
bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__copy(
  const bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand * input,
  bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // se2_trajectory_request
  if (!bosdyn_msgs__msg__SE2TrajectoryCommandRequest__copy(
      &(input->se2_trajectory_request), &(output->se2_trajectory_request)))
  {
    return false;
  }
  // se2_velocity_request
  if (!bosdyn_msgs__msg__SE2VelocityCommandRequest__copy(
      &(input->se2_velocity_request), &(output->se2_velocity_request)))
  {
    return false;
  }
  // sit_request
  if (!bosdyn_msgs__msg__SitCommandRequest__copy(
      &(input->sit_request), &(output->sit_request)))
  {
    return false;
  }
  // stand_request
  if (!bosdyn_msgs__msg__StandCommandRequest__copy(
      &(input->stand_request), &(output->stand_request)))
  {
    return false;
  }
  // stance_request
  if (!bosdyn_msgs__msg__StanceCommandRequest__copy(
      &(input->stance_request), &(output->stance_request)))
  {
    return false;
  }
  // stop_request
  if (!bosdyn_msgs__msg__StopCommandRequest__copy(
      &(input->stop_request), &(output->stop_request)))
  {
    return false;
  }
  // follow_arm_request
  if (!bosdyn_msgs__msg__FollowArmCommandRequest__copy(
      &(input->follow_arm_request), &(output->follow_arm_request)))
  {
    return false;
  }
  // command_choice
  output->command_choice = input->command_choice;
  return true;
}

bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand *
bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand * msg = (bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand *)allocator.allocate(sizeof(bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand));
  bool success = bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__destroy(bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence__init(bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__fini(&data[i - 1]);
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
bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence__fini(bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence * array)
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
      bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__fini(&array->data[i]);
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

bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence *
bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence * array = (bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence__destroy(bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence__are_equal(const bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence * lhs, const bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence__copy(
  const bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence * input,
  bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand * data =
      (bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__MobilityCommandRequestOneOfCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
