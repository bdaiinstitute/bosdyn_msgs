// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/NoGoRegionPropertiesOneOfRegion.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/no_go_region_properties_one_of_region__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `box`
#include "bosdyn_msgs/msg/detail/box2_with_frame__functions.h"

bool
bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__init(bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion * msg)
{
  if (!msg) {
    return false;
  }
  // box
  if (!bosdyn_msgs__msg__Box2WithFrame__init(&msg->box)) {
    bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__fini(msg);
    return false;
  }
  // region_choice
  return true;
}

void
bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__fini(bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion * msg)
{
  if (!msg) {
    return;
  }
  // box
  bosdyn_msgs__msg__Box2WithFrame__fini(&msg->box);
  // region_choice
}

bool
bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__are_equal(const bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion * lhs, const bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // box
  if (!bosdyn_msgs__msg__Box2WithFrame__are_equal(
      &(lhs->box), &(rhs->box)))
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
bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__copy(
  const bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion * input,
  bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion * output)
{
  if (!input || !output) {
    return false;
  }
  // box
  if (!bosdyn_msgs__msg__Box2WithFrame__copy(
      &(input->box), &(output->box)))
  {
    return false;
  }
  // region_choice
  output->region_choice = input->region_choice;
  return true;
}

bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion *
bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion * msg = (bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion *)allocator.allocate(sizeof(bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion));
  bool success = bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__destroy(bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence__init(bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__fini(&data[i - 1]);
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
bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence__fini(bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence * array)
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
      bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__fini(&array->data[i]);
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

bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence *
bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence * array = (bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence__destroy(bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence__are_equal(const bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence * lhs, const bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence__copy(
  const bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence * input,
  bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion * data =
      (bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__NoGoRegionPropertiesOneOfRegion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
