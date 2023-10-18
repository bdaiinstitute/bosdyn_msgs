// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/AreaCallbackServiceError.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/area_callback_service_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `missing_services`
#include "rosidl_runtime_c/string_functions.h"
// Member `faulted_services`
#include "bosdyn_msgs/msg/detail/service_fault__functions.h"

bool
bosdyn_msgs__msg__AreaCallbackServiceError__init(bosdyn_msgs__msg__AreaCallbackServiceError * msg)
{
  if (!msg) {
    return false;
  }
  // missing_services
  if (!rosidl_runtime_c__String__Sequence__init(&msg->missing_services, 0)) {
    bosdyn_msgs__msg__AreaCallbackServiceError__fini(msg);
    return false;
  }
  // faulted_services
  if (!bosdyn_msgs__msg__ServiceFault__Sequence__init(&msg->faulted_services, 0)) {
    bosdyn_msgs__msg__AreaCallbackServiceError__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__AreaCallbackServiceError__fini(bosdyn_msgs__msg__AreaCallbackServiceError * msg)
{
  if (!msg) {
    return;
  }
  // missing_services
  rosidl_runtime_c__String__Sequence__fini(&msg->missing_services);
  // faulted_services
  bosdyn_msgs__msg__ServiceFault__Sequence__fini(&msg->faulted_services);
}

bool
bosdyn_msgs__msg__AreaCallbackServiceError__are_equal(const bosdyn_msgs__msg__AreaCallbackServiceError * lhs, const bosdyn_msgs__msg__AreaCallbackServiceError * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // missing_services
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->missing_services), &(rhs->missing_services)))
  {
    return false;
  }
  // faulted_services
  if (!bosdyn_msgs__msg__ServiceFault__Sequence__are_equal(
      &(lhs->faulted_services), &(rhs->faulted_services)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__AreaCallbackServiceError__copy(
  const bosdyn_msgs__msg__AreaCallbackServiceError * input,
  bosdyn_msgs__msg__AreaCallbackServiceError * output)
{
  if (!input || !output) {
    return false;
  }
  // missing_services
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->missing_services), &(output->missing_services)))
  {
    return false;
  }
  // faulted_services
  if (!bosdyn_msgs__msg__ServiceFault__Sequence__copy(
      &(input->faulted_services), &(output->faulted_services)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__AreaCallbackServiceError *
bosdyn_msgs__msg__AreaCallbackServiceError__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackServiceError * msg = (bosdyn_msgs__msg__AreaCallbackServiceError *)allocator.allocate(sizeof(bosdyn_msgs__msg__AreaCallbackServiceError), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__AreaCallbackServiceError));
  bool success = bosdyn_msgs__msg__AreaCallbackServiceError__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__AreaCallbackServiceError__destroy(bosdyn_msgs__msg__AreaCallbackServiceError * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__AreaCallbackServiceError__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__AreaCallbackServiceError__Sequence__init(bosdyn_msgs__msg__AreaCallbackServiceError__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackServiceError * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__AreaCallbackServiceError *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__AreaCallbackServiceError), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__AreaCallbackServiceError__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__AreaCallbackServiceError__fini(&data[i - 1]);
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
bosdyn_msgs__msg__AreaCallbackServiceError__Sequence__fini(bosdyn_msgs__msg__AreaCallbackServiceError__Sequence * array)
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
      bosdyn_msgs__msg__AreaCallbackServiceError__fini(&array->data[i]);
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

bosdyn_msgs__msg__AreaCallbackServiceError__Sequence *
bosdyn_msgs__msg__AreaCallbackServiceError__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackServiceError__Sequence * array = (bosdyn_msgs__msg__AreaCallbackServiceError__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__AreaCallbackServiceError__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__AreaCallbackServiceError__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__AreaCallbackServiceError__Sequence__destroy(bosdyn_msgs__msg__AreaCallbackServiceError__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__AreaCallbackServiceError__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__AreaCallbackServiceError__Sequence__are_equal(const bosdyn_msgs__msg__AreaCallbackServiceError__Sequence * lhs, const bosdyn_msgs__msg__AreaCallbackServiceError__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__AreaCallbackServiceError__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__AreaCallbackServiceError__Sequence__copy(
  const bosdyn_msgs__msg__AreaCallbackServiceError__Sequence * input,
  bosdyn_msgs__msg__AreaCallbackServiceError__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__AreaCallbackServiceError);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__AreaCallbackServiceError * data =
      (bosdyn_msgs__msg__AreaCallbackServiceError *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__AreaCallbackServiceError__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__AreaCallbackServiceError__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__AreaCallbackServiceError__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
