// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/BosdynGraphNavLocalize.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/bosdyn_graph_nav_localize__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_name`
// Member `host`
// Member `response_bb_key`
#include "rosidl_runtime_c/string_functions.h"
// Member `localization_request`
#include "bosdyn_msgs/msg/detail/set_localization_request__functions.h"

bool
bosdyn_msgs__msg__BosdynGraphNavLocalize__init(bosdyn_msgs__msg__BosdynGraphNavLocalize * msg)
{
  if (!msg) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__BosdynGraphNavLocalize__fini(msg);
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__init(&msg->host)) {
    bosdyn_msgs__msg__BosdynGraphNavLocalize__fini(msg);
    return false;
  }
  // localization_request
  if (!bosdyn_msgs__msg__SetLocalizationRequest__init(&msg->localization_request)) {
    bosdyn_msgs__msg__BosdynGraphNavLocalize__fini(msg);
    return false;
  }
  // localization_request_is_set
  // allow_bad_quality
  // response_bb_key
  if (!rosidl_runtime_c__String__init(&msg->response_bb_key)) {
    bosdyn_msgs__msg__BosdynGraphNavLocalize__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__BosdynGraphNavLocalize__fini(bosdyn_msgs__msg__BosdynGraphNavLocalize * msg)
{
  if (!msg) {
    return;
  }
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // host
  rosidl_runtime_c__String__fini(&msg->host);
  // localization_request
  bosdyn_msgs__msg__SetLocalizationRequest__fini(&msg->localization_request);
  // localization_request_is_set
  // allow_bad_quality
  // response_bb_key
  rosidl_runtime_c__String__fini(&msg->response_bb_key);
}

bool
bosdyn_msgs__msg__BosdynGraphNavLocalize__are_equal(const bosdyn_msgs__msg__BosdynGraphNavLocalize * lhs, const bosdyn_msgs__msg__BosdynGraphNavLocalize * rhs)
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
  // localization_request
  if (!bosdyn_msgs__msg__SetLocalizationRequest__are_equal(
      &(lhs->localization_request), &(rhs->localization_request)))
  {
    return false;
  }
  // localization_request_is_set
  if (lhs->localization_request_is_set != rhs->localization_request_is_set) {
    return false;
  }
  // allow_bad_quality
  if (lhs->allow_bad_quality != rhs->allow_bad_quality) {
    return false;
  }
  // response_bb_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response_bb_key), &(rhs->response_bb_key)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__BosdynGraphNavLocalize__copy(
  const bosdyn_msgs__msg__BosdynGraphNavLocalize * input,
  bosdyn_msgs__msg__BosdynGraphNavLocalize * output)
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
  // localization_request
  if (!bosdyn_msgs__msg__SetLocalizationRequest__copy(
      &(input->localization_request), &(output->localization_request)))
  {
    return false;
  }
  // localization_request_is_set
  output->localization_request_is_set = input->localization_request_is_set;
  // allow_bad_quality
  output->allow_bad_quality = input->allow_bad_quality;
  // response_bb_key
  if (!rosidl_runtime_c__String__copy(
      &(input->response_bb_key), &(output->response_bb_key)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__BosdynGraphNavLocalize *
bosdyn_msgs__msg__BosdynGraphNavLocalize__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynGraphNavLocalize * msg = (bosdyn_msgs__msg__BosdynGraphNavLocalize *)allocator.allocate(sizeof(bosdyn_msgs__msg__BosdynGraphNavLocalize), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__BosdynGraphNavLocalize));
  bool success = bosdyn_msgs__msg__BosdynGraphNavLocalize__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__BosdynGraphNavLocalize__destroy(bosdyn_msgs__msg__BosdynGraphNavLocalize * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__BosdynGraphNavLocalize__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence__init(bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynGraphNavLocalize * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__BosdynGraphNavLocalize *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__BosdynGraphNavLocalize), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__BosdynGraphNavLocalize__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__BosdynGraphNavLocalize__fini(&data[i - 1]);
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
bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence__fini(bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence * array)
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
      bosdyn_msgs__msg__BosdynGraphNavLocalize__fini(&array->data[i]);
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

bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence *
bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence * array = (bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence__destroy(bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence__are_equal(const bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence * lhs, const bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__BosdynGraphNavLocalize__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence__copy(
  const bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence * input,
  bosdyn_msgs__msg__BosdynGraphNavLocalize__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__BosdynGraphNavLocalize);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__BosdynGraphNavLocalize * data =
      (bosdyn_msgs__msg__BosdynGraphNavLocalize *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__BosdynGraphNavLocalize__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__BosdynGraphNavLocalize__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__BosdynGraphNavLocalize__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
