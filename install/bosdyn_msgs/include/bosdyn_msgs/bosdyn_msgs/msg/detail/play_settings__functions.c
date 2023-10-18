// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PlaySettings.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/play_settings__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `velocity_limit`
#include "bosdyn_msgs/msg/detail/se2_velocity_limit__functions.h"
// Member `path_following_mode`
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__functions.h"
// Member `ground_clutter_mode`
#include "bosdyn_msgs/msg/detail/edge_annotations_ground_clutter_avoidance_mode__functions.h"

bool
bosdyn_msgs__msg__PlaySettings__init(bosdyn_msgs__msg__PlaySettings * msg)
{
  if (!msg) {
    return false;
  }
  // velocity_limit
  if (!bosdyn_msgs__msg__SE2VelocityLimit__init(&msg->velocity_limit)) {
    bosdyn_msgs__msg__PlaySettings__fini(msg);
    return false;
  }
  // velocity_limit_is_set
  // disable_directed_exploration
  // disable_alternate_route_finding
  // path_following_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode__init(&msg->path_following_mode)) {
    bosdyn_msgs__msg__PlaySettings__fini(msg);
    return false;
  }
  // ground_clutter_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__init(&msg->ground_clutter_mode)) {
    bosdyn_msgs__msg__PlaySettings__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__PlaySettings__fini(bosdyn_msgs__msg__PlaySettings * msg)
{
  if (!msg) {
    return;
  }
  // velocity_limit
  bosdyn_msgs__msg__SE2VelocityLimit__fini(&msg->velocity_limit);
  // velocity_limit_is_set
  // disable_directed_exploration
  // disable_alternate_route_finding
  // path_following_mode
  bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode__fini(&msg->path_following_mode);
  // ground_clutter_mode
  bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__fini(&msg->ground_clutter_mode);
}

bool
bosdyn_msgs__msg__PlaySettings__are_equal(const bosdyn_msgs__msg__PlaySettings * lhs, const bosdyn_msgs__msg__PlaySettings * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // velocity_limit
  if (!bosdyn_msgs__msg__SE2VelocityLimit__are_equal(
      &(lhs->velocity_limit), &(rhs->velocity_limit)))
  {
    return false;
  }
  // velocity_limit_is_set
  if (lhs->velocity_limit_is_set != rhs->velocity_limit_is_set) {
    return false;
  }
  // disable_directed_exploration
  if (lhs->disable_directed_exploration != rhs->disable_directed_exploration) {
    return false;
  }
  // disable_alternate_route_finding
  if (lhs->disable_alternate_route_finding != rhs->disable_alternate_route_finding) {
    return false;
  }
  // path_following_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode__are_equal(
      &(lhs->path_following_mode), &(rhs->path_following_mode)))
  {
    return false;
  }
  // ground_clutter_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__are_equal(
      &(lhs->ground_clutter_mode), &(rhs->ground_clutter_mode)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PlaySettings__copy(
  const bosdyn_msgs__msg__PlaySettings * input,
  bosdyn_msgs__msg__PlaySettings * output)
{
  if (!input || !output) {
    return false;
  }
  // velocity_limit
  if (!bosdyn_msgs__msg__SE2VelocityLimit__copy(
      &(input->velocity_limit), &(output->velocity_limit)))
  {
    return false;
  }
  // velocity_limit_is_set
  output->velocity_limit_is_set = input->velocity_limit_is_set;
  // disable_directed_exploration
  output->disable_directed_exploration = input->disable_directed_exploration;
  // disable_alternate_route_finding
  output->disable_alternate_route_finding = input->disable_alternate_route_finding;
  // path_following_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode__copy(
      &(input->path_following_mode), &(output->path_following_mode)))
  {
    return false;
  }
  // ground_clutter_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__copy(
      &(input->ground_clutter_mode), &(output->ground_clutter_mode)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__PlaySettings *
bosdyn_msgs__msg__PlaySettings__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PlaySettings * msg = (bosdyn_msgs__msg__PlaySettings *)allocator.allocate(sizeof(bosdyn_msgs__msg__PlaySettings), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PlaySettings));
  bool success = bosdyn_msgs__msg__PlaySettings__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PlaySettings__destroy(bosdyn_msgs__msg__PlaySettings * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PlaySettings__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PlaySettings__Sequence__init(bosdyn_msgs__msg__PlaySettings__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PlaySettings * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PlaySettings *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PlaySettings), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PlaySettings__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PlaySettings__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PlaySettings__Sequence__fini(bosdyn_msgs__msg__PlaySettings__Sequence * array)
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
      bosdyn_msgs__msg__PlaySettings__fini(&array->data[i]);
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

bosdyn_msgs__msg__PlaySettings__Sequence *
bosdyn_msgs__msg__PlaySettings__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PlaySettings__Sequence * array = (bosdyn_msgs__msg__PlaySettings__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PlaySettings__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PlaySettings__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PlaySettings__Sequence__destroy(bosdyn_msgs__msg__PlaySettings__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PlaySettings__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PlaySettings__Sequence__are_equal(const bosdyn_msgs__msg__PlaySettings__Sequence * lhs, const bosdyn_msgs__msg__PlaySettings__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PlaySettings__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PlaySettings__Sequence__copy(
  const bosdyn_msgs__msg__PlaySettings__Sequence * input,
  bosdyn_msgs__msg__PlaySettings__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PlaySettings);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PlaySettings * data =
      (bosdyn_msgs__msg__PlaySettings *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PlaySettings__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PlaySettings__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PlaySettings__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
