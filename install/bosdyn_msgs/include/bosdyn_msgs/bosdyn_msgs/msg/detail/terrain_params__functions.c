// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/TerrainParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/terrain_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `grated_surfaces_mode`
#include "bosdyn_msgs/msg/detail/terrain_params_grated_surfaces_mode__functions.h"

bool
bosdyn_msgs__msg__TerrainParams__init(bosdyn_msgs__msg__TerrainParams * msg)
{
  if (!msg) {
    return false;
  }
  // ground_mu_hint
  // ground_mu_hint_is_set
  // grated_surfaces_mode
  if (!bosdyn_msgs__msg__TerrainParamsGratedSurfacesMode__init(&msg->grated_surfaces_mode)) {
    bosdyn_msgs__msg__TerrainParams__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__TerrainParams__fini(bosdyn_msgs__msg__TerrainParams * msg)
{
  if (!msg) {
    return;
  }
  // ground_mu_hint
  // ground_mu_hint_is_set
  // grated_surfaces_mode
  bosdyn_msgs__msg__TerrainParamsGratedSurfacesMode__fini(&msg->grated_surfaces_mode);
}

bool
bosdyn_msgs__msg__TerrainParams__are_equal(const bosdyn_msgs__msg__TerrainParams * lhs, const bosdyn_msgs__msg__TerrainParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ground_mu_hint
  if (lhs->ground_mu_hint != rhs->ground_mu_hint) {
    return false;
  }
  // ground_mu_hint_is_set
  if (lhs->ground_mu_hint_is_set != rhs->ground_mu_hint_is_set) {
    return false;
  }
  // grated_surfaces_mode
  if (!bosdyn_msgs__msg__TerrainParamsGratedSurfacesMode__are_equal(
      &(lhs->grated_surfaces_mode), &(rhs->grated_surfaces_mode)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__TerrainParams__copy(
  const bosdyn_msgs__msg__TerrainParams * input,
  bosdyn_msgs__msg__TerrainParams * output)
{
  if (!input || !output) {
    return false;
  }
  // ground_mu_hint
  output->ground_mu_hint = input->ground_mu_hint;
  // ground_mu_hint_is_set
  output->ground_mu_hint_is_set = input->ground_mu_hint_is_set;
  // grated_surfaces_mode
  if (!bosdyn_msgs__msg__TerrainParamsGratedSurfacesMode__copy(
      &(input->grated_surfaces_mode), &(output->grated_surfaces_mode)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__TerrainParams *
bosdyn_msgs__msg__TerrainParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TerrainParams * msg = (bosdyn_msgs__msg__TerrainParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__TerrainParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__TerrainParams));
  bool success = bosdyn_msgs__msg__TerrainParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__TerrainParams__destroy(bosdyn_msgs__msg__TerrainParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__TerrainParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__TerrainParams__Sequence__init(bosdyn_msgs__msg__TerrainParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TerrainParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__TerrainParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__TerrainParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__TerrainParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__TerrainParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__TerrainParams__Sequence__fini(bosdyn_msgs__msg__TerrainParams__Sequence * array)
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
      bosdyn_msgs__msg__TerrainParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__TerrainParams__Sequence *
bosdyn_msgs__msg__TerrainParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TerrainParams__Sequence * array = (bosdyn_msgs__msg__TerrainParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__TerrainParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__TerrainParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__TerrainParams__Sequence__destroy(bosdyn_msgs__msg__TerrainParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__TerrainParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__TerrainParams__Sequence__are_equal(const bosdyn_msgs__msg__TerrainParams__Sequence * lhs, const bosdyn_msgs__msg__TerrainParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__TerrainParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__TerrainParams__Sequence__copy(
  const bosdyn_msgs__msg__TerrainParams__Sequence * input,
  bosdyn_msgs__msg__TerrainParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__TerrainParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__TerrainParams * data =
      (bosdyn_msgs__msg__TerrainParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__TerrainParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__TerrainParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__TerrainParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
