// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RegionOfInterestParam.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/region_of_interest_param__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `area`
#include "bosdyn_msgs/msg/detail/area_i__functions.h"
// Member `service_and_source`
#include "bosdyn_msgs/msg/detail/region_of_interest_param_service_and_source__functions.h"

bool
bosdyn_msgs__msg__RegionOfInterestParam__init(bosdyn_msgs__msg__RegionOfInterestParam * msg)
{
  if (!msg) {
    return false;
  }
  // area
  if (!bosdyn_msgs__msg__AreaI__init(&msg->area)) {
    bosdyn_msgs__msg__RegionOfInterestParam__fini(msg);
    return false;
  }
  // area_is_set
  // service_and_source
  if (!bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__init(&msg->service_and_source)) {
    bosdyn_msgs__msg__RegionOfInterestParam__fini(msg);
    return false;
  }
  // service_and_source_is_set
  // image_cols
  // image_rows
  return true;
}

void
bosdyn_msgs__msg__RegionOfInterestParam__fini(bosdyn_msgs__msg__RegionOfInterestParam * msg)
{
  if (!msg) {
    return;
  }
  // area
  bosdyn_msgs__msg__AreaI__fini(&msg->area);
  // area_is_set
  // service_and_source
  bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__fini(&msg->service_and_source);
  // service_and_source_is_set
  // image_cols
  // image_rows
}

bool
bosdyn_msgs__msg__RegionOfInterestParam__are_equal(const bosdyn_msgs__msg__RegionOfInterestParam * lhs, const bosdyn_msgs__msg__RegionOfInterestParam * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // area
  if (!bosdyn_msgs__msg__AreaI__are_equal(
      &(lhs->area), &(rhs->area)))
  {
    return false;
  }
  // area_is_set
  if (lhs->area_is_set != rhs->area_is_set) {
    return false;
  }
  // service_and_source
  if (!bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__are_equal(
      &(lhs->service_and_source), &(rhs->service_and_source)))
  {
    return false;
  }
  // service_and_source_is_set
  if (lhs->service_and_source_is_set != rhs->service_and_source_is_set) {
    return false;
  }
  // image_cols
  if (lhs->image_cols != rhs->image_cols) {
    return false;
  }
  // image_rows
  if (lhs->image_rows != rhs->image_rows) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RegionOfInterestParam__copy(
  const bosdyn_msgs__msg__RegionOfInterestParam * input,
  bosdyn_msgs__msg__RegionOfInterestParam * output)
{
  if (!input || !output) {
    return false;
  }
  // area
  if (!bosdyn_msgs__msg__AreaI__copy(
      &(input->area), &(output->area)))
  {
    return false;
  }
  // area_is_set
  output->area_is_set = input->area_is_set;
  // service_and_source
  if (!bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__copy(
      &(input->service_and_source), &(output->service_and_source)))
  {
    return false;
  }
  // service_and_source_is_set
  output->service_and_source_is_set = input->service_and_source_is_set;
  // image_cols
  output->image_cols = input->image_cols;
  // image_rows
  output->image_rows = input->image_rows;
  return true;
}

bosdyn_msgs__msg__RegionOfInterestParam *
bosdyn_msgs__msg__RegionOfInterestParam__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RegionOfInterestParam * msg = (bosdyn_msgs__msg__RegionOfInterestParam *)allocator.allocate(sizeof(bosdyn_msgs__msg__RegionOfInterestParam), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RegionOfInterestParam));
  bool success = bosdyn_msgs__msg__RegionOfInterestParam__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RegionOfInterestParam__destroy(bosdyn_msgs__msg__RegionOfInterestParam * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RegionOfInterestParam__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RegionOfInterestParam__Sequence__init(bosdyn_msgs__msg__RegionOfInterestParam__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RegionOfInterestParam * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RegionOfInterestParam *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RegionOfInterestParam), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RegionOfInterestParam__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RegionOfInterestParam__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RegionOfInterestParam__Sequence__fini(bosdyn_msgs__msg__RegionOfInterestParam__Sequence * array)
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
      bosdyn_msgs__msg__RegionOfInterestParam__fini(&array->data[i]);
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

bosdyn_msgs__msg__RegionOfInterestParam__Sequence *
bosdyn_msgs__msg__RegionOfInterestParam__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RegionOfInterestParam__Sequence * array = (bosdyn_msgs__msg__RegionOfInterestParam__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RegionOfInterestParam__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RegionOfInterestParam__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RegionOfInterestParam__Sequence__destroy(bosdyn_msgs__msg__RegionOfInterestParam__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RegionOfInterestParam__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RegionOfInterestParam__Sequence__are_equal(const bosdyn_msgs__msg__RegionOfInterestParam__Sequence * lhs, const bosdyn_msgs__msg__RegionOfInterestParam__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RegionOfInterestParam__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RegionOfInterestParam__Sequence__copy(
  const bosdyn_msgs__msg__RegionOfInterestParam__Sequence * input,
  bosdyn_msgs__msg__RegionOfInterestParam__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RegionOfInterestParam);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RegionOfInterestParam * data =
      (bosdyn_msgs__msg__RegionOfInterestParam *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RegionOfInterestParam__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RegionOfInterestParam__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RegionOfInterestParam__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
