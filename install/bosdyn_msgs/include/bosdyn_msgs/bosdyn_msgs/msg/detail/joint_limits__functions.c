// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/joint_limits__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"
// Member `hy`
// Member `hx`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bosdyn_msgs__msg__JointLimits__init(bosdyn_msgs__msg__JointLimits * msg)
{
  if (!msg) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    bosdyn_msgs__msg__JointLimits__fini(msg);
    return false;
  }
  // hy
  if (!rosidl_runtime_c__float__Sequence__init(&msg->hy, 0)) {
    bosdyn_msgs__msg__JointLimits__fini(msg);
    return false;
  }
  // hx
  if (!rosidl_runtime_c__float__Sequence__init(&msg->hx, 0)) {
    bosdyn_msgs__msg__JointLimits__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__JointLimits__fini(bosdyn_msgs__msg__JointLimits * msg)
{
  if (!msg) {
    return;
  }
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // hy
  rosidl_runtime_c__float__Sequence__fini(&msg->hy);
  // hx
  rosidl_runtime_c__float__Sequence__fini(&msg->hx);
}

bool
bosdyn_msgs__msg__JointLimits__are_equal(const bosdyn_msgs__msg__JointLimits * lhs, const bosdyn_msgs__msg__JointLimits * rhs)
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
  // hy
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->hy), &(rhs->hy)))
  {
    return false;
  }
  // hx
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->hx), &(rhs->hx)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__JointLimits__copy(
  const bosdyn_msgs__msg__JointLimits * input,
  bosdyn_msgs__msg__JointLimits * output)
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
  // hy
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->hy), &(output->hy)))
  {
    return false;
  }
  // hx
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->hx), &(output->hx)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__JointLimits *
bosdyn_msgs__msg__JointLimits__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__JointLimits * msg = (bosdyn_msgs__msg__JointLimits *)allocator.allocate(sizeof(bosdyn_msgs__msg__JointLimits), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__JointLimits));
  bool success = bosdyn_msgs__msg__JointLimits__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__JointLimits__destroy(bosdyn_msgs__msg__JointLimits * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__JointLimits__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__JointLimits__Sequence__init(bosdyn_msgs__msg__JointLimits__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__JointLimits * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__JointLimits *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__JointLimits), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__JointLimits__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__JointLimits__fini(&data[i - 1]);
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
bosdyn_msgs__msg__JointLimits__Sequence__fini(bosdyn_msgs__msg__JointLimits__Sequence * array)
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
      bosdyn_msgs__msg__JointLimits__fini(&array->data[i]);
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

bosdyn_msgs__msg__JointLimits__Sequence *
bosdyn_msgs__msg__JointLimits__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__JointLimits__Sequence * array = (bosdyn_msgs__msg__JointLimits__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__JointLimits__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__JointLimits__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__JointLimits__Sequence__destroy(bosdyn_msgs__msg__JointLimits__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__JointLimits__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__JointLimits__Sequence__are_equal(const bosdyn_msgs__msg__JointLimits__Sequence * lhs, const bosdyn_msgs__msg__JointLimits__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__JointLimits__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__JointLimits__Sequence__copy(
  const bosdyn_msgs__msg__JointLimits__Sequence * input,
  bosdyn_msgs__msg__JointLimits__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__JointLimits);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__JointLimits * data =
      (bosdyn_msgs__msg__JointLimits *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__JointLimits__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__JointLimits__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__JointLimits__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
