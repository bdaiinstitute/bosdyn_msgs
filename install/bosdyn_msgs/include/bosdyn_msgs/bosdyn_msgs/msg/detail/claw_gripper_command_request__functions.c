// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ClawGripperCommandRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/claw_gripper_command_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `trajectory`
#include "bosdyn_msgs/msg/detail/scalar_trajectory__functions.h"

bool
bosdyn_msgs__msg__ClawGripperCommandRequest__init(bosdyn_msgs__msg__ClawGripperCommandRequest * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!bosdyn_msgs__msg__ScalarTrajectory__init(&msg->trajectory)) {
    bosdyn_msgs__msg__ClawGripperCommandRequest__fini(msg);
    return false;
  }
  // trajectory_is_set
  // maximum_open_close_velocity
  // maximum_open_close_velocity_is_set
  // maximum_open_close_acceleration
  // maximum_open_close_acceleration_is_set
  // maximum_torque
  // maximum_torque_is_set
  // disable_force_on_contact
  return true;
}

void
bosdyn_msgs__msg__ClawGripperCommandRequest__fini(bosdyn_msgs__msg__ClawGripperCommandRequest * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  bosdyn_msgs__msg__ScalarTrajectory__fini(&msg->trajectory);
  // trajectory_is_set
  // maximum_open_close_velocity
  // maximum_open_close_velocity_is_set
  // maximum_open_close_acceleration
  // maximum_open_close_acceleration_is_set
  // maximum_torque
  // maximum_torque_is_set
  // disable_force_on_contact
}

bool
bosdyn_msgs__msg__ClawGripperCommandRequest__are_equal(const bosdyn_msgs__msg__ClawGripperCommandRequest * lhs, const bosdyn_msgs__msg__ClawGripperCommandRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trajectory
  if (!bosdyn_msgs__msg__ScalarTrajectory__are_equal(
      &(lhs->trajectory), &(rhs->trajectory)))
  {
    return false;
  }
  // trajectory_is_set
  if (lhs->trajectory_is_set != rhs->trajectory_is_set) {
    return false;
  }
  // maximum_open_close_velocity
  if (lhs->maximum_open_close_velocity != rhs->maximum_open_close_velocity) {
    return false;
  }
  // maximum_open_close_velocity_is_set
  if (lhs->maximum_open_close_velocity_is_set != rhs->maximum_open_close_velocity_is_set) {
    return false;
  }
  // maximum_open_close_acceleration
  if (lhs->maximum_open_close_acceleration != rhs->maximum_open_close_acceleration) {
    return false;
  }
  // maximum_open_close_acceleration_is_set
  if (lhs->maximum_open_close_acceleration_is_set != rhs->maximum_open_close_acceleration_is_set) {
    return false;
  }
  // maximum_torque
  if (lhs->maximum_torque != rhs->maximum_torque) {
    return false;
  }
  // maximum_torque_is_set
  if (lhs->maximum_torque_is_set != rhs->maximum_torque_is_set) {
    return false;
  }
  // disable_force_on_contact
  if (lhs->disable_force_on_contact != rhs->disable_force_on_contact) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ClawGripperCommandRequest__copy(
  const bosdyn_msgs__msg__ClawGripperCommandRequest * input,
  bosdyn_msgs__msg__ClawGripperCommandRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // trajectory
  if (!bosdyn_msgs__msg__ScalarTrajectory__copy(
      &(input->trajectory), &(output->trajectory)))
  {
    return false;
  }
  // trajectory_is_set
  output->trajectory_is_set = input->trajectory_is_set;
  // maximum_open_close_velocity
  output->maximum_open_close_velocity = input->maximum_open_close_velocity;
  // maximum_open_close_velocity_is_set
  output->maximum_open_close_velocity_is_set = input->maximum_open_close_velocity_is_set;
  // maximum_open_close_acceleration
  output->maximum_open_close_acceleration = input->maximum_open_close_acceleration;
  // maximum_open_close_acceleration_is_set
  output->maximum_open_close_acceleration_is_set = input->maximum_open_close_acceleration_is_set;
  // maximum_torque
  output->maximum_torque = input->maximum_torque;
  // maximum_torque_is_set
  output->maximum_torque_is_set = input->maximum_torque_is_set;
  // disable_force_on_contact
  output->disable_force_on_contact = input->disable_force_on_contact;
  return true;
}

bosdyn_msgs__msg__ClawGripperCommandRequest *
bosdyn_msgs__msg__ClawGripperCommandRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ClawGripperCommandRequest * msg = (bosdyn_msgs__msg__ClawGripperCommandRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__ClawGripperCommandRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ClawGripperCommandRequest));
  bool success = bosdyn_msgs__msg__ClawGripperCommandRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ClawGripperCommandRequest__destroy(bosdyn_msgs__msg__ClawGripperCommandRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ClawGripperCommandRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence__init(bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ClawGripperCommandRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ClawGripperCommandRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ClawGripperCommandRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ClawGripperCommandRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ClawGripperCommandRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence__fini(bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence * array)
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
      bosdyn_msgs__msg__ClawGripperCommandRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence *
bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence * array = (bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence__destroy(bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence__are_equal(const bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence * lhs, const bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ClawGripperCommandRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence__copy(
  const bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence * input,
  bosdyn_msgs__msg__ClawGripperCommandRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ClawGripperCommandRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ClawGripperCommandRequest * data =
      (bosdyn_msgs__msg__ClawGripperCommandRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ClawGripperCommandRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ClawGripperCommandRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ClawGripperCommandRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
