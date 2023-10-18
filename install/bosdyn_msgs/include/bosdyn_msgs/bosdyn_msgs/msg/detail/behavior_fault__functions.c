// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/BehaviorFault.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/behavior_fault__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `onset_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `cause`
#include "bosdyn_msgs/msg/detail/behavior_fault_cause__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/behavior_fault_status__functions.h"

bool
bosdyn_msgs__msg__BehaviorFault__init(bosdyn_msgs__msg__BehaviorFault * msg)
{
  if (!msg) {
    return false;
  }
  // behavior_fault_id
  // onset_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->onset_timestamp)) {
    bosdyn_msgs__msg__BehaviorFault__fini(msg);
    return false;
  }
  // onset_timestamp_is_set
  // cause
  if (!bosdyn_msgs__msg__BehaviorFaultCause__init(&msg->cause)) {
    bosdyn_msgs__msg__BehaviorFault__fini(msg);
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__BehaviorFaultStatus__init(&msg->status)) {
    bosdyn_msgs__msg__BehaviorFault__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__BehaviorFault__fini(bosdyn_msgs__msg__BehaviorFault * msg)
{
  if (!msg) {
    return;
  }
  // behavior_fault_id
  // onset_timestamp
  builtin_interfaces__msg__Time__fini(&msg->onset_timestamp);
  // onset_timestamp_is_set
  // cause
  bosdyn_msgs__msg__BehaviorFaultCause__fini(&msg->cause);
  // status
  bosdyn_msgs__msg__BehaviorFaultStatus__fini(&msg->status);
}

bool
bosdyn_msgs__msg__BehaviorFault__are_equal(const bosdyn_msgs__msg__BehaviorFault * lhs, const bosdyn_msgs__msg__BehaviorFault * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // behavior_fault_id
  if (lhs->behavior_fault_id != rhs->behavior_fault_id) {
    return false;
  }
  // onset_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->onset_timestamp), &(rhs->onset_timestamp)))
  {
    return false;
  }
  // onset_timestamp_is_set
  if (lhs->onset_timestamp_is_set != rhs->onset_timestamp_is_set) {
    return false;
  }
  // cause
  if (!bosdyn_msgs__msg__BehaviorFaultCause__are_equal(
      &(lhs->cause), &(rhs->cause)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__BehaviorFaultStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__BehaviorFault__copy(
  const bosdyn_msgs__msg__BehaviorFault * input,
  bosdyn_msgs__msg__BehaviorFault * output)
{
  if (!input || !output) {
    return false;
  }
  // behavior_fault_id
  output->behavior_fault_id = input->behavior_fault_id;
  // onset_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->onset_timestamp), &(output->onset_timestamp)))
  {
    return false;
  }
  // onset_timestamp_is_set
  output->onset_timestamp_is_set = input->onset_timestamp_is_set;
  // cause
  if (!bosdyn_msgs__msg__BehaviorFaultCause__copy(
      &(input->cause), &(output->cause)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__BehaviorFaultStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__BehaviorFault *
bosdyn_msgs__msg__BehaviorFault__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BehaviorFault * msg = (bosdyn_msgs__msg__BehaviorFault *)allocator.allocate(sizeof(bosdyn_msgs__msg__BehaviorFault), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__BehaviorFault));
  bool success = bosdyn_msgs__msg__BehaviorFault__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__BehaviorFault__destroy(bosdyn_msgs__msg__BehaviorFault * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__BehaviorFault__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__BehaviorFault__Sequence__init(bosdyn_msgs__msg__BehaviorFault__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BehaviorFault * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__BehaviorFault *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__BehaviorFault), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__BehaviorFault__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__BehaviorFault__fini(&data[i - 1]);
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
bosdyn_msgs__msg__BehaviorFault__Sequence__fini(bosdyn_msgs__msg__BehaviorFault__Sequence * array)
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
      bosdyn_msgs__msg__BehaviorFault__fini(&array->data[i]);
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

bosdyn_msgs__msg__BehaviorFault__Sequence *
bosdyn_msgs__msg__BehaviorFault__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BehaviorFault__Sequence * array = (bosdyn_msgs__msg__BehaviorFault__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__BehaviorFault__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__BehaviorFault__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__BehaviorFault__Sequence__destroy(bosdyn_msgs__msg__BehaviorFault__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__BehaviorFault__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__BehaviorFault__Sequence__are_equal(const bosdyn_msgs__msg__BehaviorFault__Sequence * lhs, const bosdyn_msgs__msg__BehaviorFault__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__BehaviorFault__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__BehaviorFault__Sequence__copy(
  const bosdyn_msgs__msg__BehaviorFault__Sequence * input,
  bosdyn_msgs__msg__BehaviorFault__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__BehaviorFault);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__BehaviorFault * data =
      (bosdyn_msgs__msg__BehaviorFault *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__BehaviorFault__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__BehaviorFault__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__BehaviorFault__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
