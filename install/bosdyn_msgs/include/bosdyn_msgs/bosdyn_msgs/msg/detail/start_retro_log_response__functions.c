// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StartRetroLogResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/start_retro_log_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/start_retro_log_response_status__functions.h"
// Member `log_status`
#include "bosdyn_msgs/msg/detail/log_status__functions.h"
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__StartRetroLogResponse__init(bosdyn_msgs__msg__StartRetroLogResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__StartRetroLogResponse__fini(msg);
    return false;
  }
  // header_is_set
  // status
  if (!bosdyn_msgs__msg__StartRetroLogResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__StartRetroLogResponse__fini(msg);
    return false;
  }
  // log_status
  if (!bosdyn_msgs__msg__LogStatus__init(&msg->log_status)) {
    bosdyn_msgs__msg__StartRetroLogResponse__fini(msg);
    return false;
  }
  // log_status_is_set
  // end_time
  if (!builtin_interfaces__msg__Time__init(&msg->end_time)) {
    bosdyn_msgs__msg__StartRetroLogResponse__fini(msg);
    return false;
  }
  // end_time_is_set
  return true;
}

void
bosdyn_msgs__msg__StartRetroLogResponse__fini(bosdyn_msgs__msg__StartRetroLogResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // status
  bosdyn_msgs__msg__StartRetroLogResponseStatus__fini(&msg->status);
  // log_status
  bosdyn_msgs__msg__LogStatus__fini(&msg->log_status);
  // log_status_is_set
  // end_time
  builtin_interfaces__msg__Time__fini(&msg->end_time);
  // end_time_is_set
}

bool
bosdyn_msgs__msg__StartRetroLogResponse__are_equal(const bosdyn_msgs__msg__StartRetroLogResponse * lhs, const bosdyn_msgs__msg__StartRetroLogResponse * rhs)
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
  if (!bosdyn_msgs__msg__StartRetroLogResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // log_status
  if (!bosdyn_msgs__msg__LogStatus__are_equal(
      &(lhs->log_status), &(rhs->log_status)))
  {
    return false;
  }
  // log_status_is_set
  if (lhs->log_status_is_set != rhs->log_status_is_set) {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->end_time), &(rhs->end_time)))
  {
    return false;
  }
  // end_time_is_set
  if (lhs->end_time_is_set != rhs->end_time_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StartRetroLogResponse__copy(
  const bosdyn_msgs__msg__StartRetroLogResponse * input,
  bosdyn_msgs__msg__StartRetroLogResponse * output)
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
  if (!bosdyn_msgs__msg__StartRetroLogResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // log_status
  if (!bosdyn_msgs__msg__LogStatus__copy(
      &(input->log_status), &(output->log_status)))
  {
    return false;
  }
  // log_status_is_set
  output->log_status_is_set = input->log_status_is_set;
  // end_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end_time), &(output->end_time)))
  {
    return false;
  }
  // end_time_is_set
  output->end_time_is_set = input->end_time_is_set;
  return true;
}

bosdyn_msgs__msg__StartRetroLogResponse *
bosdyn_msgs__msg__StartRetroLogResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StartRetroLogResponse * msg = (bosdyn_msgs__msg__StartRetroLogResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__StartRetroLogResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StartRetroLogResponse));
  bool success = bosdyn_msgs__msg__StartRetroLogResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StartRetroLogResponse__destroy(bosdyn_msgs__msg__StartRetroLogResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StartRetroLogResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StartRetroLogResponse__Sequence__init(bosdyn_msgs__msg__StartRetroLogResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StartRetroLogResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StartRetroLogResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StartRetroLogResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StartRetroLogResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StartRetroLogResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StartRetroLogResponse__Sequence__fini(bosdyn_msgs__msg__StartRetroLogResponse__Sequence * array)
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
      bosdyn_msgs__msg__StartRetroLogResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__StartRetroLogResponse__Sequence *
bosdyn_msgs__msg__StartRetroLogResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StartRetroLogResponse__Sequence * array = (bosdyn_msgs__msg__StartRetroLogResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StartRetroLogResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StartRetroLogResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StartRetroLogResponse__Sequence__destroy(bosdyn_msgs__msg__StartRetroLogResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StartRetroLogResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StartRetroLogResponse__Sequence__are_equal(const bosdyn_msgs__msg__StartRetroLogResponse__Sequence * lhs, const bosdyn_msgs__msg__StartRetroLogResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StartRetroLogResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StartRetroLogResponse__Sequence__copy(
  const bosdyn_msgs__msg__StartRetroLogResponse__Sequence * input,
  bosdyn_msgs__msg__StartRetroLogResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StartRetroLogResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StartRetroLogResponse * data =
      (bosdyn_msgs__msg__StartRetroLogResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StartRetroLogResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StartRetroLogResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StartRetroLogResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
