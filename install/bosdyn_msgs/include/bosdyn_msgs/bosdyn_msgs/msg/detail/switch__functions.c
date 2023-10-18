// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Switch.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/switch__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pivot_value`
#include "bosdyn_msgs/msg/detail/value__functions.h"
// Member `int_children`
#include "bosdyn_msgs/msg/detail/key_int32_value_bosdyn_msgs_node__functions.h"
// Member `default_child`
#include "bosdyn_msgs/msg/detail/node__functions.h"

bool
bosdyn_msgs__msg__Switch__init(bosdyn_msgs__msg__Switch * msg)
{
  if (!msg) {
    return false;
  }
  // pivot_value
  if (!bosdyn_msgs__msg__Value__init(&msg->pivot_value)) {
    bosdyn_msgs__msg__Switch__fini(msg);
    return false;
  }
  // pivot_value_is_set
  // always_restart
  // int_children
  if (!bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsNode__Sequence__init(&msg->int_children, 0)) {
    bosdyn_msgs__msg__Switch__fini(msg);
    return false;
  }
  // default_child
  if (!bosdyn_msgs__msg__Node__init(&msg->default_child)) {
    bosdyn_msgs__msg__Switch__fini(msg);
    return false;
  }
  // default_child_is_set
  return true;
}

void
bosdyn_msgs__msg__Switch__fini(bosdyn_msgs__msg__Switch * msg)
{
  if (!msg) {
    return;
  }
  // pivot_value
  bosdyn_msgs__msg__Value__fini(&msg->pivot_value);
  // pivot_value_is_set
  // always_restart
  // int_children
  bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsNode__Sequence__fini(&msg->int_children);
  // default_child
  bosdyn_msgs__msg__Node__fini(&msg->default_child);
  // default_child_is_set
}

bool
bosdyn_msgs__msg__Switch__are_equal(const bosdyn_msgs__msg__Switch * lhs, const bosdyn_msgs__msg__Switch * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pivot_value
  if (!bosdyn_msgs__msg__Value__are_equal(
      &(lhs->pivot_value), &(rhs->pivot_value)))
  {
    return false;
  }
  // pivot_value_is_set
  if (lhs->pivot_value_is_set != rhs->pivot_value_is_set) {
    return false;
  }
  // always_restart
  if (lhs->always_restart != rhs->always_restart) {
    return false;
  }
  // int_children
  if (!bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsNode__Sequence__are_equal(
      &(lhs->int_children), &(rhs->int_children)))
  {
    return false;
  }
  // default_child
  if (!bosdyn_msgs__msg__Node__are_equal(
      &(lhs->default_child), &(rhs->default_child)))
  {
    return false;
  }
  // default_child_is_set
  if (lhs->default_child_is_set != rhs->default_child_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Switch__copy(
  const bosdyn_msgs__msg__Switch * input,
  bosdyn_msgs__msg__Switch * output)
{
  if (!input || !output) {
    return false;
  }
  // pivot_value
  if (!bosdyn_msgs__msg__Value__copy(
      &(input->pivot_value), &(output->pivot_value)))
  {
    return false;
  }
  // pivot_value_is_set
  output->pivot_value_is_set = input->pivot_value_is_set;
  // always_restart
  output->always_restart = input->always_restart;
  // int_children
  if (!bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsNode__Sequence__copy(
      &(input->int_children), &(output->int_children)))
  {
    return false;
  }
  // default_child
  if (!bosdyn_msgs__msg__Node__copy(
      &(input->default_child), &(output->default_child)))
  {
    return false;
  }
  // default_child_is_set
  output->default_child_is_set = input->default_child_is_set;
  return true;
}

bosdyn_msgs__msg__Switch *
bosdyn_msgs__msg__Switch__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Switch * msg = (bosdyn_msgs__msg__Switch *)allocator.allocate(sizeof(bosdyn_msgs__msg__Switch), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Switch));
  bool success = bosdyn_msgs__msg__Switch__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Switch__destroy(bosdyn_msgs__msg__Switch * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Switch__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Switch__Sequence__init(bosdyn_msgs__msg__Switch__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Switch * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Switch *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Switch), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Switch__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Switch__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Switch__Sequence__fini(bosdyn_msgs__msg__Switch__Sequence * array)
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
      bosdyn_msgs__msg__Switch__fini(&array->data[i]);
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

bosdyn_msgs__msg__Switch__Sequence *
bosdyn_msgs__msg__Switch__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Switch__Sequence * array = (bosdyn_msgs__msg__Switch__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Switch__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Switch__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Switch__Sequence__destroy(bosdyn_msgs__msg__Switch__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Switch__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Switch__Sequence__are_equal(const bosdyn_msgs__msg__Switch__Sequence * lhs, const bosdyn_msgs__msg__Switch__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Switch__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Switch__Sequence__copy(
  const bosdyn_msgs__msg__Switch__Sequence * input,
  bosdyn_msgs__msg__Switch__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Switch);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Switch * data =
      (bosdyn_msgs__msg__Switch *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Switch__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Switch__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Switch__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
