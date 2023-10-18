// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Parameter.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/parameter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
// Member `units`
// Member `notes`
#include "rosidl_runtime_c/string_functions.h"
// Member `values`
#include "bosdyn_msgs/msg/detail/parameter_one_of_values__functions.h"

bool
bosdyn_msgs__msg__Parameter__init(bosdyn_msgs__msg__Parameter * msg)
{
  if (!msg) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    bosdyn_msgs__msg__Parameter__fini(msg);
    return false;
  }
  // units
  if (!rosidl_runtime_c__String__init(&msg->units)) {
    bosdyn_msgs__msg__Parameter__fini(msg);
    return false;
  }
  // values
  if (!bosdyn_msgs__msg__ParameterOneOfValues__init(&msg->values)) {
    bosdyn_msgs__msg__Parameter__fini(msg);
    return false;
  }
  // notes
  if (!rosidl_runtime_c__String__init(&msg->notes)) {
    bosdyn_msgs__msg__Parameter__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Parameter__fini(bosdyn_msgs__msg__Parameter * msg)
{
  if (!msg) {
    return;
  }
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // units
  rosidl_runtime_c__String__fini(&msg->units);
  // values
  bosdyn_msgs__msg__ParameterOneOfValues__fini(&msg->values);
  // notes
  rosidl_runtime_c__String__fini(&msg->notes);
}

bool
bosdyn_msgs__msg__Parameter__are_equal(const bosdyn_msgs__msg__Parameter * lhs, const bosdyn_msgs__msg__Parameter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // units
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->units), &(rhs->units)))
  {
    return false;
  }
  // values
  if (!bosdyn_msgs__msg__ParameterOneOfValues__are_equal(
      &(lhs->values), &(rhs->values)))
  {
    return false;
  }
  // notes
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->notes), &(rhs->notes)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Parameter__copy(
  const bosdyn_msgs__msg__Parameter * input,
  bosdyn_msgs__msg__Parameter * output)
{
  if (!input || !output) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // units
  if (!rosidl_runtime_c__String__copy(
      &(input->units), &(output->units)))
  {
    return false;
  }
  // values
  if (!bosdyn_msgs__msg__ParameterOneOfValues__copy(
      &(input->values), &(output->values)))
  {
    return false;
  }
  // notes
  if (!rosidl_runtime_c__String__copy(
      &(input->notes), &(output->notes)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Parameter *
bosdyn_msgs__msg__Parameter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Parameter * msg = (bosdyn_msgs__msg__Parameter *)allocator.allocate(sizeof(bosdyn_msgs__msg__Parameter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Parameter));
  bool success = bosdyn_msgs__msg__Parameter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Parameter__destroy(bosdyn_msgs__msg__Parameter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Parameter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Parameter__Sequence__init(bosdyn_msgs__msg__Parameter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Parameter * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Parameter *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Parameter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Parameter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Parameter__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Parameter__Sequence__fini(bosdyn_msgs__msg__Parameter__Sequence * array)
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
      bosdyn_msgs__msg__Parameter__fini(&array->data[i]);
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

bosdyn_msgs__msg__Parameter__Sequence *
bosdyn_msgs__msg__Parameter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Parameter__Sequence * array = (bosdyn_msgs__msg__Parameter__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Parameter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Parameter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Parameter__Sequence__destroy(bosdyn_msgs__msg__Parameter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Parameter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Parameter__Sequence__are_equal(const bosdyn_msgs__msg__Parameter__Sequence * lhs, const bosdyn_msgs__msg__Parameter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Parameter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Parameter__Sequence__copy(
  const bosdyn_msgs__msg__Parameter__Sequence * input,
  bosdyn_msgs__msg__Parameter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Parameter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Parameter * data =
      (bosdyn_msgs__msg__Parameter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Parameter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Parameter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Parameter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
