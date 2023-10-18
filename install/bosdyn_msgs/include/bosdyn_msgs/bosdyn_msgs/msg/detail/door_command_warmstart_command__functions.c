// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DoorCommandWarmstartCommand.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/door_command_warmstart_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `hinge_side`
#include "bosdyn_msgs/msg/detail/door_command_hinge_side__functions.h"
// Member `swing_direction`
#include "bosdyn_msgs/msg/detail/door_command_swing_direction__functions.h"
// Member `handle_type`
#include "bosdyn_msgs/msg/detail/door_command_handle_type__functions.h"

bool
bosdyn_msgs__msg__DoorCommandWarmstartCommand__init(bosdyn_msgs__msg__DoorCommandWarmstartCommand * msg)
{
  if (!msg) {
    return false;
  }
  // hinge_side
  if (!bosdyn_msgs__msg__DoorCommandHingeSide__init(&msg->hinge_side)) {
    bosdyn_msgs__msg__DoorCommandWarmstartCommand__fini(msg);
    return false;
  }
  // swing_direction
  if (!bosdyn_msgs__msg__DoorCommandSwingDirection__init(&msg->swing_direction)) {
    bosdyn_msgs__msg__DoorCommandWarmstartCommand__fini(msg);
    return false;
  }
  // handle_type
  if (!bosdyn_msgs__msg__DoorCommandHandleType__init(&msg->handle_type)) {
    bosdyn_msgs__msg__DoorCommandWarmstartCommand__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__DoorCommandWarmstartCommand__fini(bosdyn_msgs__msg__DoorCommandWarmstartCommand * msg)
{
  if (!msg) {
    return;
  }
  // hinge_side
  bosdyn_msgs__msg__DoorCommandHingeSide__fini(&msg->hinge_side);
  // swing_direction
  bosdyn_msgs__msg__DoorCommandSwingDirection__fini(&msg->swing_direction);
  // handle_type
  bosdyn_msgs__msg__DoorCommandHandleType__fini(&msg->handle_type);
}

bool
bosdyn_msgs__msg__DoorCommandWarmstartCommand__are_equal(const bosdyn_msgs__msg__DoorCommandWarmstartCommand * lhs, const bosdyn_msgs__msg__DoorCommandWarmstartCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hinge_side
  if (!bosdyn_msgs__msg__DoorCommandHingeSide__are_equal(
      &(lhs->hinge_side), &(rhs->hinge_side)))
  {
    return false;
  }
  // swing_direction
  if (!bosdyn_msgs__msg__DoorCommandSwingDirection__are_equal(
      &(lhs->swing_direction), &(rhs->swing_direction)))
  {
    return false;
  }
  // handle_type
  if (!bosdyn_msgs__msg__DoorCommandHandleType__are_equal(
      &(lhs->handle_type), &(rhs->handle_type)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DoorCommandWarmstartCommand__copy(
  const bosdyn_msgs__msg__DoorCommandWarmstartCommand * input,
  bosdyn_msgs__msg__DoorCommandWarmstartCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // hinge_side
  if (!bosdyn_msgs__msg__DoorCommandHingeSide__copy(
      &(input->hinge_side), &(output->hinge_side)))
  {
    return false;
  }
  // swing_direction
  if (!bosdyn_msgs__msg__DoorCommandSwingDirection__copy(
      &(input->swing_direction), &(output->swing_direction)))
  {
    return false;
  }
  // handle_type
  if (!bosdyn_msgs__msg__DoorCommandHandleType__copy(
      &(input->handle_type), &(output->handle_type)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__DoorCommandWarmstartCommand *
bosdyn_msgs__msg__DoorCommandWarmstartCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DoorCommandWarmstartCommand * msg = (bosdyn_msgs__msg__DoorCommandWarmstartCommand *)allocator.allocate(sizeof(bosdyn_msgs__msg__DoorCommandWarmstartCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DoorCommandWarmstartCommand));
  bool success = bosdyn_msgs__msg__DoorCommandWarmstartCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DoorCommandWarmstartCommand__destroy(bosdyn_msgs__msg__DoorCommandWarmstartCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DoorCommandWarmstartCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence__init(bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DoorCommandWarmstartCommand * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DoorCommandWarmstartCommand *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DoorCommandWarmstartCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DoorCommandWarmstartCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DoorCommandWarmstartCommand__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence__fini(bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence * array)
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
      bosdyn_msgs__msg__DoorCommandWarmstartCommand__fini(&array->data[i]);
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

bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence *
bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence * array = (bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence__destroy(bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence__are_equal(const bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence * lhs, const bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DoorCommandWarmstartCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence__copy(
  const bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence * input,
  bosdyn_msgs__msg__DoorCommandWarmstartCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DoorCommandWarmstartCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DoorCommandWarmstartCommand * data =
      (bosdyn_msgs__msg__DoorCommandWarmstartCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DoorCommandWarmstartCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DoorCommandWarmstartCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DoorCommandWarmstartCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
