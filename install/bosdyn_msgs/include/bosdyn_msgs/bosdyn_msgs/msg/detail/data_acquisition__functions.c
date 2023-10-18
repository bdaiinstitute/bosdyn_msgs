// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DataAcquisition.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/data_acquisition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_name`
// Member `host`
// Member `group_name_format`
// Member `request_name_in_blackboard`
// Member `metadata_name_in_blackboard`
// Member `action_name_format`
#include "rosidl_runtime_c/string_functions.h"
// Member `request`
#include "bosdyn_msgs/msg/detail/acquire_data_request__functions.h"
// Member `completion_behavior`
#include "bosdyn_msgs/msg/detail/data_acquisition_completion_behavior__functions.h"

bool
bosdyn_msgs__msg__DataAcquisition__init(bosdyn_msgs__msg__DataAcquisition * msg)
{
  if (!msg) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__DataAcquisition__fini(msg);
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__init(&msg->host)) {
    bosdyn_msgs__msg__DataAcquisition__fini(msg);
    return false;
  }
  // request
  if (!bosdyn_msgs__msg__AcquireDataRequest__init(&msg->request)) {
    bosdyn_msgs__msg__DataAcquisition__fini(msg);
    return false;
  }
  // request_is_set
  // completion_behavior
  if (!bosdyn_msgs__msg__DataAcquisitionCompletionBehavior__init(&msg->completion_behavior)) {
    bosdyn_msgs__msg__DataAcquisition__fini(msg);
    return false;
  }
  // group_name_format
  if (!rosidl_runtime_c__String__init(&msg->group_name_format)) {
    bosdyn_msgs__msg__DataAcquisition__fini(msg);
    return false;
  }
  // request_name_in_blackboard
  if (!rosidl_runtime_c__String__init(&msg->request_name_in_blackboard)) {
    bosdyn_msgs__msg__DataAcquisition__fini(msg);
    return false;
  }
  // metadata_name_in_blackboard
  if (!rosidl_runtime_c__String__init(&msg->metadata_name_in_blackboard)) {
    bosdyn_msgs__msg__DataAcquisition__fini(msg);
    return false;
  }
  // action_name_format
  if (!rosidl_runtime_c__String__init(&msg->action_name_format)) {
    bosdyn_msgs__msg__DataAcquisition__fini(msg);
    return false;
  }
  // disable_cancel_on_pause_or_stop
  return true;
}

void
bosdyn_msgs__msg__DataAcquisition__fini(bosdyn_msgs__msg__DataAcquisition * msg)
{
  if (!msg) {
    return;
  }
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // host
  rosidl_runtime_c__String__fini(&msg->host);
  // request
  bosdyn_msgs__msg__AcquireDataRequest__fini(&msg->request);
  // request_is_set
  // completion_behavior
  bosdyn_msgs__msg__DataAcquisitionCompletionBehavior__fini(&msg->completion_behavior);
  // group_name_format
  rosidl_runtime_c__String__fini(&msg->group_name_format);
  // request_name_in_blackboard
  rosidl_runtime_c__String__fini(&msg->request_name_in_blackboard);
  // metadata_name_in_blackboard
  rosidl_runtime_c__String__fini(&msg->metadata_name_in_blackboard);
  // action_name_format
  rosidl_runtime_c__String__fini(&msg->action_name_format);
  // disable_cancel_on_pause_or_stop
}

