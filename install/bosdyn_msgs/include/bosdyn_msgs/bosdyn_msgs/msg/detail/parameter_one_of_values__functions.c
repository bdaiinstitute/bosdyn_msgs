// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ParameterOneOfValues.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/parameter_one_of_values__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `string_value`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__ParameterOneOfValues__init(bosdyn_msgs__msg__ParameterOneOfValues * msg)
{
  if (!msg) {
    return false;
  }
  // int_value
  // float_value
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    bosdyn_msgs__msg__ParameterOneOfValues__fini(msg);
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__init(&msg->duration)) {
    bosdyn_msgs__msg__ParameterOneOfValues__fini(msg);
    return false;
  }
  // string_value
  if (!rosidl_runtime_c__String__init(&msg->string_value)) {
    bosdyn_msgs__msg__ParameterOneOfValues__fini(msg);
    return false;
  }
  // bool_value
  // uint_value
  // values_choice
  return true;
}

void
bosdyn_msgs__msg__ParameterOneOfValues__fini(bosdyn_msgs__msg__ParameterOneOfValues * msg)
{
  if (!msg) {
    return;
  }
  // int_value
  // float_value
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // duration
  builtin_interfaces__msg__Duration__fini(&msg->duration);
  // string_value
  rosidl_runtime_c__String__fini(&msg->string_value);
  // bool_value
  // uint_value
  // values_choice
}

bool
bosdyn_msgs__msg__ParameterOneOfValues__are_equal(const bosdyn_msgs__msg__ParameterOneOfValues * lhs, const bosdyn_msgs__msg__ParameterOneOfValues * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // int_value
  if (lhs->int_value != rhs->int_value) {
    return false;
  }
  // float_value
  if (lhs->float_value != rhs->float_value) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->duration), &(rhs->duration)))
  {
    return false;
  }
  // string_value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->string_value), &(rhs->string_value)))
  {
    return false;
  }
  // bool_value
  if (lhs->bool_value != rhs->bool_value) {
    return false;
  }
  // uint_value
  if (lhs->uint_value != rhs->uint_value) {
    return false;
  }
  // values_choice
  if (lhs->values_choice != rhs->values_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ParameterOneOfValues__copy(
  const bosdyn_msgs__msg__ParameterOneOfValues * input,
  bosdyn_msgs__msg__ParameterOneOfValues * output)
{
  if (!input || !output) {
    return false;
  }
  // int_value
  output->int_value = input->int_value;
  // float_value
  output->float_value = input->float_value;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->duration), &(output->duration)))
  {
    return false;
  }
  // string_value
  if (!rosidl_runtime_c__String__copy(
      &(input->string_value), &(output->string_value)))
  {
    return false;
  }
  // bool_value
  output->bool_value = input->bool_value;
  // uint_value
  output->uint_value = input->uint_value;
  // values_choice
  output->values_choice = input->values_choice;
  return true;
}

bosdyn_msgs__msg__ParameterOneOfValues *
bosdyn_msgs__msg__ParameterOneOfValues__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ParameterOneOfValues * msg = (bosdyn_msgs__msg__ParameterOneOfValues *)allocator.allocate(sizeof(bosdyn_msgs__msg__ParameterOneOfValues), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ParameterOneOfValues));
  bool success = bosdyn_msgs__msg__ParameterOneOfValues__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ParameterOneOfValues__destroy(bosdyn_msgs__msg__ParameterOneOfValues * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ParameterOneOfValues__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ParameterOneOfValues__Sequence__init(bosdyn_msgs__msg__ParameterOneOfValues__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ParameterOneOfValues * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ParameterOneOfValues *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ParameterOneOfValues), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ParameterOneOfValues__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ParameterOneOfValues__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ParameterOneOfValues__Sequence__fini(bosdyn_msgs__msg__ParameterOneOfValues__Sequence * array)
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
      bosdyn_msgs__msg__ParameterOneOfValues__fini(&array->data[i]);
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

bosdyn_msgs__msg__ParameterOneOfValues__Sequence *
bosdyn_msgs__msg__ParameterOneOfValues__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ParameterOneOfValues__Sequence * array = (bosdyn_msgs__msg__ParameterOneOfValues__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ParameterOneOfValues__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ParameterOneOfValues__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ParameterOneOfValues__Sequence__destroy(bosdyn_msgs__msg__ParameterOneOfValues__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ParameterOneOfValues__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ParameterOneOfValues__Sequence__are_equal(const bosdyn_msgs__msg__ParameterOneOfValues__Sequence * lhs, const bosdyn_msgs__msg__ParameterOneOfValues__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ParameterOneOfValues__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ParameterOneOfValues__Sequence__copy(
  const bosdyn_msgs__msg__ParameterOneOfValues__Sequence * input,
  bosdyn_msgs__msg__ParameterOneOfValues__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ParameterOneOfValues);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ParameterOneOfValues * data =
      (bosdyn_msgs__msg__ParameterOneOfValues *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ParameterOneOfValues__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ParameterOneOfValues__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ParameterOneOfValues__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
