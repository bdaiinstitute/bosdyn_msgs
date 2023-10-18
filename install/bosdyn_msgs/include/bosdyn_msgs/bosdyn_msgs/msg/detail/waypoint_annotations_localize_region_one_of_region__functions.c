// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegionOneOfRegion.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_one_of_region__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `default_region`
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_default__functions.h"
// Member `empty`
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_empty__functions.h"
// Member `circle`
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_circle2_d__functions.h"

bool
bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__init(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion * msg)
{
  if (!msg) {
    return false;
  }
  // default_region
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionDefault__init(&msg->default_region)) {
    bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__fini(msg);
    return false;
  }
  // empty
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionEmpty__init(&msg->empty)) {
    bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__fini(msg);
    return false;
  }
  // circle
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionCircle2D__init(&msg->circle)) {
    bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__fini(msg);
    return false;
  }
  // region_choice
  return true;
}

void
bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__fini(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion * msg)
{
  if (!msg) {
    return;
  }
  // default_region
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionDefault__fini(&msg->default_region);
  // empty
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionEmpty__fini(&msg->empty);
  // circle
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionCircle2D__fini(&msg->circle);
  // region_choice
}

bool
bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__are_equal(const bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion * lhs, const bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // default_region
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionDefault__are_equal(
      &(lhs->default_region), &(rhs->default_region)))
  {
    return false;
  }
  // empty
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionEmpty__are_equal(
      &(lhs->empty), &(rhs->empty)))
  {
    return false;
  }
  // circle
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionCircle2D__are_equal(
      &(lhs->circle), &(rhs->circle)))
  {
    return false;
  }
  // region_choice
  if (lhs->region_choice != rhs->region_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__copy(
  const bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion * input,
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion * output)
{
  if (!input || !output) {
    return false;
  }
  // default_region
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionDefault__copy(
      &(input->default_region), &(output->default_region)))
  {
    return false;
  }
  // empty
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionEmpty__copy(
      &(input->empty), &(output->empty)))
  {
    return false;
  }
  // circle
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionCircle2D__copy(
      &(input->circle), &(output->circle)))
  {
    return false;
  }
  // region_choice
  output->region_choice = input->region_choice;
  return true;
}

bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion *
bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion * msg = (bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion *)allocator.allocate(sizeof(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion));
  bool success = bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__destroy(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence__init(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__fini(&data[i - 1]);
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
bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence__fini(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence * array)
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
      bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__fini(&array->data[i]);
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

bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence *
bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence * array = (bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence__destroy(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence__are_equal(const bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence * lhs, const bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence__copy(
  const bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence * input,
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion * data =
      (bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
