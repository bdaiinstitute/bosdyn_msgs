// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/BodyControlParamsOneOfParam.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/body_control_params_one_of_param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `base_offset_rt_footprint`
#include "bosdyn_msgs/msg/detail/se3_trajectory__functions.h"
// Member `body_assist_for_manipulation`
#include "bosdyn_msgs/msg/detail/body_control_params_body_assist_for_manipulation__functions.h"
// Member `body_pose`
#include "bosdyn_msgs/msg/detail/body_control_params_body_pose__functions.h"

bool
bosdyn_msgs__msg__BodyControlParamsOneOfParam__init(bosdyn_msgs__msg__BodyControlParamsOneOfParam * msg)
{
  if (!msg) {
    return false;
  }
  // base_offset_rt_footprint
  if (!bosdyn_msgs__msg__SE3Trajectory__init(&msg->base_offset_rt_footprint)) {
    bosdyn_msgs__msg__BodyControlParamsOneOfParam__fini(msg);
    return false;
  }
  // body_assist_for_manipulation
  if (!bosdyn_msgs__msg__BodyControlParamsBodyAssistForManipulation__init(&msg->body_assist_for_manipulation)) {
    bosdyn_msgs__msg__BodyControlParamsOneOfParam__fini(msg);
    return false;
  }
  // body_pose
  if (!bosdyn_msgs__msg__BodyControlParamsBodyPose__init(&msg->body_pose)) {
    bosdyn_msgs__msg__BodyControlParamsOneOfParam__fini(msg);
    return false;
  }
  // param_choice
  return true;
}

void
bosdyn_msgs__msg__BodyControlParamsOneOfParam__fini(bosdyn_msgs__msg__BodyControlParamsOneOfParam * msg)
{
  if (!msg) {
    return;
  }
  // base_offset_rt_footprint
  bosdyn_msgs__msg__SE3Trajectory__fini(&msg->base_offset_rt_footprint);
  // body_assist_for_manipulation
  bosdyn_msgs__msg__BodyControlParamsBodyAssistForManipulation__fini(&msg->body_assist_for_manipulation);
  // body_pose
  bosdyn_msgs__msg__BodyControlParamsBodyPose__fini(&msg->body_pose);
  // param_choice
}

bool
bosdyn_msgs__msg__BodyControlParamsOneOfParam__are_equal(const bosdyn_msgs__msg__BodyControlParamsOneOfParam * lhs, const bosdyn_msgs__msg__BodyControlParamsOneOfParam * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // base_offset_rt_footprint
  if (!bosdyn_msgs__msg__SE3Trajectory__are_equal(
      &(lhs->base_offset_rt_footprint), &(rhs->base_offset_rt_footprint)))
  {
    return false;
  }
  // body_assist_for_manipulation
  if (!bosdyn_msgs__msg__BodyControlParamsBodyAssistForManipulation__are_equal(
      &(lhs->body_assist_for_manipulation), &(rhs->body_assist_for_manipulation)))
  {
    return false;
  }
  // body_pose
  if (!bosdyn_msgs__msg__BodyControlParamsBodyPose__are_equal(
      &(lhs->body_pose), &(rhs->body_pose)))
  {
    return false;
  }
  // param_choice
  if (lhs->param_choice != rhs->param_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__BodyControlParamsOneOfParam__copy(
  const bosdyn_msgs__msg__BodyControlParamsOneOfParam * input,
  bosdyn_msgs__msg__BodyControlParamsOneOfParam * output)
{
  if (!input || !output) {
    return false;
  }
  // base_offset_rt_footprint
  if (!bosdyn_msgs__msg__SE3Trajectory__copy(
      &(input->base_offset_rt_footprint), &(output->base_offset_rt_footprint)))
  {
    return false;
  }
  // body_assist_for_manipulation
  if (!bosdyn_msgs__msg__BodyControlParamsBodyAssistForManipulation__copy(
      &(input->body_assist_for_manipulation), &(output->body_assist_for_manipulation)))
  {
    return false;
  }
  // body_pose
  if (!bosdyn_msgs__msg__BodyControlParamsBodyPose__copy(
      &(input->body_pose), &(output->body_pose)))
  {
    return false;
  }
  // param_choice
  output->param_choice = input->param_choice;
  return true;
}

bosdyn_msgs__msg__BodyControlParamsOneOfParam *
bosdyn_msgs__msg__BodyControlParamsOneOfParam__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BodyControlParamsOneOfParam * msg = (bosdyn_msgs__msg__BodyControlParamsOneOfParam *)allocator.allocate(sizeof(bosdyn_msgs__msg__BodyControlParamsOneOfParam), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__BodyControlParamsOneOfParam));
  bool success = bosdyn_msgs__msg__BodyControlParamsOneOfParam__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__BodyControlParamsOneOfParam__destroy(bosdyn_msgs__msg__BodyControlParamsOneOfParam * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__BodyControlParamsOneOfParam__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__init(bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BodyControlParamsOneOfParam * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__BodyControlParamsOneOfParam *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__BodyControlParamsOneOfParam), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__BodyControlParamsOneOfParam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__BodyControlParamsOneOfParam__fini(&data[i - 1]);
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
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__fini(bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * array)
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
      bosdyn_msgs__msg__BodyControlParamsOneOfParam__fini(&array->data[i]);
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

bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence *
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * array = (bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__destroy(bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__are_equal(const bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * lhs, const bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__BodyControlParamsOneOfParam__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__copy(
  const bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * input,
  bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__BodyControlParamsOneOfParam);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__BodyControlParamsOneOfParam * data =
      (bosdyn_msgs__msg__BodyControlParamsOneOfParam *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__BodyControlParamsOneOfParam__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__BodyControlParamsOneOfParam__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__BodyControlParamsOneOfParam__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
