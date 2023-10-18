// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ConfigRange.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/config_range__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "bosdyn_msgs/msg/detail/dock_type__functions.h"

bool
bosdyn_msgs__msg__ConfigRange__init(bosdyn_msgs__msg__ConfigRange * msg)
{
  if (!msg) {
    return false;
  }
  // id_start
  // id_end
  // type
  if (!bosdyn_msgs__msg__DockType__init(&msg->type)) {
    bosdyn_msgs__msg__ConfigRange__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__ConfigRange__fini(bosdyn_msgs__msg__ConfigRange * msg)
{
  if (!msg) {
    return;
  }
  // id_start
  // id_end
  // type
  bosdyn_msgs__msg__DockType__fini(&msg->type);
}

bool
bosdyn_msgs__msg__ConfigRange__are_equal(const bosdyn_msgs__msg__ConfigRange * lhs, const bosdyn_msgs__msg__ConfigRange * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id_start
  if (lhs->id_start != rhs->id_start) {
    return false;
  }
  // id_end
  if (lhs->id_end != rhs->id_end) {
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__DockType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ConfigRange__copy(
  const bosdyn_msgs__msg__ConfigRange * input,
  bosdyn_msgs__msg__ConfigRange * output)
{
  if (!input || !output) {
    return false;
  }
  // id_start
  output->id_start = input->id_start;
  // id_end
  output->id_end = input->id_end;
  // type
  if (!bosdyn_msgs__msg__DockType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__ConfigRange *
bosdyn_msgs__msg__ConfigRange__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConfigRange * msg = (bosdyn_msgs__msg__ConfigRange *)allocator.allocate(sizeof(bosdyn_msgs__msg__ConfigRange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ConfigRange));
  bool success = bosdyn_msgs__msg__ConfigRange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ConfigRange__destroy(bosdyn_msgs__msg__ConfigRange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ConfigRange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ConfigRange__Sequence__init(bosdyn_msgs__msg__ConfigRange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConfigRange * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ConfigRange *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ConfigRange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ConfigRange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ConfigRange__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ConfigRange__Sequence__fini(bosdyn_msgs__msg__ConfigRange__Sequence * array)
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
      bosdyn_msgs__msg__ConfigRange__fini(&array->data[i]);
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

bosdyn_msgs__msg__ConfigRange__Sequence *
bosdyn_msgs__msg__ConfigRange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConfigRange__Sequence * array = (bosdyn_msgs__msg__ConfigRange__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ConfigRange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ConfigRange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ConfigRange__Sequence__destroy(bosdyn_msgs__msg__ConfigRange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ConfigRange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ConfigRange__Sequence__are_equal(const bosdyn_msgs__msg__ConfigRange__Sequence * lhs, const bosdyn_msgs__msg__ConfigRange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ConfigRange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ConfigRange__Sequence__copy(
  const bosdyn_msgs__msg__ConfigRange__Sequence * input,
  bosdyn_msgs__msg__ConfigRange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ConfigRange);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ConfigRange * data =
      (bosdyn_msgs__msg__ConfigRange *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ConfigRange__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ConfigRange__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ConfigRange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
