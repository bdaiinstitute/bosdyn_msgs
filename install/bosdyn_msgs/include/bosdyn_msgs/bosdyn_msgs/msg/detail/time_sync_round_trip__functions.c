// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/TimeSyncRoundTrip.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/time_sync_round_trip__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `client_tx`
// Member `server_rx`
// Member `server_tx`
// Member `client_rx`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__TimeSyncRoundTrip__init(bosdyn_msgs__msg__TimeSyncRoundTrip * msg)
{
  if (!msg) {
    return false;
  }
  // client_tx
  if (!builtin_interfaces__msg__Time__init(&msg->client_tx)) {
    bosdyn_msgs__msg__TimeSyncRoundTrip__fini(msg);
    return false;
  }
  // client_tx_is_set
  // server_rx
  if (!builtin_interfaces__msg__Time__init(&msg->server_rx)) {
    bosdyn_msgs__msg__TimeSyncRoundTrip__fini(msg);
    return false;
  }
  // server_rx_is_set
  // server_tx
  if (!builtin_interfaces__msg__Time__init(&msg->server_tx)) {
    bosdyn_msgs__msg__TimeSyncRoundTrip__fini(msg);
    return false;
  }
  // server_tx_is_set
  // client_rx
  if (!builtin_interfaces__msg__Time__init(&msg->client_rx)) {
    bosdyn_msgs__msg__TimeSyncRoundTrip__fini(msg);
    return false;
  }
  // client_rx_is_set
  return true;
}

void
bosdyn_msgs__msg__TimeSyncRoundTrip__fini(bosdyn_msgs__msg__TimeSyncRoundTrip * msg)
{
  if (!msg) {
    return;
  }
  // client_tx
  builtin_interfaces__msg__Time__fini(&msg->client_tx);
  // client_tx_is_set
  // server_rx
  builtin_interfaces__msg__Time__fini(&msg->server_rx);
  // server_rx_is_set
  // server_tx
  builtin_interfaces__msg__Time__fini(&msg->server_tx);
  // server_tx_is_set
  // client_rx
  builtin_interfaces__msg__Time__fini(&msg->client_rx);
  // client_rx_is_set
}

bool
bosdyn_msgs__msg__TimeSyncRoundTrip__are_equal(const bosdyn_msgs__msg__TimeSyncRoundTrip * lhs, const bosdyn_msgs__msg__TimeSyncRoundTrip * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // client_tx
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->client_tx), &(rhs->client_tx)))
  {
    return false;
  }
  // client_tx_is_set
  if (lhs->client_tx_is_set != rhs->client_tx_is_set) {
    return false;
  }
  // server_rx
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->server_rx), &(rhs->server_rx)))
  {
    return false;
  }
  // server_rx_is_set
  if (lhs->server_rx_is_set != rhs->server_rx_is_set) {
    return false;
  }
  // server_tx
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->server_tx), &(rhs->server_tx)))
  {
    return false;
  }
  // server_tx_is_set
  if (lhs->server_tx_is_set != rhs->server_tx_is_set) {
    return false;
  }
  // client_rx
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->client_rx), &(rhs->client_rx)))
  {
    return false;
  }
  // client_rx_is_set
  if (lhs->client_rx_is_set != rhs->client_rx_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__TimeSyncRoundTrip__copy(
  const bosdyn_msgs__msg__TimeSyncRoundTrip * input,
  bosdyn_msgs__msg__TimeSyncRoundTrip * output)
{
  if (!input || !output) {
    return false;
  }
  // client_tx
  if (!builtin_interfaces__msg__Time__copy(
      &(input->client_tx), &(output->client_tx)))
  {
    return false;
  }
  // client_tx_is_set
  output->client_tx_is_set = input->client_tx_is_set;
  // server_rx
  if (!builtin_interfaces__msg__Time__copy(
      &(input->server_rx), &(output->server_rx)))
  {
    return false;
  }
  // server_rx_is_set
  output->server_rx_is_set = input->server_rx_is_set;
  // server_tx
  if (!builtin_interfaces__msg__Time__copy(
      &(input->server_tx), &(output->server_tx)))
  {
    return false;
  }
  // server_tx_is_set
  output->server_tx_is_set = input->server_tx_is_set;
  // client_rx
  if (!builtin_interfaces__msg__Time__copy(
      &(input->client_rx), &(output->client_rx)))
  {
    return false;
  }
  // client_rx_is_set
  output->client_rx_is_set = input->client_rx_is_set;
  return true;
}

bosdyn_msgs__msg__TimeSyncRoundTrip *
bosdyn_msgs__msg__TimeSyncRoundTrip__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeSyncRoundTrip * msg = (bosdyn_msgs__msg__TimeSyncRoundTrip *)allocator.allocate(sizeof(bosdyn_msgs__msg__TimeSyncRoundTrip), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__TimeSyncRoundTrip));
  bool success = bosdyn_msgs__msg__TimeSyncRoundTrip__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__TimeSyncRoundTrip__destroy(bosdyn_msgs__msg__TimeSyncRoundTrip * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__TimeSyncRoundTrip__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence__init(bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeSyncRoundTrip * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__TimeSyncRoundTrip *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__TimeSyncRoundTrip), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__TimeSyncRoundTrip__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__TimeSyncRoundTrip__fini(&data[i - 1]);
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
bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence__fini(bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence * array)
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
      bosdyn_msgs__msg__TimeSyncRoundTrip__fini(&array->data[i]);
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

bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence *
bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence * array = (bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence__destroy(bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence__are_equal(const bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence * lhs, const bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__TimeSyncRoundTrip__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence__copy(
  const bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence * input,
  bosdyn_msgs__msg__TimeSyncRoundTrip__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__TimeSyncRoundTrip);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__TimeSyncRoundTrip * data =
      (bosdyn_msgs__msg__TimeSyncRoundTrip *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__TimeSyncRoundTrip__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__TimeSyncRoundTrip__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__TimeSyncRoundTrip__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
