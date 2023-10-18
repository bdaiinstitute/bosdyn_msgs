// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ActionAfterOneOfAction.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/action_after_one_of_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `record_event`
#include "bosdyn_msgs/msg/detail/action_after_record_event__functions.h"
// Member `auto_return`
#include "bosdyn_msgs/msg/detail/action_after_auto_return__functions.h"
// Member `controlled_motors_off`
#include "bosdyn_msgs/msg/detail/action_after_controlled_motors_off__functions.h"
// Member `immediate_robot_off`
#include "bosdyn_msgs/msg/detail/action_after_immediate_robot_off__functions.h"
// Member `lease_stale`
#include "bosdyn_msgs/msg/detail/action_after_lease_stale__functions.h"

bool
bosdyn_msgs__msg__ActionAfterOneOfAction__init(bosdyn_msgs__msg__ActionAfterOneOfAction * msg)
{
  if (!msg) {
    return false;
  }
  // record_event
  if (!bosdyn_msgs__msg__ActionAfterRecordEvent__init(&msg->record_event)) {
    bosdyn_msgs__msg__ActionAfterOneOfAction__fini(msg);
    return false;
  }
  // auto_return
  if (!bosdyn_msgs__msg__ActionAfterAutoReturn__init(&msg->auto_return)) {
    bosdyn_msgs__msg__ActionAfterOneOfAction__fini(msg);
    return false;
  }
  // controlled_motors_off
  if (!bosdyn_msgs__msg__ActionAfterControlledMotorsOff__init(&msg->controlled_motors_off)) {
    bosdyn_msgs__msg__ActionAfterOneOfAction__fini(msg);
    return false;
  }
  // immediate_robot_off
  if (!bosdyn_msgs__msg__ActionAfterImmediateRobotOff__init(&msg->immediate_robot_off)) {
    bosdyn_msgs__msg__ActionAfterOneOfAction__fini(msg);
    return false;
  }
  // lease_stale
  if (!bosdyn_msgs__msg__ActionAfterLeaseStale__init(&msg->lease_stale)) {
    bosdyn_msgs__msg__ActionAfterOneOfAction__fini(msg);
    return false;
  }
  // action_choice
  return true;
}

void
bosdyn_msgs__msg__ActionAfterOneOfAction__fini(bosdyn_msgs__msg__ActionAfterOneOfAction * msg)
{
  if (!msg) {
    return;
  }
  // record_event
  bosdyn_msgs__msg__ActionAfterRecordEvent__fini(&msg->record_event);
  // auto_return
  bosdyn_msgs__msg__ActionAfterAutoReturn__fini(&msg->auto_return);
  // controlled_motors_off
  bosdyn_msgs__msg__ActionAfterControlledMotorsOff__fini(&msg->controlled_motors_off);
  // immediate_robot_off
  bosdyn_msgs__msg__ActionAfterImmediateRobotOff__fini(&msg->immediate_robot_off);
  // lease_stale
  bosdyn_msgs__msg__ActionAfterLeaseStale__fini(&msg->lease_stale);
  // action_choice
}

bool
bosdyn_msgs__msg__ActionAfterOneOfAction__are_equal(const bosdyn_msgs__msg__ActionAfterOneOfAction * lhs, const bosdyn_msgs__msg__ActionAfterOneOfAction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // record_event
  if (!bosdyn_msgs__msg__ActionAfterRecordEvent__are_equal(
      &(lhs->record_event), &(rhs->record_event)))
  {
    return false;
  }
  // auto_return
  if (!bosdyn_msgs__msg__ActionAfterAutoReturn__are_equal(
      &(lhs->auto_return), &(rhs->auto_return)))
  {
    return false;
  }
  // controlled_motors_off
  if (!bosdyn_msgs__msg__ActionAfterControlledMotorsOff__are_equal(
      &(lhs->controlled_motors_off), &(rhs->controlled_motors_off)))
  {
    return false;
  }
  // immediate_robot_off
  if (!bosdyn_msgs__msg__ActionAfterImmediateRobotOff__are_equal(
      &(lhs->immediate_robot_off), &(rhs->immediate_robot_off)))
  {
    return false;
  }
  // lease_stale
  if (!bosdyn_msgs__msg__ActionAfterLeaseStale__are_equal(
      &(lhs->lease_stale), &(rhs->lease_stale)))
  {
    return false;
  }
  // action_choice
  if (lhs->action_choice != rhs->action_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionAfterOneOfAction__copy(
  const bosdyn_msgs__msg__ActionAfterOneOfAction * input,
  bosdyn_msgs__msg__ActionAfterOneOfAction * output)
{
  if (!input || !output) {
    return false;
  }
  // record_event
  if (!bosdyn_msgs__msg__ActionAfterRecordEvent__copy(
      &(input->record_event), &(output->record_event)))
  {
    return false;
  }
  // auto_return
  if (!bosdyn_msgs__msg__ActionAfterAutoReturn__copy(
      &(input->auto_return), &(output->auto_return)))
  {
    return false;
  }
  // controlled_motors_off
  if (!bosdyn_msgs__msg__ActionAfterControlledMotorsOff__copy(
      &(input->controlled_motors_off), &(output->controlled_motors_off)))
  {
    return false;
  }
  // immediate_robot_off
  if (!bosdyn_msgs__msg__ActionAfterImmediateRobotOff__copy(
      &(input->immediate_robot_off), &(output->immediate_robot_off)))
  {
    return false;
  }
  // lease_stale
  if (!bosdyn_msgs__msg__ActionAfterLeaseStale__copy(
      &(input->lease_stale), &(output->lease_stale)))
  {
    return false;
  }
  // action_choice
  output->action_choice = input->action_choice;
  return true;
}

bosdyn_msgs__msg__ActionAfterOneOfAction *
bosdyn_msgs__msg__ActionAfterOneOfAction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionAfterOneOfAction * msg = (bosdyn_msgs__msg__ActionAfterOneOfAction *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionAfterOneOfAction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ActionAfterOneOfAction));
  bool success = bosdyn_msgs__msg__ActionAfterOneOfAction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ActionAfterOneOfAction__destroy(bosdyn_msgs__msg__ActionAfterOneOfAction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ActionAfterOneOfAction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence__init(bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionAfterOneOfAction * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ActionAfterOneOfAction *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ActionAfterOneOfAction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ActionAfterOneOfAction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ActionAfterOneOfAction__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence__fini(bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence * array)
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
      bosdyn_msgs__msg__ActionAfterOneOfAction__fini(&array->data[i]);
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

bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence *
bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence * array = (bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence__destroy(bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence__are_equal(const bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence * lhs, const bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ActionAfterOneOfAction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence__copy(
  const bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence * input,
  bosdyn_msgs__msg__ActionAfterOneOfAction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ActionAfterOneOfAction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ActionAfterOneOfAction * data =
      (bosdyn_msgs__msg__ActionAfterOneOfAction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ActionAfterOneOfAction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ActionAfterOneOfAction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ActionAfterOneOfAction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
