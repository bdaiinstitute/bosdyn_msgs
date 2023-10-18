// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Params.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `max_duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__Params__init(bosdyn_msgs__msg__Params * msg)
{
  if (!msg) {
    return false;
  }
  // max_displacement
  // max_duration
  if (!builtin_interfaces__msg__Duration__init(&msg->max_duration)) {
    bosdyn_msgs__msg__Params__fini(msg);
    return false;
  }
  // max_duration_is_set
  return true;
}

void
bosdyn_msgs__msg__Params__fini(bosdyn_msgs__msg__Params * msg)
{
  if (!msg) {
    return;
  }
  // max_displacement
  // max_duration
  builtin_interfaces__msg__Duration__fini(&msg->max_duration);
  // max_duration_is_set
}

bool
bosdyn_msgs__msg__Params__are_equal(const bosdyn_msgs__msg__Params * lhs, const bosdyn_msgs__msg__Params * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // max_displacement
  if (lhs->max_displacement != rhs->max_displacement) {
    return false;
  }
  // max_duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->max_duration), &(rhs->max_duration)))
  {
    return false;
  }
  // max_duration_is_set
  if (lhs->max_duration_is_set != rhs->max_duration_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Params__copy(
  const bosdyn_msgs__msg__Params * input,
  bosdyn_msgs__msg__Params * output)
{
  if (!input || !output) {
    return false;
  }
  // max_displacement
  output->max_displacement = input->max_displacement;
  // max_duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->max_duration), &(output->max_duration)))
  {
    return false;
  }
  // max_duration_is_set
  output->max_duration_is_set = input->max_duration_is_set;
  return true;
}

bosdyn_msgs__msg__Params *
bosdyn_msgs__msg__Params__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Params * msg = (bosdyn_msgs__msg__Params *)allocator.allocate(sizeof(bosdyn_msgs__msg__Params), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Params));
  bool success = bosdyn_msgs__msg__Params__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Params__destroy(bosdyn_msgs__msg__Params * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Params__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Params__Sequence__init(bosdyn_msgs__msg__Params__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Params * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Params *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Params), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Params__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Params__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Params__Sequence__fini(bosdyn_msgs__msg__Params__Sequence * array)
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
      bosdyn_msgs__msg__Params__fini(&array->data[i]);
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

bosdyn_msgs__msg__Params__Sequence *
bosdyn_msgs__msg__Params__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Params__Sequence * array = (bosdyn_msgs__msg__Params__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Params__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Params__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Params__Sequence__destroy(bosdyn_msgs__msg__Params__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Params__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Params__Sequence__are_equal(const bosdyn_msgs__msg__Params__Sequence * lhs, const bosdyn_msgs__msg__Params__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Params__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Params__Sequence__copy(
  const bosdyn_msgs__msg__Params__Sequence * input,
  bosdyn_msgs__msg__Params__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Params);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Params * data =
      (bosdyn_msgs__msg__Params *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Params__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Params__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Params__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
