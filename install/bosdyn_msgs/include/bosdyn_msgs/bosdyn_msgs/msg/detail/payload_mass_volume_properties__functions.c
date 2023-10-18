// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PayloadMassVolumeProperties.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `com_pos_rt_payload`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `moi_tensor`
#include "bosdyn_msgs/msg/detail/moment_of_intertia__functions.h"
// Member `bounding_box`
#include "bosdyn_msgs/msg/detail/box3_with_frame__functions.h"
// Member `joint_limits`
#include "bosdyn_msgs/msg/detail/joint_limits__functions.h"

bool
bosdyn_msgs__msg__PayloadMassVolumeProperties__init(bosdyn_msgs__msg__PayloadMassVolumeProperties * msg)
{
  if (!msg) {
    return false;
  }
  // total_mass
  // com_pos_rt_payload
  if (!geometry_msgs__msg__Vector3__init(&msg->com_pos_rt_payload)) {
    bosdyn_msgs__msg__PayloadMassVolumeProperties__fini(msg);
    return false;
  }
  // com_pos_rt_payload_is_set
  // moi_tensor
  if (!bosdyn_msgs__msg__MomentOfIntertia__init(&msg->moi_tensor)) {
    bosdyn_msgs__msg__PayloadMassVolumeProperties__fini(msg);
    return false;
  }
  // moi_tensor_is_set
  // bounding_box
  if (!bosdyn_msgs__msg__Box3WithFrame__Sequence__init(&msg->bounding_box, 0)) {
    bosdyn_msgs__msg__PayloadMassVolumeProperties__fini(msg);
    return false;
  }
  // joint_limits
  if (!bosdyn_msgs__msg__JointLimits__Sequence__init(&msg->joint_limits, 0)) {
    bosdyn_msgs__msg__PayloadMassVolumeProperties__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__PayloadMassVolumeProperties__fini(bosdyn_msgs__msg__PayloadMassVolumeProperties * msg)
{
  if (!msg) {
    return;
  }
  // total_mass
  // com_pos_rt_payload
  geometry_msgs__msg__Vector3__fini(&msg->com_pos_rt_payload);
  // com_pos_rt_payload_is_set
  // moi_tensor
  bosdyn_msgs__msg__MomentOfIntertia__fini(&msg->moi_tensor);
  // moi_tensor_is_set
  // bounding_box
  bosdyn_msgs__msg__Box3WithFrame__Sequence__fini(&msg->bounding_box);
  // joint_limits
  bosdyn_msgs__msg__JointLimits__Sequence__fini(&msg->joint_limits);
}

bool
bosdyn_msgs__msg__PayloadMassVolumeProperties__are_equal(const bosdyn_msgs__msg__PayloadMassVolumeProperties * lhs, const bosdyn_msgs__msg__PayloadMassVolumeProperties * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // total_mass
  if (lhs->total_mass != rhs->total_mass) {
    return false;
  }
  // com_pos_rt_payload
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->com_pos_rt_payload), &(rhs->com_pos_rt_payload)))
  {
    return false;
  }
  // com_pos_rt_payload_is_set
  if (lhs->com_pos_rt_payload_is_set != rhs->com_pos_rt_payload_is_set) {
    return false;
  }
  // moi_tensor
  if (!bosdyn_msgs__msg__MomentOfIntertia__are_equal(
      &(lhs->moi_tensor), &(rhs->moi_tensor)))
  {
    return false;
  }
  // moi_tensor_is_set
  if (lhs->moi_tensor_is_set != rhs->moi_tensor_is_set) {
    return false;
  }
  // bounding_box
  if (!bosdyn_msgs__msg__Box3WithFrame__Sequence__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  // joint_limits
  if (!bosdyn_msgs__msg__JointLimits__Sequence__are_equal(
      &(lhs->joint_limits), &(rhs->joint_limits)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PayloadMassVolumeProperties__copy(
  const bosdyn_msgs__msg__PayloadMassVolumeProperties * input,
  bosdyn_msgs__msg__PayloadMassVolumeProperties * output)
{
  if (!input || !output) {
    return false;
  }
  // total_mass
  output->total_mass = input->total_mass;
  // com_pos_rt_payload
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->com_pos_rt_payload), &(output->com_pos_rt_payload)))
  {
    return false;
  }
  // com_pos_rt_payload_is_set
  output->com_pos_rt_payload_is_set = input->com_pos_rt_payload_is_set;
  // moi_tensor
  if (!bosdyn_msgs__msg__MomentOfIntertia__copy(
      &(input->moi_tensor), &(output->moi_tensor)))
  {
    return false;
  }
  // moi_tensor_is_set
  output->moi_tensor_is_set = input->moi_tensor_is_set;
  // bounding_box
  if (!bosdyn_msgs__msg__Box3WithFrame__Sequence__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  // joint_limits
  if (!bosdyn_msgs__msg__JointLimits__Sequence__copy(
      &(input->joint_limits), &(output->joint_limits)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__PayloadMassVolumeProperties *
bosdyn_msgs__msg__PayloadMassVolumeProperties__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PayloadMassVolumeProperties * msg = (bosdyn_msgs__msg__PayloadMassVolumeProperties *)allocator.allocate(sizeof(bosdyn_msgs__msg__PayloadMassVolumeProperties), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PayloadMassVolumeProperties));
  bool success = bosdyn_msgs__msg__PayloadMassVolumeProperties__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PayloadMassVolumeProperties__destroy(bosdyn_msgs__msg__PayloadMassVolumeProperties * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PayloadMassVolumeProperties__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence__init(bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PayloadMassVolumeProperties * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PayloadMassVolumeProperties *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PayloadMassVolumeProperties), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PayloadMassVolumeProperties__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PayloadMassVolumeProperties__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence__fini(bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence * array)
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
      bosdyn_msgs__msg__PayloadMassVolumeProperties__fini(&array->data[i]);
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

bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence *
bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence * array = (bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence__destroy(bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence__are_equal(const bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence * lhs, const bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PayloadMassVolumeProperties__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence__copy(
  const bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence * input,
  bosdyn_msgs__msg__PayloadMassVolumeProperties__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PayloadMassVolumeProperties);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PayloadMassVolumeProperties * data =
      (bosdyn_msgs__msg__PayloadMassVolumeProperties *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PayloadMassVolumeProperties__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PayloadMassVolumeProperties__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PayloadMassVolumeProperties__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
