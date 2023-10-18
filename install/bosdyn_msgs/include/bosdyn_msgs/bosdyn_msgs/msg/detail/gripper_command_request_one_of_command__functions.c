// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/GripperCommandRequestOneOfCommand.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/gripper_command_request_one_of_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `claw_gripper_command`
#include "bosdyn_msgs/msg/detail/claw_gripper_command_request__functions.h"

bool
bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__init(bosdyn_msgs__msg__GripperCommandRequestOneOfCommand * msg)
{
  if (!msg) {
    return false;
  }
  // claw_gripper_command
  if (!bosdyn_msgs__msg__ClawGripperCommandRequest__init(&msg->claw_gripper_command)) {
    bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__fini(msg);
    return false;
  }
  // command_choice
  return true;
}

void
bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__fini(bosdyn_msgs__msg__GripperCommandRequestOneOfCommand * msg)
{
  if (!msg) {
    return;
  }
  // claw_gripper_command
  bosdyn_msgs__msg__ClawGripperCommandRequest__fini(&msg->claw_gripper_command);
  // command_choice
}

bool
bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__are_equal(const bosdyn_msgs__msg__GripperCommandRequestOneOfCommand * lhs, const bosdyn_msgs__msg__GripperCommandRequestOneOfCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // claw_gripper_command
  if (!bosdyn_msgs__msg__ClawGripperCommandRequest__are_equal(
      &(lhs->claw_gripper_command), &(rhs->claw_gripper_command)))
  {
    return false;
  }
  // command_choice
  if (lhs->command_choice != rhs->command_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__copy(
  const bosdyn_msgs__msg__GripperCommandRequestOneOfCommand * input,
  bosdyn_msgs__msg__GripperCommandRequestOneOfCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // claw_gripper_command
  if (!bosdyn_msgs__msg__ClawGripperCommandRequest__copy(
      &(input->claw_gripper_command), &(output->claw_gripper_command)))
  {
    return false;
  }
  // command_choice
  output->command_choice = input->command_choice;
  return true;
}

bosdyn_msgs__msg__GripperCommandRequestOneOfCommand *
bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GripperCommandRequestOneOfCommand * msg = (bosdyn_msgs__msg__GripperCommandRequestOneOfCommand *)allocator.allocate(sizeof(bosdyn_msgs__msg__GripperCommandRequestOneOfCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__GripperCommandRequestOneOfCommand));
  bool success = bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__destroy(bosdyn_msgs__msg__GripperCommandRequestOneOfCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence__init(bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GripperCommandRequestOneOfCommand * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__GripperCommandRequestOneOfCommand *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__GripperCommandRequestOneOfCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__fini(&data[i - 1]);
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
bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence__fini(bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence * array)
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
      bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__fini(&array->data[i]);
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

bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence *
bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence * array = (bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence__destroy(bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence__are_equal(const bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence * lhs, const bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence__copy(
  const bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence * input,
  bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__GripperCommandRequestOneOfCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__GripperCommandRequestOneOfCommand * data =
      (bosdyn_msgs__msg__GripperCommandRequestOneOfCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__GripperCommandRequestOneOfCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
