// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PowerCommandFeedbackResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/power_command_feedback_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/power_command_status__functions.h"
// Member `blocking_faults`
#include "bosdyn_msgs/msg/detail/system_fault__functions.h"

bool
bosdyn_msgs__msg__PowerCommandFeedbackResponse__init(bosdyn_msgs__msg__PowerCommandFeedbackResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__PowerCommandFeedbackResponse__fini(msg);
    return false;
  }
  // header_is_set
  // status
  if (!bosdyn_msgs__msg__PowerCommandStatus__init(&msg->status)) {
    bosdyn_msgs__msg__PowerCommandFeedbackResponse__fini(msg);
    return false;
  }
  // blocking_faults
  if (!bosdyn_msgs__msg__SystemFault__Sequence__init(&msg->blocking_faults, 0)) {
    bosdyn_msgs__msg__PowerCommandFeedbackResponse__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__PowerCommandFeedbackResponse__fini(bosdyn_msgs__msg__PowerCommandFeedbackResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // status
  bosdyn_msgs__msg__PowerCommandStatus__fini(&msg->status);
  // blocking_faults
  bosdyn_msgs__msg__SystemFault__Sequence__fini(&msg->blocking_faults);
}

bool
bosdyn_msgs__msg__PowerCommandFeedbackResponse__are_equal(const bosdyn_msgs__msg__PowerCommandFeedbackResponse * lhs, const bosdyn_msgs__msg__PowerCommandFeedbackResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__PowerCommandStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // blocking_faults
  if (!bosdyn_msgs__msg__SystemFault__Sequence__are_equal(
      &(lhs->blocking_faults), &(rhs->blocking_faults)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PowerCommandFeedbackResponse__copy(
  const bosdyn_msgs__msg__PowerCommandFeedbackResponse * input,
  bosdyn_msgs__msg__PowerCommandFeedbackResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // status
  if (!bosdyn_msgs__msg__PowerCommandStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // blocking_faults
  if (!bosdyn_msgs__msg__SystemFault__Sequence__copy(
      &(input->blocking_faults), &(output->blocking_faults)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__PowerCommandFeedbackResponse *
bosdyn_msgs__msg__PowerCommandFeedbackResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PowerCommandFeedbackResponse * msg = (bosdyn_msgs__msg__PowerCommandFeedbackResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__PowerCommandFeedbackResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PowerCommandFeedbackResponse));
  bool success = bosdyn_msgs__msg__PowerCommandFeedbackResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PowerCommandFeedbackResponse__destroy(bosdyn_msgs__msg__PowerCommandFeedbackResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PowerCommandFeedbackResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence__init(bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PowerCommandFeedbackResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PowerCommandFeedbackResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PowerCommandFeedbackResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PowerCommandFeedbackResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PowerCommandFeedbackResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence__fini(bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence * array)
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
      bosdyn_msgs__msg__PowerCommandFeedbackResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence *
bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence * array = (bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence__destroy(bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence__are_equal(const bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence * lhs, const bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PowerCommandFeedbackResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence__copy(
  const bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence * input,
  bosdyn_msgs__msg__PowerCommandFeedbackResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PowerCommandFeedbackResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PowerCommandFeedbackResponse * data =
      (bosdyn_msgs__msg__PowerCommandFeedbackResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PowerCommandFeedbackResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PowerCommandFeedbackResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PowerCommandFeedbackResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
