// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/LicenseInfo.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/license_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "bosdyn_msgs/msg/detail/license_info_status__functions.h"
// Member `id`
// Member `robot_serial`
// Member `licensed_features`
#include "rosidl_runtime_c/string_functions.h"
// Member `not_valid_before`
// Member `not_valid_after`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__LicenseInfo__init(bosdyn_msgs__msg__LicenseInfo * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__LicenseInfoStatus__init(&msg->status)) {
    bosdyn_msgs__msg__LicenseInfo__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    bosdyn_msgs__msg__LicenseInfo__fini(msg);
    return false;
  }
  // robot_serial
  if (!rosidl_runtime_c__String__init(&msg->robot_serial)) {
    bosdyn_msgs__msg__LicenseInfo__fini(msg);
    return false;
  }
  // not_valid_before
  if (!builtin_interfaces__msg__Time__init(&msg->not_valid_before)) {
    bosdyn_msgs__msg__LicenseInfo__fini(msg);
    return false;
  }
  // not_valid_before_is_set
  // not_valid_after
  if (!builtin_interfaces__msg__Time__init(&msg->not_valid_after)) {
    bosdyn_msgs__msg__LicenseInfo__fini(msg);
    return false;
  }
  // not_valid_after_is_set
  // licensed_features
  if (!rosidl_runtime_c__String__Sequence__init(&msg->licensed_features, 0)) {
    bosdyn_msgs__msg__LicenseInfo__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__LicenseInfo__fini(bosdyn_msgs__msg__LicenseInfo * msg)
{
  if (!msg) {
    return;
  }
  // status
  bosdyn_msgs__msg__LicenseInfoStatus__fini(&msg->status);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // robot_serial
  rosidl_runtime_c__String__fini(&msg->robot_serial);
  // not_valid_before
  builtin_interfaces__msg__Time__fini(&msg->not_valid_before);
  // not_valid_before_is_set
  // not_valid_after
  builtin_interfaces__msg__Time__fini(&msg->not_valid_after);
  // not_valid_after_is_set
  // licensed_features
  rosidl_runtime_c__String__Sequence__fini(&msg->licensed_features);
}

bool
bosdyn_msgs__msg__LicenseInfo__are_equal(const bosdyn_msgs__msg__LicenseInfo * lhs, const bosdyn_msgs__msg__LicenseInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__LicenseInfoStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // robot_serial
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_serial), &(rhs->robot_serial)))
  {
    return false;
  }
  // not_valid_before
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->not_valid_before), &(rhs->not_valid_before)))
  {
    return false;
  }
  // not_valid_before_is_set
  if (lhs->not_valid_before_is_set != rhs->not_valid_before_is_set) {
    return false;
  }
  // not_valid_after
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->not_valid_after), &(rhs->not_valid_after)))
  {
    return false;
  }
  // not_valid_after_is_set
  if (lhs->not_valid_after_is_set != rhs->not_valid_after_is_set) {
    return false;
  }
  // licensed_features
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->licensed_features), &(rhs->licensed_features)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__LicenseInfo__copy(
  const bosdyn_msgs__msg__LicenseInfo * input,
  bosdyn_msgs__msg__LicenseInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__LicenseInfoStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // robot_serial
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_serial), &(output->robot_serial)))
  {
    return false;
  }
  // not_valid_before
  if (!builtin_interfaces__msg__Time__copy(
      &(input->not_valid_before), &(output->not_valid_before)))
  {
    return false;
  }
  // not_valid_before_is_set
  output->not_valid_before_is_set = input->not_valid_before_is_set;
  // not_valid_after
  if (!builtin_interfaces__msg__Time__copy(
      &(input->not_valid_after), &(output->not_valid_after)))
  {
    return false;
  }
  // not_valid_after_is_set
  output->not_valid_after_is_set = input->not_valid_after_is_set;
  // licensed_features
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->licensed_features), &(output->licensed_features)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__LicenseInfo *
bosdyn_msgs__msg__LicenseInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LicenseInfo * msg = (bosdyn_msgs__msg__LicenseInfo *)allocator.allocate(sizeof(bosdyn_msgs__msg__LicenseInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__LicenseInfo));
  bool success = bosdyn_msgs__msg__LicenseInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__LicenseInfo__destroy(bosdyn_msgs__msg__LicenseInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__LicenseInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__LicenseInfo__Sequence__init(bosdyn_msgs__msg__LicenseInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LicenseInfo * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__LicenseInfo *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__LicenseInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__LicenseInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__LicenseInfo__fini(&data[i - 1]);
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
bosdyn_msgs__msg__LicenseInfo__Sequence__fini(bosdyn_msgs__msg__LicenseInfo__Sequence * array)
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
      bosdyn_msgs__msg__LicenseInfo__fini(&array->data[i]);
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

bosdyn_msgs__msg__LicenseInfo__Sequence *
bosdyn_msgs__msg__LicenseInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LicenseInfo__Sequence * array = (bosdyn_msgs__msg__LicenseInfo__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__LicenseInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__LicenseInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__LicenseInfo__Sequence__destroy(bosdyn_msgs__msg__LicenseInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__LicenseInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__LicenseInfo__Sequence__are_equal(const bosdyn_msgs__msg__LicenseInfo__Sequence * lhs, const bosdyn_msgs__msg__LicenseInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__LicenseInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__LicenseInfo__Sequence__copy(
  const bosdyn_msgs__msg__LicenseInfo__Sequence * input,
  bosdyn_msgs__msg__LicenseInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__LicenseInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__LicenseInfo * data =
      (bosdyn_msgs__msg__LicenseInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__LicenseInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__LicenseInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__LicenseInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
