// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/AreaIOneOfGeometry.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/area_i_one_of_geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `rectangle`
#include "bosdyn_msgs/msg/detail/rectangle_i__functions.h"

bool
bosdyn_msgs__msg__AreaIOneOfGeometry__init(bosdyn_msgs__msg__AreaIOneOfGeometry * msg)
{
  if (!msg) {
    return false;
  }
  // rectangle
  if (!bosdyn_msgs__msg__RectangleI__init(&msg->rectangle)) {
    bosdyn_msgs__msg__AreaIOneOfGeometry__fini(msg);
    return false;
  }
  // geometry_choice
  return true;
}

void
bosdyn_msgs__msg__AreaIOneOfGeometry__fini(bosdyn_msgs__msg__AreaIOneOfGeometry * msg)
{
  if (!msg) {
    return;
  }
  // rectangle
  bosdyn_msgs__msg__RectangleI__fini(&msg->rectangle);
  // geometry_choice
}

bool
bosdyn_msgs__msg__AreaIOneOfGeometry__are_equal(const bosdyn_msgs__msg__AreaIOneOfGeometry * lhs, const bosdyn_msgs__msg__AreaIOneOfGeometry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rectangle
  if (!bosdyn_msgs__msg__RectangleI__are_equal(
      &(lhs->rectangle), &(rhs->rectangle)))
  {
    return false;
  }
  // geometry_choice
  if (lhs->geometry_choice != rhs->geometry_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__AreaIOneOfGeometry__copy(
  const bosdyn_msgs__msg__AreaIOneOfGeometry * input,
  bosdyn_msgs__msg__AreaIOneOfGeometry * output)
{
  if (!input || !output) {
    return false;
  }
  // rectangle
  if (!bosdyn_msgs__msg__RectangleI__copy(
      &(input->rectangle), &(output->rectangle)))
  {
    return false;
  }
  // geometry_choice
  output->geometry_choice = input->geometry_choice;
  return true;
}

bosdyn_msgs__msg__AreaIOneOfGeometry *
bosdyn_msgs__msg__AreaIOneOfGeometry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaIOneOfGeometry * msg = (bosdyn_msgs__msg__AreaIOneOfGeometry *)allocator.allocate(sizeof(bosdyn_msgs__msg__AreaIOneOfGeometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__AreaIOneOfGeometry));
  bool success = bosdyn_msgs__msg__AreaIOneOfGeometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__AreaIOneOfGeometry__destroy(bosdyn_msgs__msg__AreaIOneOfGeometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__AreaIOneOfGeometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence__init(bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaIOneOfGeometry * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__AreaIOneOfGeometry *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__AreaIOneOfGeometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__AreaIOneOfGeometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__AreaIOneOfGeometry__fini(&data[i - 1]);
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
bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence__fini(bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence * array)
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
      bosdyn_msgs__msg__AreaIOneOfGeometry__fini(&array->data[i]);
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

bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence *
bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence * array = (bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence__destroy(bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence__are_equal(const bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence * lhs, const bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__AreaIOneOfGeometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence__copy(
  const bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence * input,
  bosdyn_msgs__msg__AreaIOneOfGeometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__AreaIOneOfGeometry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__AreaIOneOfGeometry * data =
      (bosdyn_msgs__msg__AreaIOneOfGeometry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__AreaIOneOfGeometry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__AreaIOneOfGeometry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__AreaIOneOfGeometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
