// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/FullBodyCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/full_body_command_request_one_of_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stop_request`
#include "bosdyn_msgs/msg/detail/stop_command_request__functions.h"
// Member `freeze_request`
#include "bosdyn_msgs/msg/detail/freeze_command_request__functions.h"
// Member `selfright_request`
#include "bosdyn_msgs/msg/detail/self_right_command_request__functions.h"
// Member `safe_power_off_request`
#include "bosdyn_msgs/msg/detail/safe_power_off_command_request__functions.h"
// Member `battery_change_pose_request`
#include "bosdyn_msgs/msg/detail/battery_change_pose_command_request__functions.h"
// Member `payload_estimation_request`
#include "bosdyn_msgs/msg/detail/payload_estimation_command_request__functions.h"
// Member `constrained_manipulation_request`
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request__functions.h"

bool
bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__init(bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand * msg)
{
  if (!msg) {
    return false;
  }
  // stop_request
  if (!bosdyn_msgs__msg__StopCommandRequest__init(&msg->stop_request)) {
    bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // freeze_request
  if (!bosdyn_msgs__msg__FreezeCommandRequest__init(&msg->freeze_request)) {
    bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // selfright_request
  if (!bosdyn_msgs__msg__SelfRightCommandRequest__init(&msg->selfright_request)) {
    bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // safe_power_off_request
  if (!bosdyn_msgs__msg__SafePowerOffCommandRequest__init(&msg->safe_power_off_request)) {
    bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // battery_change_pose_request
  if (!bosdyn_msgs__msg__BatteryChangePoseCommandRequest__init(&msg->battery_change_pose_request)) {
    bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // payload_estimation_request
  if (!bosdyn_msgs__msg__PayloadEstimationCommandRequest__init(&msg->payload_estimation_request)) {
    bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // constrained_manipulation_request
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__init(&msg->constrained_manipulation_request)) {
    bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // command_choice
  return true;
}

void
bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__fini(bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand * msg)
{
  if (!msg) {
    return;
  }
  // stop_request
  bosdyn_msgs__msg__StopCommandRequest__fini(&msg->stop_request);
  // freeze_request
  bosdyn_msgs__msg__FreezeCommandRequest__fini(&msg->freeze_request);
  // selfright_request
  bosdyn_msgs__msg__SelfRightCommandRequest__fini(&msg->selfright_request);
  // safe_power_off_request
  bosdyn_msgs__msg__SafePowerOffCommandRequest__fini(&msg->safe_power_off_request);
  // battery_change_pose_request
  bosdyn_msgs__msg__BatteryChangePoseCommandRequest__fini(&msg->battery_change_pose_request);
  // payload_estimation_request
  bosdyn_msgs__msg__PayloadEstimationCommandRequest__fini(&msg->payload_estimation_request);
  // constrained_manipulation_request
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(&msg->constrained_manipulation_request);
  // command_choice
}

bool
bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__are_equal(const bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand * lhs, const bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stop_request
  if (!bosdyn_msgs__msg__StopCommandRequest__are_equal(
      &(lhs->stop_request), &(rhs->stop_request)))
  {
    return false;
  }
  // freeze_request
  if (!bosdyn_msgs__msg__FreezeCommandRequest__are_equal(
      &(lhs->freeze_request), &(rhs->freeze_request)))
  {
    return false;
  }
  // selfright_request
  if (!bosdyn_msgs__msg__SelfRightCommandRequest__are_equal(
      &(lhs->selfright_request), &(rhs->selfright_request)))
  {
    return false;
  }
  // safe_power_off_request
  if (!bosdyn_msgs__msg__SafePowerOffCommandRequest__are_equal(
      &(lhs->safe_power_off_request), &(rhs->safe_power_off_request)))
  {
    return false;
  }
  // battery_change_pose_request
  if (!bosdyn_msgs__msg__BatteryChangePoseCommandRequest__are_equal(
      &(lhs->battery_change_pose_request), &(rhs->battery_change_pose_request)))
  {
    return false;
  }
  // payload_estimation_request
  if (!bosdyn_msgs__msg__PayloadEstimationCommandRequest__are_equal(
      &(lhs->payload_estimation_request), &(rhs->payload_estimation_request)))
  {
    return false;
  }
  // constrained_manipulation_request
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__are_equal(
      &(lhs->constrained_manipulation_request), &(rhs->constrained_manipulation_request)))
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
bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__copy(
  const bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand * input,
  bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // stop_request
  if (!bosdyn_msgs__msg__StopCommandRequest__copy(
      &(input->stop_request), &(output->stop_request)))
  {
    return false;
  }
  // freeze_request
  if (!bosdyn_msgs__msg__FreezeCommandRequest__copy(
      &(input->freeze_request), &(output->freeze_request)))
  {
    return false;
  }
  // selfright_request
  if (!bosdyn_msgs__msg__SelfRightCommandRequest__copy(
      &(input->selfright_request), &(output->selfright_request)))
  {
    return false;
  }
  // safe_power_off_request
  if (!bosdyn_msgs__msg__SafePowerOffCommandRequest__copy(
      &(input->safe_power_off_request), &(output->safe_power_off_request)))
  {
    return false;
  }
  // battery_change_pose_request
  if (!bosdyn_msgs__msg__BatteryChangePoseCommandRequest__copy(
      &(input->battery_change_pose_request), &(output->battery_change_pose_request)))
  {
    return false;
  }
  // payload_estimation_request
  if (!bosdyn_msgs__msg__PayloadEstimationCommandRequest__copy(
      &(input->payload_estimation_request), &(output->payload_estimation_request)))
  {
    return false;
  }
  // constrained_manipulation_request
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__copy(
      &(input->constrained_manipulation_request), &(output->constrained_manipulation_request)))
  {
    return false;
  }
  // command_choice
  output->command_choice = input->command_choice;
  return true;
}

bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand *
bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand * msg = (bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand *)allocator.allocate(sizeof(bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand));
  bool success = bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__destroy(bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence__init(bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__fini(&data[i - 1]);
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
bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence__fini(bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence * array)
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
      bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__fini(&array->data[i]);
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

bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence *
bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence * array = (bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence__destroy(bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence__are_equal(const bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence * lhs, const bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence__copy(
  const bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence * input,
  bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand * data =
      (bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__FullBodyCommandRequestOneOfCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
