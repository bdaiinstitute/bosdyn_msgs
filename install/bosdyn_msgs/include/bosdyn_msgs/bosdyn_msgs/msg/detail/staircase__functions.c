// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Staircase.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/staircase__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `knowledge_type`
#include "bosdyn_msgs/msg/detail/staircase_knowledge_type__functions.h"
// Member `stair_tform`
#include "bosdyn_msgs/msg/detail/stair_transform__functions.h"
// Member `average_width`
#include "bosdyn_msgs/msg/detail/staircase_width__functions.h"
// Member `steps`
#include "bosdyn_msgs/msg/detail/staircase_step__functions.h"

bool
bosdyn_msgs__msg__Staircase__init(bosdyn_msgs__msg__Staircase * msg)
{
  if (!msg) {
    return false;
  }
  // knowledge_type
  if (!bosdyn_msgs__msg__StaircaseKnowledgeType__init(&msg->knowledge_type)) {
    bosdyn_msgs__msg__Staircase__fini(msg);
    return false;
  }
  // stair_tform
  if (!bosdyn_msgs__msg__StairTransform__init(&msg->stair_tform)) {
    bosdyn_msgs__msg__Staircase__fini(msg);
    return false;
  }
  // stair_tform_is_set
  // number_of_steps
  // average_rise
  // average_run
  // average_width
  if (!bosdyn_msgs__msg__StaircaseWidth__init(&msg->average_width)) {
    bosdyn_msgs__msg__Staircase__fini(msg);
    return false;
  }
  // average_width_is_set
  // steps
  if (!bosdyn_msgs__msg__StaircaseStep__Sequence__init(&msg->steps, 0)) {
    bosdyn_msgs__msg__Staircase__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Staircase__fini(bosdyn_msgs__msg__Staircase * msg)
{
  if (!msg) {
    return;
  }
  // knowledge_type
  bosdyn_msgs__msg__StaircaseKnowledgeType__fini(&msg->knowledge_type);
  // stair_tform
  bosdyn_msgs__msg__StairTransform__fini(&msg->stair_tform);
  // stair_tform_is_set
  // number_of_steps
  // average_rise
  // average_run
  // average_width
  bosdyn_msgs__msg__StaircaseWidth__fini(&msg->average_width);
  // average_width_is_set
  // steps
  bosdyn_msgs__msg__StaircaseStep__Sequence__fini(&msg->steps);
}

bool
bosdyn_msgs__msg__Staircase__are_equal(const bosdyn_msgs__msg__Staircase * lhs, const bosdyn_msgs__msg__Staircase * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // knowledge_type
  if (!bosdyn_msgs__msg__StaircaseKnowledgeType__are_equal(
      &(lhs->knowledge_type), &(rhs->knowledge_type)))
  {
    return false;
  }
  // stair_tform
  if (!bosdyn_msgs__msg__StairTransform__are_equal(
      &(lhs->stair_tform), &(rhs->stair_tform)))
  {
    return false;
  }
  // stair_tform_is_set
  if (lhs->stair_tform_is_set != rhs->stair_tform_is_set) {
    return false;
  }
  // number_of_steps
  if (lhs->number_of_steps != rhs->number_of_steps) {
    return false;
  }
  // average_rise
  if (lhs->average_rise != rhs->average_rise) {
    return false;
  }
  // average_run
  if (lhs->average_run != rhs->average_run) {
    return false;
  }
  // average_width
  if (!bosdyn_msgs__msg__StaircaseWidth__are_equal(
      &(lhs->average_width), &(rhs->average_width)))
  {
    return false;
  }
  // average_width_is_set
  if (lhs->average_width_is_set != rhs->average_width_is_set) {
    return false;
  }
  // steps
  if (!bosdyn_msgs__msg__StaircaseStep__Sequence__are_equal(
      &(lhs->steps), &(rhs->steps)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Staircase__copy(
  const bosdyn_msgs__msg__Staircase * input,
  bosdyn_msgs__msg__Staircase * output)
{
  if (!input || !output) {
    return false;
  }
  // knowledge_type
  if (!bosdyn_msgs__msg__StaircaseKnowledgeType__copy(
      &(input->knowledge_type), &(output->knowledge_type)))
  {
    return false;
  }
  // stair_tform
  if (!bosdyn_msgs__msg__StairTransform__copy(
      &(input->stair_tform), &(output->stair_tform)))
  {
    return false;
  }
  // stair_tform_is_set
  output->stair_tform_is_set = input->stair_tform_is_set;
  // number_of_steps
  output->number_of_steps = input->number_of_steps;
  // average_rise
  output->average_rise = input->average_rise;
  // average_run
  output->average_run = input->average_run;
  // average_width
  if (!bosdyn_msgs__msg__StaircaseWidth__copy(
      &(input->average_width), &(output->average_width)))
  {
    return false;
  }
  // average_width_is_set
  output->average_width_is_set = input->average_width_is_set;
  // steps
  if (!bosdyn_msgs__msg__StaircaseStep__Sequence__copy(
      &(input->steps), &(output->steps)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Staircase *
bosdyn_msgs__msg__Staircase__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Staircase * msg = (bosdyn_msgs__msg__Staircase *)allocator.allocate(sizeof(bosdyn_msgs__msg__Staircase), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Staircase));
  bool success = bosdyn_msgs__msg__Staircase__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Staircase__destroy(bosdyn_msgs__msg__Staircase * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Staircase__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Staircase__Sequence__init(bosdyn_msgs__msg__Staircase__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Staircase * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Staircase *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Staircase), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Staircase__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Staircase__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Staircase__Sequence__fini(bosdyn_msgs__msg__Staircase__Sequence * array)
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
      bosdyn_msgs__msg__Staircase__fini(&array->data[i]);
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

bosdyn_msgs__msg__Staircase__Sequence *
bosdyn_msgs__msg__Staircase__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Staircase__Sequence * array = (bosdyn_msgs__msg__Staircase__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Staircase__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Staircase__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Staircase__Sequence__destroy(bosdyn_msgs__msg__Staircase__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Staircase__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Staircase__Sequence__are_equal(const bosdyn_msgs__msg__Staircase__Sequence * lhs, const bosdyn_msgs__msg__Staircase__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Staircase__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Staircase__Sequence__copy(
  const bosdyn_msgs__msg__Staircase__Sequence * input,
  bosdyn_msgs__msg__Staircase__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Staircase);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Staircase * data =
      (bosdyn_msgs__msg__Staircase *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Staircase__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Staircase__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Staircase__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
