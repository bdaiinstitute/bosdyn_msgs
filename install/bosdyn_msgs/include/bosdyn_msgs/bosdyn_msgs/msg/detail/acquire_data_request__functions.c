// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/AcquireDataRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/acquire_data_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `action_id`
#include "bosdyn_msgs/msg/detail/capture_action_id__functions.h"
// Member `metadata`
#include "bosdyn_msgs/msg/detail/metadata__functions.h"
// Member `acquisition_requests`
#include "bosdyn_msgs/msg/detail/acquisition_request_list__functions.h"
// Member `min_timeout`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__AcquireDataRequest__init(bosdyn_msgs__msg__AcquireDataRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__AcquireDataRequest__fini(msg);
    return false;
  }
  // header_is_set
  // action_id
  if (!bosdyn_msgs__msg__CaptureActionId__init(&msg->action_id)) {
    bosdyn_msgs__msg__AcquireDataRequest__fini(msg);
    return false;
  }
  // action_id_is_set
  // metadata
  if (!bosdyn_msgs__msg__Metadata__init(&msg->metadata)) {
    bosdyn_msgs__msg__AcquireDataRequest__fini(msg);
    return false;
  }
  // metadata_is_set
  // acquisition_requests
  if (!bosdyn_msgs__msg__AcquisitionRequestList__init(&msg->acquisition_requests)) {
    bosdyn_msgs__msg__AcquireDataRequest__fini(msg);
    return false;
  }
  // acquisition_requests_is_set
  // min_timeout
  if (!builtin_interfaces__msg__Duration__init(&msg->min_timeout)) {
    bosdyn_msgs__msg__AcquireDataRequest__fini(msg);
    return false;
  }
  // min_timeout_is_set
  return true;
}

void
bosdyn_msgs__msg__AcquireDataRequest__fini(bosdyn_msgs__msg__AcquireDataRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // action_id
  bosdyn_msgs__msg__CaptureActionId__fini(&msg->action_id);
  // action_id_is_set
  // metadata
  bosdyn_msgs__msg__Metadata__fini(&msg->metadata);
  // metadata_is_set
  // acquisition_requests
  bosdyn_msgs__msg__AcquisitionRequestList__fini(&msg->acquisition_requests);
  // acquisition_requests_is_set
  // min_timeout
  builtin_interfaces__msg__Duration__fini(&msg->min_timeout);
  // min_timeout_is_set
}

bool
bosdyn_msgs__msg__AcquireDataRequest__are_equal(const bosdyn_msgs__msg__AcquireDataRequest * lhs, const bosdyn_msgs__msg__AcquireDataRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // action_id
  if (!bosdyn_msgs__msg__CaptureActionId__are_equal(
      &(lhs->action_id), &(rhs->action_id)))
  {
    return false;
  }
  // action_id_is_set
  if (lhs->action_id_is_set != rhs->action_id_is_set) {
    return false;
  }
  // metadata
  if (!bosdyn_msgs__msg__Metadata__are_equal(
      &(lhs->metadata), &(rhs->metadata)))
  {
    return false;
  }
  // metadata_is_set
  if (lhs->metadata_is_set != rhs->metadata_is_set) {
    return false;
  }
  // acquisition_requests
  if (!bosdyn_msgs__msg__AcquisitionRequestList__are_equal(
      &(lhs->acquisition_requests), &(rhs->acquisition_requests)))
  {
    return false;
  }
  // acquisition_requests_is_set
  if (lhs->acquisition_requests_is_set != rhs->acquisition_requests_is_set) {
    return false;
  }
  // min_timeout
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->min_timeout), &(rhs->min_timeout)))
  {
    return false;
  }
  // min_timeout_is_set
  if (lhs->min_timeout_is_set != rhs->min_timeout_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__AcquireDataRequest__copy(
  const bosdyn_msgs__msg__AcquireDataRequest * input,
  bosdyn_msgs__msg__AcquireDataRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // action_id
  if (!bosdyn_msgs__msg__CaptureActionId__copy(
      &(input->action_id), &(output->action_id)))
  {
    return false;
  }
  // action_id_is_set
  output->action_id_is_set = input->action_id_is_set;
  // metadata
  if (!bosdyn_msgs__msg__Metadata__copy(
      &(input->metadata), &(output->metadata)))
  {
    return false;
  }
  // metadata_is_set
  output->metadata_is_set = input->metadata_is_set;
  // acquisition_requests
  if (!bosdyn_msgs__msg__AcquisitionRequestList__copy(
      &(input->acquisition_requests), &(output->acquisition_requests)))
  {
    return false;
  }
  // acquisition_requests_is_set
  output->acquisition_requests_is_set = input->acquisition_requests_is_set;
  // min_timeout
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->min_timeout), &(output->min_timeout)))
  {
    return false;
  }
  // min_timeout_is_set
  output->min_timeout_is_set = input->min_timeout_is_set;
  return true;
}

bosdyn_msgs__msg__AcquireDataRequest *
bosdyn_msgs__msg__AcquireDataRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AcquireDataRequest * msg = (bosdyn_msgs__msg__AcquireDataRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__AcquireDataRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__AcquireDataRequest));
  bool success = bosdyn_msgs__msg__AcquireDataRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__AcquireDataRequest__destroy(bosdyn_msgs__msg__AcquireDataRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__AcquireDataRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__AcquireDataRequest__Sequence__init(bosdyn_msgs__msg__AcquireDataRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AcquireDataRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__AcquireDataRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__AcquireDataRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__AcquireDataRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__AcquireDataRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__AcquireDataRequest__Sequence__fini(bosdyn_msgs__msg__AcquireDataRequest__Sequence * array)
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
      bosdyn_msgs__msg__AcquireDataRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__AcquireDataRequest__Sequence *
bosdyn_msgs__msg__AcquireDataRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AcquireDataRequest__Sequence * array = (bosdyn_msgs__msg__AcquireDataRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__AcquireDataRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__AcquireDataRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__AcquireDataRequest__Sequence__destroy(bosdyn_msgs__msg__AcquireDataRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__AcquireDataRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__AcquireDataRequest__Sequence__are_equal(const bosdyn_msgs__msg__AcquireDataRequest__Sequence * lhs, const bosdyn_msgs__msg__AcquireDataRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__AcquireDataRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__AcquireDataRequest__Sequence__copy(
  const bosdyn_msgs__msg__AcquireDataRequest__Sequence * input,
  bosdyn_msgs__msg__AcquireDataRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__AcquireDataRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__AcquireDataRequest * data =
      (bosdyn_msgs__msg__AcquireDataRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__AcquireDataRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__AcquireDataRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__AcquireDataRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
