// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestFixedStance.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_fixed_stance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fl_rt_scene`
// Member `fr_rt_scene`
// Member `hl_rt_scene`
// Member `hr_rt_scene`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__init(bosdyn_msgs__msg__InverseKinematicsRequestFixedStance * msg)
{
  if (!msg) {
    return false;
  }
  // fl_rt_scene
  if (!geometry_msgs__msg__Vector3__init(&msg->fl_rt_scene)) {
    bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__fini(msg);
    return false;
  }
  // fl_rt_scene_is_set
  // fr_rt_scene
  if (!geometry_msgs__msg__Vector3__init(&msg->fr_rt_scene)) {
    bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__fini(msg);
    return false;
  }
  // fr_rt_scene_is_set
  // hl_rt_scene
  if (!geometry_msgs__msg__Vector3__init(&msg->hl_rt_scene)) {
    bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__fini(msg);
    return false;
  }
  // hl_rt_scene_is_set
  // hr_rt_scene
  if (!geometry_msgs__msg__Vector3__init(&msg->hr_rt_scene)) {
    bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__fini(msg);
    return false;
  }
  // hr_rt_scene_is_set
  return true;
}

void
bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__fini(bosdyn_msgs__msg__InverseKinematicsRequestFixedStance * msg)
{
  if (!msg) {
    return;
  }
  // fl_rt_scene
  geometry_msgs__msg__Vector3__fini(&msg->fl_rt_scene);
  // fl_rt_scene_is_set
  // fr_rt_scene
  geometry_msgs__msg__Vector3__fini(&msg->fr_rt_scene);
  // fr_rt_scene_is_set
  // hl_rt_scene
  geometry_msgs__msg__Vector3__fini(&msg->hl_rt_scene);
  // hl_rt_scene_is_set
  // hr_rt_scene
  geometry_msgs__msg__Vector3__fini(&msg->hr_rt_scene);
  // hr_rt_scene_is_set
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__are_equal(const bosdyn_msgs__msg__InverseKinematicsRequestFixedStance * lhs, const bosdyn_msgs__msg__InverseKinematicsRequestFixedStance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fl_rt_scene
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->fl_rt_scene), &(rhs->fl_rt_scene)))
  {
    return false;
  }
  // fl_rt_scene_is_set
  if (lhs->fl_rt_scene_is_set != rhs->fl_rt_scene_is_set) {
    return false;
  }
  // fr_rt_scene
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->fr_rt_scene), &(rhs->fr_rt_scene)))
  {
    return false;
  }
  // fr_rt_scene_is_set
  if (lhs->fr_rt_scene_is_set != rhs->fr_rt_scene_is_set) {
    return false;
  }
  // hl_rt_scene
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->hl_rt_scene), &(rhs->hl_rt_scene)))
  {
    return false;
  }
  // hl_rt_scene_is_set
  if (lhs->hl_rt_scene_is_set != rhs->hl_rt_scene_is_set) {
    return false;
  }
  // hr_rt_scene
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->hr_rt_scene), &(rhs->hr_rt_scene)))
  {
    return false;
  }
  // hr_rt_scene_is_set
  if (lhs->hr_rt_scene_is_set != rhs->hr_rt_scene_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__copy(
  const bosdyn_msgs__msg__InverseKinematicsRequestFixedStance * input,
  bosdyn_msgs__msg__InverseKinematicsRequestFixedStance * output)
{
  if (!input || !output) {
    return false;
  }
  // fl_rt_scene
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->fl_rt_scene), &(output->fl_rt_scene)))
  {
    return false;
  }
  // fl_rt_scene_is_set
  output->fl_rt_scene_is_set = input->fl_rt_scene_is_set;
  // fr_rt_scene
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->fr_rt_scene), &(output->fr_rt_scene)))
  {
    return false;
  }
  // fr_rt_scene_is_set
  output->fr_rt_scene_is_set = input->fr_rt_scene_is_set;
  // hl_rt_scene
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->hl_rt_scene), &(output->hl_rt_scene)))
  {
    return false;
  }
  // hl_rt_scene_is_set
  output->hl_rt_scene_is_set = input->hl_rt_scene_is_set;
  // hr_rt_scene
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->hr_rt_scene), &(output->hr_rt_scene)))
  {
    return false;
  }
  // hr_rt_scene_is_set
  output->hr_rt_scene_is_set = input->hr_rt_scene_is_set;
  return true;
}

bosdyn_msgs__msg__InverseKinematicsRequestFixedStance *
bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequestFixedStance * msg = (bosdyn_msgs__msg__InverseKinematicsRequestFixedStance *)allocator.allocate(sizeof(bosdyn_msgs__msg__InverseKinematicsRequestFixedStance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__InverseKinematicsRequestFixedStance));
  bool success = bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__destroy(bosdyn_msgs__msg__InverseKinematicsRequestFixedStance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence__init(bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequestFixedStance * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__InverseKinematicsRequestFixedStance *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__InverseKinematicsRequestFixedStance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__fini(&data[i - 1]);
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
bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence__fini(bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence * array)
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
      bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__fini(&array->data[i]);
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

bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence *
bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence * array = (bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence__destroy(bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence__are_equal(const bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence * lhs, const bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence__copy(
  const bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence * input,
  bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__InverseKinematicsRequestFixedStance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__InverseKinematicsRequestFixedStance * data =
      (bosdyn_msgs__msg__InverseKinematicsRequestFixedStance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
