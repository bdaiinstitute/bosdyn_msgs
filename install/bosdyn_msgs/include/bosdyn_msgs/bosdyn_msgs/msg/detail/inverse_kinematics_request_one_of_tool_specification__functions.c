// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfToolSpecification.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_tool_specification__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `wrist_mounted_tool`
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_wrist_mounted_tool__functions.h"
// Member `body_mounted_tool`
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_body_mounted_tool__functions.h"

bool
bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__init(bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification * msg)
{
  if (!msg) {
    return false;
  }
  // wrist_mounted_tool
  if (!bosdyn_msgs__msg__InverseKinematicsRequestWristMountedTool__init(&msg->wrist_mounted_tool)) {
    bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__fini(msg);
    return false;
  }
  // body_mounted_tool
  if (!bosdyn_msgs__msg__InverseKinematicsRequestBodyMountedTool__init(&msg->body_mounted_tool)) {
    bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__fini(msg);
    return false;
  }
  // tool_specification_choice
  return true;
}

void
bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__fini(bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification * msg)
{
  if (!msg) {
    return;
  }
  // wrist_mounted_tool
  bosdyn_msgs__msg__InverseKinematicsRequestWristMountedTool__fini(&msg->wrist_mounted_tool);
  // body_mounted_tool
  bosdyn_msgs__msg__InverseKinematicsRequestBodyMountedTool__fini(&msg->body_mounted_tool);
  // tool_specification_choice
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__are_equal(const bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification * lhs, const bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // wrist_mounted_tool
  if (!bosdyn_msgs__msg__InverseKinematicsRequestWristMountedTool__are_equal(
      &(lhs->wrist_mounted_tool), &(rhs->wrist_mounted_tool)))
  {
    return false;
  }
  // body_mounted_tool
  if (!bosdyn_msgs__msg__InverseKinematicsRequestBodyMountedTool__are_equal(
      &(lhs->body_mounted_tool), &(rhs->body_mounted_tool)))
  {
    return false;
  }
  // tool_specification_choice
  if (lhs->tool_specification_choice != rhs->tool_specification_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__copy(
  const bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification * input,
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification * output)
{
  if (!input || !output) {
    return false;
  }
  // wrist_mounted_tool
  if (!bosdyn_msgs__msg__InverseKinematicsRequestWristMountedTool__copy(
      &(input->wrist_mounted_tool), &(output->wrist_mounted_tool)))
  {
    return false;
  }
  // body_mounted_tool
  if (!bosdyn_msgs__msg__InverseKinematicsRequestBodyMountedTool__copy(
      &(input->body_mounted_tool), &(output->body_mounted_tool)))
  {
    return false;
  }
  // tool_specification_choice
  output->tool_specification_choice = input->tool_specification_choice;
  return true;
}

bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification *
bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification * msg = (bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification *)allocator.allocate(sizeof(bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification));
  bool success = bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__destroy(bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence__init(bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__fini(&data[i - 1]);
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
bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence__fini(bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence * array)
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
      bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__fini(&array->data[i]);
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

bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence *
bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence * array = (bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence__destroy(bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence__are_equal(const bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence * lhs, const bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence__copy(
  const bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence * input,
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification * data =
      (bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
