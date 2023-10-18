// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StringParamSpec.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/string_param_spec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `options`
// Member `default_value`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__StringParamSpec__init(bosdyn_msgs__msg__StringParamSpec * msg)
{
  if (!msg) {
    return false;
  }
  // options
  if (!rosidl_runtime_c__String__Sequence__init(&msg->options, 0)) {
    bosdyn_msgs__msg__StringParamSpec__fini(msg);
    return false;
  }
  // editable
  // default_value
  if (!rosidl_runtime_c__String__init(&msg->default_value)) {
    bosdyn_msgs__msg__StringParamSpec__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__StringParamSpec__fini(bosdyn_msgs__msg__StringParamSpec * msg)
{
  if (!msg) {
    return;
  }
  // options
  rosidl_runtime_c__String__Sequence__fini(&msg->options);
  // editable
  // default_value
  rosidl_runtime_c__String__fini(&msg->default_value);
}

bool
bosdyn_msgs__msg__StringParamSpec__are_equal(const bosdyn_msgs__msg__StringParamSpec * lhs, const bosdyn_msgs__msg__StringParamSpec * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // options
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->options), &(rhs->options)))
  {
    return false;
  }
  // editable
  if (lhs->editable != rhs->editable) {
    return false;
  }
  // default_value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->default_value), &(rhs->default_value)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StringParamSpec__copy(
  const bosdyn_msgs__msg__StringParamSpec * input,
  bosdyn_msgs__msg__StringParamSpec * output)
{
  if (!input || !output) {
    return false;
  }
  // options
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->options), &(output->options)))
  {
    return false;
  }
  // editable
  output->editable = input->editable;
  // default_value
  if (!rosidl_runtime_c__String__copy(
      &(input->default_value), &(output->default_value)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__StringParamSpec *
bosdyn_msgs__msg__StringParamSpec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StringParamSpec * msg = (bosdyn_msgs__msg__StringParamSpec *)allocator.allocate(sizeof(bosdyn_msgs__msg__StringParamSpec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StringParamSpec));
  bool success = bosdyn_msgs__msg__StringParamSpec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StringParamSpec__destroy(bosdyn_msgs__msg__StringParamSpec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StringParamSpec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StringParamSpec__Sequence__init(bosdyn_msgs__msg__StringParamSpec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StringParamSpec * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StringParamSpec *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StringParamSpec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StringParamSpec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StringParamSpec__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StringParamSpec__Sequence__fini(bosdyn_msgs__msg__StringParamSpec__Sequence * array)
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
      bosdyn_msgs__msg__StringParamSpec__fini(&array->data[i]);
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

bosdyn_msgs__msg__StringParamSpec__Sequence *
bosdyn_msgs__msg__StringParamSpec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StringParamSpec__Sequence * array = (bosdyn_msgs__msg__StringParamSpec__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StringParamSpec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StringParamSpec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StringParamSpec__Sequence__destroy(bosdyn_msgs__msg__StringParamSpec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StringParamSpec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StringParamSpec__Sequence__are_equal(const bosdyn_msgs__msg__StringParamSpec__Sequence * lhs, const bosdyn_msgs__msg__StringParamSpec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StringParamSpec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StringParamSpec__Sequence__copy(
  const bosdyn_msgs__msg__StringParamSpec__Sequence * input,
  bosdyn_msgs__msg__StringParamSpec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StringParamSpec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StringParamSpec * data =
      (bosdyn_msgs__msg__StringParamSpec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StringParamSpec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StringParamSpec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StringParamSpec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
