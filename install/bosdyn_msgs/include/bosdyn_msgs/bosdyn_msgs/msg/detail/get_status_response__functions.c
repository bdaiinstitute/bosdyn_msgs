// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/GetStatusResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/get_status_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/get_status_response_status__functions.h"
// Member `data_saved`
#include "bosdyn_msgs/msg/detail/data_identifier__functions.h"
// Member `data_errors`
#include "bosdyn_msgs/msg/detail/data_error__functions.h"
// Member `service_errors`
#include "bosdyn_msgs/msg/detail/plugin_service_error__functions.h"
// Member `network_compute_errors`
#include "bosdyn_msgs/msg/detail/network_compute_error__functions.h"

bool
bosdyn_msgs__msg__GetStatusResponse__init(bosdyn_msgs__msg__GetStatusResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__GetStatusResponse__fini(msg);
    return false;
  }
  // header_is_set
  // status
  if (!bosdyn_msgs__msg__GetStatusResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__GetStatusResponse__fini(msg);
    return false;
  }
  // data_saved
  if (!bosdyn_msgs__msg__DataIdentifier__Sequence__init(&msg->data_saved, 0)) {
    bosdyn_msgs__msg__GetStatusResponse__fini(msg);
    return false;
  }
  // data_errors
  if (!bosdyn_msgs__msg__DataError__Sequence__init(&msg->data_errors, 0)) {
    bosdyn_msgs__msg__GetStatusResponse__fini(msg);
    return false;
  }
  // service_errors
  if (!bosdyn_msgs__msg__PluginServiceError__Sequence__init(&msg->service_errors, 0)) {
    bosdyn_msgs__msg__GetStatusResponse__fini(msg);
    return false;
  }
  // network_compute_errors
  if (!bosdyn_msgs__msg__NetworkComputeError__Sequence__init(&msg->network_compute_errors, 0)) {
    bosdyn_msgs__msg__GetStatusResponse__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__GetStatusResponse__fini(bosdyn_msgs__msg__GetStatusResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // status
  bosdyn_msgs__msg__GetStatusResponseStatus__fini(&msg->status);
  // data_saved
  bosdyn_msgs__msg__DataIdentifier__Sequence__fini(&msg->data_saved);
  // data_errors
  bosdyn_msgs__msg__DataError__Sequence__fini(&msg->data_errors);
  // service_errors
  bosdyn_msgs__msg__PluginServiceError__Sequence__fini(&msg->service_errors);
  // network_compute_errors
  bosdyn_msgs__msg__NetworkComputeError__Sequence__fini(&msg->network_compute_errors);
}

bool
bosdyn_msgs__msg__GetStatusResponse__are_equal(const bosdyn_msgs__msg__GetStatusResponse * lhs, const bosdyn_msgs__msg__GetStatusResponse * rhs)
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
  if (!bosdyn_msgs__msg__GetStatusResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // data_saved
  if (!bosdyn_msgs__msg__DataIdentifier__Sequence__are_equal(
      &(lhs->data_saved), &(rhs->data_saved)))
  {
    return false;
  }
  // data_errors
  if (!bosdyn_msgs__msg__DataError__Sequence__are_equal(
      &(lhs->data_errors), &(rhs->data_errors)))
  {
    return false;
  }
  // service_errors
  if (!bosdyn_msgs__msg__PluginServiceError__Sequence__are_equal(
      &(lhs->service_errors), &(rhs->service_errors)))
  {
    return false;
  }
  // network_compute_errors
  if (!bosdyn_msgs__msg__NetworkComputeError__Sequence__are_equal(
      &(lhs->network_compute_errors), &(rhs->network_compute_errors)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__GetStatusResponse__copy(
  const bosdyn_msgs__msg__GetStatusResponse * input,
  bosdyn_msgs__msg__GetStatusResponse * output)
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
  if (!bosdyn_msgs__msg__GetStatusResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // data_saved
  if (!bosdyn_msgs__msg__DataIdentifier__Sequence__copy(
      &(input->data_saved), &(output->data_saved)))
  {
    return false;
  }
  // data_errors
  if (!bosdyn_msgs__msg__DataError__Sequence__copy(
      &(input->data_errors), &(output->data_errors)))
  {
    return false;
  }
  // service_errors
  if (!bosdyn_msgs__msg__PluginServiceError__Sequence__copy(
      &(input->service_errors), &(output->service_errors)))
  {
    return false;
  }
  // network_compute_errors
  if (!bosdyn_msgs__msg__NetworkComputeError__Sequence__copy(
      &(input->network_compute_errors), &(output->network_compute_errors)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__GetStatusResponse *
bosdyn_msgs__msg__GetStatusResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetStatusResponse * msg = (bosdyn_msgs__msg__GetStatusResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__GetStatusResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__GetStatusResponse));
  bool success = bosdyn_msgs__msg__GetStatusResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__GetStatusResponse__destroy(bosdyn_msgs__msg__GetStatusResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__GetStatusResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__GetStatusResponse__Sequence__init(bosdyn_msgs__msg__GetStatusResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetStatusResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__GetStatusResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__GetStatusResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__GetStatusResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__GetStatusResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__GetStatusResponse__Sequence__fini(bosdyn_msgs__msg__GetStatusResponse__Sequence * array)
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
      bosdyn_msgs__msg__GetStatusResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__GetStatusResponse__Sequence *
bosdyn_msgs__msg__GetStatusResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetStatusResponse__Sequence * array = (bosdyn_msgs__msg__GetStatusResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__GetStatusResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__GetStatusResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__GetStatusResponse__Sequence__destroy(bosdyn_msgs__msg__GetStatusResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__GetStatusResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__GetStatusResponse__Sequence__are_equal(const bosdyn_msgs__msg__GetStatusResponse__Sequence * lhs, const bosdyn_msgs__msg__GetStatusResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__GetStatusResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__GetStatusResponse__Sequence__copy(
  const bosdyn_msgs__msg__GetStatusResponse__Sequence * input,
  bosdyn_msgs__msg__GetStatusResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__GetStatusResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__GetStatusResponse * data =
      (bosdyn_msgs__msg__GetStatusResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__GetStatusResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__GetStatusResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__GetStatusResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
