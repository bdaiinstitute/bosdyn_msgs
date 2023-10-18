// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandRequestOneOfTaskTargetPosition.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_one_of_task_target_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__init(bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition * msg)
{
  if (!msg) {
    return false;
  }
  // target_linear_position
  // target_angle
  // task_target_position_choice
  return true;
}

void
bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__fini(bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition * msg)
{
  if (!msg) {
    return;
  }
  // target_linear_position
  // target_angle
  // task_target_position_choice
}

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__are_equal(const bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition * lhs, const bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_linear_position
  if (lhs->target_linear_position != rhs->target_linear_position) {
    return false;
  }
  // target_angle
  if (lhs->target_angle != rhs->target_angle) {
    return false;
  }
  // task_target_position_choice
  if (lhs->task_target_position_choice != rhs->task_target_position_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__copy(
  const bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition * input,
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // target_linear_position
  output->target_linear_position = input->target_linear_position;
  // target_angle
  output->target_angle = input->target_angle;
  // task_target_position_choice
  output->task_target_position_choice = input->task_target_position_choice;
  return true;
}

bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition *
bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition * msg = (bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition *)allocator.allocate(sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition));
  bool success = bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__destroy(bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence__init(bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence__fini(bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence * array)
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
      bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__fini(&array->data[i]);
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

bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence *
bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence * array = (bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence__destroy(bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence__are_equal(const bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence * lhs, const bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence__copy(
  const bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence * input,
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition * data =
      (bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
