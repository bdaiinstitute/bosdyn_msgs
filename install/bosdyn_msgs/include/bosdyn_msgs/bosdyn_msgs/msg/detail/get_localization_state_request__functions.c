// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/GetLocalizationStateRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/get_localization_state_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `waypoint_id`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__GetLocalizationStateRequest__init(bosdyn_msgs__msg__GetLocalizationStateRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__GetLocalizationStateRequest__fini(msg);
    return false;
  }
  // header_is_set
  // waypoint_id
  if (!rosidl_runtime_c__String__init(&msg->waypoint_id)) {
    bosdyn_msgs__msg__GetLocalizationStateRequest__fini(msg);
    return false;
  }
  // request_live_point_cloud
  // request_live_images
  // request_live_terrain_maps
  // request_live_world_objects
  // request_live_robot_state
  // compress_live_point_cloud
  return true;
}

void
bosdyn_msgs__msg__GetLocalizationStateRequest__fini(bosdyn_msgs__msg__GetLocalizationStateRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // waypoint_id
  rosidl_runtime_c__String__fini(&msg->waypoint_id);
  // request_live_point_cloud
  // request_live_images
  // request_live_terrain_maps
  // request_live_world_objects
  // request_live_robot_state
  // compress_live_point_cloud
}

bool
bosdyn_msgs__msg__GetLocalizationStateRequest__are_equal(const bosdyn_msgs__msg__GetLocalizationStateRequest * lhs, const bosdyn_msgs__msg__GetLocalizationStateRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // waypoint_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->waypoint_id), &(rhs->waypoint_id)))
  {
    return false;
  }
  // request_live_point_cloud
  if (lhs->request_live_point_cloud != rhs->request_live_point_cloud) {
    return false;
  }
  // request_live_images
  if (lhs->request_live_images != rhs->request_live_images) {
    return false;
  }
  // request_live_terrain_maps
  if (lhs->request_live_terrain_maps != rhs->request_live_terrain_maps) {
    return false;
  }
  // request_live_world_objects
  if (lhs->request_live_world_objects != rhs->request_live_world_objects) {
    return false;
  }
  // request_live_robot_state
  if (lhs->request_live_robot_state != rhs->request_live_robot_state) {
    return false;
  }
  // compress_live_point_cloud
  if (lhs->compress_live_point_cloud != rhs->compress_live_point_cloud) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__GetLocalizationStateRequest__copy(
  const bosdyn_msgs__msg__GetLocalizationStateRequest * input,
  bosdyn_msgs__msg__GetLocalizationStateRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // waypoint_id
  if (!rosidl_runtime_c__String__copy(
      &(input->waypoint_id), &(output->waypoint_id)))
  {
    return false;
  }
  // request_live_point_cloud
  output->request_live_point_cloud = input->request_live_point_cloud;
  // request_live_images
  output->request_live_images = input->request_live_images;
  // request_live_terrain_maps
  output->request_live_terrain_maps = input->request_live_terrain_maps;
  // request_live_world_objects
  output->request_live_world_objects = input->request_live_world_objects;
  // request_live_robot_state
  output->request_live_robot_state = input->request_live_robot_state;
  // compress_live_point_cloud
  output->compress_live_point_cloud = input->compress_live_point_cloud;
  return true;
}

bosdyn_msgs__msg__GetLocalizationStateRequest *
bosdyn_msgs__msg__GetLocalizationStateRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetLocalizationStateRequest * msg = (bosdyn_msgs__msg__GetLocalizationStateRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__GetLocalizationStateRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__GetLocalizationStateRequest));
  bool success = bosdyn_msgs__msg__GetLocalizationStateRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__GetLocalizationStateRequest__destroy(bosdyn_msgs__msg__GetLocalizationStateRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__GetLocalizationStateRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence__init(bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetLocalizationStateRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__GetLocalizationStateRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__GetLocalizationStateRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__GetLocalizationStateRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__GetLocalizationStateRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence__fini(bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence * array)
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
      bosdyn_msgs__msg__GetLocalizationStateRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence *
bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence * array = (bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence__destroy(bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence__are_equal(const bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence * lhs, const bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__GetLocalizationStateRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence__copy(
  const bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence * input,
  bosdyn_msgs__msg__GetLocalizationStateRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__GetLocalizationStateRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__GetLocalizationStateRequest * data =
      (bosdyn_msgs__msg__GetLocalizationStateRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__GetLocalizationStateRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__GetLocalizationStateRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__GetLocalizationStateRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
