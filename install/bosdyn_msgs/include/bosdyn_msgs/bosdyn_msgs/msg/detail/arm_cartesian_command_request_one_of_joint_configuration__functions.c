// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmCartesianCommandRequestOneOfJointConfiguration.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request_one_of_joint_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `preferred_joint_configuration`
#include "bosdyn_msgs/msg/detail/arm_joint_position__functions.h"

bool
bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__init(bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration * msg)
{
  if (!msg) {
    return false;
  }
  // force_remain_near_current_joint_configuration
  // preferred_joint_configuration
  if (!bosdyn_msgs__msg__ArmJointPosition__init(&msg->preferred_joint_configuration)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__fini(msg);
    return false;
  }
  // joint_configuration_choice
  return true;
}

void
bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__fini(bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration * msg)
{
  if (!msg) {
    return;
  }
  // force_remain_near_current_joint_configuration
  // preferred_joint_configuration
  bosdyn_msgs__msg__ArmJointPosition__fini(&msg->preferred_joint_configuration);
  // joint_configuration_choice
}

bool
bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__are_equal(const bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration * lhs, const bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // force_remain_near_current_joint_configuration
  if (lhs->force_remain_near_current_joint_configuration != rhs->force_remain_near_current_joint_configuration) {
    return false;
  }
  // preferred_joint_configuration
  if (!bosdyn_msgs__msg__ArmJointPosition__are_equal(
      &(lhs->preferred_joint_configuration), &(rhs->preferred_joint_configuration)))
  {
    return false;
  }
  // joint_configuration_choice
  if (lhs->joint_configuration_choice != rhs->joint_configuration_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__copy(
  const bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration * input,
  bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration * output)
{
  if (!input || !output) {
    return false;
  }
  // force_remain_near_current_joint_configuration
  output->force_remain_near_current_joint_configuration = input->force_remain_near_current_joint_configuration;
  // preferred_joint_configuration
  if (!bosdyn_msgs__msg__ArmJointPosition__copy(
      &(input->preferred_joint_configuration), &(output->preferred_joint_configuration)))
  {
    return false;
  }
  // joint_configuration_choice
  output->joint_configuration_choice = input->joint_configuration_choice;
  return true;
}

bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration *
bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration * msg = (bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration));
  bool success = bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__destroy(bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence__init(bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence__fini(bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence * array)
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
      bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence *
bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence * array = (bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence__destroy(bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence__are_equal(const bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence * lhs, const bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence__copy(
  const bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence * input,
  bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration * data =
      (bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
