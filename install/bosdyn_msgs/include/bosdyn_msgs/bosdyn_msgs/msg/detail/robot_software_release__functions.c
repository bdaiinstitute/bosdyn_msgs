// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RobotSoftwareRelease.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/robot_software_release__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `version`
#include "bosdyn_msgs/msg/detail/software_version__functions.h"
// Member `name`
// Member `type`
// Member `changeset`
// Member `api_version`
// Member `build_information`
#include "rosidl_runtime_c/string_functions.h"
// Member `changeset_date`
// Member `install_date`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `parameters`
#include "bosdyn_msgs/msg/detail/parameter__functions.h"

bool
bosdyn_msgs__msg__RobotSoftwareRelease__init(bosdyn_msgs__msg__RobotSoftwareRelease * msg)
{
  if (!msg) {
    return false;
  }
  // version
  if (!bosdyn_msgs__msg__SoftwareVersion__init(&msg->version)) {
    bosdyn_msgs__msg__RobotSoftwareRelease__fini(msg);
    return false;
  }
  // version_is_set
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__RobotSoftwareRelease__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    bosdyn_msgs__msg__RobotSoftwareRelease__fini(msg);
    return false;
  }
  // changeset_date
  if (!builtin_interfaces__msg__Time__init(&msg->changeset_date)) {
    bosdyn_msgs__msg__RobotSoftwareRelease__fini(msg);
    return false;
  }
  // changeset_date_is_set
  // changeset
  if (!rosidl_runtime_c__String__init(&msg->changeset)) {
    bosdyn_msgs__msg__RobotSoftwareRelease__fini(msg);
    return false;
  }
  // api_version
  if (!rosidl_runtime_c__String__init(&msg->api_version)) {
    bosdyn_msgs__msg__RobotSoftwareRelease__fini(msg);
    return false;
  }
  // build_information
  if (!rosidl_runtime_c__String__init(&msg->build_information)) {
    bosdyn_msgs__msg__RobotSoftwareRelease__fini(msg);
    return false;
  }
  // install_date
  if (!builtin_interfaces__msg__Time__init(&msg->install_date)) {
    bosdyn_msgs__msg__RobotSoftwareRelease__fini(msg);
    return false;
  }
  // install_date_is_set
  // parameters
  if (!bosdyn_msgs__msg__Parameter__Sequence__init(&msg->parameters, 0)) {
    bosdyn_msgs__msg__RobotSoftwareRelease__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__RobotSoftwareRelease__fini(bosdyn_msgs__msg__RobotSoftwareRelease * msg)
{
  if (!msg) {
    return;
  }
  // version
  bosdyn_msgs__msg__SoftwareVersion__fini(&msg->version);
  // version_is_set
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // changeset_date
  builtin_interfaces__msg__Time__fini(&msg->changeset_date);
  // changeset_date_is_set
  // changeset
  rosidl_runtime_c__String__fini(&msg->changeset);
  // api_version
  rosidl_runtime_c__String__fini(&msg->api_version);
  // build_information
  rosidl_runtime_c__String__fini(&msg->build_information);
  // install_date
  builtin_interfaces__msg__Time__fini(&msg->install_date);
  // install_date_is_set
  // parameters
  bosdyn_msgs__msg__Parameter__Sequence__fini(&msg->parameters);
}

bool
bosdyn_msgs__msg__RobotSoftwareRelease__are_equal(const bosdyn_msgs__msg__RobotSoftwareRelease * lhs, const bosdyn_msgs__msg__RobotSoftwareRelease * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // version
  if (!bosdyn_msgs__msg__SoftwareVersion__are_equal(
      &(lhs->version), &(rhs->version)))
  {
    return false;
  }
  // version_is_set
  if (lhs->version_is_set != rhs->version_is_set) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // changeset_date
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->changeset_date), &(rhs->changeset_date)))
  {
    return false;
  }
  // changeset_date_is_set
  if (lhs->changeset_date_is_set != rhs->changeset_date_is_set) {
    return false;
  }
  // changeset
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->changeset), &(rhs->changeset)))
  {
    return false;
  }
  // api_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->api_version), &(rhs->api_version)))
  {
    return false;
  }
  // build_information
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->build_information), &(rhs->build_information)))
  {
    return false;
  }
  // install_date
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->install_date), &(rhs->install_date)))
  {
    return false;
  }
  // install_date_is_set
  if (lhs->install_date_is_set != rhs->install_date_is_set) {
    return false;
  }
  // parameters
  if (!bosdyn_msgs__msg__Parameter__Sequence__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RobotSoftwareRelease__copy(
  const bosdyn_msgs__msg__RobotSoftwareRelease * input,
  bosdyn_msgs__msg__RobotSoftwareRelease * output)
{
  if (!input || !output) {
    return false;
  }
  // version
  if (!bosdyn_msgs__msg__SoftwareVersion__copy(
      &(input->version), &(output->version)))
  {
    return false;
  }
  // version_is_set
  output->version_is_set = input->version_is_set;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // changeset_date
  if (!builtin_interfaces__msg__Time__copy(
      &(input->changeset_date), &(output->changeset_date)))
  {
    return false;
  }
  // changeset_date_is_set
  output->changeset_date_is_set = input->changeset_date_is_set;
  // changeset
  if (!rosidl_runtime_c__String__copy(
      &(input->changeset), &(output->changeset)))
  {
    return false;
  }
  // api_version
  if (!rosidl_runtime_c__String__copy(
      &(input->api_version), &(output->api_version)))
  {
    return false;
  }
  // build_information
  if (!rosidl_runtime_c__String__copy(
      &(input->build_information), &(output->build_information)))
  {
    return false;
  }
  // install_date
  if (!builtin_interfaces__msg__Time__copy(
      &(input->install_date), &(output->install_date)))
  {
    return false;
  }
  // install_date_is_set
  output->install_date_is_set = input->install_date_is_set;
  // parameters
  if (!bosdyn_msgs__msg__Parameter__Sequence__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__RobotSoftwareRelease *
bosdyn_msgs__msg__RobotSoftwareRelease__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RobotSoftwareRelease * msg = (bosdyn_msgs__msg__RobotSoftwareRelease *)allocator.allocate(sizeof(bosdyn_msgs__msg__RobotSoftwareRelease), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RobotSoftwareRelease));
  bool success = bosdyn_msgs__msg__RobotSoftwareRelease__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RobotSoftwareRelease__destroy(bosdyn_msgs__msg__RobotSoftwareRelease * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RobotSoftwareRelease__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RobotSoftwareRelease__Sequence__init(bosdyn_msgs__msg__RobotSoftwareRelease__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RobotSoftwareRelease * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RobotSoftwareRelease *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RobotSoftwareRelease), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RobotSoftwareRelease__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RobotSoftwareRelease__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RobotSoftwareRelease__Sequence__fini(bosdyn_msgs__msg__RobotSoftwareRelease__Sequence * array)
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
      bosdyn_msgs__msg__RobotSoftwareRelease__fini(&array->data[i]);
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

bosdyn_msgs__msg__RobotSoftwareRelease__Sequence *
bosdyn_msgs__msg__RobotSoftwareRelease__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RobotSoftwareRelease__Sequence * array = (bosdyn_msgs__msg__RobotSoftwareRelease__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RobotSoftwareRelease__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RobotSoftwareRelease__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RobotSoftwareRelease__Sequence__destroy(bosdyn_msgs__msg__RobotSoftwareRelease__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RobotSoftwareRelease__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RobotSoftwareRelease__Sequence__are_equal(const bosdyn_msgs__msg__RobotSoftwareRelease__Sequence * lhs, const bosdyn_msgs__msg__RobotSoftwareRelease__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RobotSoftwareRelease__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RobotSoftwareRelease__Sequence__copy(
  const bosdyn_msgs__msg__RobotSoftwareRelease__Sequence * input,
  bosdyn_msgs__msg__RobotSoftwareRelease__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RobotSoftwareRelease);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RobotSoftwareRelease * data =
      (bosdyn_msgs__msg__RobotSoftwareRelease *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RobotSoftwareRelease__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RobotSoftwareRelease__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RobotSoftwareRelease__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
