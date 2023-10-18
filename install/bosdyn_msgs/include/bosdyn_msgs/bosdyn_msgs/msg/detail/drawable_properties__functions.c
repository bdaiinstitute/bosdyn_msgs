// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DrawableProperties.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/drawable_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `color`
#include "bosdyn_msgs/msg/detail/drawable_properties_color__functions.h"
// Member `label`
// Member `frame_name_drawable`
#include "rosidl_runtime_c/string_functions.h"
// Member `drawable`
#include "bosdyn_msgs/msg/detail/drawable_properties_one_of_drawable__functions.h"

bool
bosdyn_msgs__msg__DrawableProperties__init(bosdyn_msgs__msg__DrawableProperties * msg)
{
  if (!msg) {
    return false;
  }
  // color
  if (!bosdyn_msgs__msg__DrawablePropertiesColor__init(&msg->color)) {
    bosdyn_msgs__msg__DrawableProperties__fini(msg);
    return false;
  }
  // color_is_set
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    bosdyn_msgs__msg__DrawableProperties__fini(msg);
    return false;
  }
  // wireframe
  // drawable
  if (!bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__init(&msg->drawable)) {
    bosdyn_msgs__msg__DrawableProperties__fini(msg);
    return false;
  }
  // frame_name_drawable
  if (!rosidl_runtime_c__String__init(&msg->frame_name_drawable)) {
    bosdyn_msgs__msg__DrawableProperties__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__DrawableProperties__fini(bosdyn_msgs__msg__DrawableProperties * msg)
{
  if (!msg) {
    return;
  }
  // color
  bosdyn_msgs__msg__DrawablePropertiesColor__fini(&msg->color);
  // color_is_set
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // wireframe
  // drawable
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(&msg->drawable);
  // frame_name_drawable
  rosidl_runtime_c__String__fini(&msg->frame_name_drawable);
}

bool
bosdyn_msgs__msg__DrawableProperties__are_equal(const bosdyn_msgs__msg__DrawableProperties * lhs, const bosdyn_msgs__msg__DrawableProperties * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (!bosdyn_msgs__msg__DrawablePropertiesColor__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // color_is_set
  if (lhs->color_is_set != rhs->color_is_set) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // wireframe
  if (lhs->wireframe != rhs->wireframe) {
    return false;
  }
  // drawable
  if (!bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__are_equal(
      &(lhs->drawable), &(rhs->drawable)))
  {
    return false;
  }
  // frame_name_drawable
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name_drawable), &(rhs->frame_name_drawable)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DrawableProperties__copy(
  const bosdyn_msgs__msg__DrawableProperties * input,
  bosdyn_msgs__msg__DrawableProperties * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  if (!bosdyn_msgs__msg__DrawablePropertiesColor__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // color_is_set
  output->color_is_set = input->color_is_set;
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // wireframe
  output->wireframe = input->wireframe;
  // drawable
  if (!bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__copy(
      &(input->drawable), &(output->drawable)))
  {
    return false;
  }
  // frame_name_drawable
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name_drawable), &(output->frame_name_drawable)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__DrawableProperties *
bosdyn_msgs__msg__DrawableProperties__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DrawableProperties * msg = (bosdyn_msgs__msg__DrawableProperties *)allocator.allocate(sizeof(bosdyn_msgs__msg__DrawableProperties), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DrawableProperties));
  bool success = bosdyn_msgs__msg__DrawableProperties__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DrawableProperties__destroy(bosdyn_msgs__msg__DrawableProperties * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DrawableProperties__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DrawableProperties__Sequence__init(bosdyn_msgs__msg__DrawableProperties__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DrawableProperties * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DrawableProperties *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DrawableProperties), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DrawableProperties__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DrawableProperties__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DrawableProperties__Sequence__fini(bosdyn_msgs__msg__DrawableProperties__Sequence * array)
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
      bosdyn_msgs__msg__DrawableProperties__fini(&array->data[i]);
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

bosdyn_msgs__msg__DrawableProperties__Sequence *
bosdyn_msgs__msg__DrawableProperties__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DrawableProperties__Sequence * array = (bosdyn_msgs__msg__DrawableProperties__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DrawableProperties__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DrawableProperties__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DrawableProperties__Sequence__destroy(bosdyn_msgs__msg__DrawableProperties__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DrawableProperties__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DrawableProperties__Sequence__are_equal(const bosdyn_msgs__msg__DrawableProperties__Sequence * lhs, const bosdyn_msgs__msg__DrawableProperties__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DrawableProperties__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DrawableProperties__Sequence__copy(
  const bosdyn_msgs__msg__DrawableProperties__Sequence * input,
  bosdyn_msgs__msg__DrawableProperties__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DrawableProperties);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DrawableProperties * data =
      (bosdyn_msgs__msg__DrawableProperties *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DrawableProperties__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DrawableProperties__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DrawableProperties__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
