// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ICEServer.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/ice_server__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "bosdyn_msgs/msg/detail/ice_server_servertype__functions.h"
// Member `address`
#include "rosidl_runtime_c/string_functions.h"
// Member `transport`
#include "bosdyn_msgs/msg/detail/ice_server_icetransport__functions.h"
// Member `auth`
#include "bosdyn_msgs/msg/detail/ice_server_auth_params__functions.h"

bool
bosdyn_msgs__msg__ICEServer__init(bosdyn_msgs__msg__ICEServer * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__ICEServerServertype__init(&msg->type)) {
    bosdyn_msgs__msg__ICEServer__fini(msg);
    return false;
  }
  // address
  if (!rosidl_runtime_c__String__init(&msg->address)) {
    bosdyn_msgs__msg__ICEServer__fini(msg);
    return false;
  }
  // port
  // transport
  if (!bosdyn_msgs__msg__ICEServerIcetransport__init(&msg->transport)) {
    bosdyn_msgs__msg__ICEServer__fini(msg);
    return false;
  }
  // auth
  if (!bosdyn_msgs__msg__ICEServerAuthParams__init(&msg->auth)) {
    bosdyn_msgs__msg__ICEServer__fini(msg);
    return false;
  }
  // auth_is_set
  return true;
}

void
bosdyn_msgs__msg__ICEServer__fini(bosdyn_msgs__msg__ICEServer * msg)
{
  if (!msg) {
    return;
  }
  // type
  bosdyn_msgs__msg__ICEServerServertype__fini(&msg->type);
  // address
  rosidl_runtime_c__String__fini(&msg->address);
  // port
  // transport
  bosdyn_msgs__msg__ICEServerIcetransport__fini(&msg->transport);
  // auth
  bosdyn_msgs__msg__ICEServerAuthParams__fini(&msg->auth);
  // auth_is_set
}

bool
bosdyn_msgs__msg__ICEServer__are_equal(const bosdyn_msgs__msg__ICEServer * lhs, const bosdyn_msgs__msg__ICEServer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__ICEServerServertype__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->address), &(rhs->address)))
  {
    return false;
  }
  // port
  if (lhs->port != rhs->port) {
    return false;
  }
  // transport
  if (!bosdyn_msgs__msg__ICEServerIcetransport__are_equal(
      &(lhs->transport), &(rhs->transport)))
  {
    return false;
  }
  // auth
  if (!bosdyn_msgs__msg__ICEServerAuthParams__are_equal(
      &(lhs->auth), &(rhs->auth)))
  {
    return false;
  }
  // auth_is_set
  if (lhs->auth_is_set != rhs->auth_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ICEServer__copy(
  const bosdyn_msgs__msg__ICEServer * input,
  bosdyn_msgs__msg__ICEServer * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__ICEServerServertype__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // address
  if (!rosidl_runtime_c__String__copy(
      &(input->address), &(output->address)))
  {
    return false;
  }
  // port
  output->port = input->port;
  // transport
  if (!bosdyn_msgs__msg__ICEServerIcetransport__copy(
      &(input->transport), &(output->transport)))
  {
    return false;
  }
  // auth
  if (!bosdyn_msgs__msg__ICEServerAuthParams__copy(
      &(input->auth), &(output->auth)))
  {
    return false;
  }
  // auth_is_set
  output->auth_is_set = input->auth_is_set;
  return true;
}

bosdyn_msgs__msg__ICEServer *
bosdyn_msgs__msg__ICEServer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ICEServer * msg = (bosdyn_msgs__msg__ICEServer *)allocator.allocate(sizeof(bosdyn_msgs__msg__ICEServer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ICEServer));
  bool success = bosdyn_msgs__msg__ICEServer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ICEServer__destroy(bosdyn_msgs__msg__ICEServer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ICEServer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ICEServer__Sequence__init(bosdyn_msgs__msg__ICEServer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ICEServer * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ICEServer *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ICEServer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ICEServer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ICEServer__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ICEServer__Sequence__fini(bosdyn_msgs__msg__ICEServer__Sequence * array)
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
      bosdyn_msgs__msg__ICEServer__fini(&array->data[i]);
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

bosdyn_msgs__msg__ICEServer__Sequence *
bosdyn_msgs__msg__ICEServer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ICEServer__Sequence * array = (bosdyn_msgs__msg__ICEServer__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ICEServer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ICEServer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ICEServer__Sequence__destroy(bosdyn_msgs__msg__ICEServer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ICEServer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ICEServer__Sequence__are_equal(const bosdyn_msgs__msg__ICEServer__Sequence * lhs, const bosdyn_msgs__msg__ICEServer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ICEServer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ICEServer__Sequence__copy(
  const bosdyn_msgs__msg__ICEServer__Sequence * input,
  bosdyn_msgs__msg__ICEServer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ICEServer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ICEServer * data =
      (bosdyn_msgs__msg__ICEServer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ICEServer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ICEServer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ICEServer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
