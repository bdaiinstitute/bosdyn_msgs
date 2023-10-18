// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/BosdynRecordEvent.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/bosdyn_record_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_name`
// Member `host`
#include "rosidl_runtime_c/string_functions.h"
// Member `event`
#include "bosdyn_msgs/msg/detail/event__functions.h"
// Member `additional_parameters`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_value__functions.h"

bool
bosdyn_msgs__msg__BosdynRecordEvent__init(bosdyn_msgs__msg__BosdynRecordEvent * msg)
{
  if (!msg) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__BosdynRecordEvent__fini(msg);
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__init(&msg->host)) {
    bosdyn_msgs__msg__BosdynRecordEvent__fini(msg);
    return false;
  }
  // event
  if (!bosdyn_msgs__msg__Event__init(&msg->event)) {
    bosdyn_msgs__msg__BosdynRecordEvent__fini(msg);
    return false;
  }
  // event_is_set
  // succeed_early
  // additional_parameters
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence__init(&msg->additional_parameters, 0)) {
    bosdyn_msgs__msg__BosdynRecordEvent__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__BosdynRecordEvent__fini(bosdyn_msgs__msg__BosdynRecordEvent * msg)
{
  if (!msg) {
    return;
  }
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // host
  rosidl_runtime_c__String__fini(&msg->host);
  // event
  bosdyn_msgs__msg__Event__fini(&msg->event);
  // event_is_set
  // succeed_early
  // additional_parameters
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence__fini(&msg->additional_parameters);
}

bool
bosdyn_msgs__msg__BosdynRecordEvent__are_equal(const bosdyn_msgs__msg__BosdynRecordEvent * lhs, const bosdyn_msgs__msg__BosdynRecordEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->host), &(rhs->host)))
  {
    return false;
  }
  // event
  if (!bosdyn_msgs__msg__Event__are_equal(
      &(lhs->event), &(rhs->event)))
  {
    return false;
  }
  // event_is_set
  if (lhs->event_is_set != rhs->event_is_set) {
    return false;
  }
  // succeed_early
  if (lhs->succeed_early != rhs->succeed_early) {
    return false;
  }
  // additional_parameters
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence__are_equal(
      &(lhs->additional_parameters), &(rhs->additional_parameters)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__BosdynRecordEvent__copy(
  const bosdyn_msgs__msg__BosdynRecordEvent * input,
  bosdyn_msgs__msg__BosdynRecordEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__copy(
      &(input->host), &(output->host)))
  {
    return false;
  }
  // event
  if (!bosdyn_msgs__msg__Event__copy(
      &(input->event), &(output->event)))
  {
    return false;
  }
  // event_is_set
  output->event_is_set = input->event_is_set;
  // succeed_early
  output->succeed_early = input->succeed_early;
  // additional_parameters
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence__copy(
      &(input->additional_parameters), &(output->additional_parameters)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__BosdynRecordEvent *
bosdyn_msgs__msg__BosdynRecordEvent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynRecordEvent * msg = (bosdyn_msgs__msg__BosdynRecordEvent *)allocator.allocate(sizeof(bosdyn_msgs__msg__BosdynRecordEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__BosdynRecordEvent));
  bool success = bosdyn_msgs__msg__BosdynRecordEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__BosdynRecordEvent__destroy(bosdyn_msgs__msg__BosdynRecordEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__BosdynRecordEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__BosdynRecordEvent__Sequence__init(bosdyn_msgs__msg__BosdynRecordEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynRecordEvent * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__BosdynRecordEvent *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__BosdynRecordEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__BosdynRecordEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__BosdynRecordEvent__fini(&data[i - 1]);
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
bosdyn_msgs__msg__BosdynRecordEvent__Sequence__fini(bosdyn_msgs__msg__BosdynRecordEvent__Sequence * array)
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
      bosdyn_msgs__msg__BosdynRecordEvent__fini(&array->data[i]);
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

bosdyn_msgs__msg__BosdynRecordEvent__Sequence *
bosdyn_msgs__msg__BosdynRecordEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BosdynRecordEvent__Sequence * array = (bosdyn_msgs__msg__BosdynRecordEvent__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__BosdynRecordEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__BosdynRecordEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__BosdynRecordEvent__Sequence__destroy(bosdyn_msgs__msg__BosdynRecordEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__BosdynRecordEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__BosdynRecordEvent__Sequence__are_equal(const bosdyn_msgs__msg__BosdynRecordEvent__Sequence * lhs, const bosdyn_msgs__msg__BosdynRecordEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__BosdynRecordEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__BosdynRecordEvent__Sequence__copy(
  const bosdyn_msgs__msg__BosdynRecordEvent__Sequence * input,
  bosdyn_msgs__msg__BosdynRecordEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__BosdynRecordEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__BosdynRecordEvent * data =
      (bosdyn_msgs__msg__BosdynRecordEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__BosdynRecordEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__BosdynRecordEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__BosdynRecordEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
