// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/NodeOneOfType.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/node_one_of_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_reference`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__NodeOneOfType__init(bosdyn_msgs__msg__NodeOneOfType * msg)
{
  if (!msg) {
    return false;
  }
  // node_reference
  if (!rosidl_runtime_c__String__init(&msg->node_reference)) {
    bosdyn_msgs__msg__NodeOneOfType__fini(msg);
    return false;
  }
  // type_choice
  return true;
}

void
bosdyn_msgs__msg__NodeOneOfType__fini(bosdyn_msgs__msg__NodeOneOfType * msg)
{
  if (!msg) {
    return;
  }
  // node_reference
  rosidl_runtime_c__String__fini(&msg->node_reference);
  // type_choice
}

bool
bosdyn_msgs__msg__NodeOneOfType__are_equal(const bosdyn_msgs__msg__NodeOneOfType * lhs, const bosdyn_msgs__msg__NodeOneOfType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_reference
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_reference), &(rhs->node_reference)))
  {
    return false;
  }
  // type_choice
  if (lhs->type_choice != rhs->type_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__NodeOneOfType__copy(
  const bosdyn_msgs__msg__NodeOneOfType * input,
  bosdyn_msgs__msg__NodeOneOfType * output)
{
  if (!input || !output) {
    return false;
  }
  // node_reference
  if (!rosidl_runtime_c__String__copy(
      &(input->node_reference), &(output->node_reference)))
  {
    return false;
  }
  // type_choice
  output->type_choice = input->type_choice;
  return true;
}

bosdyn_msgs__msg__NodeOneOfType *
bosdyn_msgs__msg__NodeOneOfType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NodeOneOfType * msg = (bosdyn_msgs__msg__NodeOneOfType *)allocator.allocate(sizeof(bosdyn_msgs__msg__NodeOneOfType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__NodeOneOfType));
  bool success = bosdyn_msgs__msg__NodeOneOfType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__NodeOneOfType__destroy(bosdyn_msgs__msg__NodeOneOfType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__NodeOneOfType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__NodeOneOfType__Sequence__init(bosdyn_msgs__msg__NodeOneOfType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NodeOneOfType * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__NodeOneOfType *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__NodeOneOfType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__NodeOneOfType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__NodeOneOfType__fini(&data[i - 1]);
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
bosdyn_msgs__msg__NodeOneOfType__Sequence__fini(bosdyn_msgs__msg__NodeOneOfType__Sequence * array)
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
      bosdyn_msgs__msg__NodeOneOfType__fini(&array->data[i]);
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

bosdyn_msgs__msg__NodeOneOfType__Sequence *
bosdyn_msgs__msg__NodeOneOfType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NodeOneOfType__Sequence * array = (bosdyn_msgs__msg__NodeOneOfType__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__NodeOneOfType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__NodeOneOfType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__NodeOneOfType__Sequence__destroy(bosdyn_msgs__msg__NodeOneOfType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__NodeOneOfType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__NodeOneOfType__Sequence__are_equal(const bosdyn_msgs__msg__NodeOneOfType__Sequence * lhs, const bosdyn_msgs__msg__NodeOneOfType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__NodeOneOfType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__NodeOneOfType__Sequence__copy(
  const bosdyn_msgs__msg__NodeOneOfType__Sequence * input,
  bosdyn_msgs__msg__NodeOneOfType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__NodeOneOfType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__NodeOneOfType * data =
      (bosdyn_msgs__msg__NodeOneOfType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__NodeOneOfType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__NodeOneOfType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__NodeOneOfType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
