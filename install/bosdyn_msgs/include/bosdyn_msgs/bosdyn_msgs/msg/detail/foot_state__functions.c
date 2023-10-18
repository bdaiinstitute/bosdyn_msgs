// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/FootState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/foot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `foot_position_rt_body`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `contact`
#include "bosdyn_msgs/msg/detail/foot_state_contact__functions.h"
// Member `terrain`
#include "bosdyn_msgs/msg/detail/foot_state_terrain_state__functions.h"

bool
bosdyn_msgs__msg__FootState__init(bosdyn_msgs__msg__FootState * msg)
{
  if (!msg) {
    return false;
  }
  // foot_position_rt_body
  if (!geometry_msgs__msg__Vector3__init(&msg->foot_position_rt_body)) {
    bosdyn_msgs__msg__FootState__fini(msg);
    return false;
  }
  // foot_position_rt_body_is_set
  // contact
  if (!bosdyn_msgs__msg__FootStateContact__init(&msg->contact)) {
    bosdyn_msgs__msg__FootState__fini(msg);
    return false;
  }
  // terrain
  if (!bosdyn_msgs__msg__FootStateTerrainState__init(&msg->terrain)) {
    bosdyn_msgs__msg__FootState__fini(msg);
    return false;
  }
  // terrain_is_set
  return true;
}

void
bosdyn_msgs__msg__FootState__fini(bosdyn_msgs__msg__FootState * msg)
{
  if (!msg) {
    return;
  }
  // foot_position_rt_body
  geometry_msgs__msg__Vector3__fini(&msg->foot_position_rt_body);
  // foot_position_rt_body_is_set
  // contact
  bosdyn_msgs__msg__FootStateContact__fini(&msg->contact);
  // terrain
  bosdyn_msgs__msg__FootStateTerrainState__fini(&msg->terrain);
  // terrain_is_set
}

bool
bosdyn_msgs__msg__FootState__are_equal(const bosdyn_msgs__msg__FootState * lhs, const bosdyn_msgs__msg__FootState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // foot_position_rt_body
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->foot_position_rt_body), &(rhs->foot_position_rt_body)))
  {
    return false;
  }
  // foot_position_rt_body_is_set
  if (lhs->foot_position_rt_body_is_set != rhs->foot_position_rt_body_is_set) {
    return false;
  }
  // contact
  if (!bosdyn_msgs__msg__FootStateContact__are_equal(
      &(lhs->contact), &(rhs->contact)))
  {
    return false;
  }
  // terrain
  if (!bosdyn_msgs__msg__FootStateTerrainState__are_equal(
      &(lhs->terrain), &(rhs->terrain)))
  {
    return false;
  }
  // terrain_is_set
  if (lhs->terrain_is_set != rhs->terrain_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__FootState__copy(
  const bosdyn_msgs__msg__FootState * input,
  bosdyn_msgs__msg__FootState * output)
{
  if (!input || !output) {
    return false;
  }
  // foot_position_rt_body
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->foot_position_rt_body), &(output->foot_position_rt_body)))
  {
    return false;
  }
  // foot_position_rt_body_is_set
  output->foot_position_rt_body_is_set = input->foot_position_rt_body_is_set;
  // contact
  if (!bosdyn_msgs__msg__FootStateContact__copy(
      &(input->contact), &(output->contact)))
  {
    return false;
  }
  // terrain
  if (!bosdyn_msgs__msg__FootStateTerrainState__copy(
      &(input->terrain), &(output->terrain)))
  {
    return false;
  }
  // terrain_is_set
  output->terrain_is_set = input->terrain_is_set;
  return true;
}

bosdyn_msgs__msg__FootState *
bosdyn_msgs__msg__FootState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FootState * msg = (bosdyn_msgs__msg__FootState *)allocator.allocate(sizeof(bosdyn_msgs__msg__FootState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__FootState));
  bool success = bosdyn_msgs__msg__FootState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__FootState__destroy(bosdyn_msgs__msg__FootState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__FootState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__FootState__Sequence__init(bosdyn_msgs__msg__FootState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FootState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__FootState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__FootState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__FootState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__FootState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__FootState__Sequence__fini(bosdyn_msgs__msg__FootState__Sequence * array)
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
      bosdyn_msgs__msg__FootState__fini(&array->data[i]);
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

bosdyn_msgs__msg__FootState__Sequence *
bosdyn_msgs__msg__FootState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FootState__Sequence * array = (bosdyn_msgs__msg__FootState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__FootState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__FootState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__FootState__Sequence__destroy(bosdyn_msgs__msg__FootState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__FootState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__FootState__Sequence__are_equal(const bosdyn_msgs__msg__FootState__Sequence * lhs, const bosdyn_msgs__msg__FootState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__FootState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__FootState__Sequence__copy(
  const bosdyn_msgs__msg__FootState__Sequence * input,
  bosdyn_msgs__msg__FootState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__FootState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__FootState * data =
      (bosdyn_msgs__msg__FootState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__FootState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__FootState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__FootState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
