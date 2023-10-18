// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ValueOneOfSource.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/value_one_of_source__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `constant`
#include "bosdyn_msgs/msg/detail/constant_value__functions.h"
// Member `runtime_var`
// Member `parameter`
#include "bosdyn_msgs/msg/detail/variable_declaration__functions.h"

bool
bosdyn_msgs__msg__ValueOneOfSource__init(bosdyn_msgs__msg__ValueOneOfSource * msg)
{
  if (!msg) {
    return false;
  }
  // constant
  if (!bosdyn_msgs__msg__ConstantValue__init(&msg->constant)) {
    bosdyn_msgs__msg__ValueOneOfSource__fini(msg);
    return false;
  }
  // runtime_var
  if (!bosdyn_msgs__msg__VariableDeclaration__init(&msg->runtime_var)) {
    bosdyn_msgs__msg__ValueOneOfSource__fini(msg);
    return false;
  }
  // parameter
  if (!bosdyn_msgs__msg__VariableDeclaration__init(&msg->parameter)) {
    bosdyn_msgs__msg__ValueOneOfSource__fini(msg);
    return false;
  }
  // source_choice
  return true;
}

void
bosdyn_msgs__msg__ValueOneOfSource__fini(bosdyn_msgs__msg__ValueOneOfSource * msg)
{
  if (!msg) {
    return;
  }
  // constant
  bosdyn_msgs__msg__ConstantValue__fini(&msg->constant);
  // runtime_var
  bosdyn_msgs__msg__VariableDeclaration__fini(&msg->runtime_var);
  // parameter
  bosdyn_msgs__msg__VariableDeclaration__fini(&msg->parameter);
  // source_choice
}

bool
bosdyn_msgs__msg__ValueOneOfSource__are_equal(const bosdyn_msgs__msg__ValueOneOfSource * lhs, const bosdyn_msgs__msg__ValueOneOfSource * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // constant
  if (!bosdyn_msgs__msg__ConstantValue__are_equal(
      &(lhs->constant), &(rhs->constant)))
  {
    return false;
  }
  // runtime_var
  if (!bosdyn_msgs__msg__VariableDeclaration__are_equal(
      &(lhs->runtime_var), &(rhs->runtime_var)))
  {
    return false;
  }
  // parameter
  if (!bosdyn_msgs__msg__VariableDeclaration__are_equal(
      &(lhs->parameter), &(rhs->parameter)))
  {
    return false;
  }
  // source_choice
  if (lhs->source_choice != rhs->source_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ValueOneOfSource__copy(
  const bosdyn_msgs__msg__ValueOneOfSource * input,
  bosdyn_msgs__msg__ValueOneOfSource * output)
{
  if (!input || !output) {
    return false;
  }
  // constant
  if (!bosdyn_msgs__msg__ConstantValue__copy(
      &(input->constant), &(output->constant)))
  {
    return false;
  }
  // runtime_var
  if (!bosdyn_msgs__msg__VariableDeclaration__copy(
      &(input->runtime_var), &(output->runtime_var)))
  {
    return false;
  }
  // parameter
  if (!bosdyn_msgs__msg__VariableDeclaration__copy(
      &(input->parameter), &(output->parameter)))
  {
    return false;
  }
  // source_choice
  output->source_choice = input->source_choice;
  return true;
}

bosdyn_msgs__msg__ValueOneOfSource *
bosdyn_msgs__msg__ValueOneOfSource__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ValueOneOfSource * msg = (bosdyn_msgs__msg__ValueOneOfSource *)allocator.allocate(sizeof(bosdyn_msgs__msg__ValueOneOfSource), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ValueOneOfSource));
  bool success = bosdyn_msgs__msg__ValueOneOfSource__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ValueOneOfSource__destroy(bosdyn_msgs__msg__ValueOneOfSource * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ValueOneOfSource__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ValueOneOfSource__Sequence__init(bosdyn_msgs__msg__ValueOneOfSource__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ValueOneOfSource * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ValueOneOfSource *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ValueOneOfSource), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ValueOneOfSource__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ValueOneOfSource__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ValueOneOfSource__Sequence__fini(bosdyn_msgs__msg__ValueOneOfSource__Sequence * array)
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
      bosdyn_msgs__msg__ValueOneOfSource__fini(&array->data[i]);
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

bosdyn_msgs__msg__ValueOneOfSource__Sequence *
bosdyn_msgs__msg__ValueOneOfSource__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ValueOneOfSource__Sequence * array = (bosdyn_msgs__msg__ValueOneOfSource__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ValueOneOfSource__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ValueOneOfSource__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ValueOneOfSource__Sequence__destroy(bosdyn_msgs__msg__ValueOneOfSource__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ValueOneOfSource__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ValueOneOfSource__Sequence__are_equal(const bosdyn_msgs__msg__ValueOneOfSource__Sequence * lhs, const bosdyn_msgs__msg__ValueOneOfSource__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ValueOneOfSource__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ValueOneOfSource__Sequence__copy(
  const bosdyn_msgs__msg__ValueOneOfSource__Sequence * input,
  bosdyn_msgs__msg__ValueOneOfSource__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ValueOneOfSource);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ValueOneOfSource * data =
      (bosdyn_msgs__msg__ValueOneOfSource *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ValueOneOfSource__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ValueOneOfSource__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ValueOneOfSource__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
