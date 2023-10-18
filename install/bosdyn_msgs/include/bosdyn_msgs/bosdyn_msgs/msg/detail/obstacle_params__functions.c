// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ObstacleParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/obstacle_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__ObstacleParams__init(bosdyn_msgs__msg__ObstacleParams * msg)
{
  if (!msg) {
    return false;
  }
  // disable_vision_foot_obstacle_avoidance
  // disable_vision_foot_constraint_avoidance
  // disable_vision_body_obstacle_avoidance
  // obstacle_avoidance_padding
  // disable_vision_foot_obstacle_body_assist
  // disable_vision_negative_obstacles
  return true;
}

void
bosdyn_msgs__msg__ObstacleParams__fini(bosdyn_msgs__msg__ObstacleParams * msg)
{
  if (!msg) {
    return;
  }
  // disable_vision_foot_obstacle_avoidance
  // disable_vision_foot_constraint_avoidance
  // disable_vision_body_obstacle_avoidance
  // obstacle_avoidance_padding
  // disable_vision_foot_obstacle_body_assist
  // disable_vision_negative_obstacles
}

bool
bosdyn_msgs__msg__ObstacleParams__are_equal(const bosdyn_msgs__msg__ObstacleParams * lhs, const bosdyn_msgs__msg__ObstacleParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // disable_vision_foot_obstacle_avoidance
  if (lhs->disable_vision_foot_obstacle_avoidance != rhs->disable_vision_foot_obstacle_avoidance) {
    return false;
  }
  // disable_vision_foot_constraint_avoidance
  if (lhs->disable_vision_foot_constraint_avoidance != rhs->disable_vision_foot_constraint_avoidance) {
    return false;
  }
  // disable_vision_body_obstacle_avoidance
  if (lhs->disable_vision_body_obstacle_avoidance != rhs->disable_vision_body_obstacle_avoidance) {
    return false;
  }
  // obstacle_avoidance_padding
  if (lhs->obstacle_avoidance_padding != rhs->obstacle_avoidance_padding) {
    return false;
  }
  // disable_vision_foot_obstacle_body_assist
  if (lhs->disable_vision_foot_obstacle_body_assist != rhs->disable_vision_foot_obstacle_body_assist) {
    return false;
  }
  // disable_vision_negative_obstacles
  if (lhs->disable_vision_negative_obstacles != rhs->disable_vision_negative_obstacles) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ObstacleParams__copy(
  const bosdyn_msgs__msg__ObstacleParams * input,
  bosdyn_msgs__msg__ObstacleParams * output)
{
  if (!input || !output) {
    return false;
  }
  // disable_vision_foot_obstacle_avoidance
  output->disable_vision_foot_obstacle_avoidance = input->disable_vision_foot_obstacle_avoidance;
  // disable_vision_foot_constraint_avoidance
  output->disable_vision_foot_constraint_avoidance = input->disable_vision_foot_constraint_avoidance;
  // disable_vision_body_obstacle_avoidance
  output->disable_vision_body_obstacle_avoidance = input->disable_vision_body_obstacle_avoidance;
  // obstacle_avoidance_padding
  output->obstacle_avoidance_padding = input->obstacle_avoidance_padding;
  // disable_vision_foot_obstacle_body_assist
  output->disable_vision_foot_obstacle_body_assist = input->disable_vision_foot_obstacle_body_assist;
  // disable_vision_negative_obstacles
  output->disable_vision_negative_obstacles = input->disable_vision_negative_obstacles;
  return true;
}

bosdyn_msgs__msg__ObstacleParams *
bosdyn_msgs__msg__ObstacleParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ObstacleParams * msg = (bosdyn_msgs__msg__ObstacleParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__ObstacleParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ObstacleParams));
  bool success = bosdyn_msgs__msg__ObstacleParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ObstacleParams__destroy(bosdyn_msgs__msg__ObstacleParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ObstacleParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ObstacleParams__Sequence__init(bosdyn_msgs__msg__ObstacleParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ObstacleParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ObstacleParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ObstacleParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ObstacleParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ObstacleParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ObstacleParams__Sequence__fini(bosdyn_msgs__msg__ObstacleParams__Sequence * array)
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
      bosdyn_msgs__msg__ObstacleParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__ObstacleParams__Sequence *
bosdyn_msgs__msg__ObstacleParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ObstacleParams__Sequence * array = (bosdyn_msgs__msg__ObstacleParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ObstacleParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ObstacleParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ObstacleParams__Sequence__destroy(bosdyn_msgs__msg__ObstacleParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ObstacleParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ObstacleParams__Sequence__are_equal(const bosdyn_msgs__msg__ObstacleParams__Sequence * lhs, const bosdyn_msgs__msg__ObstacleParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ObstacleParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ObstacleParams__Sequence__copy(
  const bosdyn_msgs__msg__ObstacleParams__Sequence * input,
  bosdyn_msgs__msg__ObstacleParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ObstacleParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ObstacleParams * data =
      (bosdyn_msgs__msg__ObstacleParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ObstacleParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ObstacleParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ObstacleParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
