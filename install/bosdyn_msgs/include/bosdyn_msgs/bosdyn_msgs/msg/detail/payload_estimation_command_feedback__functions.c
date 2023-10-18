// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PayloadEstimationCommandFeedback.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback_status__functions.h"
// Member `error`
#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback_error__functions.h"
// Member `estimated_payload`
#include "bosdyn_msgs/msg/detail/payload__functions.h"

bool
bosdyn_msgs__msg__PayloadEstimationCommandFeedback__init(bosdyn_msgs__msg__PayloadEstimationCommandFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__PayloadEstimationCommandFeedbackStatus__init(&msg->status)) {
    bosdyn_msgs__msg__PayloadEstimationCommandFeedback__fini(msg);
    return false;
  }
  // progress
  // error
  if (!bosdyn_msgs__msg__PayloadEstimationCommandFeedbackError__init(&msg->error)) {
    bosdyn_msgs__msg__PayloadEstimationCommandFeedback__fini(msg);
    return false;
  }
  // estimated_payload
  if (!bosdyn_msgs__msg__Payload__init(&msg->estimated_payload)) {
    bosdyn_msgs__msg__PayloadEstimationCommandFeedback__fini(msg);
    return false;
  }
  // estimated_payload_is_set
  return true;
}

void
bosdyn_msgs__msg__PayloadEstimationCommandFeedback__fini(bosdyn_msgs__msg__PayloadEstimationCommandFeedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  bosdyn_msgs__msg__PayloadEstimationCommandFeedbackStatus__fini(&msg->status);
  // progress
  // error
  bosdyn_msgs__msg__PayloadEstimationCommandFeedbackError__fini(&msg->error);
  // estimated_payload
  bosdyn_msgs__msg__Payload__fini(&msg->estimated_payload);
  // estimated_payload_is_set
}

bool
bosdyn_msgs__msg__PayloadEstimationCommandFeedback__are_equal(const bosdyn_msgs__msg__PayloadEstimationCommandFeedback * lhs, const bosdyn_msgs__msg__PayloadEstimationCommandFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__PayloadEstimationCommandFeedbackStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // progress
  if (lhs->progress != rhs->progress) {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__PayloadEstimationCommandFeedbackError__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  // estimated_payload
  if (!bosdyn_msgs__msg__Payload__are_equal(
      &(lhs->estimated_payload), &(rhs->estimated_payload)))
  {
    return false;
  }
  // estimated_payload_is_set
  if (lhs->estimated_payload_is_set != rhs->estimated_payload_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PayloadEstimationCommandFeedback__copy(
  const bosdyn_msgs__msg__PayloadEstimationCommandFeedback * input,
  bosdyn_msgs__msg__PayloadEstimationCommandFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__PayloadEstimationCommandFeedbackStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // progress
  output->progress = input->progress;
  // error
  if (!bosdyn_msgs__msg__PayloadEstimationCommandFeedbackError__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  // estimated_payload
  if (!bosdyn_msgs__msg__Payload__copy(
      &(input->estimated_payload), &(output->estimated_payload)))
  {
    return false;
  }
  // estimated_payload_is_set
  output->estimated_payload_is_set = input->estimated_payload_is_set;
  return true;
}

bosdyn_msgs__msg__PayloadEstimationCommandFeedback *
bosdyn_msgs__msg__PayloadEstimationCommandFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PayloadEstimationCommandFeedback * msg = (bosdyn_msgs__msg__PayloadEstimationCommandFeedback *)allocator.allocate(sizeof(bosdyn_msgs__msg__PayloadEstimationCommandFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PayloadEstimationCommandFeedback));
  bool success = bosdyn_msgs__msg__PayloadEstimationCommandFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PayloadEstimationCommandFeedback__destroy(bosdyn_msgs__msg__PayloadEstimationCommandFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PayloadEstimationCommandFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence__init(bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PayloadEstimationCommandFeedback * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PayloadEstimationCommandFeedback *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PayloadEstimationCommandFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PayloadEstimationCommandFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PayloadEstimationCommandFeedback__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence__fini(bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence * array)
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
      bosdyn_msgs__msg__PayloadEstimationCommandFeedback__fini(&array->data[i]);
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

bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence *
bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence * array = (bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence__destroy(bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence__are_equal(const bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence * lhs, const bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PayloadEstimationCommandFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence__copy(
  const bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence * input,
  bosdyn_msgs__msg__PayloadEstimationCommandFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PayloadEstimationCommandFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PayloadEstimationCommandFeedback * data =
      (bosdyn_msgs__msg__PayloadEstimationCommandFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PayloadEstimationCommandFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PayloadEstimationCommandFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PayloadEstimationCommandFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
