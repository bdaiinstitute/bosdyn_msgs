// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Keypoint.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/keypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `coordinates`
#include "bosdyn_msgs/msg/detail/vec2__functions.h"
// Member `binary_descriptor`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bosdyn_msgs__msg__Keypoint__init(bosdyn_msgs__msg__Keypoint * msg)
{
  if (!msg) {
    return false;
  }
  // coordinates
  if (!bosdyn_msgs__msg__Vec2__init(&msg->coordinates)) {
    bosdyn_msgs__msg__Keypoint__fini(msg);
    return false;
  }
  // coordinates_is_set
  // binary_descriptor
  if (!rosidl_runtime_c__octet__Sequence__init(&msg->binary_descriptor, 0)) {
    bosdyn_msgs__msg__Keypoint__fini(msg);
    return false;
  }
  // score
  // size
  // angle
  return true;
}

void
bosdyn_msgs__msg__Keypoint__fini(bosdyn_msgs__msg__Keypoint * msg)
{
  if (!msg) {
    return;
  }
  // coordinates
  bosdyn_msgs__msg__Vec2__fini(&msg->coordinates);
  // coordinates_is_set
  // binary_descriptor
  rosidl_runtime_c__octet__Sequence__fini(&msg->binary_descriptor);
  // score
  // size
  // angle
}

bool
bosdyn_msgs__msg__Keypoint__are_equal(const bosdyn_msgs__msg__Keypoint * lhs, const bosdyn_msgs__msg__Keypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // coordinates
  if (!bosdyn_msgs__msg__Vec2__are_equal(
      &(lhs->coordinates), &(rhs->coordinates)))
  {
    return false;
  }
  // coordinates_is_set
  if (lhs->coordinates_is_set != rhs->coordinates_is_set) {
    return false;
  }
  // binary_descriptor
  if (!rosidl_runtime_c__octet__Sequence__are_equal(
      &(lhs->binary_descriptor), &(rhs->binary_descriptor)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Keypoint__copy(
  const bosdyn_msgs__msg__Keypoint * input,
  bosdyn_msgs__msg__Keypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // coordinates
  if (!bosdyn_msgs__msg__Vec2__copy(
      &(input->coordinates), &(output->coordinates)))
  {
    return false;
  }
  // coordinates_is_set
  output->coordinates_is_set = input->coordinates_is_set;
  // binary_descriptor
  if (!rosidl_runtime_c__octet__Sequence__copy(
      &(input->binary_descriptor), &(output->binary_descriptor)))
  {
    return false;
  }
  // score
  output->score = input->score;
  // size
  output->size = input->size;
  // angle
  output->angle = input->angle;
  return true;
}

bosdyn_msgs__msg__Keypoint *
bosdyn_msgs__msg__Keypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Keypoint * msg = (bosdyn_msgs__msg__Keypoint *)allocator.allocate(sizeof(bosdyn_msgs__msg__Keypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Keypoint));
  bool success = bosdyn_msgs__msg__Keypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Keypoint__destroy(bosdyn_msgs__msg__Keypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Keypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Keypoint__Sequence__init(bosdyn_msgs__msg__Keypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Keypoint * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Keypoint *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Keypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Keypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Keypoint__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Keypoint__Sequence__fini(bosdyn_msgs__msg__Keypoint__Sequence * array)
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
      bosdyn_msgs__msg__Keypoint__fini(&array->data[i]);
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

bosdyn_msgs__msg__Keypoint__Sequence *
bosdyn_msgs__msg__Keypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Keypoint__Sequence * array = (bosdyn_msgs__msg__Keypoint__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Keypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Keypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Keypoint__Sequence__destroy(bosdyn_msgs__msg__Keypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Keypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Keypoint__Sequence__are_equal(const bosdyn_msgs__msg__Keypoint__Sequence * lhs, const bosdyn_msgs__msg__Keypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Keypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Keypoint__Sequence__copy(
  const bosdyn_msgs__msg__Keypoint__Sequence * input,
  bosdyn_msgs__msg__Keypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Keypoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Keypoint * data =
      (bosdyn_msgs__msg__Keypoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Keypoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Keypoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Keypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
