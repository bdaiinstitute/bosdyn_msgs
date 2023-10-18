// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StraightStaircaseLanding.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/straight_staircase_landing__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stairs_tform_landing_center`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
bosdyn_msgs__msg__StraightStaircaseLanding__init(bosdyn_msgs__msg__StraightStaircaseLanding * msg)
{
  if (!msg) {
    return false;
  }
  // stairs_tform_landing_center
  if (!geometry_msgs__msg__Pose__init(&msg->stairs_tform_landing_center)) {
    bosdyn_msgs__msg__StraightStaircaseLanding__fini(msg);
    return false;
  }
  // stairs_tform_landing_center_is_set
  // landing_extent_x
  // landing_extent_y
  return true;
}

void
bosdyn_msgs__msg__StraightStaircaseLanding__fini(bosdyn_msgs__msg__StraightStaircaseLanding * msg)
{
  if (!msg) {
    return;
  }
  // stairs_tform_landing_center
  geometry_msgs__msg__Pose__fini(&msg->stairs_tform_landing_center);
  // stairs_tform_landing_center_is_set
  // landing_extent_x
  // landing_extent_y
}

bool
bosdyn_msgs__msg__StraightStaircaseLanding__are_equal(const bosdyn_msgs__msg__StraightStaircaseLanding * lhs, const bosdyn_msgs__msg__StraightStaircaseLanding * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stairs_tform_landing_center
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->stairs_tform_landing_center), &(rhs->stairs_tform_landing_center)))
  {
    return false;
  }
  // stairs_tform_landing_center_is_set
  if (lhs->stairs_tform_landing_center_is_set != rhs->stairs_tform_landing_center_is_set) {
    return false;
  }
  // landing_extent_x
  if (lhs->landing_extent_x != rhs->landing_extent_x) {
    return false;
  }
  // landing_extent_y
  if (lhs->landing_extent_y != rhs->landing_extent_y) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StraightStaircaseLanding__copy(
  const bosdyn_msgs__msg__StraightStaircaseLanding * input,
  bosdyn_msgs__msg__StraightStaircaseLanding * output)
{
  if (!input || !output) {
    return false;
  }
  // stairs_tform_landing_center
  if (!geometry_msgs__msg__Pose__copy(
      &(input->stairs_tform_landing_center), &(output->stairs_tform_landing_center)))
  {
    return false;
  }
  // stairs_tform_landing_center_is_set
  output->stairs_tform_landing_center_is_set = input->stairs_tform_landing_center_is_set;
  // landing_extent_x
  output->landing_extent_x = input->landing_extent_x;
  // landing_extent_y
  output->landing_extent_y = input->landing_extent_y;
  return true;
}

bosdyn_msgs__msg__StraightStaircaseLanding *
bosdyn_msgs__msg__StraightStaircaseLanding__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StraightStaircaseLanding * msg = (bosdyn_msgs__msg__StraightStaircaseLanding *)allocator.allocate(sizeof(bosdyn_msgs__msg__StraightStaircaseLanding), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StraightStaircaseLanding));
  bool success = bosdyn_msgs__msg__StraightStaircaseLanding__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StraightStaircaseLanding__destroy(bosdyn_msgs__msg__StraightStaircaseLanding * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StraightStaircaseLanding__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StraightStaircaseLanding__Sequence__init(bosdyn_msgs__msg__StraightStaircaseLanding__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StraightStaircaseLanding * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StraightStaircaseLanding *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StraightStaircaseLanding), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StraightStaircaseLanding__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StraightStaircaseLanding__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StraightStaircaseLanding__Sequence__fini(bosdyn_msgs__msg__StraightStaircaseLanding__Sequence * array)
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
      bosdyn_msgs__msg__StraightStaircaseLanding__fini(&array->data[i]);
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

bosdyn_msgs__msg__StraightStaircaseLanding__Sequence *
bosdyn_msgs__msg__StraightStaircaseLanding__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StraightStaircaseLanding__Sequence * array = (bosdyn_msgs__msg__StraightStaircaseLanding__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StraightStaircaseLanding__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StraightStaircaseLanding__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StraightStaircaseLanding__Sequence__destroy(bosdyn_msgs__msg__StraightStaircaseLanding__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StraightStaircaseLanding__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StraightStaircaseLanding__Sequence__are_equal(const bosdyn_msgs__msg__StraightStaircaseLanding__Sequence * lhs, const bosdyn_msgs__msg__StraightStaircaseLanding__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StraightStaircaseLanding__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StraightStaircaseLanding__Sequence__copy(
  const bosdyn_msgs__msg__StraightStaircaseLanding__Sequence * input,
  bosdyn_msgs__msg__StraightStaircaseLanding__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StraightStaircaseLanding);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StraightStaircaseLanding * data =
      (bosdyn_msgs__msg__StraightStaircaseLanding *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StraightStaircaseLanding__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StraightStaircaseLanding__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StraightStaircaseLanding__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
