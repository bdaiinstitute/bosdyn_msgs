// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/UnitsOneOfUnits.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/units_one_of_units__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `temp`
#include "bosdyn_msgs/msg/detail/temperature_enum__functions.h"
// Member `press`
#include "bosdyn_msgs/msg/detail/pressure_enum__functions.h"

bool
bosdyn_msgs__msg__UnitsOneOfUnits__init(bosdyn_msgs__msg__UnitsOneOfUnits * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__UnitsOneOfUnits__fini(msg);
    return false;
  }
  // temp
  if (!bosdyn_msgs__msg__TemperatureEnum__init(&msg->temp)) {
    bosdyn_msgs__msg__UnitsOneOfUnits__fini(msg);
    return false;
  }
  // press
  if (!bosdyn_msgs__msg__PressureEnum__init(&msg->press)) {
    bosdyn_msgs__msg__UnitsOneOfUnits__fini(msg);
    return false;
  }
  // units_choice
  return true;
}

void
bosdyn_msgs__msg__UnitsOneOfUnits__fini(bosdyn_msgs__msg__UnitsOneOfUnits * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // temp
  bosdyn_msgs__msg__TemperatureEnum__fini(&msg->temp);
  // press
  bosdyn_msgs__msg__PressureEnum__fini(&msg->press);
  // units_choice
}

bool
bosdyn_msgs__msg__UnitsOneOfUnits__are_equal(const bosdyn_msgs__msg__UnitsOneOfUnits * lhs, const bosdyn_msgs__msg__UnitsOneOfUnits * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // temp
  if (!bosdyn_msgs__msg__TemperatureEnum__are_equal(
      &(lhs->temp), &(rhs->temp)))
  {
    return false;
  }
  // press
  if (!bosdyn_msgs__msg__PressureEnum__are_equal(
      &(lhs->press), &(rhs->press)))
  {
    return false;
  }
  // units_choice
  if (lhs->units_choice != rhs->units_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__UnitsOneOfUnits__copy(
  const bosdyn_msgs__msg__UnitsOneOfUnits * input,
  bosdyn_msgs__msg__UnitsOneOfUnits * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // temp
  if (!bosdyn_msgs__msg__TemperatureEnum__copy(
      &(input->temp), &(output->temp)))
  {
    return false;
  }
  // press
  if (!bosdyn_msgs__msg__PressureEnum__copy(
      &(input->press), &(output->press)))
  {
    return false;
  }
  // units_choice
  output->units_choice = input->units_choice;
  return true;
}

bosdyn_msgs__msg__UnitsOneOfUnits *
bosdyn_msgs__msg__UnitsOneOfUnits__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UnitsOneOfUnits * msg = (bosdyn_msgs__msg__UnitsOneOfUnits *)allocator.allocate(sizeof(bosdyn_msgs__msg__UnitsOneOfUnits), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__UnitsOneOfUnits));
  bool success = bosdyn_msgs__msg__UnitsOneOfUnits__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__UnitsOneOfUnits__destroy(bosdyn_msgs__msg__UnitsOneOfUnits * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__UnitsOneOfUnits__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__UnitsOneOfUnits__Sequence__init(bosdyn_msgs__msg__UnitsOneOfUnits__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UnitsOneOfUnits * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__UnitsOneOfUnits *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__UnitsOneOfUnits), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__UnitsOneOfUnits__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__UnitsOneOfUnits__fini(&data[i - 1]);
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
bosdyn_msgs__msg__UnitsOneOfUnits__Sequence__fini(bosdyn_msgs__msg__UnitsOneOfUnits__Sequence * array)
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
      bosdyn_msgs__msg__UnitsOneOfUnits__fini(&array->data[i]);
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

bosdyn_msgs__msg__UnitsOneOfUnits__Sequence *
bosdyn_msgs__msg__UnitsOneOfUnits__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UnitsOneOfUnits__Sequence * array = (bosdyn_msgs__msg__UnitsOneOfUnits__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__UnitsOneOfUnits__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__UnitsOneOfUnits__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__UnitsOneOfUnits__Sequence__destroy(bosdyn_msgs__msg__UnitsOneOfUnits__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__UnitsOneOfUnits__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__UnitsOneOfUnits__Sequence__are_equal(const bosdyn_msgs__msg__UnitsOneOfUnits__Sequence * lhs, const bosdyn_msgs__msg__UnitsOneOfUnits__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__UnitsOneOfUnits__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__UnitsOneOfUnits__Sequence__copy(
  const bosdyn_msgs__msg__UnitsOneOfUnits__Sequence * input,
  bosdyn_msgs__msg__UnitsOneOfUnits__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__UnitsOneOfUnits);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__UnitsOneOfUnits * data =
      (bosdyn_msgs__msg__UnitsOneOfUnits *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__UnitsOneOfUnits__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__UnitsOneOfUnits__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__UnitsOneOfUnits__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
