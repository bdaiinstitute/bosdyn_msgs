// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PayloadPreset.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/payload_preset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `preset_name`
// Member `description`
// Member `label_prefix`
#include "rosidl_runtime_c/string_functions.h"
// Member `mount_tform_payload`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `mount_frame_name`
#include "bosdyn_msgs/msg/detail/mount_frame_name__functions.h"
// Member `mass_volume_properties`
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__functions.h"

bool
bosdyn_msgs__msg__PayloadPreset__init(bosdyn_msgs__msg__PayloadPreset * msg)
{
  if (!msg) {
    return false;
  }
  // preset_name
  if (!rosidl_runtime_c__String__init(&msg->preset_name)) {
    bosdyn_msgs__msg__PayloadPreset__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    bosdyn_msgs__msg__PayloadPreset__fini(msg);
    return false;
  }
  // mount_tform_payload
  if (!geometry_msgs__msg__Pose__init(&msg->mount_tform_payload)) {
    bosdyn_msgs__msg__PayloadPreset__fini(msg);
    return false;
  }
  // mount_tform_payload_is_set
  // mount_frame_name
  if (!bosdyn_msgs__msg__MountFrameName__init(&msg->mount_frame_name)) {
    bosdyn_msgs__msg__PayloadPreset__fini(msg);
    return false;
  }
  // mass_volume_properties
  if (!bosdyn_msgs__msg__PayloadMassVolumeProperties__init(&msg->mass_volume_properties)) {
    bosdyn_msgs__msg__PayloadPreset__fini(msg);
    return false;
  }
  // mass_volume_properties_is_set
  // label_prefix
  if (!rosidl_runtime_c__String__Sequence__init(&msg->label_prefix, 0)) {
    bosdyn_msgs__msg__PayloadPreset__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__PayloadPreset__fini(bosdyn_msgs__msg__PayloadPreset * msg)
{
  if (!msg) {
    return;
  }
  // preset_name
  rosidl_runtime_c__String__fini(&msg->preset_name);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // mount_tform_payload
  geometry_msgs__msg__Pose__fini(&msg->mount_tform_payload);
  // mount_tform_payload_is_set
  // mount_frame_name
  bosdyn_msgs__msg__MountFrameName__fini(&msg->mount_frame_name);
  // mass_volume_properties
  bosdyn_msgs__msg__PayloadMassVolumeProperties__fini(&msg->mass_volume_properties);
  // mass_volume_properties_is_set
  // label_prefix
  rosidl_runtime_c__String__Sequence__fini(&msg->label_prefix);
}

bool
bosdyn_msgs__msg__PayloadPreset__are_equal(const bosdyn_msgs__msg__PayloadPreset * lhs, const bosdyn_msgs__msg__PayloadPreset * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // preset_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->preset_name), &(rhs->preset_name)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // mount_tform_payload
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->mount_tform_payload), &(rhs->mount_tform_payload)))
  {
    return false;
  }
  // mount_tform_payload_is_set
  if (lhs->mount_tform_payload_is_set != rhs->mount_tform_payload_is_set) {
    return false;
  }
  // mount_frame_name
  if (!bosdyn_msgs__msg__MountFrameName__are_equal(
      &(lhs->mount_frame_name), &(rhs->mount_frame_name)))
  {
    return false;
  }
  // mass_volume_properties
  if (!bosdyn_msgs__msg__PayloadMassVolumeProperties__are_equal(
      &(lhs->mass_volume_properties), &(rhs->mass_volume_properties)))
  {
    return false;
  }
  // mass_volume_properties_is_set
  if (lhs->mass_volume_properties_is_set != rhs->mass_volume_properties_is_set) {
    return false;
  }
  // label_prefix
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->label_prefix), &(rhs->label_prefix)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PayloadPreset__copy(
  const bosdyn_msgs__msg__PayloadPreset * input,
  bosdyn_msgs__msg__PayloadPreset * output)
{
  if (!input || !output) {
    return false;
  }
  // preset_name
  if (!rosidl_runtime_c__String__copy(
      &(input->preset_name), &(output->preset_name)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // mount_tform_payload
  if (!geometry_msgs__msg__Pose__copy(
      &(input->mount_tform_payload), &(output->mount_tform_payload)))
  {
    return false;
  }
  // mount_tform_payload_is_set
  output->mount_tform_payload_is_set = input->mount_tform_payload_is_set;
  // mount_frame_name
  if (!bosdyn_msgs__msg__MountFrameName__copy(
      &(input->mount_frame_name), &(output->mount_frame_name)))
  {
    return false;
  }
  // mass_volume_properties
  if (!bosdyn_msgs__msg__PayloadMassVolumeProperties__copy(
      &(input->mass_volume_properties), &(output->mass_volume_properties)))
  {
    return false;
  }
  // mass_volume_properties_is_set
  output->mass_volume_properties_is_set = input->mass_volume_properties_is_set;
  // label_prefix
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->label_prefix), &(output->label_prefix)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__PayloadPreset *
bosdyn_msgs__msg__PayloadPreset__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PayloadPreset * msg = (bosdyn_msgs__msg__PayloadPreset *)allocator.allocate(sizeof(bosdyn_msgs__msg__PayloadPreset), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PayloadPreset));
  bool success = bosdyn_msgs__msg__PayloadPreset__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PayloadPreset__destroy(bosdyn_msgs__msg__PayloadPreset * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PayloadPreset__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PayloadPreset__Sequence__init(bosdyn_msgs__msg__PayloadPreset__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PayloadPreset * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PayloadPreset *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PayloadPreset), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PayloadPreset__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PayloadPreset__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PayloadPreset__Sequence__fini(bosdyn_msgs__msg__PayloadPreset__Sequence * array)
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
      bosdyn_msgs__msg__PayloadPreset__fini(&array->data[i]);
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

bosdyn_msgs__msg__PayloadPreset__Sequence *
bosdyn_msgs__msg__PayloadPreset__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PayloadPreset__Sequence * array = (bosdyn_msgs__msg__PayloadPreset__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PayloadPreset__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PayloadPreset__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PayloadPreset__Sequence__destroy(bosdyn_msgs__msg__PayloadPreset__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PayloadPreset__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PayloadPreset__Sequence__are_equal(const bosdyn_msgs__msg__PayloadPreset__Sequence * lhs, const bosdyn_msgs__msg__PayloadPreset__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PayloadPreset__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PayloadPreset__Sequence__copy(
  const bosdyn_msgs__msg__PayloadPreset__Sequence * input,
  bosdyn_msgs__msg__PayloadPreset__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PayloadPreset);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PayloadPreset * data =
      (bosdyn_msgs__msg__PayloadPreset *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PayloadPreset__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PayloadPreset__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PayloadPreset__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
