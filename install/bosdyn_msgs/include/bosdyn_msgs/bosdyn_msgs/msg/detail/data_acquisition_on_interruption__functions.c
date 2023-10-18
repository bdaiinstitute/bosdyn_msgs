// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DataAcquisitionOnInterruption.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/data_acquisition_on_interruption__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `child`
#include "bosdyn_msgs/msg/detail/node__functions.h"
// Member `request_when_interrupted`
#include "bosdyn_msgs/msg/detail/data_acquisition__functions.h"
// Member `pause_mission_metadata`
// Member `restart_mission_metadata`
// Member `load_mission_metadata`
// Member `stop_mission_metadata`
// Member `lease_use_error_metadata`
// Member `play_mission_timeout_metadata`
// Member `child_node_error_metadata`
// Member `child_node_exception_metadata`
// Member `default_metadata`
#include "bosdyn_msgs/msg/detail/metadata__functions.h"
// Member `keys_for_lease_use_error_message`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__DataAcquisitionOnInterruption__init(bosdyn_msgs__msg__DataAcquisitionOnInterruption * msg)
{
  if (!msg) {
    return false;
  }
  // child
  if (!bosdyn_msgs__msg__Node__init(&msg->child)) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
    return false;
  }
  // child_is_set
  // request_when_interrupted
  if (!bosdyn_msgs__msg__DataAcquisition__init(&msg->request_when_interrupted)) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
    return false;
  }
  // request_when_interrupted_is_set
  // pause_mission_metadata
  if (!bosdyn_msgs__msg__Metadata__init(&msg->pause_mission_metadata)) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
    return false;
  }
  // pause_mission_metadata_is_set
  // restart_mission_metadata
  if (!bosdyn_msgs__msg__Metadata__init(&msg->restart_mission_metadata)) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
    return false;
  }
  // restart_mission_metadata_is_set
  // load_mission_metadata
  if (!bosdyn_msgs__msg__Metadata__init(&msg->load_mission_metadata)) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
    return false;
  }
  // load_mission_metadata_is_set
  // stop_mission_metadata
  if (!bosdyn_msgs__msg__Metadata__init(&msg->stop_mission_metadata)) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
    return false;
  }
  // stop_mission_metadata_is_set
  // lease_use_error_metadata
  if (!bosdyn_msgs__msg__Metadata__init(&msg->lease_use_error_metadata)) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
    return false;
  }
  // lease_use_error_metadata_is_set
  // play_mission_timeout_metadata
  if (!bosdyn_msgs__msg__Metadata__init(&msg->play_mission_timeout_metadata)) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
    return false;
  }
  // play_mission_timeout_metadata_is_set
  // child_node_error_metadata
  if (!bosdyn_msgs__msg__Metadata__init(&msg->child_node_error_metadata)) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
    return false;
  }
  // child_node_error_metadata_is_set
  // child_node_exception_metadata
  if (!bosdyn_msgs__msg__Metadata__init(&msg->child_node_exception_metadata)) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
    return false;
  }
  // child_node_exception_metadata_is_set
  // default_metadata
  if (!bosdyn_msgs__msg__Metadata__init(&msg->default_metadata)) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
    return false;
  }
  // default_metadata_is_set
  // keys_for_lease_use_error_message
  if (!rosidl_runtime_c__String__Sequence__init(&msg->keys_for_lease_use_error_message, 0)) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(bosdyn_msgs__msg__DataAcquisitionOnInterruption * msg)
{
  if (!msg) {
    return;
  }
  // child
  bosdyn_msgs__msg__Node__fini(&msg->child);
  // child_is_set
  // request_when_interrupted
  bosdyn_msgs__msg__DataAcquisition__fini(&msg->request_when_interrupted);
  // request_when_interrupted_is_set
  // pause_mission_metadata
  bosdyn_msgs__msg__Metadata__fini(&msg->pause_mission_metadata);
  // pause_mission_metadata_is_set
  // restart_mission_metadata
  bosdyn_msgs__msg__Metadata__fini(&msg->restart_mission_metadata);
  // restart_mission_metadata_is_set
  // load_mission_metadata
  bosdyn_msgs__msg__Metadata__fini(&msg->load_mission_metadata);
  // load_mission_metadata_is_set
  // stop_mission_metadata
  bosdyn_msgs__msg__Metadata__fini(&msg->stop_mission_metadata);
  // stop_mission_metadata_is_set
  // lease_use_error_metadata
  bosdyn_msgs__msg__Metadata__fini(&msg->lease_use_error_metadata);
  // lease_use_error_metadata_is_set
  // play_mission_timeout_metadata
  bosdyn_msgs__msg__Metadata__fini(&msg->play_mission_timeout_metadata);
  // play_mission_timeout_metadata_is_set
  // child_node_error_metadata
  bosdyn_msgs__msg__Metadata__fini(&msg->child_node_error_metadata);
  // child_node_error_metadata_is_set
  // child_node_exception_metadata
  bosdyn_msgs__msg__Metadata__fini(&msg->child_node_exception_metadata);
  // child_node_exception_metadata_is_set
  // default_metadata
  bosdyn_msgs__msg__Metadata__fini(&msg->default_metadata);
  // default_metadata_is_set
  // keys_for_lease_use_error_message
  rosidl_runtime_c__String__Sequence__fini(&msg->keys_for_lease_use_error_message);
}

