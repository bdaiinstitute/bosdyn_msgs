// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RobotImpairedState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/robot_impaired_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `impaired_status`
#include "bosdyn_msgs/msg/detail/robot_impaired_state_impaired_status__functions.h"
// Member `system_faults`
#include "bosdyn_msgs/msg/detail/system_fault__functions.h"
// Member `service_faults`
#include "bosdyn_msgs/msg/detail/service_fault__functions.h"
// Member `behavior_faults`
#include "bosdyn_msgs/msg/detail/behavior_fault__functions.h"

bool
bosdyn_msgs__msg__RobotImpairedState__init(bosdyn_msgs__msg__RobotImpairedState * msg)
{
  if (!msg) {
    return false;
  }
  // impaired_status
  if (!bosdyn_msgs__msg__RobotImpairedStateImpairedStatus__init(&msg->impaired_status)) {
    bosdyn_msgs__msg__RobotImpairedState__fini(msg);
    return false;
  }
  // system_faults
  if (!bosdyn_msgs__msg__SystemFault__Sequence__init(&msg->system_faults, 0)) {
    bosdyn_msgs__msg__RobotImpairedState__fini(msg);
    return false;
  }
  // service_faults
  if (!bosdyn_msgs__msg__ServiceFault__Sequence__init(&msg->service_faults, 0)) {
    bosdyn_msgs__msg__RobotImpairedState__fini(msg);
    return false;
  }
  // behavior_faults
  if (!bosdyn_msgs__msg__BehaviorFault__Sequence__init(&msg->behavior_faults, 0)) {
    bosdyn_msgs__msg__RobotImpairedState__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__RobotImpairedState__fini(bosdyn_msgs__msg__RobotImpairedState * msg)
{
  if (!msg) {
    return;
  }
  // impaired_status
  bosdyn_msgs__msg__RobotImpairedStateImpairedStatus__fini(&msg->impaired_status);
  // system_faults
  bosdyn_msgs__msg__SystemFault__Sequence__fini(&msg->system_faults);
  // service_faults
  bosdyn_msgs__msg__ServiceFault__Sequence__fini(&msg->service_faults);
  // behavior_faults
  bosdyn_msgs__msg__BehaviorFault__Sequence__fini(&msg->behavior_faults);
}

bool
bosdyn_msgs__msg__RobotImpairedState__are_equal(const bosdyn_msgs__msg__RobotImpairedState * lhs, const bosdyn_msgs__msg__RobotImpairedState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // impaired_status
  if (!bosdyn_msgs__msg__RobotImpairedStateImpairedStatus__are_equal(
      &(lhs->impaired_status), &(rhs->impaired_status)))
  {
    return false;
  }
  // system_faults
  if (!bosdyn_msgs__msg__SystemFault__Sequence__are_equal(
      &(lhs->system_faults), &(rhs->system_faults)))
  {
    return false;
  }
  // service_faults
  if (!bosdyn_msgs__msg__ServiceFault__Sequence__are_equal(
      &(lhs->service_faults), &(rhs->service_faults)))
  {
    return false;
  }
  // behavior_faults
  if (!bosdyn_msgs__msg__BehaviorFault__Sequence__are_equal(
      &(lhs->behavior_faults), &(rhs->behavior_faults)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RobotImpairedState__copy(
  const bosdyn_msgs__msg__RobotImpairedState * input,
  bosdyn_msgs__msg__RobotImpairedState * output)
{
  if (!input || !output) {
    return false;
  }
  // impaired_status
  if (!bosdyn_msgs__msg__RobotImpairedStateImpairedStatus__copy(
      &(input->impaired_status), &(output->impaired_status)))
  {
    return false;
  }
  // system_faults
  if (!bosdyn_msgs__msg__SystemFault__Sequence__copy(
      &(input->system_faults), &(output->system_faults)))
  {
    return false;
  }
  // service_faults
  if (!bosdyn_msgs__msg__ServiceFault__Sequence__copy(
      &(input->service_faults), &(output->service_faults)))
  {
    return false;
  }
  // behavior_faults
  if (!bosdyn_msgs__msg__BehaviorFault__Sequence__copy(
      &(input->behavior_faults), &(output->behavior_faults)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__RobotImpairedState *
bosdyn_msgs__msg__RobotImpairedState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RobotImpairedState * msg = (bosdyn_msgs__msg__RobotImpairedState *)allocator.allocate(sizeof(bosdyn_msgs__msg__RobotImpairedState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RobotImpairedState));
  bool success = bosdyn_msgs__msg__RobotImpairedState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RobotImpairedState__destroy(bosdyn_msgs__msg__RobotImpairedState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RobotImpairedState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RobotImpairedState__Sequence__init(bosdyn_msgs__msg__RobotImpairedState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RobotImpairedState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RobotImpairedState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RobotImpairedState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RobotImpairedState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RobotImpairedState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RobotImpairedState__Sequence__fini(bosdyn_msgs__msg__RobotImpairedState__Sequence * array)
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
      bosdyn_msgs__msg__RobotImpairedState__fini(&array->data[i]);
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

bosdyn_msgs__msg__RobotImpairedState__Sequence *
bosdyn_msgs__msg__RobotImpairedState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RobotImpairedState__Sequence * array = (bosdyn_msgs__msg__RobotImpairedState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RobotImpairedState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RobotImpairedState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RobotImpairedState__Sequence__destroy(bosdyn_msgs__msg__RobotImpairedState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RobotImpairedState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RobotImpairedState__Sequence__are_equal(const bosdyn_msgs__msg__RobotImpairedState__Sequence * lhs, const bosdyn_msgs__msg__RobotImpairedState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RobotImpairedState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RobotImpairedState__Sequence__copy(
  const bosdyn_msgs__msg__RobotImpairedState__Sequence * input,
  bosdyn_msgs__msg__RobotImpairedState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RobotImpairedState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RobotImpairedState * data =
      (bosdyn_msgs__msg__RobotImpairedState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RobotImpairedState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RobotImpairedState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RobotImpairedState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
