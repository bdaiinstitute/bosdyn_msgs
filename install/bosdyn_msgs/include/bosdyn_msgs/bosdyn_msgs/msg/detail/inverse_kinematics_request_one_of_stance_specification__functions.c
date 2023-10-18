// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfStanceSpecification.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_stance_specification__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fixed_stance`
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_fixed_stance__functions.h"
// Member `on_ground_plane_stance`
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_on_ground_plane_stance__functions.h"

bool
bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__init(bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification * msg)
{
  if (!msg) {
    return false;
  }
  // fixed_stance
  if (!bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__init(&msg->fixed_stance)) {
    bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__fini(msg);
    return false;
  }
  // on_ground_plane_stance
  if (!bosdyn_msgs__msg__InverseKinematicsRequestOnGroundPlaneStance__init(&msg->on_ground_plane_stance)) {
    bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__fini(msg);
    return false;
  }
  // stance_specification_choice
  return true;
}

void
bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__fini(bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification * msg)
{
  if (!msg) {
    return;
  }
  // fixed_stance
  bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__fini(&msg->fixed_stance);
  // on_ground_plane_stance
  bosdyn_msgs__msg__InverseKinematicsRequestOnGroundPlaneStance__fini(&msg->on_ground_plane_stance);
  // stance_specification_choice
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__are_equal(const bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification * lhs, const bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fixed_stance
  if (!bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__are_equal(
      &(lhs->fixed_stance), &(rhs->fixed_stance)))
  {
    return false;
  }
  // on_ground_plane_stance
  if (!bosdyn_msgs__msg__InverseKinematicsRequestOnGroundPlaneStance__are_equal(
      &(lhs->on_ground_plane_stance), &(rhs->on_ground_plane_stance)))
  {
    return false;
  }
  // stance_specification_choice
  if (lhs->stance_specification_choice != rhs->stance_specification_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__copy(
  const bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification * input,
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification * output)
{
  if (!input || !output) {
    return false;
  }
  // fixed_stance
  if (!bosdyn_msgs__msg__InverseKinematicsRequestFixedStance__copy(
      &(input->fixed_stance), &(output->fixed_stance)))
  {
    return false;
  }
  // on_ground_plane_stance
  if (!bosdyn_msgs__msg__InverseKinematicsRequestOnGroundPlaneStance__copy(
      &(input->on_ground_plane_stance), &(output->on_ground_plane_stance)))
  {
    return false;
  }
  // stance_specification_choice
  output->stance_specification_choice = input->stance_specification_choice;
  return true;
}

bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification *
bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification * msg = (bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification *)allocator.allocate(sizeof(bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification));
  bool success = bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__destroy(bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence__init(bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__fini(&data[i - 1]);
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
bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence__fini(bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence * array)
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
      bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__fini(&array->data[i]);
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

bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence *
bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence * array = (bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence__destroy(bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence__are_equal(const bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence * lhs, const bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence__copy(
  const bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence * input,
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification * data =
      (bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
