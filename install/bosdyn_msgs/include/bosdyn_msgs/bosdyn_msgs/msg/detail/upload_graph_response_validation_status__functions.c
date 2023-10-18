// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/UploadGraphResponseValidationStatus.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/upload_graph_response_validation_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `missing_waypoint_ids_in_edges`
// Member `missing_waypoint_ids_in_anchors`
// Member `waypoint_anchors_invalid_transform`
// Member `object_anchors_invalid_transform`
// Member `duplicate_waypoint_ids`
// Member `duplicate_waypoint_anchor_ids`
// Member `duplicate_object_anchor_ids`
// Member `invalid_waypoint_ids_self_edges`
#include "rosidl_runtime_c/string_functions.h"
// Member `edge_ids_invalid_transform`
// Member `duplicate_edge_ids`
#include "bosdyn_msgs/msg/detail/edge_id__functions.h"

bool
bosdyn_msgs__msg__UploadGraphResponseValidationStatus__init(bosdyn_msgs__msg__UploadGraphResponseValidationStatus * msg)
{
  if (!msg) {
    return false;
  }
  // missing_waypoint_ids_in_edges
  if (!rosidl_runtime_c__String__Sequence__init(&msg->missing_waypoint_ids_in_edges, 0)) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(msg);
    return false;
  }
  // missing_waypoint_ids_in_anchors
  if (!rosidl_runtime_c__String__Sequence__init(&msg->missing_waypoint_ids_in_anchors, 0)) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(msg);
    return false;
  }
  // edge_ids_invalid_transform
  if (!bosdyn_msgs__msg__EdgeId__Sequence__init(&msg->edge_ids_invalid_transform, 0)) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(msg);
    return false;
  }
  // waypoint_anchors_invalid_transform
  if (!rosidl_runtime_c__String__Sequence__init(&msg->waypoint_anchors_invalid_transform, 0)) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(msg);
    return false;
  }
  // object_anchors_invalid_transform
  if (!rosidl_runtime_c__String__Sequence__init(&msg->object_anchors_invalid_transform, 0)) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(msg);
    return false;
  }
  // duplicate_waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->duplicate_waypoint_ids, 0)) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(msg);
    return false;
  }
  // duplicate_waypoint_anchor_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->duplicate_waypoint_anchor_ids, 0)) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(msg);
    return false;
  }
  // duplicate_object_anchor_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->duplicate_object_anchor_ids, 0)) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(msg);
    return false;
  }
  // duplicate_edge_ids
  if (!bosdyn_msgs__msg__EdgeId__Sequence__init(&msg->duplicate_edge_ids, 0)) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(msg);
    return false;
  }
  // invalid_waypoint_ids_self_edges
  if (!rosidl_runtime_c__String__Sequence__init(&msg->invalid_waypoint_ids_self_edges, 0)) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(msg);
    return false;
  }
  // has_empty_waypoint_ids
  // has_empty_edge_ids
  // has_empty_waypoint_anchor_ids
  // has_empty_object_anchor_ids
  return true;
}

void
bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(bosdyn_msgs__msg__UploadGraphResponseValidationStatus * msg)
{
  if (!msg) {
    return;
  }
  // missing_waypoint_ids_in_edges
  rosidl_runtime_c__String__Sequence__fini(&msg->missing_waypoint_ids_in_edges);
  // missing_waypoint_ids_in_anchors
  rosidl_runtime_c__String__Sequence__fini(&msg->missing_waypoint_ids_in_anchors);
  // edge_ids_invalid_transform
  bosdyn_msgs__msg__EdgeId__Sequence__fini(&msg->edge_ids_invalid_transform);
  // waypoint_anchors_invalid_transform
  rosidl_runtime_c__String__Sequence__fini(&msg->waypoint_anchors_invalid_transform);
  // object_anchors_invalid_transform
  rosidl_runtime_c__String__Sequence__fini(&msg->object_anchors_invalid_transform);
  // duplicate_waypoint_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->duplicate_waypoint_ids);
  // duplicate_waypoint_anchor_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->duplicate_waypoint_anchor_ids);
  // duplicate_object_anchor_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->duplicate_object_anchor_ids);
  // duplicate_edge_ids
  bosdyn_msgs__msg__EdgeId__Sequence__fini(&msg->duplicate_edge_ids);
  // invalid_waypoint_ids_self_edges
  rosidl_runtime_c__String__Sequence__fini(&msg->invalid_waypoint_ids_self_edges);
  // has_empty_waypoint_ids
  // has_empty_edge_ids
  // has_empty_waypoint_anchor_ids
  // has_empty_object_anchor_ids
}

