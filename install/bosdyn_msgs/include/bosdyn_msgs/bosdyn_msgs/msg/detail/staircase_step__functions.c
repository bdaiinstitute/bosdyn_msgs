// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StaircaseStep.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/staircase_step__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `point`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `north`
#include "bosdyn_msgs/msg/detail/vec2__functions.h"
// Member `width`
#include "bosdyn_msgs/msg/detail/staircase_width__functions.h"

bool
bosdyn_msgs__msg__StaircaseStep__init(bosdyn_msgs__msg__StaircaseStep * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Vector3__init(&msg->point)) {
    bosdyn_msgs__msg__StaircaseStep__fini(msg);
    return false;
  }
  // point_is_set
  // north
  if (!bosdyn_msgs__msg__Vec2__init(&msg->north)) {
    bosdyn_msgs__msg__StaircaseStep__fini(msg);
    return false;
  }
  // north_is_set
  // width
  if (!bosdyn_msgs__msg__StaircaseWidth__init(&msg->width)) {
    bosdyn_msgs__msg__StaircaseStep__fini(msg);
    return false;
  }
  // width_is_set
  return true;
}

void
bosdyn_msgs__msg__StaircaseStep__fini(bosdyn_msgs__msg__StaircaseStep * msg)
{
  if (!msg) {
    return;
  }
  // point
  geometry_msgs__msg__Vector3__fini(&msg->point);
  // point_is_set
  // north
  bosdyn_msgs__msg__Vec2__fini(&msg->north);
  // north_is_set
  // width
  bosdyn_msgs__msg__StaircaseWidth__fini(&msg->width);
  // width_is_set
}

bool
bosdyn_msgs__msg__StaircaseStep__are_equal(const bosdyn_msgs__msg__StaircaseStep * lhs, const bosdyn_msgs__msg__StaircaseStep * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // point_is_set
  if (lhs->point_is_set != rhs->point_is_set) {
    return false;
  }
  // north
  if (!bosdyn_msgs__msg__Vec2__are_equal(
      &(lhs->north), &(rhs->north)))
  {
    return false;
  }
  // north_is_set
  if (lhs->north_is_set != rhs->north_is_set) {
    return false;
  }
  // width
  if (!bosdyn_msgs__msg__StaircaseWidth__are_equal(
      &(lhs->width), &(rhs->width)))
  {
    return false;
  }
  // width_is_set
  if (lhs->width_is_set != rhs->width_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StaircaseStep__copy(
  const bosdyn_msgs__msg__StaircaseStep * input,
  bosdyn_msgs__msg__StaircaseStep * output)
{
  if (!input || !output) {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // point_is_set
  output->point_is_set = input->point_is_set;
  // north
  if (!bosdyn_msgs__msg__Vec2__copy(
      &(input->north), &(output->north)))
  {
    return false;
  }
  // north_is_set
  output->north_is_set = input->north_is_set;
  // width
  if (!bosdyn_msgs__msg__StaircaseWidth__copy(
      &(input->width), &(output->width)))
  {
    return false;
  }
  // width_is_set
  output->width_is_set = input->width_is_set;
  return true;
}

bosdyn_msgs__msg__StaircaseStep *
bosdyn_msgs__msg__StaircaseStep__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StaircaseStep * msg = (bosdyn_msgs__msg__StaircaseStep *)allocator.allocate(sizeof(bosdyn_msgs__msg__StaircaseStep), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StaircaseStep));
  bool success = bosdyn_msgs__msg__StaircaseStep__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StaircaseStep__destroy(bosdyn_msgs__msg__StaircaseStep * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StaircaseStep__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StaircaseStep__Sequence__init(bosdyn_msgs__msg__StaircaseStep__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StaircaseStep * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StaircaseStep *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StaircaseStep), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StaircaseStep__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StaircaseStep__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StaircaseStep__Sequence__fini(bosdyn_msgs__msg__StaircaseStep__Sequence * array)
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
      bosdyn_msgs__msg__StaircaseStep__fini(&array->data[i]);
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

bosdyn_msgs__msg__StaircaseStep__Sequence *
bosdyn_msgs__msg__StaircaseStep__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StaircaseStep__Sequence * array = (bosdyn_msgs__msg__StaircaseStep__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StaircaseStep__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StaircaseStep__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StaircaseStep__Sequence__destroy(bosdyn_msgs__msg__StaircaseStep__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StaircaseStep__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StaircaseStep__Sequence__are_equal(const bosdyn_msgs__msg__StaircaseStep__Sequence * lhs, const bosdyn_msgs__msg__StaircaseStep__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StaircaseStep__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StaircaseStep__Sequence__copy(
  const bosdyn_msgs__msg__StaircaseStep__Sequence * input,
  bosdyn_msgs__msg__StaircaseStep__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StaircaseStep);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StaircaseStep * data =
      (bosdyn_msgs__msg__StaircaseStep *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StaircaseStep__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StaircaseStep__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StaircaseStep__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
