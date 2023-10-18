// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DoorCommandAutoPushCommand.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/door_command_auto_push_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `push_point_in_frame`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `hinge_side`
#include "bosdyn_msgs/msg/detail/door_command_hinge_side__functions.h"

bool
bosdyn_msgs__msg__DoorCommandAutoPushCommand__init(bosdyn_msgs__msg__DoorCommandAutoPushCommand * msg)
{
  if (!msg) {
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__init(&msg->frame_name)) {
    bosdyn_msgs__msg__DoorCommandAutoPushCommand__fini(msg);
    return false;
  }
  // push_point_in_frame
  if (!geometry_msgs__msg__Vector3__init(&msg->push_point_in_frame)) {
    bosdyn_msgs__msg__DoorCommandAutoPushCommand__fini(msg);
    return false;
  }
  // push_point_in_frame_is_set
  // hinge_side
  if (!bosdyn_msgs__msg__DoorCommandHingeSide__init(&msg->hinge_side)) {
    bosdyn_msgs__msg__DoorCommandAutoPushCommand__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__DoorCommandAutoPushCommand__fini(bosdyn_msgs__msg__DoorCommandAutoPushCommand * msg)
{
  if (!msg) {
    return;
  }
  // frame_name
  rosidl_runtime_c__String__fini(&msg->frame_name);
  // push_point_in_frame
  geometry_msgs__msg__Vector3__fini(&msg->push_point_in_frame);
  // push_point_in_frame_is_set
  // hinge_side
  bosdyn_msgs__msg__DoorCommandHingeSide__fini(&msg->hinge_side);
}

bool
bosdyn_msgs__msg__DoorCommandAutoPushCommand__are_equal(const bosdyn_msgs__msg__DoorCommandAutoPushCommand * lhs, const bosdyn_msgs__msg__DoorCommandAutoPushCommand * rhs)
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
  // push_point_in_frame
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->push_point_in_frame), &(rhs->push_point_in_frame)))
  {
    return false;
  }
  // push_point_in_frame_is_set
  if (lhs->push_point_in_frame_is_set != rhs->push_point_in_frame_is_set) {
    return false;
  }
  // hinge_side
  if (!bosdyn_msgs__msg__DoorCommandHingeSide__are_equal(
      &(lhs->hinge_side), &(rhs->hinge_side)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DoorCommandAutoPushCommand__copy(
  const bosdyn_msgs__msg__DoorCommandAutoPushCommand * input,
  bosdyn_msgs__msg__DoorCommandAutoPushCommand * output)
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
  // push_point_in_frame
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->push_point_in_frame), &(output->push_point_in_frame)))
  {
    return false;
  }
  // push_point_in_frame_is_set
  output->push_point_in_frame_is_set = input->push_point_in_frame_is_set;
  // hinge_side
  if (!bosdyn_msgs__msg__DoorCommandHingeSide__copy(
      &(input->hinge_side), &(output->hinge_side)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__DoorCommandAutoPushCommand *
bosdyn_msgs__msg__DoorCommandAutoPushCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DoorCommandAutoPushCommand * msg = (bosdyn_msgs__msg__DoorCommandAutoPushCommand *)allocator.allocate(sizeof(bosdyn_msgs__msg__DoorCommandAutoPushCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DoorCommandAutoPushCommand));
  bool success = bosdyn_msgs__msg__DoorCommandAutoPushCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DoorCommandAutoPushCommand__destroy(bosdyn_msgs__msg__DoorCommandAutoPushCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DoorCommandAutoPushCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence__init(bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DoorCommandAutoPushCommand * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DoorCommandAutoPushCommand *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DoorCommandAutoPushCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DoorCommandAutoPushCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DoorCommandAutoPushCommand__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence__fini(bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence * array)
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
      bosdyn_msgs__msg__DoorCommandAutoPushCommand__fini(&array->data[i]);
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

bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence *
bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence * array = (bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence__destroy(bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence__are_equal(const bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence * lhs, const bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DoorCommandAutoPushCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence__copy(
  const bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence * input,
  bosdyn_msgs__msg__DoorCommandAutoPushCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DoorCommandAutoPushCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DoorCommandAutoPushCommand * data =
      (bosdyn_msgs__msg__DoorCommandAutoPushCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DoorCommandAutoPushCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DoorCommandAutoPushCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DoorCommandAutoPushCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
