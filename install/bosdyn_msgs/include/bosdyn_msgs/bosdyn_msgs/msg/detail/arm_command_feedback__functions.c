// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmCommandFeedback.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_command_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `feedback`
#include "bosdyn_msgs/msg/detail/arm_command_feedback_one_of_feedback__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/robot_command_feedback_status_status__functions.h"

bool
bosdyn_msgs__msg__ArmCommandFeedback__init(bosdyn_msgs__msg__ArmCommandFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__init(&msg->feedback)) {
    bosdyn_msgs__msg__ArmCommandFeedback__fini(msg);
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__RobotCommandFeedbackStatusStatus__init(&msg->status)) {
    bosdyn_msgs__msg__ArmCommandFeedback__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__ArmCommandFeedback__fini(bosdyn_msgs__msg__ArmCommandFeedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__fini(&msg->feedback);
  // status
  bosdyn_msgs__msg__RobotCommandFeedbackStatusStatus__fini(&msg->status);
}

bool
bosdyn_msgs__msg__ArmCommandFeedback__are_equal(const bosdyn_msgs__msg__ArmCommandFeedback * lhs, const bosdyn_msgs__msg__ArmCommandFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (!bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__RobotCommandFeedbackStatusStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmCommandFeedback__copy(
  const bosdyn_msgs__msg__ArmCommandFeedback * input,
  bosdyn_msgs__msg__ArmCommandFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  if (!bosdyn_msgs__msg__ArmCommandFeedbackOneOfFeedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__RobotCommandFeedbackStatusStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__ArmCommandFeedback *
bosdyn_msgs__msg__ArmCommandFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCommandFeedback * msg = (bosdyn_msgs__msg__ArmCommandFeedback *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmCommandFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmCommandFeedback));
  bool success = bosdyn_msgs__msg__ArmCommandFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmCommandFeedback__destroy(bosdyn_msgs__msg__ArmCommandFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmCommandFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmCommandFeedback__Sequence__init(bosdyn_msgs__msg__ArmCommandFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCommandFeedback * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmCommandFeedback *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmCommandFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmCommandFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmCommandFeedback__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmCommandFeedback__Sequence__fini(bosdyn_msgs__msg__ArmCommandFeedback__Sequence * array)
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
      bosdyn_msgs__msg__ArmCommandFeedback__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmCommandFeedback__Sequence *
bosdyn_msgs__msg__ArmCommandFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCommandFeedback__Sequence * array = (bosdyn_msgs__msg__ArmCommandFeedback__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmCommandFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmCommandFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmCommandFeedback__Sequence__destroy(bosdyn_msgs__msg__ArmCommandFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmCommandFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmCommandFeedback__Sequence__are_equal(const bosdyn_msgs__msg__ArmCommandFeedback__Sequence * lhs, const bosdyn_msgs__msg__ArmCommandFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmCommandFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmCommandFeedback__Sequence__copy(
  const bosdyn_msgs__msg__ArmCommandFeedback__Sequence * input,
  bosdyn_msgs__msg__ArmCommandFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmCommandFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmCommandFeedback * data =
      (bosdyn_msgs__msg__ArmCommandFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmCommandFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmCommandFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmCommandFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
