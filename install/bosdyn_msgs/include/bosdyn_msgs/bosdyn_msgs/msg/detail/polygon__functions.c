// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/polygon__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vertexes`
#include "bosdyn_msgs/msg/detail/vec2__functions.h"

bool
bosdyn_msgs__msg__Polygon__init(bosdyn_msgs__msg__Polygon * msg)
{
  if (!msg) {
    return false;
  }
  // vertexes
  if (!bosdyn_msgs__msg__Vec2__Sequence__init(&msg->vertexes, 0)) {
    bosdyn_msgs__msg__Polygon__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Polygon__fini(bosdyn_msgs__msg__Polygon * msg)
{
  if (!msg) {
    return;
  }
  // vertexes
  bosdyn_msgs__msg__Vec2__Sequence__fini(&msg->vertexes);
}

bool
bosdyn_msgs__msg__Polygon__are_equal(const bosdyn_msgs__msg__Polygon * lhs, const bosdyn_msgs__msg__Polygon * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vertexes
  if (!bosdyn_msgs__msg__Vec2__Sequence__are_equal(
      &(lhs->vertexes), &(rhs->vertexes)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Polygon__copy(
  const bosdyn_msgs__msg__Polygon * input,
  bosdyn_msgs__msg__Polygon * output)
{
  if (!input || !output) {
    return false;
  }
  // vertexes
  if (!bosdyn_msgs__msg__Vec2__Sequence__copy(
      &(input->vertexes), &(output->vertexes)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Polygon *
bosdyn_msgs__msg__Polygon__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Polygon * msg = (bosdyn_msgs__msg__Polygon *)allocator.allocate(sizeof(bosdyn_msgs__msg__Polygon), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Polygon));
  bool success = bosdyn_msgs__msg__Polygon__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Polygon__destroy(bosdyn_msgs__msg__Polygon * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Polygon__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Polygon__Sequence__init(bosdyn_msgs__msg__Polygon__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Polygon * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Polygon *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Polygon), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Polygon__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Polygon__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Polygon__Sequence__fini(bosdyn_msgs__msg__Polygon__Sequence * array)
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
      bosdyn_msgs__msg__Polygon__fini(&array->data[i]);
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

bosdyn_msgs__msg__Polygon__Sequence *
bosdyn_msgs__msg__Polygon__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Polygon__Sequence * array = (bosdyn_msgs__msg__Polygon__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Polygon__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Polygon__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Polygon__Sequence__destroy(bosdyn_msgs__msg__Polygon__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Polygon__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Polygon__Sequence__are_equal(const bosdyn_msgs__msg__Polygon__Sequence * lhs, const bosdyn_msgs__msg__Polygon__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Polygon__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Polygon__Sequence__copy(
  const bosdyn_msgs__msg__Polygon__Sequence * input,
  bosdyn_msgs__msg__Polygon__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Polygon);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Polygon * data =
      (bosdyn_msgs__msg__Polygon *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Polygon__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Polygon__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Polygon__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
