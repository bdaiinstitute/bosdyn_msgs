// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/VectorAlignmentWithTolerance.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/vector_alignment_with_tolerance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `axis_on_gripper_ewrt_gripper`
// Member `axis_to_align_with_ewrt_frame`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
bosdyn_msgs__msg__VectorAlignmentWithTolerance__init(bosdyn_msgs__msg__VectorAlignmentWithTolerance * msg)
{
  if (!msg) {
    return false;
  }
  // axis_on_gripper_ewrt_gripper
  if (!geometry_msgs__msg__Vector3__init(&msg->axis_on_gripper_ewrt_gripper)) {
    bosdyn_msgs__msg__VectorAlignmentWithTolerance__fini(msg);
    return false;
  }
  // axis_on_gripper_ewrt_gripper_is_set
  // axis_to_align_with_ewrt_frame
  if (!geometry_msgs__msg__Vector3__init(&msg->axis_to_align_with_ewrt_frame)) {
    bosdyn_msgs__msg__VectorAlignmentWithTolerance__fini(msg);
    return false;
  }
  // axis_to_align_with_ewrt_frame_is_set
  // threshold_radians
  return true;
}

void
bosdyn_msgs__msg__VectorAlignmentWithTolerance__fini(bosdyn_msgs__msg__VectorAlignmentWithTolerance * msg)
{
  if (!msg) {
    return;
  }
  // axis_on_gripper_ewrt_gripper
  geometry_msgs__msg__Vector3__fini(&msg->axis_on_gripper_ewrt_gripper);
  // axis_on_gripper_ewrt_gripper_is_set
  // axis_to_align_with_ewrt_frame
  geometry_msgs__msg__Vector3__fini(&msg->axis_to_align_with_ewrt_frame);
  // axis_to_align_with_ewrt_frame_is_set
  // threshold_radians
}

bool
bosdyn_msgs__msg__VectorAlignmentWithTolerance__are_equal(const bosdyn_msgs__msg__VectorAlignmentWithTolerance * lhs, const bosdyn_msgs__msg__VectorAlignmentWithTolerance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // axis_on_gripper_ewrt_gripper
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->axis_on_gripper_ewrt_gripper), &(rhs->axis_on_gripper_ewrt_gripper)))
  {
    return false;
  }
  // axis_on_gripper_ewrt_gripper_is_set
  if (lhs->axis_on_gripper_ewrt_gripper_is_set != rhs->axis_on_gripper_ewrt_gripper_is_set) {
    return false;
  }
  // axis_to_align_with_ewrt_frame
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->axis_to_align_with_ewrt_frame), &(rhs->axis_to_align_with_ewrt_frame)))
  {
    return false;
  }
  // axis_to_align_with_ewrt_frame_is_set
  if (lhs->axis_to_align_with_ewrt_frame_is_set != rhs->axis_to_align_with_ewrt_frame_is_set) {
    return false;
  }
  // threshold_radians
  if (lhs->threshold_radians != rhs->threshold_radians) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__VectorAlignmentWithTolerance__copy(
  const bosdyn_msgs__msg__VectorAlignmentWithTolerance * input,
  bosdyn_msgs__msg__VectorAlignmentWithTolerance * output)
{
  if (!input || !output) {
    return false;
  }
  // axis_on_gripper_ewrt_gripper
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->axis_on_gripper_ewrt_gripper), &(output->axis_on_gripper_ewrt_gripper)))
  {
    return false;
  }
  // axis_on_gripper_ewrt_gripper_is_set
  output->axis_on_gripper_ewrt_gripper_is_set = input->axis_on_gripper_ewrt_gripper_is_set;
  // axis_to_align_with_ewrt_frame
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->axis_to_align_with_ewrt_frame), &(output->axis_to_align_with_ewrt_frame)))
  {
    return false;
  }
  // axis_to_align_with_ewrt_frame_is_set
  output->axis_to_align_with_ewrt_frame_is_set = input->axis_to_align_with_ewrt_frame_is_set;
  // threshold_radians
  output->threshold_radians = input->threshold_radians;
  return true;
}

bosdyn_msgs__msg__VectorAlignmentWithTolerance *
bosdyn_msgs__msg__VectorAlignmentWithTolerance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__VectorAlignmentWithTolerance * msg = (bosdyn_msgs__msg__VectorAlignmentWithTolerance *)allocator.allocate(sizeof(bosdyn_msgs__msg__VectorAlignmentWithTolerance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__VectorAlignmentWithTolerance));
  bool success = bosdyn_msgs__msg__VectorAlignmentWithTolerance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__VectorAlignmentWithTolerance__destroy(bosdyn_msgs__msg__VectorAlignmentWithTolerance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__VectorAlignmentWithTolerance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence__init(bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__VectorAlignmentWithTolerance * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__VectorAlignmentWithTolerance *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__VectorAlignmentWithTolerance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__VectorAlignmentWithTolerance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__VectorAlignmentWithTolerance__fini(&data[i - 1]);
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
bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence__fini(bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence * array)
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
      bosdyn_msgs__msg__VectorAlignmentWithTolerance__fini(&array->data[i]);
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

bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence *
bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence * array = (bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence__destroy(bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence__are_equal(const bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence * lhs, const bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__VectorAlignmentWithTolerance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence__copy(
  const bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence * input,
  bosdyn_msgs__msg__VectorAlignmentWithTolerance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__VectorAlignmentWithTolerance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__VectorAlignmentWithTolerance * data =
      (bosdyn_msgs__msg__VectorAlignmentWithTolerance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__VectorAlignmentWithTolerance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__VectorAlignmentWithTolerance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__VectorAlignmentWithTolerance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
