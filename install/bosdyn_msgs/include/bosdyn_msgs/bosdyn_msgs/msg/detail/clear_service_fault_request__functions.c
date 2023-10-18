// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ClearServiceFaultRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/clear_service_fault_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `fault_id`
#include "bosdyn_msgs/msg/detail/service_fault_id__functions.h"

bool
bosdyn_msgs__msg__ClearServiceFaultRequest__init(bosdyn_msgs__msg__ClearServiceFaultRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__ClearServiceFaultRequest__fini(msg);
    return false;
  }
  // header_is_set
  // fault_id
  if (!bosdyn_msgs__msg__ServiceFaultId__init(&msg->fault_id)) {
    bosdyn_msgs__msg__ClearServiceFaultRequest__fini(msg);
    return false;
  }
  // fault_id_is_set
  // clear_all_service_faults
  // clear_all_payload_faults
  return true;
}

void
bosdyn_msgs__msg__ClearServiceFaultRequest__fini(bosdyn_msgs__msg__ClearServiceFaultRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // fault_id
  bosdyn_msgs__msg__ServiceFaultId__fini(&msg->fault_id);
  // fault_id_is_set
  // clear_all_service_faults
  // clear_all_payload_faults
}

bool
bosdyn_msgs__msg__ClearServiceFaultRequest__are_equal(const bosdyn_msgs__msg__ClearServiceFaultRequest * lhs, const bosdyn_msgs__msg__ClearServiceFaultRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // fault_id
  if (!bosdyn_msgs__msg__ServiceFaultId__are_equal(
      &(lhs->fault_id), &(rhs->fault_id)))
  {
    return false;
  }
  // fault_id_is_set
  if (lhs->fault_id_is_set != rhs->fault_id_is_set) {
    return false;
  }
  // clear_all_service_faults
  if (lhs->clear_all_service_faults != rhs->clear_all_service_faults) {
    return false;
  }
  // clear_all_payload_faults
  if (lhs->clear_all_payload_faults != rhs->clear_all_payload_faults) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ClearServiceFaultRequest__copy(
  const bosdyn_msgs__msg__ClearServiceFaultRequest * input,
  bosdyn_msgs__msg__ClearServiceFaultRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // fault_id
  if (!bosdyn_msgs__msg__ServiceFaultId__copy(
      &(input->fault_id), &(output->fault_id)))
  {
    return false;
  }
  // fault_id_is_set
  output->fault_id_is_set = input->fault_id_is_set;
  // clear_all_service_faults
  output->clear_all_service_faults = input->clear_all_service_faults;
  // clear_all_payload_faults
  output->clear_all_payload_faults = input->clear_all_payload_faults;
  return true;
}

bosdyn_msgs__msg__ClearServiceFaultRequest *
bosdyn_msgs__msg__ClearServiceFaultRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ClearServiceFaultRequest * msg = (bosdyn_msgs__msg__ClearServiceFaultRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__ClearServiceFaultRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ClearServiceFaultRequest));
  bool success = bosdyn_msgs__msg__ClearServiceFaultRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ClearServiceFaultRequest__destroy(bosdyn_msgs__msg__ClearServiceFaultRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ClearServiceFaultRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence__init(bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ClearServiceFaultRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ClearServiceFaultRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ClearServiceFaultRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ClearServiceFaultRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ClearServiceFaultRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence__fini(bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence * array)
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
      bosdyn_msgs__msg__ClearServiceFaultRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence *
bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence * array = (bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence__destroy(bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence__are_equal(const bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence * lhs, const bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ClearServiceFaultRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence__copy(
  const bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence * input,
  bosdyn_msgs__msg__ClearServiceFaultRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ClearServiceFaultRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ClearServiceFaultRequest * data =
      (bosdyn_msgs__msg__ClearServiceFaultRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ClearServiceFaultRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ClearServiceFaultRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ClearServiceFaultRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
