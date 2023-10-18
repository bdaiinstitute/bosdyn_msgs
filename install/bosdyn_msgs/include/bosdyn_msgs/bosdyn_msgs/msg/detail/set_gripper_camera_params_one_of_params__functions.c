// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SetGripperCameraParamsOneOfParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/set_gripper_camera_params_one_of_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `params_in_blackboard_key`
#include "rosidl_runtime_c/string_functions.h"
// Member `new_params`
#include "bosdyn_msgs/msg/detail/gripper_camera_params__functions.h"

bool
bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__init(bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams * msg)
{
  if (!msg) {
    return false;
  }
  // params_in_blackboard_key
  if (!rosidl_runtime_c__String__init(&msg->params_in_blackboard_key)) {
    bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__fini(msg);
    return false;
  }
  // new_params
  if (!bosdyn_msgs__msg__GripperCameraParams__init(&msg->new_params)) {
    bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__fini(msg);
    return false;
  }
  // params_choice
  return true;
}

void
bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__fini(bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams * msg)
{
  if (!msg) {
    return;
  }
  // params_in_blackboard_key
  rosidl_runtime_c__String__fini(&msg->params_in_blackboard_key);
  // new_params
  bosdyn_msgs__msg__GripperCameraParams__fini(&msg->new_params);
  // params_choice
}

bool
bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__are_equal(const bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams * lhs, const bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // params_in_blackboard_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->params_in_blackboard_key), &(rhs->params_in_blackboard_key)))
  {
    return false;
  }
  // new_params
  if (!bosdyn_msgs__msg__GripperCameraParams__are_equal(
      &(lhs->new_params), &(rhs->new_params)))
  {
    return false;
  }
  // params_choice
  if (lhs->params_choice != rhs->params_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__copy(
  const bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams * input,
  bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams * output)
{
  if (!input || !output) {
    return false;
  }
  // params_in_blackboard_key
  if (!rosidl_runtime_c__String__copy(
      &(input->params_in_blackboard_key), &(output->params_in_blackboard_key)))
  {
    return false;
  }
  // new_params
  if (!bosdyn_msgs__msg__GripperCameraParams__copy(
      &(input->new_params), &(output->new_params)))
  {
    return false;
  }
  // params_choice
  output->params_choice = input->params_choice;
  return true;
}

bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams *
bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams * msg = (bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams));
  bool success = bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__destroy(bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence__init(bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence__fini(bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence * array)
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
      bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence *
bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence * array = (bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence__destroy(bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence__are_equal(const bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence * lhs, const bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence__copy(
  const bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence * input,
  bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams * data =
      (bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
