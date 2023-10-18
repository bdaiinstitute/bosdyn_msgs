// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ConstantValueOneOfValue.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/constant_value_one_of_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `string_value`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__ConstantValueOneOfValue__init(bosdyn_msgs__msg__ConstantValueOneOfValue * msg)
{
  if (!msg) {
    return false;
  }
  // float_value
  // string_value
  if (!rosidl_runtime_c__String__init(&msg->string_value)) {
    bosdyn_msgs__msg__ConstantValueOneOfValue__fini(msg);
    return false;
  }
  // int_value
  // bool_value
  // value_choice
  return true;
}

void
bosdyn_msgs__msg__ConstantValueOneOfValue__fini(bosdyn_msgs__msg__ConstantValueOneOfValue * msg)
{
  if (!msg) {
    return;
  }
  // float_value
  // string_value
  rosidl_runtime_c__String__fini(&msg->string_value);
  // int_value
  // bool_value
  // value_choice
}

bool
bosdyn_msgs__msg__ConstantValueOneOfValue__are_equal(const bosdyn_msgs__msg__ConstantValueOneOfValue * lhs, const bosdyn_msgs__msg__ConstantValueOneOfValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // float_value
  if (lhs->float_value != rhs->float_value) {
    return false;
  }
  // string_value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->string_value), &(rhs->string_value)))
  {
    return false;
  }
  // int_value
  if (lhs->int_value != rhs->int_value) {
    return false;
  }
  // bool_value
  if (lhs->bool_value != rhs->bool_value) {
    return false;
  }
  // value_choice
  if (lhs->value_choice != rhs->value_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ConstantValueOneOfValue__copy(
  const bosdyn_msgs__msg__ConstantValueOneOfValue * input,
  bosdyn_msgs__msg__ConstantValueOneOfValue * output)
{
  if (!input || !output) {
    return false;
  }
  // float_value
  output->float_value = input->float_value;
  // string_value
  if (!rosidl_runtime_c__String__copy(
      &(input->string_value), &(output->string_value)))
  {
    return false;
  }
  // int_value
  output->int_value = input->int_value;
  // bool_value
  output->bool_value = input->bool_value;
  // value_choice
  output->value_choice = input->value_choice;
  return true;
}

bosdyn_msgs__msg__ConstantValueOneOfValue *
bosdyn_msgs__msg__ConstantValueOneOfValue__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConstantValueOneOfValue * msg = (bosdyn_msgs__msg__ConstantValueOneOfValue *)allocator.allocate(sizeof(bosdyn_msgs__msg__ConstantValueOneOfValue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ConstantValueOneOfValue));
  bool success = bosdyn_msgs__msg__ConstantValueOneOfValue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ConstantValueOneOfValue__destroy(bosdyn_msgs__msg__ConstantValueOneOfValue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ConstantValueOneOfValue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence__init(bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConstantValueOneOfValue * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ConstantValueOneOfValue *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ConstantValueOneOfValue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ConstantValueOneOfValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ConstantValueOneOfValue__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence__fini(bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence * array)
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
      bosdyn_msgs__msg__ConstantValueOneOfValue__fini(&array->data[i]);
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

bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence *
bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence * array = (bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence__destroy(bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence__are_equal(const bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence * lhs, const bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ConstantValueOneOfValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence__copy(
  const bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence * input,
  bosdyn_msgs__msg__ConstantValueOneOfValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ConstantValueOneOfValue);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ConstantValueOneOfValue * data =
      (bosdyn_msgs__msg__ConstantValueOneOfValue *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ConstantValueOneOfValue__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ConstantValueOneOfValue__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ConstantValueOneOfValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
