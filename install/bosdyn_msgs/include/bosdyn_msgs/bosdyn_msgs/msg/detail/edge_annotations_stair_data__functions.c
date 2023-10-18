// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/EdgeAnnotationsStairData.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/edge_annotations_stair_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state`
#include "bosdyn_msgs/msg/detail/annotation_state__functions.h"
// Member `staircase_with_landings`
#include "bosdyn_msgs/msg/detail/staircase_with_landings__functions.h"

bool
bosdyn_msgs__msg__EdgeAnnotationsStairData__init(bosdyn_msgs__msg__EdgeAnnotationsStairData * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!bosdyn_msgs__msg__AnnotationState__init(&msg->state)) {
    bosdyn_msgs__msg__EdgeAnnotationsStairData__fini(msg);
    return false;
  }
  // staircase_with_landings
  if (!bosdyn_msgs__msg__StaircaseWithLandings__init(&msg->staircase_with_landings)) {
    bosdyn_msgs__msg__EdgeAnnotationsStairData__fini(msg);
    return false;
  }
  // staircase_with_landings_is_set
  return true;
}

void
bosdyn_msgs__msg__EdgeAnnotationsStairData__fini(bosdyn_msgs__msg__EdgeAnnotationsStairData * msg)
{
  if (!msg) {
    return;
  }
  // state
  bosdyn_msgs__msg__AnnotationState__fini(&msg->state);
  // staircase_with_landings
  bosdyn_msgs__msg__StaircaseWithLandings__fini(&msg->staircase_with_landings);
  // staircase_with_landings_is_set
}

bool
bosdyn_msgs__msg__EdgeAnnotationsStairData__are_equal(const bosdyn_msgs__msg__EdgeAnnotationsStairData * lhs, const bosdyn_msgs__msg__EdgeAnnotationsStairData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!bosdyn_msgs__msg__AnnotationState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // staircase_with_landings
  if (!bosdyn_msgs__msg__StaircaseWithLandings__are_equal(
      &(lhs->staircase_with_landings), &(rhs->staircase_with_landings)))
  {
    return false;
  }
  // staircase_with_landings_is_set
  if (lhs->staircase_with_landings_is_set != rhs->staircase_with_landings_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__EdgeAnnotationsStairData__copy(
  const bosdyn_msgs__msg__EdgeAnnotationsStairData * input,
  bosdyn_msgs__msg__EdgeAnnotationsStairData * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!bosdyn_msgs__msg__AnnotationState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // staircase_with_landings
  if (!bosdyn_msgs__msg__StaircaseWithLandings__copy(
      &(input->staircase_with_landings), &(output->staircase_with_landings)))
  {
    return false;
  }
  // staircase_with_landings_is_set
  output->staircase_with_landings_is_set = input->staircase_with_landings_is_set;
  return true;
}

bosdyn_msgs__msg__EdgeAnnotationsStairData *
bosdyn_msgs__msg__EdgeAnnotationsStairData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EdgeAnnotationsStairData * msg = (bosdyn_msgs__msg__EdgeAnnotationsStairData *)allocator.allocate(sizeof(bosdyn_msgs__msg__EdgeAnnotationsStairData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__EdgeAnnotationsStairData));
  bool success = bosdyn_msgs__msg__EdgeAnnotationsStairData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__EdgeAnnotationsStairData__destroy(bosdyn_msgs__msg__EdgeAnnotationsStairData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__EdgeAnnotationsStairData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence__init(bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EdgeAnnotationsStairData * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__EdgeAnnotationsStairData *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__EdgeAnnotationsStairData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__EdgeAnnotationsStairData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__EdgeAnnotationsStairData__fini(&data[i - 1]);
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
bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence__fini(bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence * array)
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
      bosdyn_msgs__msg__EdgeAnnotationsStairData__fini(&array->data[i]);
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

bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence *
bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence * array = (bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence__destroy(bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence__are_equal(const bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence * lhs, const bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__EdgeAnnotationsStairData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence__copy(
  const bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence * input,
  bosdyn_msgs__msg__EdgeAnnotationsStairData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__EdgeAnnotationsStairData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__EdgeAnnotationsStairData * data =
      (bosdyn_msgs__msg__EdgeAnnotationsStairData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__EdgeAnnotationsStairData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__EdgeAnnotationsStairData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__EdgeAnnotationsStairData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
