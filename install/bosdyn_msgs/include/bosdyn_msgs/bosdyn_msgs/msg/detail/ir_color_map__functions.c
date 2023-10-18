// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/IrColorMap.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/ir_color_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `colormap`
#include "bosdyn_msgs/msg/detail/ir_color_map_color_map__functions.h"
// Member `scale`
#include "bosdyn_msgs/msg/detail/ir_color_map_scaling_pair__functions.h"

bool
bosdyn_msgs__msg__IrColorMap__init(bosdyn_msgs__msg__IrColorMap * msg)
{
  if (!msg) {
    return false;
  }
  // colormap
  if (!bosdyn_msgs__msg__IrColorMapColorMap__init(&msg->colormap)) {
    bosdyn_msgs__msg__IrColorMap__fini(msg);
    return false;
  }
  // scale
  if (!bosdyn_msgs__msg__IrColorMapScalingPair__init(&msg->scale)) {
    bosdyn_msgs__msg__IrColorMap__fini(msg);
    return false;
  }
  // scale_is_set
  // auto_scale
  // auto_scale_is_set
  return true;
}

void
bosdyn_msgs__msg__IrColorMap__fini(bosdyn_msgs__msg__IrColorMap * msg)
{
  if (!msg) {
    return;
  }
  // colormap
  bosdyn_msgs__msg__IrColorMapColorMap__fini(&msg->colormap);
  // scale
  bosdyn_msgs__msg__IrColorMapScalingPair__fini(&msg->scale);
  // scale_is_set
  // auto_scale
  // auto_scale_is_set
}

bool
bosdyn_msgs__msg__IrColorMap__are_equal(const bosdyn_msgs__msg__IrColorMap * lhs, const bosdyn_msgs__msg__IrColorMap * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // colormap
  if (!bosdyn_msgs__msg__IrColorMapColorMap__are_equal(
      &(lhs->colormap), &(rhs->colormap)))
  {
    return false;
  }
  // scale
  if (!bosdyn_msgs__msg__IrColorMapScalingPair__are_equal(
      &(lhs->scale), &(rhs->scale)))
  {
    return false;
  }
  // scale_is_set
  if (lhs->scale_is_set != rhs->scale_is_set) {
    return false;
  }
  // auto_scale
  if (lhs->auto_scale != rhs->auto_scale) {
    return false;
  }
  // auto_scale_is_set
  if (lhs->auto_scale_is_set != rhs->auto_scale_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__IrColorMap__copy(
  const bosdyn_msgs__msg__IrColorMap * input,
  bosdyn_msgs__msg__IrColorMap * output)
{
  if (!input || !output) {
    return false;
  }
  // colormap
  if (!bosdyn_msgs__msg__IrColorMapColorMap__copy(
      &(input->colormap), &(output->colormap)))
  {
    return false;
  }
  // scale
  if (!bosdyn_msgs__msg__IrColorMapScalingPair__copy(
      &(input->scale), &(output->scale)))
  {
    return false;
  }
  // scale_is_set
  output->scale_is_set = input->scale_is_set;
  // auto_scale
  output->auto_scale = input->auto_scale;
  // auto_scale_is_set
  output->auto_scale_is_set = input->auto_scale_is_set;
  return true;
}

bosdyn_msgs__msg__IrColorMap *
bosdyn_msgs__msg__IrColorMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__IrColorMap * msg = (bosdyn_msgs__msg__IrColorMap *)allocator.allocate(sizeof(bosdyn_msgs__msg__IrColorMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__IrColorMap));
  bool success = bosdyn_msgs__msg__IrColorMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__IrColorMap__destroy(bosdyn_msgs__msg__IrColorMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__IrColorMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__IrColorMap__Sequence__init(bosdyn_msgs__msg__IrColorMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__IrColorMap * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__IrColorMap *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__IrColorMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__IrColorMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__IrColorMap__fini(&data[i - 1]);
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
bosdyn_msgs__msg__IrColorMap__Sequence__fini(bosdyn_msgs__msg__IrColorMap__Sequence * array)
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
      bosdyn_msgs__msg__IrColorMap__fini(&array->data[i]);
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

bosdyn_msgs__msg__IrColorMap__Sequence *
bosdyn_msgs__msg__IrColorMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__IrColorMap__Sequence * array = (bosdyn_msgs__msg__IrColorMap__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__IrColorMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__IrColorMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__IrColorMap__Sequence__destroy(bosdyn_msgs__msg__IrColorMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__IrColorMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__IrColorMap__Sequence__are_equal(const bosdyn_msgs__msg__IrColorMap__Sequence * lhs, const bosdyn_msgs__msg__IrColorMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__IrColorMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__IrColorMap__Sequence__copy(
  const bosdyn_msgs__msg__IrColorMap__Sequence * input,
  bosdyn_msgs__msg__IrColorMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__IrColorMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__IrColorMap * data =
      (bosdyn_msgs__msg__IrColorMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__IrColorMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__IrColorMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__IrColorMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
