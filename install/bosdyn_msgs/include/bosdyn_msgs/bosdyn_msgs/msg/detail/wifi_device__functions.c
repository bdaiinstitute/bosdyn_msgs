// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/WifiDevice.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/wifi_device__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "bosdyn_msgs/msg/detail/wifi_device_type__functions.h"
// Member `name`
// Member `mac_address`
// Member `ssid`
#include "rosidl_runtime_c/string_functions.h"
// Member `associations`
#include "bosdyn_msgs/msg/detail/association__functions.h"

bool
bosdyn_msgs__msg__WifiDevice__init(bosdyn_msgs__msg__WifiDevice * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__WifiDeviceType__init(&msg->type)) {
    bosdyn_msgs__msg__WifiDevice__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__WifiDevice__fini(msg);
    return false;
  }
  // mac_address
  if (!rosidl_runtime_c__String__init(&msg->mac_address)) {
    bosdyn_msgs__msg__WifiDevice__fini(msg);
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__init(&msg->ssid)) {
    bosdyn_msgs__msg__WifiDevice__fini(msg);
    return false;
  }
  // tx_power_dbm
  // associations
  if (!bosdyn_msgs__msg__Association__Sequence__init(&msg->associations, 0)) {
    bosdyn_msgs__msg__WifiDevice__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__WifiDevice__fini(bosdyn_msgs__msg__WifiDevice * msg)
{
  if (!msg) {
    return;
  }
  // type
  bosdyn_msgs__msg__WifiDeviceType__fini(&msg->type);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // mac_address
  rosidl_runtime_c__String__fini(&msg->mac_address);
  // ssid
  rosidl_runtime_c__String__fini(&msg->ssid);
  // tx_power_dbm
  // associations
  bosdyn_msgs__msg__Association__Sequence__fini(&msg->associations);
}

bool
bosdyn_msgs__msg__WifiDevice__are_equal(const bosdyn_msgs__msg__WifiDevice * lhs, const bosdyn_msgs__msg__WifiDevice * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__WifiDeviceType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // mac_address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mac_address), &(rhs->mac_address)))
  {
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ssid), &(rhs->ssid)))
  {
    return false;
  }
  // tx_power_dbm
  if (lhs->tx_power_dbm != rhs->tx_power_dbm) {
    return false;
  }
  // associations
  if (!bosdyn_msgs__msg__Association__Sequence__are_equal(
      &(lhs->associations), &(rhs->associations)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__WifiDevice__copy(
  const bosdyn_msgs__msg__WifiDevice * input,
  bosdyn_msgs__msg__WifiDevice * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__WifiDeviceType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // mac_address
  if (!rosidl_runtime_c__String__copy(
      &(input->mac_address), &(output->mac_address)))
  {
    return false;
  }
  // ssid
  if (!rosidl_runtime_c__String__copy(
      &(input->ssid), &(output->ssid)))
  {
    return false;
  }
  // tx_power_dbm
  output->tx_power_dbm = input->tx_power_dbm;
  // associations
  if (!bosdyn_msgs__msg__Association__Sequence__copy(
      &(input->associations), &(output->associations)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__WifiDevice *
bosdyn_msgs__msg__WifiDevice__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WifiDevice * msg = (bosdyn_msgs__msg__WifiDevice *)allocator.allocate(sizeof(bosdyn_msgs__msg__WifiDevice), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__WifiDevice));
  bool success = bosdyn_msgs__msg__WifiDevice__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__WifiDevice__destroy(bosdyn_msgs__msg__WifiDevice * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__WifiDevice__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__WifiDevice__Sequence__init(bosdyn_msgs__msg__WifiDevice__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WifiDevice * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__WifiDevice *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__WifiDevice), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__WifiDevice__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__WifiDevice__fini(&data[i - 1]);
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
bosdyn_msgs__msg__WifiDevice__Sequence__fini(bosdyn_msgs__msg__WifiDevice__Sequence * array)
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
      bosdyn_msgs__msg__WifiDevice__fini(&array->data[i]);
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

bosdyn_msgs__msg__WifiDevice__Sequence *
bosdyn_msgs__msg__WifiDevice__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WifiDevice__Sequence * array = (bosdyn_msgs__msg__WifiDevice__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__WifiDevice__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__WifiDevice__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__WifiDevice__Sequence__destroy(bosdyn_msgs__msg__WifiDevice__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__WifiDevice__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__WifiDevice__Sequence__are_equal(const bosdyn_msgs__msg__WifiDevice__Sequence * lhs, const bosdyn_msgs__msg__WifiDevice__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__WifiDevice__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__WifiDevice__Sequence__copy(
  const bosdyn_msgs__msg__WifiDevice__Sequence * input,
  bosdyn_msgs__msg__WifiDevice__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__WifiDevice);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__WifiDevice * data =
      (bosdyn_msgs__msg__WifiDevice *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__WifiDevice__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__WifiDevice__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__WifiDevice__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
