// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Walk.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/walk__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `global_parameters`
#include "bosdyn_msgs/msg/detail/global_parameters__functions.h"
// Member `playback_mode`
#include "bosdyn_msgs/msg/detail/playback_mode__functions.h"
// Member `map_name`
// Member `mission_name`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `elements`
#include "bosdyn_msgs/msg/detail/element__functions.h"
// Member `docks`
#include "bosdyn_msgs/msg/detail/dock__functions.h"

bool
bosdyn_msgs__msg__Walk__init(bosdyn_msgs__msg__Walk * msg)
{
  if (!msg) {
    return false;
  }
  // global_parameters
  if (!bosdyn_msgs__msg__GlobalParameters__init(&msg->global_parameters)) {
    bosdyn_msgs__msg__Walk__fini(msg);
    return false;
  }
  // global_parameters_is_set
  // playback_mode
  if (!bosdyn_msgs__msg__PlaybackMode__init(&msg->playback_mode)) {
    bosdyn_msgs__msg__Walk__fini(msg);
    return false;
  }
  // playback_mode_is_set
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    bosdyn_msgs__msg__Walk__fini(msg);
    return false;
  }
  // mission_name
  if (!rosidl_runtime_c__String__init(&msg->mission_name)) {
    bosdyn_msgs__msg__Walk__fini(msg);
    return false;
  }
  // elements
  if (!bosdyn_msgs__msg__Element__Sequence__init(&msg->elements, 0)) {
    bosdyn_msgs__msg__Walk__fini(msg);
    return false;
  }
  // docks
  if (!bosdyn_msgs__msg__Dock__Sequence__init(&msg->docks, 0)) {
    bosdyn_msgs__msg__Walk__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    bosdyn_msgs__msg__Walk__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Walk__fini(bosdyn_msgs__msg__Walk * msg)
{
  if (!msg) {
    return;
  }
  // global_parameters
  bosdyn_msgs__msg__GlobalParameters__fini(&msg->global_parameters);
  // global_parameters_is_set
  // playback_mode
  bosdyn_msgs__msg__PlaybackMode__fini(&msg->playback_mode);
  // playback_mode_is_set
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // mission_name
  rosidl_runtime_c__String__fini(&msg->mission_name);
  // elements
  bosdyn_msgs__msg__Element__Sequence__fini(&msg->elements);
  // docks
  bosdyn_msgs__msg__Dock__Sequence__fini(&msg->docks);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
}

bool
bosdyn_msgs__msg__Walk__are_equal(const bosdyn_msgs__msg__Walk * lhs, const bosdyn_msgs__msg__Walk * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // global_parameters
  if (!bosdyn_msgs__msg__GlobalParameters__are_equal(
      &(lhs->global_parameters), &(rhs->global_parameters)))
  {
    return false;
  }
  // global_parameters_is_set
  if (lhs->global_parameters_is_set != rhs->global_parameters_is_set) {
    return false;
  }
  // playback_mode
  if (!bosdyn_msgs__msg__PlaybackMode__are_equal(
      &(lhs->playback_mode), &(rhs->playback_mode)))
  {
    return false;
  }
  // playback_mode_is_set
  if (lhs->playback_mode_is_set != rhs->playback_mode_is_set) {
    return false;
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // mission_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_name), &(rhs->mission_name)))
  {
    return false;
  }
  // elements
  if (!bosdyn_msgs__msg__Element__Sequence__are_equal(
      &(lhs->elements), &(rhs->elements)))
  {
    return false;
  }
  // docks
  if (!bosdyn_msgs__msg__Dock__Sequence__are_equal(
      &(lhs->docks), &(rhs->docks)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Walk__copy(
  const bosdyn_msgs__msg__Walk * input,
  bosdyn_msgs__msg__Walk * output)
{
  if (!input || !output) {
    return false;
  }
  // global_parameters
  if (!bosdyn_msgs__msg__GlobalParameters__copy(
      &(input->global_parameters), &(output->global_parameters)))
  {
    return false;
  }
  // global_parameters_is_set
  output->global_parameters_is_set = input->global_parameters_is_set;
  // playback_mode
  if (!bosdyn_msgs__msg__PlaybackMode__copy(
      &(input->playback_mode), &(output->playback_mode)))
  {
    return false;
  }
  // playback_mode_is_set
  output->playback_mode_is_set = input->playback_mode_is_set;
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // mission_name
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_name), &(output->mission_name)))
  {
    return false;
  }
  // elements
  if (!bosdyn_msgs__msg__Element__Sequence__copy(
      &(input->elements), &(output->elements)))
  {
    return false;
  }
  // docks
  if (!bosdyn_msgs__msg__Dock__Sequence__copy(
      &(input->docks), &(output->docks)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Walk *
bosdyn_msgs__msg__Walk__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Walk * msg = (bosdyn_msgs__msg__Walk *)allocator.allocate(sizeof(bosdyn_msgs__msg__Walk), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Walk));
  bool success = bosdyn_msgs__msg__Walk__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Walk__destroy(bosdyn_msgs__msg__Walk * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Walk__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Walk__Sequence__init(bosdyn_msgs__msg__Walk__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Walk * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Walk *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Walk), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Walk__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Walk__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Walk__Sequence__fini(bosdyn_msgs__msg__Walk__Sequence * array)
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
      bosdyn_msgs__msg__Walk__fini(&array->data[i]);
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

bosdyn_msgs__msg__Walk__Sequence *
bosdyn_msgs__msg__Walk__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Walk__Sequence * array = (bosdyn_msgs__msg__Walk__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Walk__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Walk__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Walk__Sequence__destroy(bosdyn_msgs__msg__Walk__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Walk__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Walk__Sequence__are_equal(const bosdyn_msgs__msg__Walk__Sequence * lhs, const bosdyn_msgs__msg__Walk__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Walk__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Walk__Sequence__copy(
  const bosdyn_msgs__msg__Walk__Sequence * input,
  bosdyn_msgs__msg__Walk__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Walk);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Walk * data =
      (bosdyn_msgs__msg__Walk *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Walk__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Walk__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Walk__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
