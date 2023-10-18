// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/BatteryMonitor.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/battery_monitor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__BatteryMonitor__init(bosdyn_msgs__msg__BatteryMonitor * msg)
{
  if (!msg) {
    return false;
  }
  // battery_start_threshold
  // battery_stop_threshold
  return true;
}

void
bosdyn_msgs__msg__BatteryMonitor__fini(bosdyn_msgs__msg__BatteryMonitor * msg)
{
  if (!msg) {
    return;
  }
  // battery_start_threshold
  // battery_stop_threshold
}

bool
bosdyn_msgs__msg__BatteryMonitor__are_equal(const bosdyn_msgs__msg__BatteryMonitor * lhs, const bosdyn_msgs__msg__BatteryMonitor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery_start_threshold
  if (lhs->battery_start_threshold != rhs->battery_start_threshold) {
    return false;
  }
  // battery_stop_threshold
  if (lhs->battery_stop_threshold != rhs->battery_stop_threshold) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__BatteryMonitor__copy(
  const bosdyn_msgs__msg__BatteryMonitor * input,
  bosdyn_msgs__msg__BatteryMonitor * output)
{
  if (!input || !output) {
    return false;
  }
  // battery_start_threshold
  output->battery_start_threshold = input->battery_start_threshold;
  // battery_stop_threshold
  output->battery_stop_threshold = input->battery_stop_threshold;
  return true;
}

bosdyn_msgs__msg__BatteryMonitor *
bosdyn_msgs__msg__BatteryMonitor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BatteryMonitor * msg = (bosdyn_msgs__msg__BatteryMonitor *)allocator.allocate(sizeof(bosdyn_msgs__msg__BatteryMonitor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__BatteryMonitor));
  bool success = bosdyn_msgs__msg__BatteryMonitor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__BatteryMonitor__destroy(bosdyn_msgs__msg__BatteryMonitor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__BatteryMonitor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__BatteryMonitor__Sequence__init(bosdyn_msgs__msg__BatteryMonitor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BatteryMonitor * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__BatteryMonitor *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__BatteryMonitor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__BatteryMonitor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__BatteryMonitor__fini(&data[i - 1]);
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
bosdyn_msgs__msg__BatteryMonitor__Sequence__fini(bosdyn_msgs__msg__BatteryMonitor__Sequence * array)
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
      bosdyn_msgs__msg__BatteryMonitor__fini(&array->data[i]);
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

bosdyn_msgs__msg__BatteryMonitor__Sequence *
bosdyn_msgs__msg__BatteryMonitor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BatteryMonitor__Sequence * array = (bosdyn_msgs__msg__BatteryMonitor__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__BatteryMonitor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__BatteryMonitor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__BatteryMonitor__Sequence__destroy(bosdyn_msgs__msg__BatteryMonitor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__BatteryMonitor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__BatteryMonitor__Sequence__are_equal(const bosdyn_msgs__msg__BatteryMonitor__Sequence * lhs, const bosdyn_msgs__msg__BatteryMonitor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__BatteryMonitor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__BatteryMonitor__Sequence__copy(
  const bosdyn_msgs__msg__BatteryMonitor__Sequence * input,
  bosdyn_msgs__msg__BatteryMonitor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__BatteryMonitor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__BatteryMonitor * data =
      (bosdyn_msgs__msg__BatteryMonitor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__BatteryMonitor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__BatteryMonitor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__BatteryMonitor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
