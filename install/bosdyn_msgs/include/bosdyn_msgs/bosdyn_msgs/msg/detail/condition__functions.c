// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Condition.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/condition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lhs`
// Member `rhs`
#include "bosdyn_msgs/msg/detail/condition_operand__functions.h"
// Member `operation`
#include "bosdyn_msgs/msg/detail/condition_compare__functions.h"
// Member `handle_staleness`
#include "bosdyn_msgs/msg/detail/condition_handle_staleness__functions.h"

bool
bosdyn_msgs__msg__Condition__init(bosdyn_msgs__msg__Condition * msg)
{
  if (!msg) {
    return false;
  }
  // lhs
  if (!bosdyn_msgs__msg__ConditionOperand__init(&msg->lhs)) {
    bosdyn_msgs__msg__Condition__fini(msg);
    return false;
  }
  // lhs_is_set
  // rhs
  if (!bosdyn_msgs__msg__ConditionOperand__init(&msg->rhs)) {
    bosdyn_msgs__msg__Condition__fini(msg);
    return false;
  }
  // rhs_is_set
  // operation
  if (!bosdyn_msgs__msg__ConditionCompare__init(&msg->operation)) {
    bosdyn_msgs__msg__Condition__fini(msg);
    return false;
  }
  // handle_staleness
  if (!bosdyn_msgs__msg__ConditionHandleStaleness__init(&msg->handle_staleness)) {
    bosdyn_msgs__msg__Condition__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Condition__fini(bosdyn_msgs__msg__Condition * msg)
{
  if (!msg) {
    return;
  }
  // lhs
  bosdyn_msgs__msg__ConditionOperand__fini(&msg->lhs);
  // lhs_is_set
  // rhs
  bosdyn_msgs__msg__ConditionOperand__fini(&msg->rhs);
  // rhs_is_set
  // operation
  bosdyn_msgs__msg__ConditionCompare__fini(&msg->operation);
  // handle_staleness
  bosdyn_msgs__msg__ConditionHandleStaleness__fini(&msg->handle_staleness);
}

bool
bosdyn_msgs__msg__Condition__are_equal(const bosdyn_msgs__msg__Condition * lhs, const bosdyn_msgs__msg__Condition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lhs
  if (!bosdyn_msgs__msg__ConditionOperand__are_equal(
      &(lhs->lhs), &(rhs->lhs)))
  {
    return false;
  }
  // lhs_is_set
  if (lhs->lhs_is_set != rhs->lhs_is_set) {
    return false;
  }
  // rhs
  if (!bosdyn_msgs__msg__ConditionOperand__are_equal(
      &(lhs->rhs), &(rhs->rhs)))
  {
    return false;
  }
  // rhs_is_set
  if (lhs->rhs_is_set != rhs->rhs_is_set) {
    return false;
  }
  // operation
  if (!bosdyn_msgs__msg__ConditionCompare__are_equal(
      &(lhs->operation), &(rhs->operation)))
  {
    return false;
  }
  // handle_staleness
  if (!bosdyn_msgs__msg__ConditionHandleStaleness__are_equal(
      &(lhs->handle_staleness), &(rhs->handle_staleness)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Condition__copy(
  const bosdyn_msgs__msg__Condition * input,
  bosdyn_msgs__msg__Condition * output)
{
  if (!input || !output) {
    return false;
  }
  // lhs
  if (!bosdyn_msgs__msg__ConditionOperand__copy(
      &(input->lhs), &(output->lhs)))
  {
    return false;
  }
  // lhs_is_set
  output->lhs_is_set = input->lhs_is_set;
  // rhs
  if (!bosdyn_msgs__msg__ConditionOperand__copy(
      &(input->rhs), &(output->rhs)))
  {
    return false;
  }
  // rhs_is_set
  output->rhs_is_set = input->rhs_is_set;
  // operation
  if (!bosdyn_msgs__msg__ConditionCompare__copy(
      &(input->operation), &(output->operation)))
  {
    return false;
  }
  // handle_staleness
  if (!bosdyn_msgs__msg__ConditionHandleStaleness__copy(
      &(input->handle_staleness), &(output->handle_staleness)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Condition *
bosdyn_msgs__msg__Condition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Condition * msg = (bosdyn_msgs__msg__Condition *)allocator.allocate(sizeof(bosdyn_msgs__msg__Condition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Condition));
  bool success = bosdyn_msgs__msg__Condition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Condition__destroy(bosdyn_msgs__msg__Condition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Condition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Condition__Sequence__init(bosdyn_msgs__msg__Condition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Condition * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Condition *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Condition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Condition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Condition__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Condition__Sequence__fini(bosdyn_msgs__msg__Condition__Sequence * array)
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
      bosdyn_msgs__msg__Condition__fini(&array->data[i]);
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

bosdyn_msgs__msg__Condition__Sequence *
bosdyn_msgs__msg__Condition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Condition__Sequence * array = (bosdyn_msgs__msg__Condition__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Condition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Condition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Condition__Sequence__destroy(bosdyn_msgs__msg__Condition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Condition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Condition__Sequence__are_equal(const bosdyn_msgs__msg__Condition__Sequence * lhs, const bosdyn_msgs__msg__Condition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Condition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Condition__Sequence__copy(
  const bosdyn_msgs__msg__Condition__Sequence * input,
  bosdyn_msgs__msg__Condition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Condition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Condition * data =
      (bosdyn_msgs__msg__Condition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Condition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Condition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Condition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
