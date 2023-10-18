// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RestartMissionRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/restart_mission_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `pause_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `leases`
#include "bosdyn_msgs/msg/detail/lease__functions.h"
// Member `settings`
#include "bosdyn_msgs/msg/detail/play_settings__functions.h"

bool
bosdyn_msgs__msg__RestartMissionRequest__init(bosdyn_msgs__msg__RestartMissionRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__RestartMissionRequest__fini(msg);
    return false;
  }
  // header_is_set
  // pause_time
  if (!builtin_interfaces__msg__Time__init(&msg->pause_time)) {
    bosdyn_msgs__msg__RestartMissionRequest__fini(msg);
    return false;
  }
  // pause_time_is_set
  // leases
  if (!bosdyn_msgs__msg__Lease__Sequence__init(&msg->leases, 0)) {
    bosdyn_msgs__msg__RestartMissionRequest__fini(msg);
    return false;
  }
  // settings
  if (!bosdyn_msgs__msg__PlaySettings__init(&msg->settings)) {
    bosdyn_msgs__msg__RestartMissionRequest__fini(msg);
    return false;
  }
  // settings_is_set
  return true;
}

void
bosdyn_msgs__msg__RestartMissionRequest__fini(bosdyn_msgs__msg__RestartMissionRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // pause_time
  builtin_interfaces__msg__Time__fini(&msg->pause_time);
  // pause_time_is_set
  // leases
  bosdyn_msgs__msg__Lease__Sequence__fini(&msg->leases);
  // settings
  bosdyn_msgs__msg__PlaySettings__fini(&msg->settings);
  // settings_is_set
}

bool
bosdyn_msgs__msg__RestartMissionRequest__are_equal(const bosdyn_msgs__msg__RestartMissionRequest * lhs, const bosdyn_msgs__msg__RestartMissionRequest * rhs)
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
  // pause_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->pause_time), &(rhs->pause_time)))
  {
    return false;
  }
  // pause_time_is_set
  if (lhs->pause_time_is_set != rhs->pause_time_is_set) {
    return false;
  }
  // leases
  if (!bosdyn_msgs__msg__Lease__Sequence__are_equal(
      &(lhs->leases), &(rhs->leases)))
  {
    return false;
  }
  // settings
  if (!bosdyn_msgs__msg__PlaySettings__are_equal(
      &(lhs->settings), &(rhs->settings)))
  {
    return false;
  }
  // settings_is_set
  if (lhs->settings_is_set != rhs->settings_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RestartMissionRequest__copy(
  const bosdyn_msgs__msg__RestartMissionRequest * input,
  bosdyn_msgs__msg__RestartMissionRequest * output)
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
  // pause_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->pause_time), &(output->pause_time)))
  {
    return false;
  }
  // pause_time_is_set
  output->pause_time_is_set = input->pause_time_is_set;
  // leases
  if (!bosdyn_msgs__msg__Lease__Sequence__copy(
      &(input->leases), &(output->leases)))
  {
    return false;
  }
  // settings
  if (!bosdyn_msgs__msg__PlaySettings__copy(
      &(input->settings), &(output->settings)))
  {
    return false;
  }
  // settings_is_set
  output->settings_is_set = input->settings_is_set;
  return true;
}

bosdyn_msgs__msg__RestartMissionRequest *
bosdyn_msgs__msg__RestartMissionRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RestartMissionRequest * msg = (bosdyn_msgs__msg__RestartMissionRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__RestartMissionRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RestartMissionRequest));
  bool success = bosdyn_msgs__msg__RestartMissionRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RestartMissionRequest__destroy(bosdyn_msgs__msg__RestartMissionRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RestartMissionRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RestartMissionRequest__Sequence__init(bosdyn_msgs__msg__RestartMissionRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RestartMissionRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RestartMissionRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RestartMissionRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RestartMissionRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RestartMissionRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RestartMissionRequest__Sequence__fini(bosdyn_msgs__msg__RestartMissionRequest__Sequence * array)
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
      bosdyn_msgs__msg__RestartMissionRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__RestartMissionRequest__Sequence *
bosdyn_msgs__msg__RestartMissionRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RestartMissionRequest__Sequence * array = (bosdyn_msgs__msg__RestartMissionRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RestartMissionRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RestartMissionRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RestartMissionRequest__Sequence__destroy(bosdyn_msgs__msg__RestartMissionRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RestartMissionRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RestartMissionRequest__Sequence__are_equal(const bosdyn_msgs__msg__RestartMissionRequest__Sequence * lhs, const bosdyn_msgs__msg__RestartMissionRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RestartMissionRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RestartMissionRequest__Sequence__copy(
  const bosdyn_msgs__msg__RestartMissionRequest__Sequence * input,
  bosdyn_msgs__msg__RestartMissionRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RestartMissionRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RestartMissionRequest * data =
      (bosdyn_msgs__msg__RestartMissionRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RestartMissionRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RestartMissionRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RestartMissionRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