bool
bosdyn_msgs__msg__UploadGraphResponseValidationStatus__are_equal(const bosdyn_msgs__msg__UploadGraphResponseValidationStatus * lhs, const bosdyn_msgs__msg__UploadGraphResponseValidationStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // missing_waypoint_ids_in_edges
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->missing_waypoint_ids_in_edges), &(rhs->missing_waypoint_ids_in_edges)))
  {
    return false;
  }
  // missing_waypoint_ids_in_anchors
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->missing_waypoint_ids_in_anchors), &(rhs->missing_waypoint_ids_in_anchors)))
  {
    return false;
  }
  // edge_ids_invalid_transform
  if (!bosdyn_msgs__msg__EdgeId__Sequence__are_equal(
      &(lhs->edge_ids_invalid_transform), &(rhs->edge_ids_invalid_transform)))
  {
    return false;
  }
  // waypoint_anchors_invalid_transform
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->waypoint_anchors_invalid_transform), &(rhs->waypoint_anchors_invalid_transform)))
  {
    return false;
  }
  // object_anchors_invalid_transform
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->object_anchors_invalid_transform), &(rhs->object_anchors_invalid_transform)))
  {
    return false;
  }
  // duplicate_waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->duplicate_waypoint_ids), &(rhs->duplicate_waypoint_ids)))
  {
    return false;
  }
  // duplicate_waypoint_anchor_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->duplicate_waypoint_anchor_ids), &(rhs->duplicate_waypoint_anchor_ids)))
  {
    return false;
  }
  // duplicate_object_anchor_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->duplicate_object_anchor_ids), &(rhs->duplicate_object_anchor_ids)))
  {
    return false;
  }
  // duplicate_edge_ids
  if (!bosdyn_msgs__msg__EdgeId__Sequence__are_equal(
      &(lhs->duplicate_edge_ids), &(rhs->duplicate_edge_ids)))
  {
    return false;
  }
  // invalid_waypoint_ids_self_edges
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->invalid_waypoint_ids_self_edges), &(rhs->invalid_waypoint_ids_self_edges)))
  {
    return false;
  }
  // has_empty_waypoint_ids
  if (lhs->has_empty_waypoint_ids != rhs->has_empty_waypoint_ids) {
    return false;
  }
  // has_empty_edge_ids
  if (lhs->has_empty_edge_ids != rhs->has_empty_edge_ids) {
    return false;
  }
  // has_empty_waypoint_anchor_ids
  if (lhs->has_empty_waypoint_anchor_ids != rhs->has_empty_waypoint_anchor_ids) {
    return false;
  }
  // has_empty_object_anchor_ids
  if (lhs->has_empty_object_anchor_ids != rhs->has_empty_object_anchor_ids) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__UploadGraphResponseValidationStatus__copy(
  const bosdyn_msgs__msg__UploadGraphResponseValidationStatus * input,
  bosdyn_msgs__msg__UploadGraphResponseValidationStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // missing_waypoint_ids_in_edges
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->missing_waypoint_ids_in_edges), &(output->missing_waypoint_ids_in_edges)))
  {
    return false;
  }
  // missing_waypoint_ids_in_anchors
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->missing_waypoint_ids_in_anchors), &(output->missing_waypoint_ids_in_anchors)))
  {
    return false;
  }
  // edge_ids_invalid_transform
  if (!bosdyn_msgs__msg__EdgeId__Sequence__copy(
      &(input->edge_ids_invalid_transform), &(output->edge_ids_invalid_transform)))
  {
    return false;
  }
  // waypoint_anchors_invalid_transform
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->waypoint_anchors_invalid_transform), &(output->waypoint_anchors_invalid_transform)))
  {
    return false;
  }
  // object_anchors_invalid_transform
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->object_anchors_invalid_transform), &(output->object_anchors_invalid_transform)))
  {
    return false;
  }
  // duplicate_waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->duplicate_waypoint_ids), &(output->duplicate_waypoint_ids)))
  {
    return false;
  }
  // duplicate_waypoint_anchor_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->duplicate_waypoint_anchor_ids), &(output->duplicate_waypoint_anchor_ids)))
  {
    return false;
  }
  // duplicate_object_anchor_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->duplicate_object_anchor_ids), &(output->duplicate_object_anchor_ids)))
  {
    return false;
  }
  // duplicate_edge_ids
  if (!bosdyn_msgs__msg__EdgeId__Sequence__copy(
      &(input->duplicate_edge_ids), &(output->duplicate_edge_ids)))
  {
    return false;
  }
  // invalid_waypoint_ids_self_edges
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->invalid_waypoint_ids_self_edges), &(output->invalid_waypoint_ids_self_edges)))
  {
    return false;
  }
  // has_empty_waypoint_ids
  output->has_empty_waypoint_ids = input->has_empty_waypoint_ids;
  // has_empty_edge_ids
  output->has_empty_edge_ids = input->has_empty_edge_ids;
  // has_empty_waypoint_anchor_ids
  output->has_empty_waypoint_anchor_ids = input->has_empty_waypoint_anchor_ids;
  // has_empty_object_anchor_ids
  output->has_empty_object_anchor_ids = input->has_empty_object_anchor_ids;
  return true;
}

bosdyn_msgs__msg__UploadGraphResponseValidationStatus *
bosdyn_msgs__msg__UploadGraphResponseValidationStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UploadGraphResponseValidationStatus * msg = (bosdyn_msgs__msg__UploadGraphResponseValidationStatus *)allocator.allocate(sizeof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus));
  bool success = bosdyn_msgs__msg__UploadGraphResponseValidationStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__UploadGraphResponseValidationStatus__destroy(bosdyn_msgs__msg__UploadGraphResponseValidationStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence__init(bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UploadGraphResponseValidationStatus * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__UploadGraphResponseValidationStatus *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__UploadGraphResponseValidationStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(&data[i - 1]);
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
bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence__fini(bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence * array)
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
      bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(&array->data[i]);
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

bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence *
bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence * array = (bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence__destroy(bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence__are_equal(const bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence * lhs, const bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__UploadGraphResponseValidationStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence__copy(
  const bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence * input,
  bosdyn_msgs__msg__UploadGraphResponseValidationStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus * data =
      (bosdyn_msgs__msg__UploadGraphResponseValidationStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__UploadGraphResponseValidationStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__UploadGraphResponseValidationStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
