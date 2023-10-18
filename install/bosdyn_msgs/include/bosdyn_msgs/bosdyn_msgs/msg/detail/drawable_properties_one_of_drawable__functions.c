// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DrawablePropertiesOneOfDrawable.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/drawable_properties_one_of_drawable__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame`
#include "bosdyn_msgs/msg/detail/drawable_frame__functions.h"
// Member `sphere`
#include "bosdyn_msgs/msg/detail/drawable_sphere__functions.h"
// Member `box`
#include "bosdyn_msgs/msg/detail/drawable_box__functions.h"
// Member `arrow`
#include "bosdyn_msgs/msg/detail/drawable_arrow__functions.h"
// Member `capsule`
#include "bosdyn_msgs/msg/detail/drawable_capsule__functions.h"
// Member `cylinder`
#include "bosdyn_msgs/msg/detail/drawable_cylinder__functions.h"
// Member `linestrip`
#include "bosdyn_msgs/msg/detail/drawable_line_strip__functions.h"
// Member `points`
#include "bosdyn_msgs/msg/detail/drawable_points__functions.h"

bool
bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__init(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable * msg)
{
  if (!msg) {
    return false;
  }
  // frame
  if (!bosdyn_msgs__msg__DrawableFrame__init(&msg->frame)) {
    bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(msg);
    return false;
  }
  // sphere
  if (!bosdyn_msgs__msg__DrawableSphere__init(&msg->sphere)) {
    bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(msg);
    return false;
  }
  // box
  if (!bosdyn_msgs__msg__DrawableBox__init(&msg->box)) {
    bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(msg);
    return false;
  }
  // arrow
  if (!bosdyn_msgs__msg__DrawableArrow__init(&msg->arrow)) {
    bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(msg);
    return false;
  }
  // capsule
  if (!bosdyn_msgs__msg__DrawableCapsule__init(&msg->capsule)) {
    bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(msg);
    return false;
  }
  // cylinder
  if (!bosdyn_msgs__msg__DrawableCylinder__init(&msg->cylinder)) {
    bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(msg);
    return false;
  }
  // linestrip
  if (!bosdyn_msgs__msg__DrawableLineStrip__init(&msg->linestrip)) {
    bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(msg);
    return false;
  }
  // points
  if (!bosdyn_msgs__msg__DrawablePoints__init(&msg->points)) {
    bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(msg);
    return false;
  }
  // drawable_choice
  return true;
}

void
bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable * msg)
{
  if (!msg) {
    return;
  }
  // frame
  bosdyn_msgs__msg__DrawableFrame__fini(&msg->frame);
  // sphere
  bosdyn_msgs__msg__DrawableSphere__fini(&msg->sphere);
  // box
  bosdyn_msgs__msg__DrawableBox__fini(&msg->box);
  // arrow
  bosdyn_msgs__msg__DrawableArrow__fini(&msg->arrow);
  // capsule
  bosdyn_msgs__msg__DrawableCapsule__fini(&msg->capsule);
  // cylinder
  bosdyn_msgs__msg__DrawableCylinder__fini(&msg->cylinder);
  // linestrip
  bosdyn_msgs__msg__DrawableLineStrip__fini(&msg->linestrip);
  // points
  bosdyn_msgs__msg__DrawablePoints__fini(&msg->points);
  // drawable_choice
}

bool
bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__are_equal(const bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable * lhs, const bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame
  if (!bosdyn_msgs__msg__DrawableFrame__are_equal(
      &(lhs->frame), &(rhs->frame)))
  {
    return false;
  }
  // sphere
  if (!bosdyn_msgs__msg__DrawableSphere__are_equal(
      &(lhs->sphere), &(rhs->sphere)))
  {
    return false;
  }
  // box
  if (!bosdyn_msgs__msg__DrawableBox__are_equal(
      &(lhs->box), &(rhs->box)))
  {
    return false;
  }
  // arrow
  if (!bosdyn_msgs__msg__DrawableArrow__are_equal(
      &(lhs->arrow), &(rhs->arrow)))
  {
    return false;
  }
  // capsule
  if (!bosdyn_msgs__msg__DrawableCapsule__are_equal(
      &(lhs->capsule), &(rhs->capsule)))
  {
    return false;
  }
  // cylinder
  if (!bosdyn_msgs__msg__DrawableCylinder__are_equal(
      &(lhs->cylinder), &(rhs->cylinder)))
  {
    return false;
  }
  // linestrip
  if (!bosdyn_msgs__msg__DrawableLineStrip__are_equal(
      &(lhs->linestrip), &(rhs->linestrip)))
  {
    return false;
  }
  // points
  if (!bosdyn_msgs__msg__DrawablePoints__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // drawable_choice
  if (lhs->drawable_choice != rhs->drawable_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__copy(
  const bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable * input,
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable * output)
{
  if (!input || !output) {
    return false;
  }
  // frame
  if (!bosdyn_msgs__msg__DrawableFrame__copy(
      &(input->frame), &(output->frame)))
  {
    return false;
  }
  // sphere
  if (!bosdyn_msgs__msg__DrawableSphere__copy(
      &(input->sphere), &(output->sphere)))
  {
    return false;
  }
  // box
  if (!bosdyn_msgs__msg__DrawableBox__copy(
      &(input->box), &(output->box)))
  {
    return false;
  }
  // arrow
  if (!bosdyn_msgs__msg__DrawableArrow__copy(
      &(input->arrow), &(output->arrow)))
  {
    return false;
  }
  // capsule
  if (!bosdyn_msgs__msg__DrawableCapsule__copy(
      &(input->capsule), &(output->capsule)))
  {
    return false;
  }
  // cylinder
  if (!bosdyn_msgs__msg__DrawableCylinder__copy(
      &(input->cylinder), &(output->cylinder)))
  {
    return false;
  }
  // linestrip
  if (!bosdyn_msgs__msg__DrawableLineStrip__copy(
      &(input->linestrip), &(output->linestrip)))
  {
    return false;
  }
  // points
  if (!bosdyn_msgs__msg__DrawablePoints__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // drawable_choice
  output->drawable_choice = input->drawable_choice;
  return true;
}

bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable *
bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable * msg = (bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable *)allocator.allocate(sizeof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable));
  bool success = bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__destroy(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence__init(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence__fini(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence * array)
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
      bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(&array->data[i]);
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

bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence *
bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence * array = (bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence__destroy(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence__are_equal(const bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence * lhs, const bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence__copy(
  const bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence * input,
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable * data =
      (bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
