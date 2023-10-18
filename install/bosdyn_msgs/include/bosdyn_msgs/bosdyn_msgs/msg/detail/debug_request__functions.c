// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DebugRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/debug_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"

bool
bosdyn_msgs__msg__DebugRequest__init(bosdyn_msgs__msg__DebugRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__DebugRequest__fini(msg);
    return false;
  }
  // header_is_set
  // enable_temperature
  // enable_humidity
  // enable_bit
  // enable_shock
  // enable_system_stat
  return true;
}

void
bosdyn_msgs__msg__DebugRequest__fini(bosdyn_msgs__msg__DebugRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // enable_temperature
  // enable_humidity
  // enable_bit
  // enable_shock
  // enable_system_stat
}

bool
bosdyn_msgs__msg__DebugRequest__are_equal(const bosdyn_msgs__msg__DebugRequest * lhs, const bosdyn_msgs__msg__DebugRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // enable_temperature
  if (lhs->enable_temperature != rhs->enable_temperature) {
    return false;
  }
  // enable_humidity
  if (lhs->enable_humidity != rhs->enable_humidity) {
    return false;
  }
  // enable_bit
  if (lhs->enable_bit != rhs->enable_bit) {
    return false;
  }
  // enable_shock
  if (lhs->enable_shock != rhs->enable_shock) {
    return false;
  }
  // enable_system_stat
  if (lhs->enable_system_stat != rhs->enable_system_stat) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DebugRequest__copy(
  const bosdyn_msgs__msg__DebugRequest * input,
  bosdyn_msgs__msg__DebugRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // enable_temperature
  output->enable_temperature = input->enable_temperature;
  // enable_humidity
  output->enable_humidity = input->enable_humidity;
  // enable_bit
  output->enable_bit = input->enable_bit;
  // enable_shock
  output->enable_shock = input->enable_shock;
  // enable_system_stat
  output->enable_system_stat = input->enable_system_stat;
  return true;
}

bosdyn_msgs__msg__DebugRequest *
bosdyn_msgs__msg__DebugRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DebugRequest * msg = (bosdyn_msgs__msg__DebugRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__DebugRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DebugRequest));
  bool success = bosdyn_msgs__msg__DebugRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DebugRequest__destroy(bosdyn_msgs__msg__DebugRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DebugRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DebugRequest__Sequence__init(bosdyn_msgs__msg__DebugRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DebugRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DebugRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DebugRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DebugRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DebugRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DebugRequest__Sequence__fini(bosdyn_msgs__msg__DebugRequest__Sequence * array)
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
      bosdyn_msgs__msg__DebugRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__DebugRequest__Sequence *
bosdyn_msgs__msg__DebugRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DebugRequest__Sequence * array = (bosdyn_msgs__msg__DebugRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DebugRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DebugRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DebugRequest__Sequence__destroy(bosdyn_msgs__msg__DebugRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DebugRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DebugRequest__Sequence__are_equal(const bosdyn_msgs__msg__DebugRequest__Sequence * lhs, const bosdyn_msgs__msg__DebugRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DebugRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DebugRequest__Sequence__copy(
  const bosdyn_msgs__msg__DebugRequest__Sequence * input,
  bosdyn_msgs__msg__DebugRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DebugRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DebugRequest * data =
      (bosdyn_msgs__msg__DebugRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DebugRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DebugRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DebugRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
