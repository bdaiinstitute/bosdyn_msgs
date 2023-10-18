// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DockingCommandFeedbackRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/docking_command_feedback_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `update_docking_params`
#include "bosdyn_msgs/msg/detail/update_docking_params__functions.h"

bool
bosdyn_msgs__msg__DockingCommandFeedbackRequest__init(bosdyn_msgs__msg__DockingCommandFeedbackRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__DockingCommandFeedbackRequest__fini(msg);
    return false;
  }
  // header_is_set
  // docking_command_id
  // update_docking_params
  if (!bosdyn_msgs__msg__UpdateDockingParams__init(&msg->update_docking_params)) {
    bosdyn_msgs__msg__DockingCommandFeedbackRequest__fini(msg);
    return false;
  }
  // update_docking_params_is_set
  return true;
}

void
bosdyn_msgs__msg__DockingCommandFeedbackRequest__fini(bosdyn_msgs__msg__DockingCommandFeedbackRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // docking_command_id
  // update_docking_params
  bosdyn_msgs__msg__UpdateDockingParams__fini(&msg->update_docking_params);
  // update_docking_params_is_set
}

bool
bosdyn_msgs__msg__DockingCommandFeedbackRequest__are_equal(const bosdyn_msgs__msg__DockingCommandFeedbackRequest * lhs, const bosdyn_msgs__msg__DockingCommandFeedbackRequest * rhs)
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
  // docking_command_id
  if (lhs->docking_command_id != rhs->docking_command_id) {
    return false;
  }
  // update_docking_params
  if (!bosdyn_msgs__msg__UpdateDockingParams__are_equal(
      &(lhs->update_docking_params), &(rhs->update_docking_params)))
  {
    return false;
  }
  // update_docking_params_is_set
  if (lhs->update_docking_params_is_set != rhs->update_docking_params_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DockingCommandFeedbackRequest__copy(
  const bosdyn_msgs__msg__DockingCommandFeedbackRequest * input,
  bosdyn_msgs__msg__DockingCommandFeedbackRequest * output)
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
  // docking_command_id
  output->docking_command_id = input->docking_command_id;
  // update_docking_params
  if (!bosdyn_msgs__msg__UpdateDockingParams__copy(
      &(input->update_docking_params), &(output->update_docking_params)))
  {
    return false;
  }
  // update_docking_params_is_set
  output->update_docking_params_is_set = input->update_docking_params_is_set;
  return true;
}

bosdyn_msgs__msg__DockingCommandFeedbackRequest *
bosdyn_msgs__msg__DockingCommandFeedbackRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DockingCommandFeedbackRequest * msg = (bosdyn_msgs__msg__DockingCommandFeedbackRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__DockingCommandFeedbackRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DockingCommandFeedbackRequest));
  bool success = bosdyn_msgs__msg__DockingCommandFeedbackRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DockingCommandFeedbackRequest__destroy(bosdyn_msgs__msg__DockingCommandFeedbackRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DockingCommandFeedbackRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence__init(bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DockingCommandFeedbackRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DockingCommandFeedbackRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DockingCommandFeedbackRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DockingCommandFeedbackRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DockingCommandFeedbackRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence__fini(bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence * array)
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
      bosdyn_msgs__msg__DockingCommandFeedbackRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence *
bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence * array = (bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence__destroy(bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence__are_equal(const bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence * lhs, const bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DockingCommandFeedbackRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence__copy(
  const bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence * input,
  bosdyn_msgs__msg__DockingCommandFeedbackRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DockingCommandFeedbackRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DockingCommandFeedbackRequest * data =
      (bosdyn_msgs__msg__DockingCommandFeedbackRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DockingCommandFeedbackRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DockingCommandFeedbackRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DockingCommandFeedbackRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
