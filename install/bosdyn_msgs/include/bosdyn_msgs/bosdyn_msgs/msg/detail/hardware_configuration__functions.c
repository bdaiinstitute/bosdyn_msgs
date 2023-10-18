// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/HardwareConfiguration.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/hardware_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `skeleton`
#include "bosdyn_msgs/msg/detail/skeleton__functions.h"

bool
bosdyn_msgs__msg__HardwareConfiguration__init(bosdyn_msgs__msg__HardwareConfiguration * msg)
{
  if (!msg) {
    return false;
  }
  // skeleton
  if (!bosdyn_msgs__msg__Skeleton__init(&msg->skeleton)) {
    bosdyn_msgs__msg__HardwareConfiguration__fini(msg);
    return false;
  }
  // skeleton_is_set
  // can_power_command_request_off_robot
  // can_power_command_request_cycle_robot
  // can_power_command_request_payload_ports
  // can_power_command_request_wifi_radio
  // has_audio_visual_system
  return true;
}

void
bosdyn_msgs__msg__HardwareConfiguration__fini(bosdyn_msgs__msg__HardwareConfiguration * msg)
{
  if (!msg) {
    return;
  }
  // skeleton
  bosdyn_msgs__msg__Skeleton__fini(&msg->skeleton);
  // skeleton_is_set
  // can_power_command_request_off_robot
  // can_power_command_request_cycle_robot
  // can_power_command_request_payload_ports
  // can_power_command_request_wifi_radio
  // has_audio_visual_system
}

bool
bosdyn_msgs__msg__HardwareConfiguration__are_equal(const bosdyn_msgs__msg__HardwareConfiguration * lhs, const bosdyn_msgs__msg__HardwareConfiguration * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // skeleton
  if (!bosdyn_msgs__msg__Skeleton__are_equal(
      &(lhs->skeleton), &(rhs->skeleton)))
  {
    return false;
  }
  // skeleton_is_set
  if (lhs->skeleton_is_set != rhs->skeleton_is_set) {
    return false;
  }
  // can_power_command_request_off_robot
  if (lhs->can_power_command_request_off_robot != rhs->can_power_command_request_off_robot) {
    return false;
  }
  // can_power_command_request_cycle_robot
  if (lhs->can_power_command_request_cycle_robot != rhs->can_power_command_request_cycle_robot) {
    return false;
  }
  // can_power_command_request_payload_ports
  if (lhs->can_power_command_request_payload_ports != rhs->can_power_command_request_payload_ports) {
    return false;
  }
  // can_power_command_request_wifi_radio
  if (lhs->can_power_command_request_wifi_radio != rhs->can_power_command_request_wifi_radio) {
    return false;
  }
  // has_audio_visual_system
  if (lhs->has_audio_visual_system != rhs->has_audio_visual_system) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__HardwareConfiguration__copy(
  const bosdyn_msgs__msg__HardwareConfiguration * input,
  bosdyn_msgs__msg__HardwareConfiguration * output)
{
  if (!input || !output) {
    return false;
  }
  // skeleton
  if (!bosdyn_msgs__msg__Skeleton__copy(
      &(input->skeleton), &(output->skeleton)))
  {
    return false;
  }
  // skeleton_is_set
  output->skeleton_is_set = input->skeleton_is_set;
  // can_power_command_request_off_robot
  output->can_power_command_request_off_robot = input->can_power_command_request_off_robot;
  // can_power_command_request_cycle_robot
  output->can_power_command_request_cycle_robot = input->can_power_command_request_cycle_robot;
  // can_power_command_request_payload_ports
  output->can_power_command_request_payload_ports = input->can_power_command_request_payload_ports;
  // can_power_command_request_wifi_radio
  output->can_power_command_request_wifi_radio = input->can_power_command_request_wifi_radio;
  // has_audio_visual_system
  output->has_audio_visual_system = input->has_audio_visual_system;
  return true;
}

bosdyn_msgs__msg__HardwareConfiguration *
bosdyn_msgs__msg__HardwareConfiguration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__HardwareConfiguration * msg = (bosdyn_msgs__msg__HardwareConfiguration *)allocator.allocate(sizeof(bosdyn_msgs__msg__HardwareConfiguration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__HardwareConfiguration));
  bool success = bosdyn_msgs__msg__HardwareConfiguration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__HardwareConfiguration__destroy(bosdyn_msgs__msg__HardwareConfiguration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__HardwareConfiguration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__HardwareConfiguration__Sequence__init(bosdyn_msgs__msg__HardwareConfiguration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__HardwareConfiguration * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__HardwareConfiguration *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__HardwareConfiguration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__HardwareConfiguration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__HardwareConfiguration__fini(&data[i - 1]);
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
bosdyn_msgs__msg__HardwareConfiguration__Sequence__fini(bosdyn_msgs__msg__HardwareConfiguration__Sequence * array)
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
      bosdyn_msgs__msg__HardwareConfiguration__fini(&array->data[i]);
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

bosdyn_msgs__msg__HardwareConfiguration__Sequence *
bosdyn_msgs__msg__HardwareConfiguration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__HardwareConfiguration__Sequence * array = (bosdyn_msgs__msg__HardwareConfiguration__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__HardwareConfiguration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__HardwareConfiguration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__HardwareConfiguration__Sequence__destroy(bosdyn_msgs__msg__HardwareConfiguration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__HardwareConfiguration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__HardwareConfiguration__Sequence__are_equal(const bosdyn_msgs__msg__HardwareConfiguration__Sequence * lhs, const bosdyn_msgs__msg__HardwareConfiguration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__HardwareConfiguration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__HardwareConfiguration__Sequence__copy(
  const bosdyn_msgs__msg__HardwareConfiguration__Sequence * input,
  bosdyn_msgs__msg__HardwareConfiguration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__HardwareConfiguration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__HardwareConfiguration * data =
      (bosdyn_msgs__msg__HardwareConfiguration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__HardwareConfiguration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__HardwareConfiguration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__HardwareConfiguration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
