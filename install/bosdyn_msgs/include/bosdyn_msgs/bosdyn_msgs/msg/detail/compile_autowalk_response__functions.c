// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/CompileAutowalkResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/compile_autowalk_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/compile_autowalk_response_status__functions.h"
// Member `root`
#include "bosdyn_msgs/msg/detail/node__functions.h"
// Member `element_identifiers`
#include "bosdyn_msgs/msg/detail/element_identifiers__functions.h"
// Member `failed_elements`
#include "bosdyn_msgs/msg/detail/key_int32_value_bosdyn_msgs_failed_element__functions.h"
// Member `docking_node`
// Member `loop_node`
#include "bosdyn_msgs/msg/detail/node_identifier__functions.h"

bool
bosdyn_msgs__msg__CompileAutowalkResponse__init(bosdyn_msgs__msg__CompileAutowalkResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__CompileAutowalkResponse__fini(msg);
    return false;
  }
  // header_is_set
  // status
  if (!bosdyn_msgs__msg__CompileAutowalkResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__CompileAutowalkResponse__fini(msg);
    return false;
  }
  // root
  if (!bosdyn_msgs__msg__Node__init(&msg->root)) {
    bosdyn_msgs__msg__CompileAutowalkResponse__fini(msg);
    return false;
  }
  // root_is_set
  // element_identifiers
  if (!bosdyn_msgs__msg__ElementIdentifiers__Sequence__init(&msg->element_identifiers, 0)) {
    bosdyn_msgs__msg__CompileAutowalkResponse__fini(msg);
    return false;
  }
  // failed_elements
  if (!bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence__init(&msg->failed_elements, 0)) {
    bosdyn_msgs__msg__CompileAutowalkResponse__fini(msg);
    return false;
  }
  // docking_node
  if (!bosdyn_msgs__msg__NodeIdentifier__init(&msg->docking_node)) {
    bosdyn_msgs__msg__CompileAutowalkResponse__fini(msg);
    return false;
  }
  // docking_node_is_set
  // loop_node
  if (!bosdyn_msgs__msg__NodeIdentifier__init(&msg->loop_node)) {
    bosdyn_msgs__msg__CompileAutowalkResponse__fini(msg);
    return false;
  }
  // loop_node_is_set
  return true;
}

void
bosdyn_msgs__msg__CompileAutowalkResponse__fini(bosdyn_msgs__msg__CompileAutowalkResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // status
  bosdyn_msgs__msg__CompileAutowalkResponseStatus__fini(&msg->status);
  // root
  bosdyn_msgs__msg__Node__fini(&msg->root);
  // root_is_set
  // element_identifiers
  bosdyn_msgs__msg__ElementIdentifiers__Sequence__fini(&msg->element_identifiers);
  // failed_elements
  bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence__fini(&msg->failed_elements);
  // docking_node
  bosdyn_msgs__msg__NodeIdentifier__fini(&msg->docking_node);
  // docking_node_is_set
  // loop_node
  bosdyn_msgs__msg__NodeIdentifier__fini(&msg->loop_node);
  // loop_node_is_set
}

