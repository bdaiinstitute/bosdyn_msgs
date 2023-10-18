// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RobotId.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/robot_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `serial_number`
// Member `species`
// Member `version`
// Member `nickname`
// Member `computer_serial_number`
#include "rosidl_runtime_c/string_functions.h"
// Member `software_release`
#include "bosdyn_msgs/msg/detail/robot_software_release__functions.h"

bool
bosdyn_msgs__msg__RobotId__init(bosdyn_msgs__msg__RobotId * msg)
{
  if (!msg) {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    bosdyn_msgs__msg__RobotId__fini(msg);
    return false;
  }
  // species
  if (!rosidl_runtime_c__String__init(&msg->species)) {
    bosdyn_msgs__msg__RobotId__fini(msg);
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__init(&msg->version)) {
    bosdyn_msgs__msg__RobotId__fini(msg);
    return false;
  }
  // software_release
  if (!bosdyn_msgs__msg__RobotSoftwareRelease__init(&msg->software_release)) {
    bosdyn_msgs__msg__RobotId__fini(msg);
    return false;
  }
  // software_release_is_set
  // nickname
  if (!rosidl_runtime_c__String__init(&msg->nickname)) {
    bosdyn_msgs__msg__RobotId__fini(msg);
    return false;
  }
  // computer_serial_number
  if (!rosidl_runtime_c__String__init(&msg->computer_serial_number)) {
    bosdyn_msgs__msg__RobotId__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__RobotId__fini(bosdyn_msgs__msg__RobotId * msg)
{
  if (!msg) {
    return;
  }
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
  // species
  rosidl_runtime_c__String__fini(&msg->species);
  // version
  rosidl_runtime_c__String__fini(&msg->version);
  // software_release
  bosdyn_msgs__msg__RobotSoftwareRelease__fini(&msg->software_release);
  // software_release_is_set
  // nickname
  rosidl_runtime_c__String__fini(&msg->nickname);
  // computer_serial_number
  rosidl_runtime_c__String__fini(&msg->computer_serial_number);
}

bool
bosdyn_msgs__msg__RobotId__are_equal(const bosdyn_msgs__msg__RobotId * lhs, const bosdyn_msgs__msg__RobotId * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_number), &(rhs->serial_number)))
  {
    return false;
  }
  // species
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->species), &(rhs->species)))
  {
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version), &(rhs->version)))
  {
    return false;
  }
  // software_release
  if (!bosdyn_msgs__msg__RobotSoftwareRelease__are_equal(
      &(lhs->software_release), &(rhs->software_release)))
  {
    return false;
  }
  // software_release_is_set
  if (lhs->software_release_is_set != rhs->software_release_is_set) {
    return false;
  }
  // nickname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nickname), &(rhs->nickname)))
  {
    return false;
  }
  // computer_serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->computer_serial_number), &(rhs->computer_serial_number)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RobotId__copy(
  const bosdyn_msgs__msg__RobotId * input,
  bosdyn_msgs__msg__RobotId * output)
{
  if (!input || !output) {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_number), &(output->serial_number)))
  {
    return false;
  }
  // species
  if (!rosidl_runtime_c__String__copy(
      &(input->species), &(output->species)))
  {
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__copy(
      &(input->version), &(output->version)))
  {
    return false;
  }
  // software_release
  if (!bosdyn_msgs__msg__RobotSoftwareRelease__copy(
      &(input->software_release), &(output->software_release)))
  {
    return false;
  }
  // software_release_is_set
  output->software_release_is_set = input->software_release_is_set;
  // nickname
  if (!rosidl_runtime_c__String__copy(
      &(input->nickname), &(output->nickname)))
  {
    return false;
  }
  // computer_serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->computer_serial_number), &(output->computer_serial_number)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__RobotId *
bosdyn_msgs__msg__RobotId__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RobotId * msg = (bosdyn_msgs__msg__RobotId *)allocator.allocate(sizeof(bosdyn_msgs__msg__RobotId), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RobotId));
  bool success = bosdyn_msgs__msg__RobotId__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RobotId__destroy(bosdyn_msgs__msg__RobotId * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RobotId__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RobotId__Sequence__init(bosdyn_msgs__msg__RobotId__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RobotId * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RobotId *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RobotId), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RobotId__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RobotId__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RobotId__Sequence__fini(bosdyn_msgs__msg__RobotId__Sequence * array)
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
      bosdyn_msgs__msg__RobotId__fini(&array->data[i]);
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

bosdyn_msgs__msg__RobotId__Sequence *
bosdyn_msgs__msg__RobotId__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RobotId__Sequence * array = (bosdyn_msgs__msg__RobotId__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RobotId__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RobotId__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RobotId__Sequence__destroy(bosdyn_msgs__msg__RobotId__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RobotId__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RobotId__Sequence__are_equal(const bosdyn_msgs__msg__RobotId__Sequence * lhs, const bosdyn_msgs__msg__RobotId__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RobotId__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RobotId__Sequence__copy(
  const bosdyn_msgs__msg__RobotId__Sequence * input,
  bosdyn_msgs__msg__RobotId__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RobotId);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RobotId * data =
      (bosdyn_msgs__msg__RobotId *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RobotId__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RobotId__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RobotId__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
