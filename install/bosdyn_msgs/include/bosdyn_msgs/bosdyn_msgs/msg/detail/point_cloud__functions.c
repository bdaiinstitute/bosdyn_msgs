// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PointCloud.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/point_cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `source`
#include "bosdyn_msgs/msg/detail/point_cloud_source__functions.h"
// Member `encoding`
#include "bosdyn_msgs/msg/detail/point_cloud_encoding__functions.h"
// Member `encoding_parameters`
#include "bosdyn_msgs/msg/detail/point_cloud_encoding_parameters__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bosdyn_msgs__msg__PointCloud__init(bosdyn_msgs__msg__PointCloud * msg)
{
  if (!msg) {
    return false;
  }
  // source
  if (!bosdyn_msgs__msg__PointCloudSource__init(&msg->source)) {
    bosdyn_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  // source_is_set
  // num_points
  // encoding
  if (!bosdyn_msgs__msg__PointCloudEncoding__init(&msg->encoding)) {
    bosdyn_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  // encoding_parameters
  if (!bosdyn_msgs__msg__PointCloudEncodingParameters__init(&msg->encoding_parameters)) {
    bosdyn_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  // encoding_parameters_is_set
  // data
  if (!rosidl_runtime_c__octet__Sequence__init(&msg->data, 0)) {
    bosdyn_msgs__msg__PointCloud__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__PointCloud__fini(bosdyn_msgs__msg__PointCloud * msg)
{
  if (!msg) {
    return;
  }
  // source
  bosdyn_msgs__msg__PointCloudSource__fini(&msg->source);
  // source_is_set
  // num_points
  // encoding
  bosdyn_msgs__msg__PointCloudEncoding__fini(&msg->encoding);
  // encoding_parameters
  bosdyn_msgs__msg__PointCloudEncodingParameters__fini(&msg->encoding_parameters);
  // encoding_parameters_is_set
  // data
  rosidl_runtime_c__octet__Sequence__fini(&msg->data);
}

bool
bosdyn_msgs__msg__PointCloud__are_equal(const bosdyn_msgs__msg__PointCloud * lhs, const bosdyn_msgs__msg__PointCloud * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // source
  if (!bosdyn_msgs__msg__PointCloudSource__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // source_is_set
  if (lhs->source_is_set != rhs->source_is_set) {
    return false;
  }
  // num_points
  if (lhs->num_points != rhs->num_points) {
    return false;
  }
  // encoding
  if (!bosdyn_msgs__msg__PointCloudEncoding__are_equal(
      &(lhs->encoding), &(rhs->encoding)))
  {
    return false;
  }
  // encoding_parameters
  if (!bosdyn_msgs__msg__PointCloudEncodingParameters__are_equal(
      &(lhs->encoding_parameters), &(rhs->encoding_parameters)))
  {
    return false;
  }
  // encoding_parameters_is_set
  if (lhs->encoding_parameters_is_set != rhs->encoding_parameters_is_set) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__octet__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PointCloud__copy(
  const bosdyn_msgs__msg__PointCloud * input,
  bosdyn_msgs__msg__PointCloud * output)
{
  if (!input || !output) {
    return false;
  }
  // source
  if (!bosdyn_msgs__msg__PointCloudSource__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // source_is_set
  output->source_is_set = input->source_is_set;
  // num_points
  output->num_points = input->num_points;
  // encoding
  if (!bosdyn_msgs__msg__PointCloudEncoding__copy(
      &(input->encoding), &(output->encoding)))
  {
    return false;
  }
  // encoding_parameters
  if (!bosdyn_msgs__msg__PointCloudEncodingParameters__copy(
      &(input->encoding_parameters), &(output->encoding_parameters)))
  {
    return false;
  }
  // encoding_parameters_is_set
  output->encoding_parameters_is_set = input->encoding_parameters_is_set;
  // data
  if (!rosidl_runtime_c__octet__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__PointCloud *
bosdyn_msgs__msg__PointCloud__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PointCloud * msg = (bosdyn_msgs__msg__PointCloud *)allocator.allocate(sizeof(bosdyn_msgs__msg__PointCloud), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PointCloud));
  bool success = bosdyn_msgs__msg__PointCloud__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PointCloud__destroy(bosdyn_msgs__msg__PointCloud * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PointCloud__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PointCloud__Sequence__init(bosdyn_msgs__msg__PointCloud__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PointCloud * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PointCloud *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PointCloud), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PointCloud__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PointCloud__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PointCloud__Sequence__fini(bosdyn_msgs__msg__PointCloud__Sequence * array)
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
      bosdyn_msgs__msg__PointCloud__fini(&array->data[i]);
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

bosdyn_msgs__msg__PointCloud__Sequence *
bosdyn_msgs__msg__PointCloud__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PointCloud__Sequence * array = (bosdyn_msgs__msg__PointCloud__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PointCloud__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PointCloud__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PointCloud__Sequence__destroy(bosdyn_msgs__msg__PointCloud__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PointCloud__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PointCloud__Sequence__are_equal(const bosdyn_msgs__msg__PointCloud__Sequence * lhs, const bosdyn_msgs__msg__PointCloud__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PointCloud__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PointCloud__Sequence__copy(
  const bosdyn_msgs__msg__PointCloud__Sequence * input,
  bosdyn_msgs__msg__PointCloud__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PointCloud);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PointCloud * data =
      (bosdyn_msgs__msg__PointCloud *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PointCloud__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PointCloud__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PointCloud__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
