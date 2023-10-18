// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/AreaCallbackDoorConfig.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/area_callback_door_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `forward_command`
// Member `reverse_command`
#include "bosdyn_msgs/msg/detail/door_command_request__functions.h"

bool
bosdyn_msgs__msg__AreaCallbackDoorConfig__init(bosdyn_msgs__msg__AreaCallbackDoorConfig * msg)
{
  if (!msg) {
    return false;
  }
  // forward_command
  if (!bosdyn_msgs__msg__DoorCommandRequest__init(&msg->forward_command)) {
    bosdyn_msgs__msg__AreaCallbackDoorConfig__fini(msg);
    return false;
  }
  // forward_command_is_set
  // reverse_command
  if (!bosdyn_msgs__msg__DoorCommandRequest__init(&msg->reverse_command)) {
    bosdyn_msgs__msg__AreaCallbackDoorConfig__fini(msg);
    return false;
  }
  // reverse_command_is_set
  return true;
}

void
bosdyn_msgs__msg__AreaCallbackDoorConfig__fini(bosdyn_msgs__msg__AreaCallbackDoorConfig * msg)
{
  if (!msg) {
    return;
  }
  // forward_command
  bosdyn_msgs__msg__DoorCommandRequest__fini(&msg->forward_command);
  // forward_command_is_set
  // reverse_command
  bosdyn_msgs__msg__DoorCommandRequest__fini(&msg->reverse_command);
  // reverse_command_is_set
}

bool
bosdyn_msgs__msg__AreaCallbackDoorConfig__are_equal(const bosdyn_msgs__msg__AreaCallbackDoorConfig * lhs, const bosdyn_msgs__msg__AreaCallbackDoorConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // forward_command
  if (!bosdyn_msgs__msg__DoorCommandRequest__are_equal(
      &(lhs->forward_command), &(rhs->forward_command)))
  {
    return false;
  }
  // forward_command_is_set
  if (lhs->forward_command_is_set != rhs->forward_command_is_set) {
    return false;
  }
  // reverse_command
  if (!bosdyn_msgs__msg__DoorCommandRequest__are_equal(
      &(lhs->reverse_command), &(rhs->reverse_command)))
  {
    return false;
  }
  // reverse_command_is_set
  if (lhs->reverse_command_is_set != rhs->reverse_command_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__AreaCallbackDoorConfig__copy(
  const bosdyn_msgs__msg__AreaCallbackDoorConfig * input,
  bosdyn_msgs__msg__AreaCallbackDoorConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // forward_command
  if (!bosdyn_msgs__msg__DoorCommandRequest__copy(
      &(input->forward_command), &(output->forward_command)))
  {
    return false;
  }
  // forward_command_is_set
  output->forward_command_is_set = input->forward_command_is_set;
  // reverse_command
  if (!bosdyn_msgs__msg__DoorCommandRequest__copy(
      &(input->reverse_command), &(output->reverse_command)))
  {
    return false;
  }
  // reverse_command_is_set
  output->reverse_command_is_set = input->reverse_command_is_set;
  return true;
}

bosdyn_msgs__msg__AreaCallbackDoorConfig *
bosdyn_msgs__msg__AreaCallbackDoorConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackDoorConfig * msg = (bosdyn_msgs__msg__AreaCallbackDoorConfig *)allocator.allocate(sizeof(bosdyn_msgs__msg__AreaCallbackDoorConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__AreaCallbackDoorConfig));
  bool success = bosdyn_msgs__msg__AreaCallbackDoorConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__AreaCallbackDoorConfig__destroy(bosdyn_msgs__msg__AreaCallbackDoorConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__AreaCallbackDoorConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence__init(bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackDoorConfig * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__AreaCallbackDoorConfig *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__AreaCallbackDoorConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__AreaCallbackDoorConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__AreaCallbackDoorConfig__fini(&data[i - 1]);
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
bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence__fini(bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence * array)
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
      bosdyn_msgs__msg__AreaCallbackDoorConfig__fini(&array->data[i]);
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

bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence *
bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence * array = (bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence__destroy(bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence__are_equal(const bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence * lhs, const bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__AreaCallbackDoorConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence__copy(
  const bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence * input,
  bosdyn_msgs__msg__AreaCallbackDoorConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__AreaCallbackDoorConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__AreaCallbackDoorConfig * data =
      (bosdyn_msgs__msg__AreaCallbackDoorConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__AreaCallbackDoorConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__AreaCallbackDoorConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__AreaCallbackDoorConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
