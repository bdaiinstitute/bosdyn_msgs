// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ActionRemoteGrpc.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/action_remote_grpc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_name`
// Member `lease_resources`
#include "rosidl_runtime_c/string_functions.h"
// Member `rpc_timeout`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `parameters`
#include "bosdyn_msgs/msg/detail/custom_param_collection__functions.h"
// Member `record_time_images`
#include "bosdyn_msgs/msg/detail/image_capture_and_source__functions.h"

bool
bosdyn_msgs__msg__ActionRemoteGrpc__init(bosdyn_msgs__msg__ActionRemoteGrpc * msg)
{
  if (!msg) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__ActionRemoteGrpc__fini(msg);
    return false;
  }
  // rpc_timeout
  if (!builtin_interfaces__msg__Duration__init(&msg->rpc_timeout)) {
    bosdyn_msgs__msg__ActionRemoteGrpc__fini(msg);
    return false;
  }
  // rpc_timeout_is_set
  // lease_resources
  if (!rosidl_runtime_c__String__Sequence__init(&msg->lease_resources, 0)) {
    bosdyn_msgs__msg__ActionRemoteGrpc__fini(msg);
    return false;
  }
  // parameters
  if (!bosdyn_msgs__msg__CustomParamCollection__init(&msg->parameters)) {
    bosdyn_msgs__msg__ActionRemoteGrpc__fini(msg);
    return false;
  }
  // parameters_is_set
  // record_time_images
  if (!bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__init(&msg->record_time_images, 0)) {
    bosdyn_msgs__msg__ActionRemoteGrpc__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__ActionRemoteGrpc__fini(bosdyn_msgs__msg__ActionRemoteGrpc * msg)
{
  if (!msg) {
    return;
  }
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // rpc_timeout
  builtin_interfaces__msg__Duration__fini(&msg->rpc_timeout);
  // rpc_timeout_is_set
  // lease_resources
  rosidl_runtime_c__String__Sequence__fini(&msg->lease_resources);
  // parameters
  bosdyn_msgs__msg__CustomParamCollection__fini(&msg->parameters);
  // parameters_is_set
  // record_time_images
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__fini(&msg->record_time_images);
}

bool
bosdyn_msgs__msg__ActionRemoteGrpc__are_equal(const bosdyn_msgs__msg__ActionRemoteGrpc * lhs, const bosdyn_msgs__msg__ActionRemoteGrpc * rhs)
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
  // rpc_timeout
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->rpc_timeout), &(rhs->rpc_timeout)))
  {
    return false;
  }
  // rpc_timeout_is_set
  if (lhs->rpc_timeout_is_set != rhs->rpc_timeout_is_set) {
    return false;
  }
  // lease_resources
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->lease_resources), &(rhs->lease_resources)))
  {
    return false;
  }
  // parameters
  if (!bosdyn_msgs__msg__CustomParamCollection__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  // parameters_is_set
  if (lhs->parameters_is_set != rhs->parameters_is_set) {
    return false;
  }
  // record_time_images
  if (!bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__are_equal(
      &(lhs->record_time_images), &(rhs->record_time_images)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionRemoteGrpc__copy(
  const bosdyn_msgs__msg__ActionRemoteGrpc * input,
  bosdyn_msgs__msg__ActionRemoteGrpc * output)
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
  // rpc_timeout
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->rpc_timeout), &(output->rpc_timeout)))
  {
    return false;
  }
  // rpc_timeout_is_set
  output->rpc_timeout_is_set = input->rpc_timeout_is_set;
  // lease_resources
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->lease_resources), &(output->lease_resources)))
  {
    return false;
  }
  // parameters
  if (!bosdyn_msgs__msg__CustomParamCollection__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  // parameters_is_set
  output->parameters_is_set = input->parameters_is_set;
  // record_time_images
  if (!bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__copy(
      &(input->record_time_images), &(output->record_time_images)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__ActionRemoteGrpc *
bosdyn_msgs__msg__ActionRemoteGrpc__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionRemoteGrpc * msg = (bosdyn_msgs__msg__ActionRemoteGrpc *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionRemoteGrpc), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ActionRemoteGrpc));
  bool success = bosdyn_msgs__msg__ActionRemoteGrpc__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ActionRemoteGrpc__destroy(bosdyn_msgs__msg__ActionRemoteGrpc * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ActionRemoteGrpc__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ActionRemoteGrpc__Sequence__init(bosdyn_msgs__msg__ActionRemoteGrpc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionRemoteGrpc * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ActionRemoteGrpc *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ActionRemoteGrpc), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ActionRemoteGrpc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ActionRemoteGrpc__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ActionRemoteGrpc__Sequence__fini(bosdyn_msgs__msg__ActionRemoteGrpc__Sequence * array)
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
      bosdyn_msgs__msg__ActionRemoteGrpc__fini(&array->data[i]);
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

bosdyn_msgs__msg__ActionRemoteGrpc__Sequence *
bosdyn_msgs__msg__ActionRemoteGrpc__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionRemoteGrpc__Sequence * array = (bosdyn_msgs__msg__ActionRemoteGrpc__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionRemoteGrpc__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ActionRemoteGrpc__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ActionRemoteGrpc__Sequence__destroy(bosdyn_msgs__msg__ActionRemoteGrpc__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ActionRemoteGrpc__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ActionRemoteGrpc__Sequence__are_equal(const bosdyn_msgs__msg__ActionRemoteGrpc__Sequence * lhs, const bosdyn_msgs__msg__ActionRemoteGrpc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ActionRemoteGrpc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionRemoteGrpc__Sequence__copy(
  const bosdyn_msgs__msg__ActionRemoteGrpc__Sequence * input,
  bosdyn_msgs__msg__ActionRemoteGrpc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ActionRemoteGrpc);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ActionRemoteGrpc * data =
      (bosdyn_msgs__msg__ActionRemoteGrpc *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ActionRemoteGrpc__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ActionRemoteGrpc__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ActionRemoteGrpc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
