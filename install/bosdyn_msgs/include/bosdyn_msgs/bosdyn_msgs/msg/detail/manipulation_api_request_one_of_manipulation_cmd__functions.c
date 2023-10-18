// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ManipulationApiRequestOneOfManipulationCmd.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/manipulation_api_request_one_of_manipulation_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `walk_to_object_ray_in_world`
#include "bosdyn_msgs/msg/detail/walk_to_object_ray_in_world__functions.h"
// Member `walk_to_object_in_image`
#include "bosdyn_msgs/msg/detail/walk_to_object_in_image__functions.h"
// Member `pick_object`
#include "bosdyn_msgs/msg/detail/pick_object__functions.h"
// Member `pick_object_in_image`
#include "bosdyn_msgs/msg/detail/pick_object_in_image__functions.h"
// Member `pick_object_ray_in_world`
#include "bosdyn_msgs/msg/detail/pick_object_ray_in_world__functions.h"
// Member `pick_object_execute_plan`
#include "bosdyn_msgs/msg/detail/pick_object_execute_plan__functions.h"

bool
bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__init(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd * msg)
{
  if (!msg) {
    return false;
  }
  // walk_to_object_ray_in_world
  if (!bosdyn_msgs__msg__WalkToObjectRayInWorld__init(&msg->walk_to_object_ray_in_world)) {
    bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__fini(msg);
    return false;
  }
  // walk_to_object_in_image
  if (!bosdyn_msgs__msg__WalkToObjectInImage__init(&msg->walk_to_object_in_image)) {
    bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__fini(msg);
    return false;
  }
  // pick_object
  if (!bosdyn_msgs__msg__PickObject__init(&msg->pick_object)) {
    bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__fini(msg);
    return false;
  }
  // pick_object_in_image
  if (!bosdyn_msgs__msg__PickObjectInImage__init(&msg->pick_object_in_image)) {
    bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__fini(msg);
    return false;
  }
  // pick_object_ray_in_world
  if (!bosdyn_msgs__msg__PickObjectRayInWorld__init(&msg->pick_object_ray_in_world)) {
    bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__fini(msg);
    return false;
  }
  // pick_object_execute_plan
  if (!bosdyn_msgs__msg__PickObjectExecutePlan__init(&msg->pick_object_execute_plan)) {
    bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__fini(msg);
    return false;
  }
  // manipulation_cmd_choice
  return true;
}

void
bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__fini(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd * msg)
{
  if (!msg) {
    return;
  }
  // walk_to_object_ray_in_world
  bosdyn_msgs__msg__WalkToObjectRayInWorld__fini(&msg->walk_to_object_ray_in_world);
  // walk_to_object_in_image
  bosdyn_msgs__msg__WalkToObjectInImage__fini(&msg->walk_to_object_in_image);
  // pick_object
  bosdyn_msgs__msg__PickObject__fini(&msg->pick_object);
  // pick_object_in_image
  bosdyn_msgs__msg__PickObjectInImage__fini(&msg->pick_object_in_image);
  // pick_object_ray_in_world
  bosdyn_msgs__msg__PickObjectRayInWorld__fini(&msg->pick_object_ray_in_world);
  // pick_object_execute_plan
  bosdyn_msgs__msg__PickObjectExecutePlan__fini(&msg->pick_object_execute_plan);
  // manipulation_cmd_choice
}

bool
bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__are_equal(const bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd * lhs, const bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // walk_to_object_ray_in_world
  if (!bosdyn_msgs__msg__WalkToObjectRayInWorld__are_equal(
      &(lhs->walk_to_object_ray_in_world), &(rhs->walk_to_object_ray_in_world)))
  {
    return false;
  }
  // walk_to_object_in_image
  if (!bosdyn_msgs__msg__WalkToObjectInImage__are_equal(
      &(lhs->walk_to_object_in_image), &(rhs->walk_to_object_in_image)))
  {
    return false;
  }
  // pick_object
  if (!bosdyn_msgs__msg__PickObject__are_equal(
      &(lhs->pick_object), &(rhs->pick_object)))
  {
    return false;
  }
  // pick_object_in_image
  if (!bosdyn_msgs__msg__PickObjectInImage__are_equal(
      &(lhs->pick_object_in_image), &(rhs->pick_object_in_image)))
  {
    return false;
  }
  // pick_object_ray_in_world
  if (!bosdyn_msgs__msg__PickObjectRayInWorld__are_equal(
      &(lhs->pick_object_ray_in_world), &(rhs->pick_object_ray_in_world)))
  {
    return false;
  }
  // pick_object_execute_plan
  if (!bosdyn_msgs__msg__PickObjectExecutePlan__are_equal(
      &(lhs->pick_object_execute_plan), &(rhs->pick_object_execute_plan)))
  {
    return false;
  }
  // manipulation_cmd_choice
  if (lhs->manipulation_cmd_choice != rhs->manipulation_cmd_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__copy(
  const bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd * input,
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // walk_to_object_ray_in_world
  if (!bosdyn_msgs__msg__WalkToObjectRayInWorld__copy(
      &(input->walk_to_object_ray_in_world), &(output->walk_to_object_ray_in_world)))
  {
    return false;
  }
  // walk_to_object_in_image
  if (!bosdyn_msgs__msg__WalkToObjectInImage__copy(
      &(input->walk_to_object_in_image), &(output->walk_to_object_in_image)))
  {
    return false;
  }
  // pick_object
  if (!bosdyn_msgs__msg__PickObject__copy(
      &(input->pick_object), &(output->pick_object)))
  {
    return false;
  }
  // pick_object_in_image
  if (!bosdyn_msgs__msg__PickObjectInImage__copy(
      &(input->pick_object_in_image), &(output->pick_object_in_image)))
  {
    return false;
  }
  // pick_object_ray_in_world
  if (!bosdyn_msgs__msg__PickObjectRayInWorld__copy(
      &(input->pick_object_ray_in_world), &(output->pick_object_ray_in_world)))
  {
    return false;
  }
  // pick_object_execute_plan
  if (!bosdyn_msgs__msg__PickObjectExecutePlan__copy(
      &(input->pick_object_execute_plan), &(output->pick_object_execute_plan)))
  {
    return false;
  }
  // manipulation_cmd_choice
  output->manipulation_cmd_choice = input->manipulation_cmd_choice;
  return true;
}

bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd *
bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd * msg = (bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd *)allocator.allocate(sizeof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd));
  bool success = bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__destroy(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence__init(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence__fini(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence * array)
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
      bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__fini(&array->data[i]);
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

bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence *
bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence * array = (bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence__destroy(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence__are_equal(const bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence * lhs, const bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence__copy(
  const bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence * input,
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd * data =
      (bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
