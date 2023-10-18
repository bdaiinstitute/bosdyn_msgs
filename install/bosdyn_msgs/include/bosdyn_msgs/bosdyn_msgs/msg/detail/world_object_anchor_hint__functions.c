// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/WorldObjectAnchorHint.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/world_object_anchor_hint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_anchor`
#include "bosdyn_msgs/msg/detail/anchored_world_object__functions.h"
// Member `seed_tform_object_uncertainty`
#include "bosdyn_msgs/msg/detail/anchor_hint_uncertainty__functions.h"
// Member `seed_tform_object_constraint`
#include "bosdyn_msgs/msg/detail/pose_bounds__functions.h"

bool
bosdyn_msgs__msg__WorldObjectAnchorHint__init(bosdyn_msgs__msg__WorldObjectAnchorHint * msg)
{
  if (!msg) {
    return false;
  }
  // object_anchor
  if (!bosdyn_msgs__msg__AnchoredWorldObject__init(&msg->object_anchor)) {
    bosdyn_msgs__msg__WorldObjectAnchorHint__fini(msg);
    return false;
  }
  // object_anchor_is_set
  // seed_tform_object_uncertainty
  if (!bosdyn_msgs__msg__AnchorHintUncertainty__init(&msg->seed_tform_object_uncertainty)) {
    bosdyn_msgs__msg__WorldObjectAnchorHint__fini(msg);
    return false;
  }
  // seed_tform_object_uncertainty_is_set
  // seed_tform_object_constraint
  if (!bosdyn_msgs__msg__PoseBounds__init(&msg->seed_tform_object_constraint)) {
    bosdyn_msgs__msg__WorldObjectAnchorHint__fini(msg);
    return false;
  }
  // seed_tform_object_constraint_is_set
  return true;
}

void
bosdyn_msgs__msg__WorldObjectAnchorHint__fini(bosdyn_msgs__msg__WorldObjectAnchorHint * msg)
{
  if (!msg) {
    return;
  }
  // object_anchor
  bosdyn_msgs__msg__AnchoredWorldObject__fini(&msg->object_anchor);
  // object_anchor_is_set
  // seed_tform_object_uncertainty
  bosdyn_msgs__msg__AnchorHintUncertainty__fini(&msg->seed_tform_object_uncertainty);
  // seed_tform_object_uncertainty_is_set
  // seed_tform_object_constraint
  bosdyn_msgs__msg__PoseBounds__fini(&msg->seed_tform_object_constraint);
  // seed_tform_object_constraint_is_set
}

bool
bosdyn_msgs__msg__WorldObjectAnchorHint__are_equal(const bosdyn_msgs__msg__WorldObjectAnchorHint * lhs, const bosdyn_msgs__msg__WorldObjectAnchorHint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_anchor
  if (!bosdyn_msgs__msg__AnchoredWorldObject__are_equal(
      &(lhs->object_anchor), &(rhs->object_anchor)))
  {
    return false;
  }
  // object_anchor_is_set
  if (lhs->object_anchor_is_set != rhs->object_anchor_is_set) {
    return false;
  }
  // seed_tform_object_uncertainty
  if (!bosdyn_msgs__msg__AnchorHintUncertainty__are_equal(
      &(lhs->seed_tform_object_uncertainty), &(rhs->seed_tform_object_uncertainty)))
  {
    return false;
  }
  // seed_tform_object_uncertainty_is_set
  if (lhs->seed_tform_object_uncertainty_is_set != rhs->seed_tform_object_uncertainty_is_set) {
    return false;
  }
  // seed_tform_object_constraint
  if (!bosdyn_msgs__msg__PoseBounds__are_equal(
      &(lhs->seed_tform_object_constraint), &(rhs->seed_tform_object_constraint)))
  {
    return false;
  }
  // seed_tform_object_constraint_is_set
  if (lhs->seed_tform_object_constraint_is_set != rhs->seed_tform_object_constraint_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__WorldObjectAnchorHint__copy(
  const bosdyn_msgs__msg__WorldObjectAnchorHint * input,
  bosdyn_msgs__msg__WorldObjectAnchorHint * output)
{
  if (!input || !output) {
    return false;
  }
  // object_anchor
  if (!bosdyn_msgs__msg__AnchoredWorldObject__copy(
      &(input->object_anchor), &(output->object_anchor)))
  {
    return false;
  }
  // object_anchor_is_set
  output->object_anchor_is_set = input->object_anchor_is_set;
  // seed_tform_object_uncertainty
  if (!bosdyn_msgs__msg__AnchorHintUncertainty__copy(
      &(input->seed_tform_object_uncertainty), &(output->seed_tform_object_uncertainty)))
  {
    return false;
  }
  // seed_tform_object_uncertainty_is_set
  output->seed_tform_object_uncertainty_is_set = input->seed_tform_object_uncertainty_is_set;
  // seed_tform_object_constraint
  if (!bosdyn_msgs__msg__PoseBounds__copy(
      &(input->seed_tform_object_constraint), &(output->seed_tform_object_constraint)))
  {
    return false;
  }
  // seed_tform_object_constraint_is_set
  output->seed_tform_object_constraint_is_set = input->seed_tform_object_constraint_is_set;
  return true;
}

bosdyn_msgs__msg__WorldObjectAnchorHint *
bosdyn_msgs__msg__WorldObjectAnchorHint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WorldObjectAnchorHint * msg = (bosdyn_msgs__msg__WorldObjectAnchorHint *)allocator.allocate(sizeof(bosdyn_msgs__msg__WorldObjectAnchorHint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__WorldObjectAnchorHint));
  bool success = bosdyn_msgs__msg__WorldObjectAnchorHint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__WorldObjectAnchorHint__destroy(bosdyn_msgs__msg__WorldObjectAnchorHint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__WorldObjectAnchorHint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__init(bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WorldObjectAnchorHint * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__WorldObjectAnchorHint *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__WorldObjectAnchorHint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__WorldObjectAnchorHint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__WorldObjectAnchorHint__fini(&data[i - 1]);
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
bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__fini(bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence * array)
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
      bosdyn_msgs__msg__WorldObjectAnchorHint__fini(&array->data[i]);
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

bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence *
bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence * array = (bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__destroy(bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__are_equal(const bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence * lhs, const bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__WorldObjectAnchorHint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__copy(
  const bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence * input,
  bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__WorldObjectAnchorHint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__WorldObjectAnchorHint * data =
      (bosdyn_msgs__msg__WorldObjectAnchorHint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__WorldObjectAnchorHint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__WorldObjectAnchorHint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__WorldObjectAnchorHint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
