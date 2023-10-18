// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PointCloudResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/point_cloud_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "bosdyn_msgs/msg/detail/point_cloud_response_status__functions.h"
// Member `point_cloud`
#include "bosdyn_msgs/msg/detail/point_cloud__functions.h"

bool
bosdyn_msgs__msg__PointCloudResponse__init(bosdyn_msgs__msg__PointCloudResponse * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__PointCloudResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__PointCloudResponse__fini(msg);
    return false;
  }
  // point_cloud
  if (!bosdyn_msgs__msg__PointCloud__init(&msg->point_cloud)) {
    bosdyn_msgs__msg__PointCloudResponse__fini(msg);
    return false;
  }
  // point_cloud_is_set
  return true;
}

void
bosdyn_msgs__msg__PointCloudResponse__fini(bosdyn_msgs__msg__PointCloudResponse * msg)
{
  if (!msg) {
    return;
  }
  // status
  bosdyn_msgs__msg__PointCloudResponseStatus__fini(&msg->status);
  // point_cloud
  bosdyn_msgs__msg__PointCloud__fini(&msg->point_cloud);
  // point_cloud_is_set
}

bool
bosdyn_msgs__msg__PointCloudResponse__are_equal(const bosdyn_msgs__msg__PointCloudResponse * lhs, const bosdyn_msgs__msg__PointCloudResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__PointCloudResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // point_cloud
  if (!bosdyn_msgs__msg__PointCloud__are_equal(
      &(lhs->point_cloud), &(rhs->point_cloud)))
  {
    return false;
  }
  // point_cloud_is_set
  if (lhs->point_cloud_is_set != rhs->point_cloud_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PointCloudResponse__copy(
  const bosdyn_msgs__msg__PointCloudResponse * input,
  bosdyn_msgs__msg__PointCloudResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__PointCloudResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // point_cloud
  if (!bosdyn_msgs__msg__PointCloud__copy(
      &(input->point_cloud), &(output->point_cloud)))
  {
    return false;
  }
  // point_cloud_is_set
  output->point_cloud_is_set = input->point_cloud_is_set;
  return true;
}

bosdyn_msgs__msg__PointCloudResponse *
bosdyn_msgs__msg__PointCloudResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PointCloudResponse * msg = (bosdyn_msgs__msg__PointCloudResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__PointCloudResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PointCloudResponse));
  bool success = bosdyn_msgs__msg__PointCloudResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PointCloudResponse__destroy(bosdyn_msgs__msg__PointCloudResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PointCloudResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PointCloudResponse__Sequence__init(bosdyn_msgs__msg__PointCloudResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PointCloudResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PointCloudResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PointCloudResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PointCloudResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PointCloudResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PointCloudResponse__Sequence__fini(bosdyn_msgs__msg__PointCloudResponse__Sequence * array)
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
      bosdyn_msgs__msg__PointCloudResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__PointCloudResponse__Sequence *
bosdyn_msgs__msg__PointCloudResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PointCloudResponse__Sequence * array = (bosdyn_msgs__msg__PointCloudResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PointCloudResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PointCloudResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PointCloudResponse__Sequence__destroy(bosdyn_msgs__msg__PointCloudResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PointCloudResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PointCloudResponse__Sequence__are_equal(const bosdyn_msgs__msg__PointCloudResponse__Sequence * lhs, const bosdyn_msgs__msg__PointCloudResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PointCloudResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PointCloudResponse__Sequence__copy(
  const bosdyn_msgs__msg__PointCloudResponse__Sequence * input,
  bosdyn_msgs__msg__PointCloudResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PointCloudResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PointCloudResponse * data =
      (bosdyn_msgs__msg__PointCloudResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PointCloudResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PointCloudResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PointCloudResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
