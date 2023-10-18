// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SignalTick.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/signal_tick__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `source`
#include "rosidl_runtime_c/string_functions.h"
// Member `encoding`
#include "bosdyn_msgs/msg/detail/signal_tick_encoding__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bosdyn_msgs__msg__SignalTick__init(bosdyn_msgs__msg__SignalTick * msg)
{
  if (!msg) {
    return false;
  }
  // sequence_id
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    bosdyn_msgs__msg__SignalTick__fini(msg);
    return false;
  }
  // timestamp_is_set
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    bosdyn_msgs__msg__SignalTick__fini(msg);
    return false;
  }
  // schema_id
  // encoding
  if (!bosdyn_msgs__msg__SignalTickEncoding__init(&msg->encoding)) {
    bosdyn_msgs__msg__SignalTick__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__octet__Sequence__init(&msg->data, 0)) {
    bosdyn_msgs__msg__SignalTick__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__SignalTick__fini(bosdyn_msgs__msg__SignalTick * msg)
{
  if (!msg) {
    return;
  }
  // sequence_id
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // timestamp_is_set
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // schema_id
  // encoding
  bosdyn_msgs__msg__SignalTickEncoding__fini(&msg->encoding);
  // data
  rosidl_runtime_c__octet__Sequence__fini(&msg->data);
}

bool
bosdyn_msgs__msg__SignalTick__are_equal(const bosdyn_msgs__msg__SignalTick * lhs, const bosdyn_msgs__msg__SignalTick * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sequence_id
  if (lhs->sequence_id != rhs->sequence_id) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  if (lhs->timestamp_is_set != rhs->timestamp_is_set) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // schema_id
  if (lhs->schema_id != rhs->schema_id) {
    return false;
  }
  // encoding
  if (!bosdyn_msgs__msg__SignalTickEncoding__are_equal(
      &(lhs->encoding), &(rhs->encoding)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__octet__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SignalTick__copy(
  const bosdyn_msgs__msg__SignalTick * input,
  bosdyn_msgs__msg__SignalTick * output)
{
  if (!input || !output) {
    return false;
  }
  // sequence_id
  output->sequence_id = input->sequence_id;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  output->timestamp_is_set = input->timestamp_is_set;
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // schema_id
  output->schema_id = input->schema_id;
  // encoding
  if (!bosdyn_msgs__msg__SignalTickEncoding__copy(
      &(input->encoding), &(output->encoding)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__octet__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__SignalTick *
bosdyn_msgs__msg__SignalTick__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SignalTick * msg = (bosdyn_msgs__msg__SignalTick *)allocator.allocate(sizeof(bosdyn_msgs__msg__SignalTick), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SignalTick));
  bool success = bosdyn_msgs__msg__SignalTick__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SignalTick__destroy(bosdyn_msgs__msg__SignalTick * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SignalTick__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SignalTick__Sequence__init(bosdyn_msgs__msg__SignalTick__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SignalTick * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SignalTick *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SignalTick), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SignalTick__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SignalTick__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SignalTick__Sequence__fini(bosdyn_msgs__msg__SignalTick__Sequence * array)
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
      bosdyn_msgs__msg__SignalTick__fini(&array->data[i]);
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

bosdyn_msgs__msg__SignalTick__Sequence *
bosdyn_msgs__msg__SignalTick__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SignalTick__Sequence * array = (bosdyn_msgs__msg__SignalTick__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SignalTick__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SignalTick__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SignalTick__Sequence__destroy(bosdyn_msgs__msg__SignalTick__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SignalTick__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SignalTick__Sequence__are_equal(const bosdyn_msgs__msg__SignalTick__Sequence * lhs, const bosdyn_msgs__msg__SignalTick__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SignalTick__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SignalTick__Sequence__copy(
  const bosdyn_msgs__msg__SignalTick__Sequence * input,
  bosdyn_msgs__msg__SignalTick__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SignalTick);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SignalTick * data =
      (bosdyn_msgs__msg__SignalTick *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SignalTick__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SignalTick__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SignalTick__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
