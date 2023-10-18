// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DockState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/dock_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "bosdyn_msgs/msg/detail/dock_state_docked_status__functions.h"
// Member `dock_type`
#include "bosdyn_msgs/msg/detail/dock_type__functions.h"
// Member `power_status`
#include "bosdyn_msgs/msg/detail/dock_state_link_status__functions.h"

bool
bosdyn_msgs__msg__DockState__init(bosdyn_msgs__msg__DockState * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__DockStateDockedStatus__init(&msg->status)) {
    bosdyn_msgs__msg__DockState__fini(msg);
    return false;
  }
  // dock_type
  if (!bosdyn_msgs__msg__DockType__init(&msg->dock_type)) {
    bosdyn_msgs__msg__DockState__fini(msg);
    return false;
  }
  // dock_id
  // power_status
  if (!bosdyn_msgs__msg__DockStateLinkStatus__init(&msg->power_status)) {
    bosdyn_msgs__msg__DockState__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__DockState__fini(bosdyn_msgs__msg__DockState * msg)
{
  if (!msg) {
    return;
  }
  // status
  bosdyn_msgs__msg__DockStateDockedStatus__fini(&msg->status);
  // dock_type
  bosdyn_msgs__msg__DockType__fini(&msg->dock_type);
  // dock_id
  // power_status
  bosdyn_msgs__msg__DockStateLinkStatus__fini(&msg->power_status);
}

bool
bosdyn_msgs__msg__DockState__are_equal(const bosdyn_msgs__msg__DockState * lhs, const bosdyn_msgs__msg__DockState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__DockStateDockedStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // dock_type
  if (!bosdyn_msgs__msg__DockType__are_equal(
      &(lhs->dock_type), &(rhs->dock_type)))
  {
    return false;
  }
  // dock_id
  if (lhs->dock_id != rhs->dock_id) {
    return false;
  }
  // power_status
  if (!bosdyn_msgs__msg__DockStateLinkStatus__are_equal(
      &(lhs->power_status), &(rhs->power_status)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DockState__copy(
  const bosdyn_msgs__msg__DockState * input,
  bosdyn_msgs__msg__DockState * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__DockStateDockedStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // dock_type
  if (!bosdyn_msgs__msg__DockType__copy(
      &(input->dock_type), &(output->dock_type)))
  {
    return false;
  }
  // dock_id
  output->dock_id = input->dock_id;
  // power_status
  if (!bosdyn_msgs__msg__DockStateLinkStatus__copy(
      &(input->power_status), &(output->power_status)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__DockState *
bosdyn_msgs__msg__DockState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DockState * msg = (bosdyn_msgs__msg__DockState *)allocator.allocate(sizeof(bosdyn_msgs__msg__DockState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DockState));
  bool success = bosdyn_msgs__msg__DockState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DockState__destroy(bosdyn_msgs__msg__DockState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DockState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DockState__Sequence__init(bosdyn_msgs__msg__DockState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DockState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DockState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DockState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DockState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DockState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DockState__Sequence__fini(bosdyn_msgs__msg__DockState__Sequence * array)
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
      bosdyn_msgs__msg__DockState__fini(&array->data[i]);
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

bosdyn_msgs__msg__DockState__Sequence *
bosdyn_msgs__msg__DockState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DockState__Sequence * array = (bosdyn_msgs__msg__DockState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DockState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DockState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DockState__Sequence__destroy(bosdyn_msgs__msg__DockState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DockState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DockState__Sequence__are_equal(const bosdyn_msgs__msg__DockState__Sequence * lhs, const bosdyn_msgs__msg__DockState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DockState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DockState__Sequence__copy(
  const bosdyn_msgs__msg__DockState__Sequence * input,
  bosdyn_msgs__msg__DockState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DockState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DockState * data =
      (bosdyn_msgs__msg__DockState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DockState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DockState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DockState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
