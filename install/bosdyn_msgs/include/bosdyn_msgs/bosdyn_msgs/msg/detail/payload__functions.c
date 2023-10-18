// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Payload.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/payload__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `guid`
// Member `name`
// Member `description`
// Member `label_prefix`
// Member `ipv4_address`
#include "rosidl_runtime_c/string_functions.h"
// Member `version`
#include "bosdyn_msgs/msg/detail/software_version__functions.h"
// Member `body_tform_payload`
// Member `mount_tform_payload`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `mount_frame_name`
#include "bosdyn_msgs/msg/detail/mount_frame_name__functions.h"
// Member `mass_volume_properties`
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__functions.h"
// Member `preset_configurations`
#include "bosdyn_msgs/msg/detail/payload_preset__functions.h"

bool
bosdyn_msgs__msg__Payload__init(bosdyn_msgs__msg__Payload * msg)
{
  if (!msg) {
    return false;
  }
  // guid
  if (!rosidl_runtime_c__String__init(&msg->guid)) {
    bosdyn_msgs__msg__Payload__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__Payload__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    bosdyn_msgs__msg__Payload__fini(msg);
    return false;
  }
  // label_prefix
  if (!rosidl_runtime_c__String__Sequence__init(&msg->label_prefix, 0)) {
    bosdyn_msgs__msg__Payload__fini(msg);
    return false;
  }
  // is_authorized
  // is_enabled
  // is_noncompute_payload
  // version
  if (!bosdyn_msgs__msg__SoftwareVersion__init(&msg->version)) {
    bosdyn_msgs__msg__Payload__fini(msg);
    return false;
  }
  // version_is_set
  // body_tform_payload
  if (!geometry_msgs__msg__Pose__init(&msg->body_tform_payload)) {
    bosdyn_msgs__msg__Payload__fini(msg);
    return false;
  }
  // body_tform_payload_is_set
  // mount_tform_payload
  if (!geometry_msgs__msg__Pose__init(&msg->mount_tform_payload)) {
    bosdyn_msgs__msg__Payload__fini(msg);
    return false;
  }
  // mount_tform_payload_is_set
  // mount_frame_name
  if (!bosdyn_msgs__msg__MountFrameName__init(&msg->mount_frame_name)) {
    bosdyn_msgs__msg__Payload__fini(msg);
    return false;
  }
  // liveness_timeout_secs
  // ipv4_address
  if (!rosidl_runtime_c__String__init(&msg->ipv4_address)) {
    bosdyn_msgs__msg__Payload__fini(msg);
    return false;
  }
  // link_speed
  // mass_volume_properties
  if (!bosdyn_msgs__msg__PayloadMassVolumeProperties__init(&msg->mass_volume_properties)) {
    bosdyn_msgs__msg__Payload__fini(msg);
    return false;
  }
  // mass_volume_properties_is_set
  // preset_configurations
  if (!bosdyn_msgs__msg__PayloadPreset__Sequence__init(&msg->preset_configurations, 0)) {
    bosdyn_msgs__msg__Payload__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Payload__fini(bosdyn_msgs__msg__Payload * msg)
{
  if (!msg) {
    return;
  }
  // guid
  rosidl_runtime_c__String__fini(&msg->guid);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // label_prefix
  rosidl_runtime_c__String__Sequence__fini(&msg->label_prefix);
  // is_authorized
  // is_enabled
  // is_noncompute_payload
  // version
  bosdyn_msgs__msg__SoftwareVersion__fini(&msg->version);
  // version_is_set
  // body_tform_payload
  geometry_msgs__msg__Pose__fini(&msg->body_tform_payload);
  // body_tform_payload_is_set
  // mount_tform_payload
  geometry_msgs__msg__Pose__fini(&msg->mount_tform_payload);
  // mount_tform_payload_is_set
  // mount_frame_name
  bosdyn_msgs__msg__MountFrameName__fini(&msg->mount_frame_name);
  // liveness_timeout_secs
  // ipv4_address
  rosidl_runtime_c__String__fini(&msg->ipv4_address);
  // link_speed
  // mass_volume_properties
  bosdyn_msgs__msg__PayloadMassVolumeProperties__fini(&msg->mass_volume_properties);
  // mass_volume_properties_is_set
  // preset_configurations
  bosdyn_msgs__msg__PayloadPreset__Sequence__fini(&msg->preset_configurations);
}

bool
bosdyn_msgs__msg__Payload__are_equal(const bosdyn_msgs__msg__Payload * lhs, const bosdyn_msgs__msg__Payload * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // guid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->guid), &(rhs->guid)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // label_prefix
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->label_prefix), &(rhs->label_prefix)))
  {
    return false;
  }
  // is_authorized
  if (lhs->is_authorized != rhs->is_authorized) {
    return false;
  }
  // is_enabled
  if (lhs->is_enabled != rhs->is_enabled) {
    return false;
  }
  // is_noncompute_payload
  if (lhs->is_noncompute_payload != rhs->is_noncompute_payload) {
    return false;
  }
  // version
  if (!bosdyn_msgs__msg__SoftwareVersion__are_equal(
      &(lhs->version), &(rhs->version)))
  {
    return false;
  }
  // version_is_set
  if (lhs->version_is_set != rhs->version_is_set) {
    return false;
  }
  // body_tform_payload
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->body_tform_payload), &(rhs->body_tform_payload)))
  {
    return false;
  }
  // body_tform_payload_is_set
  if (lhs->body_tform_payload_is_set != rhs->body_tform_payload_is_set) {
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
  // liveness_timeout_secs
  if (lhs->liveness_timeout_secs != rhs->liveness_timeout_secs) {
    return false;
  }
  // ipv4_address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ipv4_address), &(rhs->ipv4_address)))
  {
    return false;
  }
  // link_speed
  if (lhs->link_speed != rhs->link_speed) {
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
  // preset_configurations
  if (!bosdyn_msgs__msg__PayloadPreset__Sequence__are_equal(
      &(lhs->preset_configurations), &(rhs->preset_configurations)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Payload__copy(
  const bosdyn_msgs__msg__Payload * input,
  bosdyn_msgs__msg__Payload * output)
{
  if (!input || !output) {
    return false;
  }
  // guid
  if (!rosidl_runtime_c__String__copy(
      &(input->guid), &(output->guid)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // label_prefix
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->label_prefix), &(output->label_prefix)))
  {
    return false;
  }
  // is_authorized
  output->is_authorized = input->is_authorized;
  // is_enabled
  output->is_enabled = input->is_enabled;
  // is_noncompute_payload
  output->is_noncompute_payload = input->is_noncompute_payload;
  // version
  if (!bosdyn_msgs__msg__SoftwareVersion__copy(
      &(input->version), &(output->version)))
  {
    return false;
  }
  // version_is_set
  output->version_is_set = input->version_is_set;
  // body_tform_payload
  if (!geometry_msgs__msg__Pose__copy(
      &(input->body_tform_payload), &(output->body_tform_payload)))
  {
    return false;
  }
  // body_tform_payload_is_set
  output->body_tform_payload_is_set = input->body_tform_payload_is_set;
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
  // liveness_timeout_secs
  output->liveness_timeout_secs = input->liveness_timeout_secs;
  // ipv4_address
  if (!rosidl_runtime_c__String__copy(
      &(input->ipv4_address), &(output->ipv4_address)))
  {
    return false;
  }
  // link_speed
  output->link_speed = input->link_speed;
  // mass_volume_properties
  if (!bosdyn_msgs__msg__PayloadMassVolumeProperties__copy(
      &(input->mass_volume_properties), &(output->mass_volume_properties)))
  {
    return false;
  }
  // mass_volume_properties_is_set
  output->mass_volume_properties_is_set = input->mass_volume_properties_is_set;
  // preset_configurations
  if (!bosdyn_msgs__msg__PayloadPreset__Sequence__copy(
      &(input->preset_configurations), &(output->preset_configurations)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Payload *
bosdyn_msgs__msg__Payload__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Payload * msg = (bosdyn_msgs__msg__Payload *)allocator.allocate(sizeof(bosdyn_msgs__msg__Payload), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Payload));
  bool success = bosdyn_msgs__msg__Payload__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Payload__destroy(bosdyn_msgs__msg__Payload * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Payload__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Payload__Sequence__init(bosdyn_msgs__msg__Payload__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Payload * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Payload *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Payload), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Payload__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Payload__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Payload__Sequence__fini(bosdyn_msgs__msg__Payload__Sequence * array)
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
      bosdyn_msgs__msg__Payload__fini(&array->data[i]);
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

bosdyn_msgs__msg__Payload__Sequence *
bosdyn_msgs__msg__Payload__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Payload__Sequence * array = (bosdyn_msgs__msg__Payload__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Payload__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Payload__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Payload__Sequence__destroy(bosdyn_msgs__msg__Payload__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Payload__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Payload__Sequence__are_equal(const bosdyn_msgs__msg__Payload__Sequence * lhs, const bosdyn_msgs__msg__Payload__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Payload__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Payload__Sequence__copy(
  const bosdyn_msgs__msg__Payload__Sequence * input,
  bosdyn_msgs__msg__Payload__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Payload);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Payload * data =
      (bosdyn_msgs__msg__Payload *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Payload__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Payload__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Payload__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
