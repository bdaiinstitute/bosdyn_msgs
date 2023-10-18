// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PointCloudEncodingParameters.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/point_cloud_encoding_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__PointCloudEncodingParameters__init(bosdyn_msgs__msg__PointCloudEncodingParameters * msg)
{
  if (!msg) {
    return false;
  }
  // scale_factor
  // max_x
  // max_y
  // max_z
  // remapping_constant
  // bytes_per_point
  return true;
}

void
bosdyn_msgs__msg__PointCloudEncodingParameters__fini(bosdyn_msgs__msg__PointCloudEncodingParameters * msg)
{
  if (!msg) {
    return;
  }
  // scale_factor
  // max_x
  // max_y
  // max_z
  // remapping_constant
  // bytes_per_point
}

bool
bosdyn_msgs__msg__PointCloudEncodingParameters__are_equal(const bosdyn_msgs__msg__PointCloudEncodingParameters * lhs, const bosdyn_msgs__msg__PointCloudEncodingParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scale_factor
  if (lhs->scale_factor != rhs->scale_factor) {
    return false;
  }
  // max_x
  if (lhs->max_x != rhs->max_x) {
    return false;
  }
  // max_y
  if (lhs->max_y != rhs->max_y) {
    return false;
  }
  // max_z
  if (lhs->max_z != rhs->max_z) {
    return false;
  }
  // remapping_constant
  if (lhs->remapping_constant != rhs->remapping_constant) {
    return false;
  }
  // bytes_per_point
  if (lhs->bytes_per_point != rhs->bytes_per_point) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PointCloudEncodingParameters__copy(
  const bosdyn_msgs__msg__PointCloudEncodingParameters * input,
  bosdyn_msgs__msg__PointCloudEncodingParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // scale_factor
  output->scale_factor = input->scale_factor;
  // max_x
  output->max_x = input->max_x;
  // max_y
  output->max_y = input->max_y;
  // max_z
  output->max_z = input->max_z;
  // remapping_constant
  output->remapping_constant = input->remapping_constant;
  // bytes_per_point
  output->bytes_per_point = input->bytes_per_point;
  return true;
}

bosdyn_msgs__msg__PointCloudEncodingParameters *
bosdyn_msgs__msg__PointCloudEncodingParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PointCloudEncodingParameters * msg = (bosdyn_msgs__msg__PointCloudEncodingParameters *)allocator.allocate(sizeof(bosdyn_msgs__msg__PointCloudEncodingParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PointCloudEncodingParameters));
  bool success = bosdyn_msgs__msg__PointCloudEncodingParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PointCloudEncodingParameters__destroy(bosdyn_msgs__msg__PointCloudEncodingParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PointCloudEncodingParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence__init(bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PointCloudEncodingParameters * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PointCloudEncodingParameters *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PointCloudEncodingParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PointCloudEncodingParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PointCloudEncodingParameters__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence__fini(bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence * array)
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
      bosdyn_msgs__msg__PointCloudEncodingParameters__fini(&array->data[i]);
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

bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence *
bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence * array = (bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence__destroy(bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence__are_equal(const bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence * lhs, const bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PointCloudEncodingParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence__copy(
  const bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence * input,
  bosdyn_msgs__msg__PointCloudEncodingParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PointCloudEncodingParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PointCloudEncodingParameters * data =
      (bosdyn_msgs__msg__PointCloudEncodingParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PointCloudEncodingParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PointCloudEncodingParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PointCloudEncodingParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
