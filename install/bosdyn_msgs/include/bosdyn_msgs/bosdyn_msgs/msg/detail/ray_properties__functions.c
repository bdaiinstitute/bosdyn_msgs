// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RayProperties.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/ray_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ray`
#include "bosdyn_msgs/msg/detail/ray__functions.h"
// Member `frame`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__RayProperties__init(bosdyn_msgs__msg__RayProperties * msg)
{
  if (!msg) {
    return false;
  }
  // ray
  if (!bosdyn_msgs__msg__Ray__init(&msg->ray)) {
    bosdyn_msgs__msg__RayProperties__fini(msg);
    return false;
  }
  // ray_is_set
  // frame
  if (!rosidl_runtime_c__String__init(&msg->frame)) {
    bosdyn_msgs__msg__RayProperties__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__RayProperties__fini(bosdyn_msgs__msg__RayProperties * msg)
{
  if (!msg) {
    return;
  }
  // ray
  bosdyn_msgs__msg__Ray__fini(&msg->ray);
  // ray_is_set
  // frame
  rosidl_runtime_c__String__fini(&msg->frame);
}

bool
bosdyn_msgs__msg__RayProperties__are_equal(const bosdyn_msgs__msg__RayProperties * lhs, const bosdyn_msgs__msg__RayProperties * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ray
  if (!bosdyn_msgs__msg__Ray__are_equal(
      &(lhs->ray), &(rhs->ray)))
  {
    return false;
  }
  // ray_is_set
  if (lhs->ray_is_set != rhs->ray_is_set) {
    return false;
  }
  // frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame), &(rhs->frame)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RayProperties__copy(
  const bosdyn_msgs__msg__RayProperties * input,
  bosdyn_msgs__msg__RayProperties * output)
{
  if (!input || !output) {
    return false;
  }
  // ray
  if (!bosdyn_msgs__msg__Ray__copy(
      &(input->ray), &(output->ray)))
  {
    return false;
  }
  // ray_is_set
  output->ray_is_set = input->ray_is_set;
  // frame
  if (!rosidl_runtime_c__String__copy(
      &(input->frame), &(output->frame)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__RayProperties *
bosdyn_msgs__msg__RayProperties__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RayProperties * msg = (bosdyn_msgs__msg__RayProperties *)allocator.allocate(sizeof(bosdyn_msgs__msg__RayProperties), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RayProperties));
  bool success = bosdyn_msgs__msg__RayProperties__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RayProperties__destroy(bosdyn_msgs__msg__RayProperties * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RayProperties__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RayProperties__Sequence__init(bosdyn_msgs__msg__RayProperties__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RayProperties * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RayProperties *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RayProperties), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RayProperties__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RayProperties__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RayProperties__Sequence__fini(bosdyn_msgs__msg__RayProperties__Sequence * array)
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
      bosdyn_msgs__msg__RayProperties__fini(&array->data[i]);
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

bosdyn_msgs__msg__RayProperties__Sequence *
bosdyn_msgs__msg__RayProperties__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RayProperties__Sequence * array = (bosdyn_msgs__msg__RayProperties__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RayProperties__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RayProperties__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RayProperties__Sequence__destroy(bosdyn_msgs__msg__RayProperties__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RayProperties__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RayProperties__Sequence__are_equal(const bosdyn_msgs__msg__RayProperties__Sequence * lhs, const bosdyn_msgs__msg__RayProperties__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RayProperties__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RayProperties__Sequence__copy(
  const bosdyn_msgs__msg__RayProperties__Sequence * input,
  bosdyn_msgs__msg__RayProperties__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RayProperties);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RayProperties * data =
      (bosdyn_msgs__msg__RayProperties *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RayProperties__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RayProperties__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RayProperties__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