bool
bosdyn_msgs__msg__CompileAutowalkResponse__are_equal(const bosdyn_msgs__msg__CompileAutowalkResponse * lhs, const bosdyn_msgs__msg__CompileAutowalkResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__CompileAutowalkResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // root
  if (!bosdyn_msgs__msg__Node__are_equal(
      &(lhs->root), &(rhs->root)))
  {
    return false;
  }
  // root_is_set
  if (lhs->root_is_set != rhs->root_is_set) {
    return false;
  }
  // element_identifiers
  if (!bosdyn_msgs__msg__ElementIdentifiers__Sequence__are_equal(
      &(lhs->element_identifiers), &(rhs->element_identifiers)))
  {
    return false;
  }
  // failed_elements
  if (!bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence__are_equal(
      &(lhs->failed_elements), &(rhs->failed_elements)))
  {
    return false;
  }
  // docking_node
  if (!bosdyn_msgs__msg__NodeIdentifier__are_equal(
      &(lhs->docking_node), &(rhs->docking_node)))
  {
    return false;
  }
  // docking_node_is_set
  if (lhs->docking_node_is_set != rhs->docking_node_is_set) {
    return false;
  }
  // loop_node
  if (!bosdyn_msgs__msg__NodeIdentifier__are_equal(
      &(lhs->loop_node), &(rhs->loop_node)))
  {
    return false;
  }
  // loop_node_is_set
  if (lhs->loop_node_is_set != rhs->loop_node_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__CompileAutowalkResponse__copy(
  const bosdyn_msgs__msg__CompileAutowalkResponse * input,
  bosdyn_msgs__msg__CompileAutowalkResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // status
  if (!bosdyn_msgs__msg__CompileAutowalkResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // root
  if (!bosdyn_msgs__msg__Node__copy(
      &(input->root), &(output->root)))
  {
    return false;
  }
  // root_is_set
  output->root_is_set = input->root_is_set;
  // element_identifiers
  if (!bosdyn_msgs__msg__ElementIdentifiers__Sequence__copy(
      &(input->element_identifiers), &(output->element_identifiers)))
  {
    return false;
  }
  // failed_elements
  if (!bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence__copy(
      &(input->failed_elements), &(output->failed_elements)))
  {
    return false;
  }
  // docking_node
  if (!bosdyn_msgs__msg__NodeIdentifier__copy(
      &(input->docking_node), &(output->docking_node)))
  {
    return false;
  }
  // docking_node_is_set
  output->docking_node_is_set = input->docking_node_is_set;
  // loop_node
  if (!bosdyn_msgs__msg__NodeIdentifier__copy(
      &(input->loop_node), &(output->loop_node)))
  {
    return false;
  }
  // loop_node_is_set
  output->loop_node_is_set = input->loop_node_is_set;
  return true;
}

bosdyn_msgs__msg__CompileAutowalkResponse *
bosdyn_msgs__msg__CompileAutowalkResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CompileAutowalkResponse * msg = (bosdyn_msgs__msg__CompileAutowalkResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__CompileAutowalkResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__CompileAutowalkResponse));
  bool success = bosdyn_msgs__msg__CompileAutowalkResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__CompileAutowalkResponse__destroy(bosdyn_msgs__msg__CompileAutowalkResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__CompileAutowalkResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__CompileAutowalkResponse__Sequence__init(bosdyn_msgs__msg__CompileAutowalkResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CompileAutowalkResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__CompileAutowalkResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__CompileAutowalkResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__CompileAutowalkResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__CompileAutowalkResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__CompileAutowalkResponse__Sequence__fini(bosdyn_msgs__msg__CompileAutowalkResponse__Sequence * array)
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
      bosdyn_msgs__msg__CompileAutowalkResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__CompileAutowalkResponse__Sequence *
bosdyn_msgs__msg__CompileAutowalkResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CompileAutowalkResponse__Sequence * array = (bosdyn_msgs__msg__CompileAutowalkResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__CompileAutowalkResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__CompileAutowalkResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__CompileAutowalkResponse__Sequence__destroy(bosdyn_msgs__msg__CompileAutowalkResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__CompileAutowalkResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__CompileAutowalkResponse__Sequence__are_equal(const bosdyn_msgs__msg__CompileAutowalkResponse__Sequence * lhs, const bosdyn_msgs__msg__CompileAutowalkResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__CompileAutowalkResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__CompileAutowalkResponse__Sequence__copy(
  const bosdyn_msgs__msg__CompileAutowalkResponse__Sequence * input,
  bosdyn_msgs__msg__CompileAutowalkResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__CompileAutowalkResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__CompileAutowalkResponse * data =
      (bosdyn_msgs__msg__CompileAutowalkResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__CompileAutowalkResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__CompileAutowalkResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__CompileAutowalkResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
