// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Question.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/question__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `source`
// Member `text`
#include "rosidl_runtime_c/string_functions.h"
// Member `options`
#include "bosdyn_msgs/msg/detail/prompt_option__functions.h"
// Member `severity`
#include "bosdyn_msgs/msg/detail/alert_data_severity_level__functions.h"

bool
bosdyn_msgs__msg__Question__init(bosdyn_msgs__msg__Question * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    bosdyn_msgs__msg__Question__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    bosdyn_msgs__msg__Question__fini(msg);
    return false;
  }
  // options
  if (!bosdyn_msgs__msg__PromptOption__Sequence__init(&msg->options, 0)) {
    bosdyn_msgs__msg__Question__fini(msg);
    return false;
  }
  // for_autonomous_processing
  // severity
  if (!bosdyn_msgs__msg__AlertDataSeverityLevel__init(&msg->severity)) {
    bosdyn_msgs__msg__Question__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Question__fini(bosdyn_msgs__msg__Question * msg)
{
  if (!msg) {
    return;
  }
  // id
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // options
  bosdyn_msgs__msg__PromptOption__Sequence__fini(&msg->options);
  // for_autonomous_processing
  // severity
  bosdyn_msgs__msg__AlertDataSeverityLevel__fini(&msg->severity);
}

bool
bosdyn_msgs__msg__Question__are_equal(const bosdyn_msgs__msg__Question * lhs, const bosdyn_msgs__msg__Question * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // options
  if (!bosdyn_msgs__msg__PromptOption__Sequence__are_equal(
      &(lhs->options), &(rhs->options)))
  {
    return false;
  }
  // for_autonomous_processing
  if (lhs->for_autonomous_processing != rhs->for_autonomous_processing) {
    return false;
  }
  // severity
  if (!bosdyn_msgs__msg__AlertDataSeverityLevel__are_equal(
      &(lhs->severity), &(rhs->severity)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Question__copy(
  const bosdyn_msgs__msg__Question * input,
  bosdyn_msgs__msg__Question * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // options
  if (!bosdyn_msgs__msg__PromptOption__Sequence__copy(
      &(input->options), &(output->options)))
  {
    return false;
  }
  // for_autonomous_processing
  output->for_autonomous_processing = input->for_autonomous_processing;
  // severity
  if (!bosdyn_msgs__msg__AlertDataSeverityLevel__copy(
      &(input->severity), &(output->severity)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Question *
bosdyn_msgs__msg__Question__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Question * msg = (bosdyn_msgs__msg__Question *)allocator.allocate(sizeof(bosdyn_msgs__msg__Question), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Question));
  bool success = bosdyn_msgs__msg__Question__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Question__destroy(bosdyn_msgs__msg__Question * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Question__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Question__Sequence__init(bosdyn_msgs__msg__Question__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Question * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Question *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Question), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Question__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Question__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Question__Sequence__fini(bosdyn_msgs__msg__Question__Sequence * array)
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
      bosdyn_msgs__msg__Question__fini(&array->data[i]);
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

bosdyn_msgs__msg__Question__Sequence *
bosdyn_msgs__msg__Question__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Question__Sequence * array = (bosdyn_msgs__msg__Question__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Question__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Question__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Question__Sequence__destroy(bosdyn_msgs__msg__Question__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Question__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Question__Sequence__are_equal(const bosdyn_msgs__msg__Question__Sequence * lhs, const bosdyn_msgs__msg__Question__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Question__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Question__Sequence__copy(
  const bosdyn_msgs__msg__Question__Sequence * input,
  bosdyn_msgs__msg__Question__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Question);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Question * data =
      (bosdyn_msgs__msg__Question *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Question__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Question__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Question__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
