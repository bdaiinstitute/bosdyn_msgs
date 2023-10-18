// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/process_anchoring_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `params`
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params__functions.h"
// Member `initial_hint`
#include "bosdyn_msgs/msg/detail/anchoring_hint__functions.h"

bool
bosdyn_msgs__msg__ProcessAnchoringRequest__init(bosdyn_msgs__msg__ProcessAnchoringRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__ProcessAnchoringRequest__fini(msg);
    return false;
  }
  // header_is_set
  // params
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParams__init(&msg->params)) {
    bosdyn_msgs__msg__ProcessAnchoringRequest__fini(msg);
    return false;
  }
  // params_is_set
  // initial_hint
  if (!bosdyn_msgs__msg__AnchoringHint__init(&msg->initial_hint)) {
    bosdyn_msgs__msg__ProcessAnchoringRequest__fini(msg);
    return false;
  }
  // initial_hint_is_set
  // modify_anchoring_on_server
  // stream_intermediate_results
  return true;
}

void
bosdyn_msgs__msg__ProcessAnchoringRequest__fini(bosdyn_msgs__msg__ProcessAnchoringRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // params
  bosdyn_msgs__msg__ProcessAnchoringRequestParams__fini(&msg->params);
  // params_is_set
  // initial_hint
  bosdyn_msgs__msg__AnchoringHint__fini(&msg->initial_hint);
  // initial_hint_is_set
  // modify_anchoring_on_server
  // stream_intermediate_results
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequest__are_equal(const bosdyn_msgs__msg__ProcessAnchoringRequest * lhs, const bosdyn_msgs__msg__ProcessAnchoringRequest * rhs)
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
  // params
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParams__are_equal(
      &(lhs->params), &(rhs->params)))
  {
    return false;
  }
  // params_is_set
  if (lhs->params_is_set != rhs->params_is_set) {
    return false;
  }
  // initial_hint
  if (!bosdyn_msgs__msg__AnchoringHint__are_equal(
      &(lhs->initial_hint), &(rhs->initial_hint)))
  {
    return false;
  }
  // initial_hint_is_set
  if (lhs->initial_hint_is_set != rhs->initial_hint_is_set) {
    return false;
  }
  // modify_anchoring_on_server
  if (lhs->modify_anchoring_on_server != rhs->modify_anchoring_on_server) {
    return false;
  }
  // stream_intermediate_results
  if (lhs->stream_intermediate_results != rhs->stream_intermediate_results) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequest__copy(
  const bosdyn_msgs__msg__ProcessAnchoringRequest * input,
  bosdyn_msgs__msg__ProcessAnchoringRequest * output)
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
  // params
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParams__copy(
      &(input->params), &(output->params)))
  {
    return false;
  }
  // params_is_set
  output->params_is_set = input->params_is_set;
  // initial_hint
  if (!bosdyn_msgs__msg__AnchoringHint__copy(
      &(input->initial_hint), &(output->initial_hint)))
  {
    return false;
  }
  // initial_hint_is_set
  output->initial_hint_is_set = input->initial_hint_is_set;
  // modify_anchoring_on_server
  output->modify_anchoring_on_server = input->modify_anchoring_on_server;
  // stream_intermediate_results
  output->stream_intermediate_results = input->stream_intermediate_results;
  return true;
}

bosdyn_msgs__msg__ProcessAnchoringRequest *
bosdyn_msgs__msg__ProcessAnchoringRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringRequest * msg = (bosdyn_msgs__msg__ProcessAnchoringRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessAnchoringRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ProcessAnchoringRequest));
  bool success = bosdyn_msgs__msg__ProcessAnchoringRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ProcessAnchoringRequest__destroy(bosdyn_msgs__msg__ProcessAnchoringRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ProcessAnchoringRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence__init(bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ProcessAnchoringRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ProcessAnchoringRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ProcessAnchoringRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ProcessAnchoringRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence__fini(bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence * array)
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
      bosdyn_msgs__msg__ProcessAnchoringRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence *
bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence * array = (bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence__destroy(bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence__are_equal(const bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence * lhs, const bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessAnchoringRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence__copy(
  const bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence * input,
  bosdyn_msgs__msg__ProcessAnchoringRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ProcessAnchoringRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ProcessAnchoringRequest * data =
      (bosdyn_msgs__msg__ProcessAnchoringRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ProcessAnchoringRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ProcessAnchoringRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessAnchoringRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
