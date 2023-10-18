// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ServiceFault.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/service_fault__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fault_id`
#include "bosdyn_msgs/msg/detail/service_fault_id__functions.h"
// Member `error_message`
// Member `attributes`
#include "rosidl_runtime_c/string_functions.h"
// Member `severity`
#include "bosdyn_msgs/msg/detail/service_fault_severity__functions.h"
// Member `onset_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__ServiceFault__init(bosdyn_msgs__msg__ServiceFault * msg)
{
  if (!msg) {
    return false;
  }
  // fault_id
  if (!bosdyn_msgs__msg__ServiceFaultId__init(&msg->fault_id)) {
    bosdyn_msgs__msg__ServiceFault__fini(msg);
    return false;
  }
  // fault_id_is_set
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    bosdyn_msgs__msg__ServiceFault__fini(msg);
    return false;
  }
  // attributes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->attributes, 0)) {
    bosdyn_msgs__msg__ServiceFault__fini(msg);
    return false;
  }
  // severity
  if (!bosdyn_msgs__msg__ServiceFaultSeverity__init(&msg->severity)) {
    bosdyn_msgs__msg__ServiceFault__fini(msg);
    return false;
  }
  // onset_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->onset_timestamp)) {
    bosdyn_msgs__msg__ServiceFault__fini(msg);
    return false;
  }
  // onset_timestamp_is_set
  // duration
  if (!builtin_interfaces__msg__Duration__init(&msg->duration)) {
    bosdyn_msgs__msg__ServiceFault__fini(msg);
    return false;
  }
  // duration_is_set
  return true;
}

void
bosdyn_msgs__msg__ServiceFault__fini(bosdyn_msgs__msg__ServiceFault * msg)
{
  if (!msg) {
    return;
  }
  // fault_id
  bosdyn_msgs__msg__ServiceFaultId__fini(&msg->fault_id);
  // fault_id_is_set
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
  // attributes
  rosidl_runtime_c__String__Sequence__fini(&msg->attributes);
  // severity
  bosdyn_msgs__msg__ServiceFaultSeverity__fini(&msg->severity);
  // onset_timestamp
  builtin_interfaces__msg__Time__fini(&msg->onset_timestamp);
  // onset_timestamp_is_set
  // duration
  builtin_interfaces__msg__Duration__fini(&msg->duration);
  // duration_is_set
}

bool
bosdyn_msgs__msg__ServiceFault__are_equal(const bosdyn_msgs__msg__ServiceFault * lhs, const bosdyn_msgs__msg__ServiceFault * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fault_id
  if (!bosdyn_msgs__msg__ServiceFaultId__are_equal(
      &(lhs->fault_id), &(rhs->fault_id)))
  {
    return false;
  }
  // fault_id_is_set
  if (lhs->fault_id_is_set != rhs->fault_id_is_set) {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  // attributes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->attributes), &(rhs->attributes)))
  {
    return false;
  }
  // severity
  if (!bosdyn_msgs__msg__ServiceFaultSeverity__are_equal(
      &(lhs->severity), &(rhs->severity)))
  {
    return false;
  }
  // onset_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->onset_timestamp), &(rhs->onset_timestamp)))
  {
    return false;
  }
  // onset_timestamp_is_set
  if (lhs->onset_timestamp_is_set != rhs->onset_timestamp_is_set) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->duration), &(rhs->duration)))
  {
    return false;
  }
  // duration_is_set
  if (lhs->duration_is_set != rhs->duration_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ServiceFault__copy(
  const bosdyn_msgs__msg__ServiceFault * input,
  bosdyn_msgs__msg__ServiceFault * output)
{
  if (!input || !output) {
    return false;
  }
  // fault_id
  if (!bosdyn_msgs__msg__ServiceFaultId__copy(
      &(input->fault_id), &(output->fault_id)))
  {
    return false;
  }
  // fault_id_is_set
  output->fault_id_is_set = input->fault_id_is_set;
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  // attributes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->attributes), &(output->attributes)))
  {
    return false;
  }
  // severity
  if (!bosdyn_msgs__msg__ServiceFaultSeverity__copy(
      &(input->severity), &(output->severity)))
  {
    return false;
  }
  // onset_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->onset_timestamp), &(output->onset_timestamp)))
  {
    return false;
  }
  // onset_timestamp_is_set
  output->onset_timestamp_is_set = input->onset_timestamp_is_set;
  // duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->duration), &(output->duration)))
  {
    return false;
  }
  // duration_is_set
  output->duration_is_set = input->duration_is_set;
  return true;
}

bosdyn_msgs__msg__ServiceFault *
bosdyn_msgs__msg__ServiceFault__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ServiceFault * msg = (bosdyn_msgs__msg__ServiceFault *)allocator.allocate(sizeof(bosdyn_msgs__msg__ServiceFault), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ServiceFault));
  bool success = bosdyn_msgs__msg__ServiceFault__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ServiceFault__destroy(bosdyn_msgs__msg__ServiceFault * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ServiceFault__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ServiceFault__Sequence__init(bosdyn_msgs__msg__ServiceFault__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ServiceFault * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ServiceFault *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ServiceFault), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ServiceFault__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ServiceFault__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ServiceFault__Sequence__fini(bosdyn_msgs__msg__ServiceFault__Sequence * array)
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
      bosdyn_msgs__msg__ServiceFault__fini(&array->data[i]);
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

bosdyn_msgs__msg__ServiceFault__Sequence *
bosdyn_msgs__msg__ServiceFault__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ServiceFault__Sequence * array = (bosdyn_msgs__msg__ServiceFault__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ServiceFault__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ServiceFault__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ServiceFault__Sequence__destroy(bosdyn_msgs__msg__ServiceFault__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ServiceFault__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ServiceFault__Sequence__are_equal(const bosdyn_msgs__msg__ServiceFault__Sequence * lhs, const bosdyn_msgs__msg__ServiceFault__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ServiceFault__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ServiceFault__Sequence__copy(
  const bosdyn_msgs__msg__ServiceFault__Sequence * input,
  bosdyn_msgs__msg__ServiceFault__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ServiceFault);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ServiceFault * data =
      (bosdyn_msgs__msg__ServiceFault *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ServiceFault__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ServiceFault__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ServiceFault__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
