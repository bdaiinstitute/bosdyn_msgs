// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Association.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/association__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mac_address`
#include "rosidl_runtime_c/string_functions.h"
// Member `connected_time`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__Association__init(bosdyn_msgs__msg__Association * msg)
{
  if (!msg) {
    return false;
  }
  // mac_address
  if (!rosidl_runtime_c__String__init(&msg->mac_address)) {
    bosdyn_msgs__msg__Association__fini(msg);
    return false;
  }
  // connected_time
  if (!builtin_interfaces__msg__Duration__init(&msg->connected_time)) {
    bosdyn_msgs__msg__Association__fini(msg);
    return false;
  }
  // connected_time_is_set
  // rx_signal_dbm
  // rx_signal_avg_dbm
  // rx_beacon_signal_avg_dbm
  // expected_bits_per_second
  // rx_bytes
  // rx_packets
  // rx_bits_per_second
  // tx_bytes
  // tx_packets
  // tx_bits_per_second
  // tx_retries
  // tx_failed
  // beacons_received
  // beacon_loss_count
  return true;
}

void
bosdyn_msgs__msg__Association__fini(bosdyn_msgs__msg__Association * msg)
{
  if (!msg) {
    return;
  }
  // mac_address
  rosidl_runtime_c__String__fini(&msg->mac_address);
  // connected_time
  builtin_interfaces__msg__Duration__fini(&msg->connected_time);
  // connected_time_is_set
  // rx_signal_dbm
  // rx_signal_avg_dbm
  // rx_beacon_signal_avg_dbm
  // expected_bits_per_second
  // rx_bytes
  // rx_packets
  // rx_bits_per_second
  // tx_bytes
  // tx_packets
  // tx_bits_per_second
  // tx_retries
  // tx_failed
  // beacons_received
  // beacon_loss_count
}

bool
bosdyn_msgs__msg__Association__are_equal(const bosdyn_msgs__msg__Association * lhs, const bosdyn_msgs__msg__Association * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mac_address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mac_address), &(rhs->mac_address)))
  {
    return false;
  }
  // connected_time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->connected_time), &(rhs->connected_time)))
  {
    return false;
  }
  // connected_time_is_set
  if (lhs->connected_time_is_set != rhs->connected_time_is_set) {
    return false;
  }
  // rx_signal_dbm
  if (lhs->rx_signal_dbm != rhs->rx_signal_dbm) {
    return false;
  }
  // rx_signal_avg_dbm
  if (lhs->rx_signal_avg_dbm != rhs->rx_signal_avg_dbm) {
    return false;
  }
  // rx_beacon_signal_avg_dbm
  if (lhs->rx_beacon_signal_avg_dbm != rhs->rx_beacon_signal_avg_dbm) {
    return false;
  }
  // expected_bits_per_second
  if (lhs->expected_bits_per_second != rhs->expected_bits_per_second) {
    return false;
  }
  // rx_bytes
  if (lhs->rx_bytes != rhs->rx_bytes) {
    return false;
  }
  // rx_packets
  if (lhs->rx_packets != rhs->rx_packets) {
    return false;
  }
  // rx_bits_per_second
  if (lhs->rx_bits_per_second != rhs->rx_bits_per_second) {
    return false;
  }
  // tx_bytes
  if (lhs->tx_bytes != rhs->tx_bytes) {
    return false;
  }
  // tx_packets
  if (lhs->tx_packets != rhs->tx_packets) {
    return false;
  }
  // tx_bits_per_second
  if (lhs->tx_bits_per_second != rhs->tx_bits_per_second) {
    return false;
  }
  // tx_retries
  if (lhs->tx_retries != rhs->tx_retries) {
    return false;
  }
  // tx_failed
  if (lhs->tx_failed != rhs->tx_failed) {
    return false;
  }
  // beacons_received
  if (lhs->beacons_received != rhs->beacons_received) {
    return false;
  }
  // beacon_loss_count
  if (lhs->beacon_loss_count != rhs->beacon_loss_count) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Association__copy(
  const bosdyn_msgs__msg__Association * input,
  bosdyn_msgs__msg__Association * output)
{
  if (!input || !output) {
    return false;
  }
  // mac_address
  if (!rosidl_runtime_c__String__copy(
      &(input->mac_address), &(output->mac_address)))
  {
    return false;
  }
  // connected_time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->connected_time), &(output->connected_time)))
  {
    return false;
  }
  // connected_time_is_set
  output->connected_time_is_set = input->connected_time_is_set;
  // rx_signal_dbm
  output->rx_signal_dbm = input->rx_signal_dbm;
  // rx_signal_avg_dbm
  output->rx_signal_avg_dbm = input->rx_signal_avg_dbm;
  // rx_beacon_signal_avg_dbm
  output->rx_beacon_signal_avg_dbm = input->rx_beacon_signal_avg_dbm;
  // expected_bits_per_second
  output->expected_bits_per_second = input->expected_bits_per_second;
  // rx_bytes
  output->rx_bytes = input->rx_bytes;
  // rx_packets
  output->rx_packets = input->rx_packets;
  // rx_bits_per_second
  output->rx_bits_per_second = input->rx_bits_per_second;
  // tx_bytes
  output->tx_bytes = input->tx_bytes;
  // tx_packets
  output->tx_packets = input->tx_packets;
  // tx_bits_per_second
  output->tx_bits_per_second = input->tx_bits_per_second;
  // tx_retries
  output->tx_retries = input->tx_retries;
  // tx_failed
  output->tx_failed = input->tx_failed;
  // beacons_received
  output->beacons_received = input->beacons_received;
  // beacon_loss_count
  output->beacon_loss_count = input->beacon_loss_count;
  return true;
}

bosdyn_msgs__msg__Association *
bosdyn_msgs__msg__Association__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Association * msg = (bosdyn_msgs__msg__Association *)allocator.allocate(sizeof(bosdyn_msgs__msg__Association), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Association));
  bool success = bosdyn_msgs__msg__Association__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Association__destroy(bosdyn_msgs__msg__Association * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Association__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Association__Sequence__init(bosdyn_msgs__msg__Association__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Association * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Association *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Association), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Association__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Association__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Association__Sequence__fini(bosdyn_msgs__msg__Association__Sequence * array)
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
      bosdyn_msgs__msg__Association__fini(&array->data[i]);
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

bosdyn_msgs__msg__Association__Sequence *
bosdyn_msgs__msg__Association__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Association__Sequence * array = (bosdyn_msgs__msg__Association__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Association__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Association__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Association__Sequence__destroy(bosdyn_msgs__msg__Association__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Association__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Association__Sequence__are_equal(const bosdyn_msgs__msg__Association__Sequence * lhs, const bosdyn_msgs__msg__Association__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Association__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Association__Sequence__copy(
  const bosdyn_msgs__msg__Association__Sequence * input,
  bosdyn_msgs__msg__Association__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Association);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Association * data =
      (bosdyn_msgs__msg__Association *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Association__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Association__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Association__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
