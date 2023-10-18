// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/battery_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `identifier`
#include "rosidl_runtime_c/string_functions.h"
// Member `estimated_runtime`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `temperatures`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/battery_state_status__functions.h"

bool
bosdyn_msgs__msg__BatteryState__init(bosdyn_msgs__msg__BatteryState * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    bosdyn_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  // timestamp_is_set
  // identifier
  if (!rosidl_runtime_c__String__init(&msg->identifier)) {
    bosdyn_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  // charge_percentage
  // charge_percentage_is_set
  // estimated_runtime
  if (!builtin_interfaces__msg__Duration__init(&msg->estimated_runtime)) {
    bosdyn_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  // estimated_runtime_is_set
  // current
  // current_is_set
  // voltage
  // voltage_is_set
  // temperatures
  if (!rosidl_runtime_c__double__Sequence__init(&msg->temperatures, 0)) {
    bosdyn_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__BatteryStateStatus__init(&msg->status)) {
    bosdyn_msgs__msg__BatteryState__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__BatteryState__fini(bosdyn_msgs__msg__BatteryState * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // timestamp_is_set
  // identifier
  rosidl_runtime_c__String__fini(&msg->identifier);
  // charge_percentage
  // charge_percentage_is_set
  // estimated_runtime
  builtin_interfaces__msg__Duration__fini(&msg->estimated_runtime);
  // estimated_runtime_is_set
  // current
  // current_is_set
  // voltage
  // voltage_is_set
  // temperatures
  rosidl_runtime_c__double__Sequence__fini(&msg->temperatures);
  // status
  bosdyn_msgs__msg__BatteryStateStatus__fini(&msg->status);
}

bool
bosdyn_msgs__msg__BatteryState__are_equal(const bosdyn_msgs__msg__BatteryState * lhs, const bosdyn_msgs__msg__BatteryState * rhs)
{
  if (!lhs || !rhs) {
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
  // identifier
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->identifier), &(rhs->identifier)))
  {
    return false;
  }
  // charge_percentage
  if (lhs->charge_percentage != rhs->charge_percentage) {
    return false;
  }
  // charge_percentage_is_set
  if (lhs->charge_percentage_is_set != rhs->charge_percentage_is_set) {
    return false;
  }
  // estimated_runtime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->estimated_runtime), &(rhs->estimated_runtime)))
  {
    return false;
  }
  // estimated_runtime_is_set
  if (lhs->estimated_runtime_is_set != rhs->estimated_runtime_is_set) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // current_is_set
  if (lhs->current_is_set != rhs->current_is_set) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // voltage_is_set
  if (lhs->voltage_is_set != rhs->voltage_is_set) {
    return false;
  }
  // temperatures
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->temperatures), &(rhs->temperatures)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__BatteryStateStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__BatteryState__copy(
  const bosdyn_msgs__msg__BatteryState * input,
  bosdyn_msgs__msg__BatteryState * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  output->timestamp_is_set = input->timestamp_is_set;
  // identifier
  if (!rosidl_runtime_c__String__copy(
      &(input->identifier), &(output->identifier)))
  {
    return false;
  }
  // charge_percentage
  output->charge_percentage = input->charge_percentage;
  // charge_percentage_is_set
  output->charge_percentage_is_set = input->charge_percentage_is_set;
  // estimated_runtime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->estimated_runtime), &(output->estimated_runtime)))
  {
    return false;
  }
  // estimated_runtime_is_set
  output->estimated_runtime_is_set = input->estimated_runtime_is_set;
  // current
  output->current = input->current;
  // current_is_set
  output->current_is_set = input->current_is_set;
  // voltage
  output->voltage = input->voltage;
  // voltage_is_set
  output->voltage_is_set = input->voltage_is_set;
  // temperatures
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->temperatures), &(output->temperatures)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__BatteryStateStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__BatteryState *
bosdyn_msgs__msg__BatteryState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BatteryState * msg = (bosdyn_msgs__msg__BatteryState *)allocator.allocate(sizeof(bosdyn_msgs__msg__BatteryState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__BatteryState));
  bool success = bosdyn_msgs__msg__BatteryState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__BatteryState__destroy(bosdyn_msgs__msg__BatteryState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__BatteryState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__BatteryState__Sequence__init(bosdyn_msgs__msg__BatteryState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BatteryState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__BatteryState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__BatteryState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__BatteryState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__BatteryState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__BatteryState__Sequence__fini(bosdyn_msgs__msg__BatteryState__Sequence * array)
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
      bosdyn_msgs__msg__BatteryState__fini(&array->data[i]);
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

bosdyn_msgs__msg__BatteryState__Sequence *
bosdyn_msgs__msg__BatteryState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BatteryState__Sequence * array = (bosdyn_msgs__msg__BatteryState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__BatteryState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__BatteryState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__BatteryState__Sequence__destroy(bosdyn_msgs__msg__BatteryState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__BatteryState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__BatteryState__Sequence__are_equal(const bosdyn_msgs__msg__BatteryState__Sequence * lhs, const bosdyn_msgs__msg__BatteryState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__BatteryState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__BatteryState__Sequence__copy(
  const bosdyn_msgs__msg__BatteryState__Sequence * input,
  bosdyn_msgs__msg__BatteryState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__BatteryState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__BatteryState * data =
      (bosdyn_msgs__msg__BatteryState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__BatteryState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__BatteryState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__BatteryState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
