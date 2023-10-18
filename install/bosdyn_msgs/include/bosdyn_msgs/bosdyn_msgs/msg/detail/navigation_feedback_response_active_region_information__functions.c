// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/NavigationFeedbackResponseActiveRegionInformation.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_active_region_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `description`
// Member `service_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `region_status`
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_active_region_information_area_callback_status__functions.h"

bool
bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__init(bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation * msg)
{
  if (!msg) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__fini(msg);
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__fini(msg);
    return false;
  }
  // region_status
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformationAreaCallbackStatus__init(&msg->region_status)) {
    bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__fini(bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation * msg)
{
  if (!msg) {
    return;
  }
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // region_status
  bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformationAreaCallbackStatus__fini(&msg->region_status);
}

bool
bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__are_equal(const bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation * lhs, const bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // region_status
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformationAreaCallbackStatus__are_equal(
      &(lhs->region_status), &(rhs->region_status)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__copy(
  const bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation * input,
  bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation * output)
{
  if (!input || !output) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // region_status
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformationAreaCallbackStatus__copy(
      &(input->region_status), &(output->region_status)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation *
bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation * msg = (bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation *)allocator.allocate(sizeof(bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation));
  bool success = bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__destroy(bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence__init(bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__fini(&data[i - 1]);
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
bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence__fini(bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence * array)
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
      bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__fini(&array->data[i]);
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

bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence *
bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence * array = (bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence__destroy(bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence__are_equal(const bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence * lhs, const bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence__copy(
  const bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence * input,
  bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation * data =
      (bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
