// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/NetworkComputeError.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/network_compute_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_name`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `error`
#include "bosdyn_msgs/msg/detail/network_compute_error_error_code__functions.h"
// Member `network_compute_status`
#include "bosdyn_msgs/msg/detail/network_compute_status__functions.h"

bool
bosdyn_msgs__msg__NetworkComputeError__init(bosdyn_msgs__msg__NetworkComputeError * msg)
{
  if (!msg) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__NetworkComputeError__fini(msg);
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__NetworkComputeErrorErrorCode__init(&msg->error)) {
    bosdyn_msgs__msg__NetworkComputeError__fini(msg);
    return false;
  }
  // network_compute_status
  if (!bosdyn_msgs__msg__NetworkComputeStatus__init(&msg->network_compute_status)) {
    bosdyn_msgs__msg__NetworkComputeError__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    bosdyn_msgs__msg__NetworkComputeError__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__NetworkComputeError__fini(bosdyn_msgs__msg__NetworkComputeError * msg)
{
  if (!msg) {
    return;
  }
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // error
  bosdyn_msgs__msg__NetworkComputeErrorErrorCode__fini(&msg->error);
  // network_compute_status
  bosdyn_msgs__msg__NetworkComputeStatus__fini(&msg->network_compute_status);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
bosdyn_msgs__msg__NetworkComputeError__are_equal(const bosdyn_msgs__msg__NetworkComputeError * lhs, const bosdyn_msgs__msg__NetworkComputeError * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__NetworkComputeErrorErrorCode__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  // network_compute_status
  if (!bosdyn_msgs__msg__NetworkComputeStatus__are_equal(
      &(lhs->network_compute_status), &(rhs->network_compute_status)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__NetworkComputeError__copy(
  const bosdyn_msgs__msg__NetworkComputeError * input,
  bosdyn_msgs__msg__NetworkComputeError * output)
{
  if (!input || !output) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__NetworkComputeErrorErrorCode__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  // network_compute_status
  if (!bosdyn_msgs__msg__NetworkComputeStatus__copy(
      &(input->network_compute_status), &(output->network_compute_status)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__NetworkComputeError *
bosdyn_msgs__msg__NetworkComputeError__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NetworkComputeError * msg = (bosdyn_msgs__msg__NetworkComputeError *)allocator.allocate(sizeof(bosdyn_msgs__msg__NetworkComputeError), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__NetworkComputeError));
  bool success = bosdyn_msgs__msg__NetworkComputeError__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__NetworkComputeError__destroy(bosdyn_msgs__msg__NetworkComputeError * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__NetworkComputeError__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__NetworkComputeError__Sequence__init(bosdyn_msgs__msg__NetworkComputeError__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NetworkComputeError * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__NetworkComputeError *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__NetworkComputeError), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__NetworkComputeError__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__NetworkComputeError__fini(&data[i - 1]);
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
bosdyn_msgs__msg__NetworkComputeError__Sequence__fini(bosdyn_msgs__msg__NetworkComputeError__Sequence * array)
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
      bosdyn_msgs__msg__NetworkComputeError__fini(&array->data[i]);
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

bosdyn_msgs__msg__NetworkComputeError__Sequence *
bosdyn_msgs__msg__NetworkComputeError__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NetworkComputeError__Sequence * array = (bosdyn_msgs__msg__NetworkComputeError__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__NetworkComputeError__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__NetworkComputeError__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__NetworkComputeError__Sequence__destroy(bosdyn_msgs__msg__NetworkComputeError__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__NetworkComputeError__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__NetworkComputeError__Sequence__are_equal(const bosdyn_msgs__msg__NetworkComputeError__Sequence * lhs, const bosdyn_msgs__msg__NetworkComputeError__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__NetworkComputeError__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__NetworkComputeError__Sequence__copy(
  const bosdyn_msgs__msg__NetworkComputeError__Sequence * input,
  bosdyn_msgs__msg__NetworkComputeError__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__NetworkComputeError);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__NetworkComputeError * data =
      (bosdyn_msgs__msg__NetworkComputeError *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__NetworkComputeError__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__NetworkComputeError__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__NetworkComputeError__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
