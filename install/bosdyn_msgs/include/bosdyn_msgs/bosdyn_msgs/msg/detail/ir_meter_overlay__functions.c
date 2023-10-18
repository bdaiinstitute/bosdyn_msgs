// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/IrMeterOverlay.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/ir_meter_overlay__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `meter`
#include "bosdyn_msgs/msg/detail/ir_meter_overlay_normalized_coordinates__functions.h"
// Member `unit`
#include "bosdyn_msgs/msg/detail/ir_meter_overlay_temp_unit__functions.h"
// Member `delta`
#include "bosdyn_msgs/msg/detail/ir_meter_overlay_delta_pair__functions.h"

bool
bosdyn_msgs__msg__IrMeterOverlay__init(bosdyn_msgs__msg__IrMeterOverlay * msg)
{
  if (!msg) {
    return false;
  }
  // enable
  // meter
  if (!bosdyn_msgs__msg__IrMeterOverlayNormalizedCoordinates__Sequence__init(&msg->meter, 0)) {
    bosdyn_msgs__msg__IrMeterOverlay__fini(msg);
    return false;
  }
  // unit
  if (!bosdyn_msgs__msg__IrMeterOverlayTempUnit__init(&msg->unit)) {
    bosdyn_msgs__msg__IrMeterOverlay__fini(msg);
    return false;
  }
  // unit_is_set
  // delta
  if (!bosdyn_msgs__msg__IrMeterOverlayDeltaPair__Sequence__init(&msg->delta, 0)) {
    bosdyn_msgs__msg__IrMeterOverlay__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__IrMeterOverlay__fini(bosdyn_msgs__msg__IrMeterOverlay * msg)
{
  if (!msg) {
    return;
  }
  // enable
  // meter
  bosdyn_msgs__msg__IrMeterOverlayNormalizedCoordinates__Sequence__fini(&msg->meter);
  // unit
  bosdyn_msgs__msg__IrMeterOverlayTempUnit__fini(&msg->unit);
  // unit_is_set
  // delta
  bosdyn_msgs__msg__IrMeterOverlayDeltaPair__Sequence__fini(&msg->delta);
}

bool
bosdyn_msgs__msg__IrMeterOverlay__are_equal(const bosdyn_msgs__msg__IrMeterOverlay * lhs, const bosdyn_msgs__msg__IrMeterOverlay * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  // meter
  if (!bosdyn_msgs__msg__IrMeterOverlayNormalizedCoordinates__Sequence__are_equal(
      &(lhs->meter), &(rhs->meter)))
  {
    return false;
  }
  // unit
  if (!bosdyn_msgs__msg__IrMeterOverlayTempUnit__are_equal(
      &(lhs->unit), &(rhs->unit)))
  {
    return false;
  }
  // unit_is_set
  if (lhs->unit_is_set != rhs->unit_is_set) {
    return false;
  }
  // delta
  if (!bosdyn_msgs__msg__IrMeterOverlayDeltaPair__Sequence__are_equal(
      &(lhs->delta), &(rhs->delta)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__IrMeterOverlay__copy(
  const bosdyn_msgs__msg__IrMeterOverlay * input,
  bosdyn_msgs__msg__IrMeterOverlay * output)
{
  if (!input || !output) {
    return false;
  }
  // enable
  output->enable = input->enable;
  // meter
  if (!bosdyn_msgs__msg__IrMeterOverlayNormalizedCoordinates__Sequence__copy(
      &(input->meter), &(output->meter)))
  {
    return false;
  }
  // unit
  if (!bosdyn_msgs__msg__IrMeterOverlayTempUnit__copy(
      &(input->unit), &(output->unit)))
  {
    return false;
  }
  // unit_is_set
  output->unit_is_set = input->unit_is_set;
  // delta
  if (!bosdyn_msgs__msg__IrMeterOverlayDeltaPair__Sequence__copy(
      &(input->delta), &(output->delta)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__IrMeterOverlay *
bosdyn_msgs__msg__IrMeterOverlay__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__IrMeterOverlay * msg = (bosdyn_msgs__msg__IrMeterOverlay *)allocator.allocate(sizeof(bosdyn_msgs__msg__IrMeterOverlay), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__IrMeterOverlay));
  bool success = bosdyn_msgs__msg__IrMeterOverlay__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__IrMeterOverlay__destroy(bosdyn_msgs__msg__IrMeterOverlay * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__IrMeterOverlay__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__IrMeterOverlay__Sequence__init(bosdyn_msgs__msg__IrMeterOverlay__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__IrMeterOverlay * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__IrMeterOverlay *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__IrMeterOverlay), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__IrMeterOverlay__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__IrMeterOverlay__fini(&data[i - 1]);
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
bosdyn_msgs__msg__IrMeterOverlay__Sequence__fini(bosdyn_msgs__msg__IrMeterOverlay__Sequence * array)
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
      bosdyn_msgs__msg__IrMeterOverlay__fini(&array->data[i]);
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

bosdyn_msgs__msg__IrMeterOverlay__Sequence *
bosdyn_msgs__msg__IrMeterOverlay__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__IrMeterOverlay__Sequence * array = (bosdyn_msgs__msg__IrMeterOverlay__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__IrMeterOverlay__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__IrMeterOverlay__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__IrMeterOverlay__Sequence__destroy(bosdyn_msgs__msg__IrMeterOverlay__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__IrMeterOverlay__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__IrMeterOverlay__Sequence__are_equal(const bosdyn_msgs__msg__IrMeterOverlay__Sequence * lhs, const bosdyn_msgs__msg__IrMeterOverlay__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__IrMeterOverlay__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__IrMeterOverlay__Sequence__copy(
  const bosdyn_msgs__msg__IrMeterOverlay__Sequence * input,
  bosdyn_msgs__msg__IrMeterOverlay__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__IrMeterOverlay);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__IrMeterOverlay * data =
      (bosdyn_msgs__msg__IrMeterOverlay *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__IrMeterOverlay__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__IrMeterOverlay__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__IrMeterOverlay__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