bool
bosdyn_msgs__msg__DataAcquisition__are_equal(const bosdyn_msgs__msg__DataAcquisition * lhs, const bosdyn_msgs__msg__DataAcquisition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->host), &(rhs->host)))
  {
    return false;
  }
  // request
  if (!bosdyn_msgs__msg__AcquireDataRequest__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // request_is_set
  if (lhs->request_is_set != rhs->request_is_set) {
    return false;
  }
  // completion_behavior
  if (!bosdyn_msgs__msg__DataAcquisitionCompletionBehavior__are_equal(
      &(lhs->completion_behavior), &(rhs->completion_behavior)))
  {
    return false;
  }
  // group_name_format
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group_name_format), &(rhs->group_name_format)))
  {
    return false;
  }
  // request_name_in_blackboard
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request_name_in_blackboard), &(rhs->request_name_in_blackboard)))
  {
    return false;
  }
  // metadata_name_in_blackboard
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->metadata_name_in_blackboard), &(rhs->metadata_name_in_blackboard)))
  {
    return false;
  }
  // action_name_format
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action_name_format), &(rhs->action_name_format)))
  {
    return false;
  }
  // disable_cancel_on_pause_or_stop
  if (lhs->disable_cancel_on_pause_or_stop != rhs->disable_cancel_on_pause_or_stop) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DataAcquisition__copy(
  const bosdyn_msgs__msg__DataAcquisition * input,
  bosdyn_msgs__msg__DataAcquisition * output)
{
  if (!input || !output) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__copy(
      &(input->host), &(output->host)))
  {
    return false;
  }
  // request
  if (!bosdyn_msgs__msg__AcquireDataRequest__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // request_is_set
  output->request_is_set = input->request_is_set;
  // completion_behavior
  if (!bosdyn_msgs__msg__DataAcquisitionCompletionBehavior__copy(
      &(input->completion_behavior), &(output->completion_behavior)))
  {
    return false;
  }
  // group_name_format
  if (!rosidl_runtime_c__String__copy(
      &(input->group_name_format), &(output->group_name_format)))
  {
    return false;
  }
  // request_name_in_blackboard
  if (!rosidl_runtime_c__String__copy(
      &(input->request_name_in_blackboard), &(output->request_name_in_blackboard)))
  {
    return false;
  }
  // metadata_name_in_blackboard
  if (!rosidl_runtime_c__String__copy(
      &(input->metadata_name_in_blackboard), &(output->metadata_name_in_blackboard)))
  {
    return false;
  }
  // action_name_format
  if (!rosidl_runtime_c__String__copy(
      &(input->action_name_format), &(output->action_name_format)))
  {
    return false;
  }
  // disable_cancel_on_pause_or_stop
  output->disable_cancel_on_pause_or_stop = input->disable_cancel_on_pause_or_stop;
  return true;
}

bosdyn_msgs__msg__DataAcquisition *
bosdyn_msgs__msg__DataAcquisition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataAcquisition * msg = (bosdyn_msgs__msg__DataAcquisition *)allocator.allocate(sizeof(bosdyn_msgs__msg__DataAcquisition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DataAcquisition));
  bool success = bosdyn_msgs__msg__DataAcquisition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DataAcquisition__destroy(bosdyn_msgs__msg__DataAcquisition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DataAcquisition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DataAcquisition__Sequence__init(bosdyn_msgs__msg__DataAcquisition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataAcquisition * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DataAcquisition *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DataAcquisition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DataAcquisition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DataAcquisition__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DataAcquisition__Sequence__fini(bosdyn_msgs__msg__DataAcquisition__Sequence * array)
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
      bosdyn_msgs__msg__DataAcquisition__fini(&array->data[i]);
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

bosdyn_msgs__msg__DataAcquisition__Sequence *
bosdyn_msgs__msg__DataAcquisition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataAcquisition__Sequence * array = (bosdyn_msgs__msg__DataAcquisition__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DataAcquisition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DataAcquisition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DataAcquisition__Sequence__destroy(bosdyn_msgs__msg__DataAcquisition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DataAcquisition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DataAcquisition__Sequence__are_equal(const bosdyn_msgs__msg__DataAcquisition__Sequence * lhs, const bosdyn_msgs__msg__DataAcquisition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DataAcquisition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DataAcquisition__Sequence__copy(
  const bosdyn_msgs__msg__DataAcquisition__Sequence * input,
  bosdyn_msgs__msg__DataAcquisition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DataAcquisition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DataAcquisition * data =
      (bosdyn_msgs__msg__DataAcquisition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DataAcquisition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DataAcquisition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DataAcquisition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
