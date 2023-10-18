// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandFeedback.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_feedback_status__functions.h"
// Member `desired_wrench_odom_frame`
#include "geometry_msgs/msg/detail/wrench__functions.h"

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__init(bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus__init(&msg->status)) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__fini(msg);
    return false;
  }
  // desired_wrench_odom_frame
  if (!geometry_msgs__msg__Wrench__init(&msg->desired_wrench_odom_frame)) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__fini(msg);
    return false;
  }
  // desired_wrench_odom_frame_is_set
  // estimation_activated
  // estimation_activated_is_set
  return true;
}

void
bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__fini(bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus__fini(&msg->status);
  // desired_wrench_odom_frame
  geometry_msgs__msg__Wrench__fini(&msg->desired_wrench_odom_frame);
  // desired_wrench_odom_frame_is_set
  // estimation_activated
  // estimation_activated_is_set
}

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__are_equal(const bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback * lhs, const bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // desired_wrench_odom_frame
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->desired_wrench_odom_frame), &(rhs->desired_wrench_odom_frame)))
  {
    return false;
  }
  // desired_wrench_odom_frame_is_set
  if (lhs->desired_wrench_odom_frame_is_set != rhs->desired_wrench_odom_frame_is_set) {
    return false;
  }
  // estimation_activated
  if (lhs->estimation_activated != rhs->estimation_activated) {
    return false;
  }
  // estimation_activated_is_set
  if (lhs->estimation_activated_is_set != rhs->estimation_activated_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__copy(
  const bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback * input,
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandFeedbackStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // desired_wrench_odom_frame
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->desired_wrench_odom_frame), &(output->desired_wrench_odom_frame)))
  {
    return false;
  }
  // desired_wrench_odom_frame_is_set
  output->desired_wrench_odom_frame_is_set = input->desired_wrench_odom_frame_is_set;
  // estimation_activated
  output->estimation_activated = input->estimation_activated;
  // estimation_activated_is_set
  output->estimation_activated_is_set = input->estimation_activated_is_set;
  return true;
}

bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback *
bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback * msg = (bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback *)allocator.allocate(sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback));
  bool success = bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__destroy(bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence__init(bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence__fini(bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence * array)
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
      bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__fini(&array->data[i]);
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

bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence *
bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence * array = (bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence__destroy(bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence__are_equal(const bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence * lhs, const bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence__copy(
  const bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence * input,
  bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback * data =
      (bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ConstrainedManipulationCommandFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
