// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/NetworkTuple.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/network_tuple__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__NetworkTuple__init(bosdyn_msgs__msg__NetworkTuple * msg)
{
  if (!msg) {
    return false;
  }
  // address
  // address_is_set
  // netmask
  // netmask_is_set
  // gateway
  // gateway_is_set
  // mtu
  // mtu_is_set
  return true;
}

void
bosdyn_msgs__msg__NetworkTuple__fini(bosdyn_msgs__msg__NetworkTuple * msg)
{
  if (!msg) {
    return;
  }
  // address
  // address_is_set
  // netmask
  // netmask_is_set
  // gateway
  // gateway_is_set
  // mtu
  // mtu_is_set
}

bool
bosdyn_msgs__msg__NetworkTuple__are_equal(const bosdyn_msgs__msg__NetworkTuple * lhs, const bosdyn_msgs__msg__NetworkTuple * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // address
  if (lhs->address != rhs->address) {
    return false;
  }
  // address_is_set
  if (lhs->address_is_set != rhs->address_is_set) {
    return false;
  }
  // netmask
  if (lhs->netmask != rhs->netmask) {
    return false;
  }
  // netmask_is_set
  if (lhs->netmask_is_set != rhs->netmask_is_set) {
    return false;
  }
  // gateway
  if (lhs->gateway != rhs->gateway) {
    return false;
  }
  // gateway_is_set
  if (lhs->gateway_is_set != rhs->gateway_is_set) {
    return false;
  }
  // mtu
  if (lhs->mtu != rhs->mtu) {
    return false;
  }
  // mtu_is_set
  if (lhs->mtu_is_set != rhs->mtu_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__NetworkTuple__copy(
  const bosdyn_msgs__msg__NetworkTuple * input,
  bosdyn_msgs__msg__NetworkTuple * output)
{
  if (!input || !output) {
    return false;
  }
  // address
  output->address = input->address;
  // address_is_set
  output->address_is_set = input->address_is_set;
  // netmask
  output->netmask = input->netmask;
  // netmask_is_set
  output->netmask_is_set = input->netmask_is_set;
  // gateway
  output->gateway = input->gateway;
  // gateway_is_set
  output->gateway_is_set = input->gateway_is_set;
  // mtu
  output->mtu = input->mtu;
  // mtu_is_set
  output->mtu_is_set = input->mtu_is_set;
  return true;
}

bosdyn_msgs__msg__NetworkTuple *
bosdyn_msgs__msg__NetworkTuple__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NetworkTuple * msg = (bosdyn_msgs__msg__NetworkTuple *)allocator.allocate(sizeof(bosdyn_msgs__msg__NetworkTuple), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__NetworkTuple));
  bool success = bosdyn_msgs__msg__NetworkTuple__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__NetworkTuple__destroy(bosdyn_msgs__msg__NetworkTuple * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__NetworkTuple__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__NetworkTuple__Sequence__init(bosdyn_msgs__msg__NetworkTuple__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NetworkTuple * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__NetworkTuple *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__NetworkTuple), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__NetworkTuple__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__NetworkTuple__fini(&data[i - 1]);
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
bosdyn_msgs__msg__NetworkTuple__Sequence__fini(bosdyn_msgs__msg__NetworkTuple__Sequence * array)
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
      bosdyn_msgs__msg__NetworkTuple__fini(&array->data[i]);
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

bosdyn_msgs__msg__NetworkTuple__Sequence *
bosdyn_msgs__msg__NetworkTuple__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NetworkTuple__Sequence * array = (bosdyn_msgs__msg__NetworkTuple__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__NetworkTuple__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__NetworkTuple__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__NetworkTuple__Sequence__destroy(bosdyn_msgs__msg__NetworkTuple__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__NetworkTuple__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__NetworkTuple__Sequence__are_equal(const bosdyn_msgs__msg__NetworkTuple__Sequence * lhs, const bosdyn_msgs__msg__NetworkTuple__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__NetworkTuple__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__NetworkTuple__Sequence__copy(
  const bosdyn_msgs__msg__NetworkTuple__Sequence * input,
  bosdyn_msgs__msg__NetworkTuple__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__NetworkTuple);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__NetworkTuple * data =
      (bosdyn_msgs__msg__NetworkTuple *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__NetworkTuple__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__NetworkTuple__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__NetworkTuple__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
