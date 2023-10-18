// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RegionOfInterestParamServiceAndSource.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/region_of_interest_param_service_and_source__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service`
// Member `source`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__init(bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource * msg)
{
  if (!msg) {
    return false;
  }
  // service
  if (!rosidl_runtime_c__String__init(&msg->service)) {
    bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__fini(msg);
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__fini(bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource * msg)
{
  if (!msg) {
    return;
  }
  // service
  rosidl_runtime_c__String__fini(&msg->service);
  // source
  rosidl_runtime_c__String__fini(&msg->source);
}

bool
bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__are_equal(const bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource * lhs, const bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // service
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service), &(rhs->service)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__copy(
  const bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource * input,
  bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource * output)
{
  if (!input || !output) {
    return false;
  }
  // service
  if (!rosidl_runtime_c__String__copy(
      &(input->service), &(output->service)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource *
bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource * msg = (bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource *)allocator.allocate(sizeof(bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource));
  bool success = bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__destroy(bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence__init(bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence__fini(bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence * array)
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
      bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__fini(&array->data[i]);
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

bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence *
bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence * array = (bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence__destroy(bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence__are_equal(const bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence * lhs, const bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence__copy(
  const bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence * input,
  bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource * data =
      (bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RegionOfInterestParamServiceAndSource__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