bool
bosdyn_msgs__msg__DataAcquisitionOnInterruption__are_equal(const bosdyn_msgs__msg__DataAcquisitionOnInterruption * lhs, const bosdyn_msgs__msg__DataAcquisitionOnInterruption * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // child
  if (!bosdyn_msgs__msg__Node__are_equal(
      &(lhs->child), &(rhs->child)))
  {
    return false;
  }
  // child_is_set
  if (lhs->child_is_set != rhs->child_is_set) {
    return false;
  }
  // request_when_interrupted
  if (!bosdyn_msgs__msg__DataAcquisition__are_equal(
      &(lhs->request_when_interrupted), &(rhs->request_when_interrupted)))
  {
    return false;
  }
  // request_when_interrupted_is_set
  if (lhs->request_when_interrupted_is_set != rhs->request_when_interrupted_is_set) {
    return false;
  }
  // pause_mission_metadata
  if (!bosdyn_msgs__msg__Metadata__are_equal(
      &(lhs->pause_mission_metadata), &(rhs->pause_mission_metadata)))
  {
    return false;
  }
  // pause_mission_metadata_is_set
  if (lhs->pause_mission_metadata_is_set != rhs->pause_mission_metadata_is_set) {
    return false;
  }
  // restart_mission_metadata
  if (!bosdyn_msgs__msg__Metadata__are_equal(
      &(lhs->restart_mission_metadata), &(rhs->restart_mission_metadata)))
  {
    return false;
  }
  // restart_mission_metadata_is_set
  if (lhs->restart_mission_metadata_is_set != rhs->restart_mission_metadata_is_set) {
    return false;
  }
  // load_mission_metadata
  if (!bosdyn_msgs__msg__Metadata__are_equal(
      &(lhs->load_mission_metadata), &(rhs->load_mission_metadata)))
  {
    return false;
  }
  // load_mission_metadata_is_set
  if (lhs->load_mission_metadata_is_set != rhs->load_mission_metadata_is_set) {
    return false;
  }
  // stop_mission_metadata
  if (!bosdyn_msgs__msg__Metadata__are_equal(
      &(lhs->stop_mission_metadata), &(rhs->stop_mission_metadata)))
  {
    return false;
  }
  // stop_mission_metadata_is_set
  if (lhs->stop_mission_metadata_is_set != rhs->stop_mission_metadata_is_set) {
    return false;
  }
  // lease_use_error_metadata
  if (!bosdyn_msgs__msg__Metadata__are_equal(
      &(lhs->lease_use_error_metadata), &(rhs->lease_use_error_metadata)))
  {
    return false;
  }
  // lease_use_error_metadata_is_set
  if (lhs->lease_use_error_metadata_is_set != rhs->lease_use_error_metadata_is_set) {
    return false;
  }
  // play_mission_timeout_metadata
  if (!bosdyn_msgs__msg__Metadata__are_equal(
      &(lhs->play_mission_timeout_metadata), &(rhs->play_mission_timeout_metadata)))
  {
    return false;
  }
  // play_mission_timeout_metadata_is_set
  if (lhs->play_mission_timeout_metadata_is_set != rhs->play_mission_timeout_metadata_is_set) {
    return false;
  }
  // child_node_error_metadata
  if (!bosdyn_msgs__msg__Metadata__are_equal(
      &(lhs->child_node_error_metadata), &(rhs->child_node_error_metadata)))
  {
    return false;
  }
  // child_node_error_metadata_is_set
  if (lhs->child_node_error_metadata_is_set != rhs->child_node_error_metadata_is_set) {
    return false;
  }
  // child_node_exception_metadata
  if (!bosdyn_msgs__msg__Metadata__are_equal(
      &(lhs->child_node_exception_metadata), &(rhs->child_node_exception_metadata)))
  {
    return false;
  }
  // child_node_exception_metadata_is_set
  if (lhs->child_node_exception_metadata_is_set != rhs->child_node_exception_metadata_is_set) {
    return false;
  }
  // default_metadata
  if (!bosdyn_msgs__msg__Metadata__are_equal(
      &(lhs->default_metadata), &(rhs->default_metadata)))
  {
    return false;
  }
  // default_metadata_is_set
  if (lhs->default_metadata_is_set != rhs->default_metadata_is_set) {
    return false;
  }
  // keys_for_lease_use_error_message
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->keys_for_lease_use_error_message), &(rhs->keys_for_lease_use_error_message)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DataAcquisitionOnInterruption__copy(
  const bosdyn_msgs__msg__DataAcquisitionOnInterruption * input,
  bosdyn_msgs__msg__DataAcquisitionOnInterruption * output)
{
  if (!input || !output) {
    return false;
  }
  // child
  if (!bosdyn_msgs__msg__Node__copy(
      &(input->child), &(output->child)))
  {
    return false;
  }
  // child_is_set
  output->child_is_set = input->child_is_set;
  // request_when_interrupted
  if (!bosdyn_msgs__msg__DataAcquisition__copy(
      &(input->request_when_interrupted), &(output->request_when_interrupted)))
  {
    return false;
  }
  // request_when_interrupted_is_set
  output->request_when_interrupted_is_set = input->request_when_interrupted_is_set;
  // pause_mission_metadata
  if (!bosdyn_msgs__msg__Metadata__copy(
      &(input->pause_mission_metadata), &(output->pause_mission_metadata)))
  {
    return false;
  }
  // pause_mission_metadata_is_set
  output->pause_mission_metadata_is_set = input->pause_mission_metadata_is_set;
  // restart_mission_metadata
  if (!bosdyn_msgs__msg__Metadata__copy(
      &(input->restart_mission_metadata), &(output->restart_mission_metadata)))
  {
    return false;
  }
  // restart_mission_metadata_is_set
  output->restart_mission_metadata_is_set = input->restart_mission_metadata_is_set;
  // load_mission_metadata
  if (!bosdyn_msgs__msg__Metadata__copy(
      &(input->load_mission_metadata), &(output->load_mission_metadata)))
  {
    return false;
  }
  // load_mission_metadata_is_set
  output->load_mission_metadata_is_set = input->load_mission_metadata_is_set;
  // stop_mission_metadata
  if (!bosdyn_msgs__msg__Metadata__copy(
      &(input->stop_mission_metadata), &(output->stop_mission_metadata)))
  {
    return false;
  }
  // stop_mission_metadata_is_set
  output->stop_mission_metadata_is_set = input->stop_mission_metadata_is_set;
  // lease_use_error_metadata
  if (!bosdyn_msgs__msg__Metadata__copy(
      &(input->lease_use_error_metadata), &(output->lease_use_error_metadata)))
  {
    return false;
  }
  // lease_use_error_metadata_is_set
  output->lease_use_error_metadata_is_set = input->lease_use_error_metadata_is_set;
  // play_mission_timeout_metadata
  if (!bosdyn_msgs__msg__Metadata__copy(
      &(input->play_mission_timeout_metadata), &(output->play_mission_timeout_metadata)))
  {
    return false;
  }
  // play_mission_timeout_metadata_is_set
  output->play_mission_timeout_metadata_is_set = input->play_mission_timeout_metadata_is_set;
  // child_node_error_metadata
  if (!bosdyn_msgs__msg__Metadata__copy(
      &(input->child_node_error_metadata), &(output->child_node_error_metadata)))
  {
    return false;
  }
  // child_node_error_metadata_is_set
  output->child_node_error_metadata_is_set = input->child_node_error_metadata_is_set;
  // child_node_exception_metadata
  if (!bosdyn_msgs__msg__Metadata__copy(
      &(input->child_node_exception_metadata), &(output->child_node_exception_metadata)))
  {
    return false;
  }
  // child_node_exception_metadata_is_set
  output->child_node_exception_metadata_is_set = input->child_node_exception_metadata_is_set;
  // default_metadata
  if (!bosdyn_msgs__msg__Metadata__copy(
      &(input->default_metadata), &(output->default_metadata)))
  {
    return false;
  }
  // default_metadata_is_set
  output->default_metadata_is_set = input->default_metadata_is_set;
  // keys_for_lease_use_error_message
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->keys_for_lease_use_error_message), &(output->keys_for_lease_use_error_message)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__DataAcquisitionOnInterruption *
bosdyn_msgs__msg__DataAcquisitionOnInterruption__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption * msg = (bosdyn_msgs__msg__DataAcquisitionOnInterruption *)allocator.allocate(sizeof(bosdyn_msgs__msg__DataAcquisitionOnInterruption), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DataAcquisitionOnInterruption));
  bool success = bosdyn_msgs__msg__DataAcquisitionOnInterruption__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DataAcquisitionOnInterruption__destroy(bosdyn_msgs__msg__DataAcquisitionOnInterruption * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence__init(bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DataAcquisitionOnInterruption *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DataAcquisitionOnInterruption), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DataAcquisitionOnInterruption__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence__fini(bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence * array)
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
      bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(&array->data[i]);
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

bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence *
bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence * array = (bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence__destroy(bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence__are_equal(const bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence * lhs, const bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DataAcquisitionOnInterruption__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence__copy(
  const bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence * input,
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DataAcquisitionOnInterruption);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DataAcquisitionOnInterruption * data =
      (bosdyn_msgs__msg__DataAcquisitionOnInterruption *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DataAcquisitionOnInterruption__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DataAcquisitionOnInterruption__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
