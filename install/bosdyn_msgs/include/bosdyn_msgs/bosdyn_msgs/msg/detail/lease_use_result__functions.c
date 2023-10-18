// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/LeaseUseResult.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/lease_use_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "bosdyn_msgs/msg/detail/lease_use_result_status__functions.h"
// Member `owner`
#include "bosdyn_msgs/msg/detail/lease_owner__functions.h"
// Member `attempted_lease`
// Member `previous_lease`
// Member `latest_known_lease`
// Member `latest_resources`
#include "bosdyn_msgs/msg/detail/lease__functions.h"

bool
bosdyn_msgs__msg__LeaseUseResult__init(bosdyn_msgs__msg__LeaseUseResult * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__LeaseUseResultStatus__init(&msg->status)) {
    bosdyn_msgs__msg__LeaseUseResult__fini(msg);
    return false;
  }
  // owner
  if (!bosdyn_msgs__msg__LeaseOwner__init(&msg->owner)) {
    bosdyn_msgs__msg__LeaseUseResult__fini(msg);
    return false;
  }
  // owner_is_set
  // attempted_lease
  if (!bosdyn_msgs__msg__Lease__init(&msg->attempted_lease)) {
    bosdyn_msgs__msg__LeaseUseResult__fini(msg);
    return false;
  }
  // attempted_lease_is_set
  // previous_lease
  if (!bosdyn_msgs__msg__Lease__init(&msg->previous_lease)) {
    bosdyn_msgs__msg__LeaseUseResult__fini(msg);
    return false;
  }
  // previous_lease_is_set
  // latest_known_lease
  if (!bosdyn_msgs__msg__Lease__init(&msg->latest_known_lease)) {
    bosdyn_msgs__msg__LeaseUseResult__fini(msg);
    return false;
  }
  // latest_known_lease_is_set
  // latest_resources
  if (!bosdyn_msgs__msg__Lease__Sequence__init(&msg->latest_resources, 0)) {
    bosdyn_msgs__msg__LeaseUseResult__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__LeaseUseResult__fini(bosdyn_msgs__msg__LeaseUseResult * msg)
{
  if (!msg) {
    return;
  }
  // status
  bosdyn_msgs__msg__LeaseUseResultStatus__fini(&msg->status);
  // owner
  bosdyn_msgs__msg__LeaseOwner__fini(&msg->owner);
  // owner_is_set
  // attempted_lease
  bosdyn_msgs__msg__Lease__fini(&msg->attempted_lease);
  // attempted_lease_is_set
  // previous_lease
  bosdyn_msgs__msg__Lease__fini(&msg->previous_lease);
  // previous_lease_is_set
  // latest_known_lease
  bosdyn_msgs__msg__Lease__fini(&msg->latest_known_lease);
  // latest_known_lease_is_set
  // latest_resources
  bosdyn_msgs__msg__Lease__Sequence__fini(&msg->latest_resources);
}

bool
bosdyn_msgs__msg__LeaseUseResult__are_equal(const bosdyn_msgs__msg__LeaseUseResult * lhs, const bosdyn_msgs__msg__LeaseUseResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__LeaseUseResultStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // owner
  if (!bosdyn_msgs__msg__LeaseOwner__are_equal(
      &(lhs->owner), &(rhs->owner)))
  {
    return false;
  }
  // owner_is_set
  if (lhs->owner_is_set != rhs->owner_is_set) {
    return false;
  }
  // attempted_lease
  if (!bosdyn_msgs__msg__Lease__are_equal(
      &(lhs->attempted_lease), &(rhs->attempted_lease)))
  {
    return false;
  }
  // attempted_lease_is_set
  if (lhs->attempted_lease_is_set != rhs->attempted_lease_is_set) {
    return false;
  }
  // previous_lease
  if (!bosdyn_msgs__msg__Lease__are_equal(
      &(lhs->previous_lease), &(rhs->previous_lease)))
  {
    return false;
  }
  // previous_lease_is_set
  if (lhs->previous_lease_is_set != rhs->previous_lease_is_set) {
    return false;
  }
  // latest_known_lease
  if (!bosdyn_msgs__msg__Lease__are_equal(
      &(lhs->latest_known_lease), &(rhs->latest_known_lease)))
  {
    return false;
  }
  // latest_known_lease_is_set
  if (lhs->latest_known_lease_is_set != rhs->latest_known_lease_is_set) {
    return false;
  }
  // latest_resources
  if (!bosdyn_msgs__msg__Lease__Sequence__are_equal(
      &(lhs->latest_resources), &(rhs->latest_resources)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__LeaseUseResult__copy(
  const bosdyn_msgs__msg__LeaseUseResult * input,
  bosdyn_msgs__msg__LeaseUseResult * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__LeaseUseResultStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // owner
  if (!bosdyn_msgs__msg__LeaseOwner__copy(
      &(input->owner), &(output->owner)))
  {
    return false;
  }
  // owner_is_set
  output->owner_is_set = input->owner_is_set;
  // attempted_lease
  if (!bosdyn_msgs__msg__Lease__copy(
      &(input->attempted_lease), &(output->attempted_lease)))
  {
    return false;
  }
  // attempted_lease_is_set
  output->attempted_lease_is_set = input->attempted_lease_is_set;
  // previous_lease
  if (!bosdyn_msgs__msg__Lease__copy(
      &(input->previous_lease), &(output->previous_lease)))
  {
    return false;
  }
  // previous_lease_is_set
  output->previous_lease_is_set = input->previous_lease_is_set;
  // latest_known_lease
  if (!bosdyn_msgs__msg__Lease__copy(
      &(input->latest_known_lease), &(output->latest_known_lease)))
  {
    return false;
  }
  // latest_known_lease_is_set
  output->latest_known_lease_is_set = input->latest_known_lease_is_set;
  // latest_resources
  if (!bosdyn_msgs__msg__Lease__Sequence__copy(
      &(input->latest_resources), &(output->latest_resources)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__LeaseUseResult *
bosdyn_msgs__msg__LeaseUseResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LeaseUseResult * msg = (bosdyn_msgs__msg__LeaseUseResult *)allocator.allocate(sizeof(bosdyn_msgs__msg__LeaseUseResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__LeaseUseResult));
  bool success = bosdyn_msgs__msg__LeaseUseResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__LeaseUseResult__destroy(bosdyn_msgs__msg__LeaseUseResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__LeaseUseResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__LeaseUseResult__Sequence__init(bosdyn_msgs__msg__LeaseUseResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LeaseUseResult * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__LeaseUseResult *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__LeaseUseResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__LeaseUseResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__LeaseUseResult__fini(&data[i - 1]);
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
bosdyn_msgs__msg__LeaseUseResult__Sequence__fini(bosdyn_msgs__msg__LeaseUseResult__Sequence * array)
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
      bosdyn_msgs__msg__LeaseUseResult__fini(&array->data[i]);
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

bosdyn_msgs__msg__LeaseUseResult__Sequence *
bosdyn_msgs__msg__LeaseUseResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LeaseUseResult__Sequence * array = (bosdyn_msgs__msg__LeaseUseResult__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__LeaseUseResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__LeaseUseResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__LeaseUseResult__Sequence__destroy(bosdyn_msgs__msg__LeaseUseResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__LeaseUseResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__LeaseUseResult__Sequence__are_equal(const bosdyn_msgs__msg__LeaseUseResult__Sequence * lhs, const bosdyn_msgs__msg__LeaseUseResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__LeaseUseResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__LeaseUseResult__Sequence__copy(
  const bosdyn_msgs__msg__LeaseUseResult__Sequence * input,
  bosdyn_msgs__msg__LeaseUseResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__LeaseUseResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__LeaseUseResult * data =
      (bosdyn_msgs__msg__LeaseUseResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__LeaseUseResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__LeaseUseResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__LeaseUseResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
