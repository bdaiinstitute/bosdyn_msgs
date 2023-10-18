// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Box2WithFrame.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/box2_with_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `box`
#include "bosdyn_msgs/msg/detail/box2__functions.h"
// Member `frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `frame_name_tform_box`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
bosdyn_msgs__msg__Box2WithFrame__init(bosdyn_msgs__msg__Box2WithFrame * msg)
{
  if (!msg) {
    return false;
  }
  // box
  if (!bosdyn_msgs__msg__Box2__init(&msg->box)) {
    bosdyn_msgs__msg__Box2WithFrame__fini(msg);
    return false;
  }
  // box_is_set
  // frame_name
  if (!rosidl_runtime_c__String__init(&msg->frame_name)) {
    bosdyn_msgs__msg__Box2WithFrame__fini(msg);
    return false;
  }
  // frame_name_tform_box
  if (!geometry_msgs__msg__Pose__init(&msg->frame_name_tform_box)) {
    bosdyn_msgs__msg__Box2WithFrame__fini(msg);
    return false;
  }
  // frame_name_tform_box_is_set
  return true;
}

void
bosdyn_msgs__msg__Box2WithFrame__fini(bosdyn_msgs__msg__Box2WithFrame * msg)
{
  if (!msg) {
    return;
  }
  // box
  bosdyn_msgs__msg__Box2__fini(&msg->box);
  // box_is_set
  // frame_name
  rosidl_runtime_c__String__fini(&msg->frame_name);
  // frame_name_tform_box
  geometry_msgs__msg__Pose__fini(&msg->frame_name_tform_box);
  // frame_name_tform_box_is_set
}

bool
bosdyn_msgs__msg__Box2WithFrame__are_equal(const bosdyn_msgs__msg__Box2WithFrame * lhs, const bosdyn_msgs__msg__Box2WithFrame * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // box
  if (!bosdyn_msgs__msg__Box2__are_equal(
      &(lhs->box), &(rhs->box)))
  {
    return false;
  }
  // box_is_set
  if (lhs->box_is_set != rhs->box_is_set) {
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name), &(rhs->frame_name)))
  {
    return false;
  }
  // frame_name_tform_box
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->frame_name_tform_box), &(rhs->frame_name_tform_box)))
  {
    return false;
  }
  // frame_name_tform_box_is_set
  if (lhs->frame_name_tform_box_is_set != rhs->frame_name_tform_box_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Box2WithFrame__copy(
  const bosdyn_msgs__msg__Box2WithFrame * input,
  bosdyn_msgs__msg__Box2WithFrame * output)
{
  if (!input || !output) {
    return false;
  }
  // box
  if (!bosdyn_msgs__msg__Box2__copy(
      &(input->box), &(output->box)))
  {
    return false;
  }
  // box_is_set
  output->box_is_set = input->box_is_set;
  // frame_name
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name), &(output->frame_name)))
  {
    return false;
  }
  // frame_name_tform_box
  if (!geometry_msgs__msg__Pose__copy(
      &(input->frame_name_tform_box), &(output->frame_name_tform_box)))
  {
    return false;
  }
  // frame_name_tform_box_is_set
  output->frame_name_tform_box_is_set = input->frame_name_tform_box_is_set;
  return true;
}

bosdyn_msgs__msg__Box2WithFrame *
bosdyn_msgs__msg__Box2WithFrame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Box2WithFrame * msg = (bosdyn_msgs__msg__Box2WithFrame *)allocator.allocate(sizeof(bosdyn_msgs__msg__Box2WithFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Box2WithFrame));
  bool success = bosdyn_msgs__msg__Box2WithFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Box2WithFrame__destroy(bosdyn_msgs__msg__Box2WithFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Box2WithFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Box2WithFrame__Sequence__init(bosdyn_msgs__msg__Box2WithFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Box2WithFrame * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Box2WithFrame *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Box2WithFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Box2WithFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Box2WithFrame__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Box2WithFrame__Sequence__fini(bosdyn_msgs__msg__Box2WithFrame__Sequence * array)
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
      bosdyn_msgs__msg__Box2WithFrame__fini(&array->data[i]);
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

bosdyn_msgs__msg__Box2WithFrame__Sequence *
bosdyn_msgs__msg__Box2WithFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Box2WithFrame__Sequence * array = (bosdyn_msgs__msg__Box2WithFrame__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Box2WithFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Box2WithFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Box2WithFrame__Sequence__destroy(bosdyn_msgs__msg__Box2WithFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Box2WithFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Box2WithFrame__Sequence__are_equal(const bosdyn_msgs__msg__Box2WithFrame__Sequence * lhs, const bosdyn_msgs__msg__Box2WithFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Box2WithFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Box2WithFrame__Sequence__copy(
  const bosdyn_msgs__msg__Box2WithFrame__Sequence * input,
  bosdyn_msgs__msg__Box2WithFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Box2WithFrame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Box2WithFrame * data =
      (bosdyn_msgs__msg__Box2WithFrame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Box2WithFrame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Box2WithFrame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Box2WithFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
