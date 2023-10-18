// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandCartesianVelocity.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_velocity_command_cartesian_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `velocity_in_frame_name`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__init(bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__init(&msg->frame_name)) {
    bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__fini(msg);
    return false;
  }
  // velocity_in_frame_name
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity_in_frame_name)) {
    bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__fini(msg);
    return false;
  }
  // velocity_in_frame_name_is_set
  return true;
}

void
bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__fini(bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity * msg)
{
  if (!msg) {
    return;
  }
  // frame_name
  rosidl_runtime_c__String__fini(&msg->frame_name);
  // velocity_in_frame_name
  geometry_msgs__msg__Vector3__fini(&msg->velocity_in_frame_name);
  // velocity_in_frame_name_is_set
}

bool
bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__are_equal(const bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity * lhs, const bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name), &(rhs->frame_name)))
  {
    return false;
  }
  // velocity_in_frame_name
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity_in_frame_name), &(rhs->velocity_in_frame_name)))
  {
    return false;
  }
  // velocity_in_frame_name_is_set
  if (lhs->velocity_in_frame_name_is_set != rhs->velocity_in_frame_name_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__copy(
  const bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity * input,
  bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name), &(output->frame_name)))
  {
    return false;
  }
  // velocity_in_frame_name
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity_in_frame_name), &(output->velocity_in_frame_name)))
  {
    return false;
  }
  // velocity_in_frame_name_is_set
  output->velocity_in_frame_name_is_set = input->velocity_in_frame_name_is_set;
  return true;
}

bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity *
bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity * msg = (bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity));
  bool success = bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__destroy(bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence__init(bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence__fini(bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence * array)
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
      bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence *
bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence * array = (bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence__destroy(bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence__are_equal(const bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence * lhs, const bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence__copy(
  const bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence * input,
  bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity * data =
      (bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmVelocityCommandCartesianVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
