// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/CreateWaypointRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/create_waypoint_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `waypoint_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `recording_environment`
#include "bosdyn_msgs/msg/detail/recording_environment__functions.h"
// Member `lease`
#include "bosdyn_msgs/msg/detail/lease__functions.h"
// Member `require_fiducials`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `world_objects`
#include "bosdyn_msgs/msg/detail/world_object__functions.h"

bool
bosdyn_msgs__msg__CreateWaypointRequest__init(bosdyn_msgs__msg__CreateWaypointRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__CreateWaypointRequest__fini(msg);
    return false;
  }
  // header_is_set
  // waypoint_name
  if (!rosidl_runtime_c__String__init(&msg->waypoint_name)) {
    bosdyn_msgs__msg__CreateWaypointRequest__fini(msg);
    return false;
  }
  // recording_environment
  if (!bosdyn_msgs__msg__RecordingEnvironment__init(&msg->recording_environment)) {
    bosdyn_msgs__msg__CreateWaypointRequest__fini(msg);
    return false;
  }
  // recording_environment_is_set
  // lease
  if (!bosdyn_msgs__msg__Lease__init(&msg->lease)) {
    bosdyn_msgs__msg__CreateWaypointRequest__fini(msg);
    return false;
  }
  // lease_is_set
  // require_fiducials
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->require_fiducials, 0)) {
    bosdyn_msgs__msg__CreateWaypointRequest__fini(msg);
    return false;
  }
  // world_objects
  if (!bosdyn_msgs__msg__WorldObject__Sequence__init(&msg->world_objects, 0)) {
    bosdyn_msgs__msg__CreateWaypointRequest__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__CreateWaypointRequest__fini(bosdyn_msgs__msg__CreateWaypointRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // waypoint_name
  rosidl_runtime_c__String__fini(&msg->waypoint_name);
  // recording_environment
  bosdyn_msgs__msg__RecordingEnvironment__fini(&msg->recording_environment);
  // recording_environment_is_set
  // lease
  bosdyn_msgs__msg__Lease__fini(&msg->lease);
  // lease_is_set
  // require_fiducials
  rosidl_runtime_c__int32__Sequence__fini(&msg->require_fiducials);
  // world_objects
  bosdyn_msgs__msg__WorldObject__Sequence__fini(&msg->world_objects);
}

bool
bosdyn_msgs__msg__CreateWaypointRequest__are_equal(const bosdyn_msgs__msg__CreateWaypointRequest * lhs, const bosdyn_msgs__msg__CreateWaypointRequest * rhs)
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
  // waypoint_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->waypoint_name), &(rhs->waypoint_name)))
  {
    return false;
  }
  // recording_environment
  if (!bosdyn_msgs__msg__RecordingEnvironment__are_equal(
      &(lhs->recording_environment), &(rhs->recording_environment)))
  {
    return false;
  }
  // recording_environment_is_set
  if (lhs->recording_environment_is_set != rhs->recording_environment_is_set) {
    return false;
  }
  // lease
  if (!bosdyn_msgs__msg__Lease__are_equal(
      &(lhs->lease), &(rhs->lease)))
  {
    return false;
  }
  // lease_is_set
  if (lhs->lease_is_set != rhs->lease_is_set) {
    return false;
  }
  // require_fiducials
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->require_fiducials), &(rhs->require_fiducials)))
  {
    return false;
  }
  // world_objects
  if (!bosdyn_msgs__msg__WorldObject__Sequence__are_equal(
      &(lhs->world_objects), &(rhs->world_objects)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__CreateWaypointRequest__copy(
  const bosdyn_msgs__msg__CreateWaypointRequest * input,
  bosdyn_msgs__msg__CreateWaypointRequest * output)
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
  // waypoint_name
  if (!rosidl_runtime_c__String__copy(
      &(input->waypoint_name), &(output->waypoint_name)))
  {
    return false;
  }
  // recording_environment
  if (!bosdyn_msgs__msg__RecordingEnvironment__copy(
      &(input->recording_environment), &(output->recording_environment)))
  {
    return false;
  }
  // recording_environment_is_set
  output->recording_environment_is_set = input->recording_environment_is_set;
  // lease
  if (!bosdyn_msgs__msg__Lease__copy(
      &(input->lease), &(output->lease)))
  {
    return false;
  }
  // lease_is_set
  output->lease_is_set = input->lease_is_set;
  // require_fiducials
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->require_fiducials), &(output->require_fiducials)))
  {
    return false;
  }
  // world_objects
  if (!bosdyn_msgs__msg__WorldObject__Sequence__copy(
      &(input->world_objects), &(output->world_objects)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__CreateWaypointRequest *
bosdyn_msgs__msg__CreateWaypointRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CreateWaypointRequest * msg = (bosdyn_msgs__msg__CreateWaypointRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__CreateWaypointRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__CreateWaypointRequest));
  bool success = bosdyn_msgs__msg__CreateWaypointRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__CreateWaypointRequest__destroy(bosdyn_msgs__msg__CreateWaypointRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__CreateWaypointRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__CreateWaypointRequest__Sequence__init(bosdyn_msgs__msg__CreateWaypointRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CreateWaypointRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__CreateWaypointRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__CreateWaypointRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__CreateWaypointRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__CreateWaypointRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__CreateWaypointRequest__Sequence__fini(bosdyn_msgs__msg__CreateWaypointRequest__Sequence * array)
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
      bosdyn_msgs__msg__CreateWaypointRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__CreateWaypointRequest__Sequence *
bosdyn_msgs__msg__CreateWaypointRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CreateWaypointRequest__Sequence * array = (bosdyn_msgs__msg__CreateWaypointRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__CreateWaypointRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__CreateWaypointRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__CreateWaypointRequest__Sequence__destroy(bosdyn_msgs__msg__CreateWaypointRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__CreateWaypointRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__CreateWaypointRequest__Sequence__are_equal(const bosdyn_msgs__msg__CreateWaypointRequest__Sequence * lhs, const bosdyn_msgs__msg__CreateWaypointRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__CreateWaypointRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__CreateWaypointRequest__Sequence__copy(
  const bosdyn_msgs__msg__CreateWaypointRequest__Sequence * input,
  bosdyn_msgs__msg__CreateWaypointRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__CreateWaypointRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__CreateWaypointRequest * data =
      (bosdyn_msgs__msg__CreateWaypointRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__CreateWaypointRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__CreateWaypointRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__CreateWaypointRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
