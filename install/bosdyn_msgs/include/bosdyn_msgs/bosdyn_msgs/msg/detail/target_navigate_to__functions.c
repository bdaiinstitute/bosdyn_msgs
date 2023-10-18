// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/TargetNavigateTo.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/target_navigate_to__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `destination_waypoint_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `travel_params`
#include "bosdyn_msgs/msg/detail/travel_params__functions.h"

bool
bosdyn_msgs__msg__TargetNavigateTo__init(bosdyn_msgs__msg__TargetNavigateTo * msg)
{
  if (!msg) {
    return false;
  }
  // destination_waypoint_id
  if (!rosidl_runtime_c__String__init(&msg->destination_waypoint_id)) {
    bosdyn_msgs__msg__TargetNavigateTo__fini(msg);
    return false;
  }
  // travel_params
  if (!bosdyn_msgs__msg__TravelParams__init(&msg->travel_params)) {
    bosdyn_msgs__msg__TargetNavigateTo__fini(msg);
    return false;
  }
  // travel_params_is_set
  return true;
}

void
bosdyn_msgs__msg__TargetNavigateTo__fini(bosdyn_msgs__msg__TargetNavigateTo * msg)
{
  if (!msg) {
    return;
  }
  // destination_waypoint_id
  rosidl_runtime_c__String__fini(&msg->destination_waypoint_id);
  // travel_params
  bosdyn_msgs__msg__TravelParams__fini(&msg->travel_params);
  // travel_params_is_set
}

bool
bosdyn_msgs__msg__TargetNavigateTo__are_equal(const bosdyn_msgs__msg__TargetNavigateTo * lhs, const bosdyn_msgs__msg__TargetNavigateTo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // destination_waypoint_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->destination_waypoint_id), &(rhs->destination_waypoint_id)))
  {
    return false;
  }
  // travel_params
  if (!bosdyn_msgs__msg__TravelParams__are_equal(
      &(lhs->travel_params), &(rhs->travel_params)))
  {
    return false;
  }
  // travel_params_is_set
  if (lhs->travel_params_is_set != rhs->travel_params_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__TargetNavigateTo__copy(
  const bosdyn_msgs__msg__TargetNavigateTo * input,
  bosdyn_msgs__msg__TargetNavigateTo * output)
{
  if (!input || !output) {
    return false;
  }
  // destination_waypoint_id
  if (!rosidl_runtime_c__String__copy(
      &(input->destination_waypoint_id), &(output->destination_waypoint_id)))
  {
    return false;
  }
  // travel_params
  if (!bosdyn_msgs__msg__TravelParams__copy(
      &(input->travel_params), &(output->travel_params)))
  {
    return false;
  }
  // travel_params_is_set
  output->travel_params_is_set = input->travel_params_is_set;
  return true;
}

bosdyn_msgs__msg__TargetNavigateTo *
bosdyn_msgs__msg__TargetNavigateTo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TargetNavigateTo * msg = (bosdyn_msgs__msg__TargetNavigateTo *)allocator.allocate(sizeof(bosdyn_msgs__msg__TargetNavigateTo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__TargetNavigateTo));
  bool success = bosdyn_msgs__msg__TargetNavigateTo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__TargetNavigateTo__destroy(bosdyn_msgs__msg__TargetNavigateTo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__TargetNavigateTo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__TargetNavigateTo__Sequence__init(bosdyn_msgs__msg__TargetNavigateTo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TargetNavigateTo * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__TargetNavigateTo *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__TargetNavigateTo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__TargetNavigateTo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__TargetNavigateTo__fini(&data[i - 1]);
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
bosdyn_msgs__msg__TargetNavigateTo__Sequence__fini(bosdyn_msgs__msg__TargetNavigateTo__Sequence * array)
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
      bosdyn_msgs__msg__TargetNavigateTo__fini(&array->data[i]);
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

bosdyn_msgs__msg__TargetNavigateTo__Sequence *
bosdyn_msgs__msg__TargetNavigateTo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TargetNavigateTo__Sequence * array = (bosdyn_msgs__msg__TargetNavigateTo__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__TargetNavigateTo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__TargetNavigateTo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__TargetNavigateTo__Sequence__destroy(bosdyn_msgs__msg__TargetNavigateTo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__TargetNavigateTo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__TargetNavigateTo__Sequence__are_equal(const bosdyn_msgs__msg__TargetNavigateTo__Sequence * lhs, const bosdyn_msgs__msg__TargetNavigateTo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__TargetNavigateTo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__TargetNavigateTo__Sequence__copy(
  const bosdyn_msgs__msg__TargetNavigateTo__Sequence * input,
  bosdyn_msgs__msg__TargetNavigateTo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__TargetNavigateTo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__TargetNavigateTo * data =
      (bosdyn_msgs__msg__TargetNavigateTo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__TargetNavigateTo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__TargetNavigateTo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__TargetNavigateTo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
