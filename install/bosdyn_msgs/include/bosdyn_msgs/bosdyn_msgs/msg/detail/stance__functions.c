// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Stance.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/stance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `se2_frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `foot_positions`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_vec2__functions.h"

bool
bosdyn_msgs__msg__Stance__init(bosdyn_msgs__msg__Stance * msg)
{
  if (!msg) {
    return false;
  }
  // se2_frame_name
  if (!rosidl_runtime_c__String__init(&msg->se2_frame_name)) {
    bosdyn_msgs__msg__Stance__fini(msg);
    return false;
  }
  // foot_positions
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsVec2__Sequence__init(&msg->foot_positions, 0)) {
    bosdyn_msgs__msg__Stance__fini(msg);
    return false;
  }
  // accuracy
  return true;
}

void
bosdyn_msgs__msg__Stance__fini(bosdyn_msgs__msg__Stance * msg)
{
  if (!msg) {
    return;
  }
  // se2_frame_name
  rosidl_runtime_c__String__fini(&msg->se2_frame_name);
  // foot_positions
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsVec2__Sequence__fini(&msg->foot_positions);
  // accuracy
}

bool
bosdyn_msgs__msg__Stance__are_equal(const bosdyn_msgs__msg__Stance * lhs, const bosdyn_msgs__msg__Stance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // se2_frame_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->se2_frame_name), &(rhs->se2_frame_name)))
  {
    return false;
  }
  // foot_positions
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsVec2__Sequence__are_equal(
      &(lhs->foot_positions), &(rhs->foot_positions)))
  {
    return false;
  }
  // accuracy
  if (lhs->accuracy != rhs->accuracy) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Stance__copy(
  const bosdyn_msgs__msg__Stance * input,
  bosdyn_msgs__msg__Stance * output)
{
  if (!input || !output) {
    return false;
  }
  // se2_frame_name
  if (!rosidl_runtime_c__String__copy(
      &(input->se2_frame_name), &(output->se2_frame_name)))
  {
    return false;
  }
  // foot_positions
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsVec2__Sequence__copy(
      &(input->foot_positions), &(output->foot_positions)))
  {
    return false;
  }
  // accuracy
  output->accuracy = input->accuracy;
  return true;
}

bosdyn_msgs__msg__Stance *
bosdyn_msgs__msg__Stance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Stance * msg = (bosdyn_msgs__msg__Stance *)allocator.allocate(sizeof(bosdyn_msgs__msg__Stance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Stance));
  bool success = bosdyn_msgs__msg__Stance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Stance__destroy(bosdyn_msgs__msg__Stance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Stance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Stance__Sequence__init(bosdyn_msgs__msg__Stance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Stance * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Stance *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Stance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Stance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Stance__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Stance__Sequence__fini(bosdyn_msgs__msg__Stance__Sequence * array)
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
      bosdyn_msgs__msg__Stance__fini(&array->data[i]);
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

bosdyn_msgs__msg__Stance__Sequence *
bosdyn_msgs__msg__Stance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Stance__Sequence * array = (bosdyn_msgs__msg__Stance__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Stance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Stance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Stance__Sequence__destroy(bosdyn_msgs__msg__Stance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Stance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Stance__Sequence__are_equal(const bosdyn_msgs__msg__Stance__Sequence * lhs, const bosdyn_msgs__msg__Stance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Stance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Stance__Sequence__copy(
  const bosdyn_msgs__msg__Stance__Sequence * input,
  bosdyn_msgs__msg__Stance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Stance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Stance * data =
      (bosdyn_msgs__msg__Stance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Stance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Stance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Stance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
