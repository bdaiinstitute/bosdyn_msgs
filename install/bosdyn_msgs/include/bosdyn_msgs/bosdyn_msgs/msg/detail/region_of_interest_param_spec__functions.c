// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RegionOfInterestParamSpec.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/region_of_interest_param_spec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_and_source`
#include "bosdyn_msgs/msg/detail/region_of_interest_param_service_and_source__functions.h"
// Member `default_area`
#include "bosdyn_msgs/msg/detail/area_i__functions.h"

bool
bosdyn_msgs__msg__RegionOfInterestParamSpec__init(bosdyn_msgs__msg__RegionOfInterestParamSpec * msg)
{
  if (!msg) {
    return false;
  }
  // service_and_source
  if (!bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__init(&msg->service_and_source)) {
    bosdyn_msgs__msg__RegionOfInterestParamSpec__fini(msg);
    return false;
  }
  // service_and_source_is_set
  // default_area
  if (!bosdyn_msgs__msg__AreaI__init(&msg->default_area)) {
    bosdyn_msgs__msg__RegionOfInterestParamSpec__fini(msg);
    return false;
  }
  // default_area_is_set
  // allows_rectangle
  return true;
}

void
bosdyn_msgs__msg__RegionOfInterestParamSpec__fini(bosdyn_msgs__msg__RegionOfInterestParamSpec * msg)
{
  if (!msg) {
    return;
  }
  // service_and_source
  bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__fini(&msg->service_and_source);
  // service_and_source_is_set
  // default_area
  bosdyn_msgs__msg__AreaI__fini(&msg->default_area);
  // default_area_is_set
  // allows_rectangle
}

bool
bosdyn_msgs__msg__RegionOfInterestParamSpec__are_equal(const bosdyn_msgs__msg__RegionOfInterestParamSpec * lhs, const bosdyn_msgs__msg__RegionOfInterestParamSpec * rhs)
{
  if (!lhs || !rhs) {
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
  // default_area
  if (!bosdyn_msgs__msg__AreaI__are_equal(
      &(lhs->default_area), &(rhs->default_area)))
  {
    return false;
  }
  // default_area_is_set
  if (lhs->default_area_is_set != rhs->default_area_is_set) {
    return false;
  }
  // allows_rectangle
  if (lhs->allows_rectangle != rhs->allows_rectangle) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RegionOfInterestParamSpec__copy(
  const bosdyn_msgs__msg__RegionOfInterestParamSpec * input,
  bosdyn_msgs__msg__RegionOfInterestParamSpec * output)
{
  if (!input || !output) {
    return false;
  }
  // service_and_source
  if (!bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__copy(
      &(input->service_and_source), &(output->service_and_source)))
  {
    return false;
  }
  // service_and_source_is_set
  output->service_and_source_is_set = input->service_and_source_is_set;
  // default_area
  if (!bosdyn_msgs__msg__AreaI__copy(
      &(input->default_area), &(output->default_area)))
  {
    return false;
  }
  // default_area_is_set
  output->default_area_is_set = input->default_area_is_set;
  // allows_rectangle
  output->allows_rectangle = input->allows_rectangle;
  return true;
}

bosdyn_msgs__msg__RegionOfInterestParamSpec *
bosdyn_msgs__msg__RegionOfInterestParamSpec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RegionOfInterestParamSpec * msg = (bosdyn_msgs__msg__RegionOfInterestParamSpec *)allocator.allocate(sizeof(bosdyn_msgs__msg__RegionOfInterestParamSpec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RegionOfInterestParamSpec));
  bool success = bosdyn_msgs__msg__RegionOfInterestParamSpec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RegionOfInterestParamSpec__destroy(bosdyn_msgs__msg__RegionOfInterestParamSpec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RegionOfInterestParamSpec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence__init(bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RegionOfInterestParamSpec * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RegionOfInterestParamSpec *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RegionOfInterestParamSpec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RegionOfInterestParamSpec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RegionOfInterestParamSpec__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence__fini(bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence * array)
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
      bosdyn_msgs__msg__RegionOfInterestParamSpec__fini(&array->data[i]);
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

bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence *
bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence * array = (bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence__destroy(bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence__are_equal(const bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence * lhs, const bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RegionOfInterestParamSpec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence__copy(
  const bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence * input,
  bosdyn_msgs__msg__RegionOfInterestParamSpec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RegionOfInterestParamSpec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RegionOfInterestParamSpec * data =
      (bosdyn_msgs__msg__RegionOfInterestParamSpec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RegionOfInterestParamSpec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RegionOfInterestParamSpec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RegionOfInterestParamSpec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
