// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/LivePolicy.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/live_policy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `policy`
#include "bosdyn_msgs/msg/detail/policy__functions.h"
// Member `last_checkin`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `client_name`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__LivePolicy__init(bosdyn_msgs__msg__LivePolicy * msg)
{
  if (!msg) {
    return false;
  }
  // policy_id
  // policy
  if (!bosdyn_msgs__msg__Policy__init(&msg->policy)) {
    bosdyn_msgs__msg__LivePolicy__fini(msg);
    return false;
  }
  // policy_is_set
  // last_checkin
  if (!builtin_interfaces__msg__Time__init(&msg->last_checkin)) {
    bosdyn_msgs__msg__LivePolicy__fini(msg);
    return false;
  }
  // last_checkin_is_set
  // client_name
  if (!rosidl_runtime_c__String__init(&msg->client_name)) {
    bosdyn_msgs__msg__LivePolicy__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__LivePolicy__fini(bosdyn_msgs__msg__LivePolicy * msg)
{
  if (!msg) {
    return;
  }
  // policy_id
  // policy
  bosdyn_msgs__msg__Policy__fini(&msg->policy);
  // policy_is_set
  // last_checkin
  builtin_interfaces__msg__Time__fini(&msg->last_checkin);
  // last_checkin_is_set
  // client_name
  rosidl_runtime_c__String__fini(&msg->client_name);
}

bool
bosdyn_msgs__msg__LivePolicy__are_equal(const bosdyn_msgs__msg__LivePolicy * lhs, const bosdyn_msgs__msg__LivePolicy * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // policy_id
  if (lhs->policy_id != rhs->policy_id) {
    return false;
  }
  // policy
  if (!bosdyn_msgs__msg__Policy__are_equal(
      &(lhs->policy), &(rhs->policy)))
  {
    return false;
  }
  // policy_is_set
  if (lhs->policy_is_set != rhs->policy_is_set) {
    return false;
  }
  // last_checkin
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->last_checkin), &(rhs->last_checkin)))
  {
    return false;
  }
  // last_checkin_is_set
  if (lhs->last_checkin_is_set != rhs->last_checkin_is_set) {
    return false;
  }
  // client_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->client_name), &(rhs->client_name)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__LivePolicy__copy(
  const bosdyn_msgs__msg__LivePolicy * input,
  bosdyn_msgs__msg__LivePolicy * output)
{
  if (!input || !output) {
    return false;
  }
  // policy_id
  output->policy_id = input->policy_id;
  // policy
  if (!bosdyn_msgs__msg__Policy__copy(
      &(input->policy), &(output->policy)))
  {
    return false;
  }
  // policy_is_set
  output->policy_is_set = input->policy_is_set;
  // last_checkin
  if (!builtin_interfaces__msg__Time__copy(
      &(input->last_checkin), &(output->last_checkin)))
  {
    return false;
  }
  // last_checkin_is_set
  output->last_checkin_is_set = input->last_checkin_is_set;
  // client_name
  if (!rosidl_runtime_c__String__copy(
      &(input->client_name), &(output->client_name)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__LivePolicy *
bosdyn_msgs__msg__LivePolicy__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LivePolicy * msg = (bosdyn_msgs__msg__LivePolicy *)allocator.allocate(sizeof(bosdyn_msgs__msg__LivePolicy), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__LivePolicy));
  bool success = bosdyn_msgs__msg__LivePolicy__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__LivePolicy__destroy(bosdyn_msgs__msg__LivePolicy * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__LivePolicy__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__LivePolicy__Sequence__init(bosdyn_msgs__msg__LivePolicy__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LivePolicy * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__LivePolicy *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__LivePolicy), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__LivePolicy__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__LivePolicy__fini(&data[i - 1]);
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
bosdyn_msgs__msg__LivePolicy__Sequence__fini(bosdyn_msgs__msg__LivePolicy__Sequence * array)
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
      bosdyn_msgs__msg__LivePolicy__fini(&array->data[i]);
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

bosdyn_msgs__msg__LivePolicy__Sequence *
bosdyn_msgs__msg__LivePolicy__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LivePolicy__Sequence * array = (bosdyn_msgs__msg__LivePolicy__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__LivePolicy__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__LivePolicy__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__LivePolicy__Sequence__destroy(bosdyn_msgs__msg__LivePolicy__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__LivePolicy__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__LivePolicy__Sequence__are_equal(const bosdyn_msgs__msg__LivePolicy__Sequence * lhs, const bosdyn_msgs__msg__LivePolicy__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__LivePolicy__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__LivePolicy__Sequence__copy(
  const bosdyn_msgs__msg__LivePolicy__Sequence * input,
  bosdyn_msgs__msg__LivePolicy__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__LivePolicy);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__LivePolicy * data =
      (bosdyn_msgs__msg__LivePolicy *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__LivePolicy__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__LivePolicy__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__LivePolicy__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
