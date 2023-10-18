// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StanceCommandRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/stance_command_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `stance`
#include "bosdyn_msgs/msg/detail/stance__functions.h"

bool
bosdyn_msgs__msg__StanceCommandRequest__init(bosdyn_msgs__msg__StanceCommandRequest * msg)
{
  if (!msg) {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__init(&msg->end_time)) {
    bosdyn_msgs__msg__StanceCommandRequest__fini(msg);
    return false;
  }
  // end_time_is_set
  // stance
  if (!bosdyn_msgs__msg__Stance__init(&msg->stance)) {
    bosdyn_msgs__msg__StanceCommandRequest__fini(msg);
    return false;
  }
  // stance_is_set
  return true;
}

void
bosdyn_msgs__msg__StanceCommandRequest__fini(bosdyn_msgs__msg__StanceCommandRequest * msg)
{
  if (!msg) {
    return;
  }
  // end_time
  builtin_interfaces__msg__Time__fini(&msg->end_time);
  // end_time_is_set
  // stance
  bosdyn_msgs__msg__Stance__fini(&msg->stance);
  // stance_is_set
}

bool
bosdyn_msgs__msg__StanceCommandRequest__are_equal(const bosdyn_msgs__msg__StanceCommandRequest * lhs, const bosdyn_msgs__msg__StanceCommandRequest * rhs)
{
  if (!lhs || !rhs) {
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
  // stance
  if (!bosdyn_msgs__msg__Stance__are_equal(
      &(lhs->stance), &(rhs->stance)))
  {
    return false;
  }
  // stance_is_set
  if (lhs->stance_is_set != rhs->stance_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StanceCommandRequest__copy(
  const bosdyn_msgs__msg__StanceCommandRequest * input,
  bosdyn_msgs__msg__StanceCommandRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end_time), &(output->end_time)))
  {
    return false;
  }
  // end_time_is_set
  output->end_time_is_set = input->end_time_is_set;
  // stance
  if (!bosdyn_msgs__msg__Stance__copy(
      &(input->stance), &(output->stance)))
  {
    return false;
  }
  // stance_is_set
  output->stance_is_set = input->stance_is_set;
  return true;
}

bosdyn_msgs__msg__StanceCommandRequest *
bosdyn_msgs__msg__StanceCommandRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StanceCommandRequest * msg = (bosdyn_msgs__msg__StanceCommandRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__StanceCommandRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StanceCommandRequest));
  bool success = bosdyn_msgs__msg__StanceCommandRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StanceCommandRequest__destroy(bosdyn_msgs__msg__StanceCommandRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StanceCommandRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StanceCommandRequest__Sequence__init(bosdyn_msgs__msg__StanceCommandRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StanceCommandRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StanceCommandRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StanceCommandRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StanceCommandRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StanceCommandRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StanceCommandRequest__Sequence__fini(bosdyn_msgs__msg__StanceCommandRequest__Sequence * array)
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
      bosdyn_msgs__msg__StanceCommandRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__StanceCommandRequest__Sequence *
bosdyn_msgs__msg__StanceCommandRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StanceCommandRequest__Sequence * array = (bosdyn_msgs__msg__StanceCommandRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StanceCommandRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StanceCommandRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StanceCommandRequest__Sequence__destroy(bosdyn_msgs__msg__StanceCommandRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StanceCommandRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StanceCommandRequest__Sequence__are_equal(const bosdyn_msgs__msg__StanceCommandRequest__Sequence * lhs, const bosdyn_msgs__msg__StanceCommandRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StanceCommandRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StanceCommandRequest__Sequence__copy(
  const bosdyn_msgs__msg__StanceCommandRequest__Sequence * input,
  bosdyn_msgs__msg__StanceCommandRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StanceCommandRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StanceCommandRequest * data =
      (bosdyn_msgs__msg__StanceCommandRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StanceCommandRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StanceCommandRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StanceCommandRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
