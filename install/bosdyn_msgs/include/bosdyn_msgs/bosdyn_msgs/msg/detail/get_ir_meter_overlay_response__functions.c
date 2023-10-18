// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/GetIrMeterOverlayResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/get_ir_meter_overlay_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `overlay`
#include "bosdyn_msgs/msg/detail/ir_meter_overlay__functions.h"

bool
bosdyn_msgs__msg__GetIrMeterOverlayResponse__init(bosdyn_msgs__msg__GetIrMeterOverlayResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__GetIrMeterOverlayResponse__fini(msg);
    return false;
  }
  // header_is_set
  // overlay
  if (!bosdyn_msgs__msg__IrMeterOverlay__init(&msg->overlay)) {
    bosdyn_msgs__msg__GetIrMeterOverlayResponse__fini(msg);
    return false;
  }
  // overlay_is_set
  return true;
}

void
bosdyn_msgs__msg__GetIrMeterOverlayResponse__fini(bosdyn_msgs__msg__GetIrMeterOverlayResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // overlay
  bosdyn_msgs__msg__IrMeterOverlay__fini(&msg->overlay);
  // overlay_is_set
}

bool
bosdyn_msgs__msg__GetIrMeterOverlayResponse__are_equal(const bosdyn_msgs__msg__GetIrMeterOverlayResponse * lhs, const bosdyn_msgs__msg__GetIrMeterOverlayResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // overlay
  if (!bosdyn_msgs__msg__IrMeterOverlay__are_equal(
      &(lhs->overlay), &(rhs->overlay)))
  {
    return false;
  }
  // overlay_is_set
  if (lhs->overlay_is_set != rhs->overlay_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__GetIrMeterOverlayResponse__copy(
  const bosdyn_msgs__msg__GetIrMeterOverlayResponse * input,
  bosdyn_msgs__msg__GetIrMeterOverlayResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // overlay
  if (!bosdyn_msgs__msg__IrMeterOverlay__copy(
      &(input->overlay), &(output->overlay)))
  {
    return false;
  }
  // overlay_is_set
  output->overlay_is_set = input->overlay_is_set;
  return true;
}

bosdyn_msgs__msg__GetIrMeterOverlayResponse *
bosdyn_msgs__msg__GetIrMeterOverlayResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetIrMeterOverlayResponse * msg = (bosdyn_msgs__msg__GetIrMeterOverlayResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__GetIrMeterOverlayResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__GetIrMeterOverlayResponse));
  bool success = bosdyn_msgs__msg__GetIrMeterOverlayResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__GetIrMeterOverlayResponse__destroy(bosdyn_msgs__msg__GetIrMeterOverlayResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__GetIrMeterOverlayResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence__init(bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetIrMeterOverlayResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__GetIrMeterOverlayResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__GetIrMeterOverlayResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__GetIrMeterOverlayResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__GetIrMeterOverlayResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence__fini(bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence * array)
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
      bosdyn_msgs__msg__GetIrMeterOverlayResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence *
bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence * array = (bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence__destroy(bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence__are_equal(const bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence * lhs, const bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__GetIrMeterOverlayResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence__copy(
  const bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence * input,
  bosdyn_msgs__msg__GetIrMeterOverlayResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__GetIrMeterOverlayResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__GetIrMeterOverlayResponse * data =
      (bosdyn_msgs__msg__GetIrMeterOverlayResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__GetIrMeterOverlayResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__GetIrMeterOverlayResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__GetIrMeterOverlayResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
