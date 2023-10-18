// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Node.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `reference_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `user_data`
#include "bosdyn_msgs/msg/detail/user_data__functions.h"
// Member `type`
#include "bosdyn_msgs/msg/detail/node_one_of_type__functions.h"
// Member `parameter_values`
// Member `overrides`
#include "bosdyn_msgs/msg/detail/key_value__functions.h"
// Member `parameters`
#include "bosdyn_msgs/msg/detail/variable_declaration__functions.h"

bool
bosdyn_msgs__msg__Node__init(bosdyn_msgs__msg__Node * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__Node__fini(msg);
    return false;
  }
  // user_data
  if (!bosdyn_msgs__msg__UserData__init(&msg->user_data)) {
    bosdyn_msgs__msg__Node__fini(msg);
    return false;
  }
  // user_data_is_set
  // reference_id
  if (!rosidl_runtime_c__String__init(&msg->reference_id)) {
    bosdyn_msgs__msg__Node__fini(msg);
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__NodeOneOfType__init(&msg->type)) {
    bosdyn_msgs__msg__Node__fini(msg);
    return false;
  }
  // parameter_values
  if (!bosdyn_msgs__msg__KeyValue__Sequence__init(&msg->parameter_values, 0)) {
    bosdyn_msgs__msg__Node__fini(msg);
    return false;
  }
  // overrides
  if (!bosdyn_msgs__msg__KeyValue__Sequence__init(&msg->overrides, 0)) {
    bosdyn_msgs__msg__Node__fini(msg);
    return false;
  }
  // parameters
  if (!bosdyn_msgs__msg__VariableDeclaration__Sequence__init(&msg->parameters, 0)) {
    bosdyn_msgs__msg__Node__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Node__fini(bosdyn_msgs__msg__Node * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // user_data
  bosdyn_msgs__msg__UserData__fini(&msg->user_data);
  // user_data_is_set
  // reference_id
  rosidl_runtime_c__String__fini(&msg->reference_id);
  // type
  bosdyn_msgs__msg__NodeOneOfType__fini(&msg->type);
  // parameter_values
  bosdyn_msgs__msg__KeyValue__Sequence__fini(&msg->parameter_values);
  // overrides
  bosdyn_msgs__msg__KeyValue__Sequence__fini(&msg->overrides);
  // parameters
  bosdyn_msgs__msg__VariableDeclaration__Sequence__fini(&msg->parameters);
}

bool
bosdyn_msgs__msg__Node__are_equal(const bosdyn_msgs__msg__Node * lhs, const bosdyn_msgs__msg__Node * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // user_data
  if (!bosdyn_msgs__msg__UserData__are_equal(
      &(lhs->user_data), &(rhs->user_data)))
  {
    return false;
  }
  // user_data_is_set
  if (lhs->user_data_is_set != rhs->user_data_is_set) {
    return false;
  }
  // reference_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reference_id), &(rhs->reference_id)))
  {
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__NodeOneOfType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // parameter_values
  if (!bosdyn_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->parameter_values), &(rhs->parameter_values)))
  {
    return false;
  }
  // overrides
  if (!bosdyn_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->overrides), &(rhs->overrides)))
  {
    return false;
  }
  // parameters
  if (!bosdyn_msgs__msg__VariableDeclaration__Sequence__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Node__copy(
  const bosdyn_msgs__msg__Node * input,
  bosdyn_msgs__msg__Node * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // user_data
  if (!bosdyn_msgs__msg__UserData__copy(
      &(input->user_data), &(output->user_data)))
  {
    return false;
  }
  // user_data_is_set
  output->user_data_is_set = input->user_data_is_set;
  // reference_id
  if (!rosidl_runtime_c__String__copy(
      &(input->reference_id), &(output->reference_id)))
  {
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__NodeOneOfType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // parameter_values
  if (!bosdyn_msgs__msg__KeyValue__Sequence__copy(
      &(input->parameter_values), &(output->parameter_values)))
  {
    return false;
  }
  // overrides
  if (!bosdyn_msgs__msg__KeyValue__Sequence__copy(
      &(input->overrides), &(output->overrides)))
  {
    return false;
  }
  // parameters
  if (!bosdyn_msgs__msg__VariableDeclaration__Sequence__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Node *
bosdyn_msgs__msg__Node__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Node * msg = (bosdyn_msgs__msg__Node *)allocator.allocate(sizeof(bosdyn_msgs__msg__Node), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Node));
  bool success = bosdyn_msgs__msg__Node__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Node__destroy(bosdyn_msgs__msg__Node * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Node__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Node__Sequence__init(bosdyn_msgs__msg__Node__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Node * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Node *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Node), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Node__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Node__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Node__Sequence__fini(bosdyn_msgs__msg__Node__Sequence * array)
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
      bosdyn_msgs__msg__Node__fini(&array->data[i]);
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

bosdyn_msgs__msg__Node__Sequence *
bosdyn_msgs__msg__Node__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Node__Sequence * array = (bosdyn_msgs__msg__Node__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Node__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Node__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Node__Sequence__destroy(bosdyn_msgs__msg__Node__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Node__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Node__Sequence__are_equal(const bosdyn_msgs__msg__Node__Sequence * lhs, const bosdyn_msgs__msg__Node__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Node__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Node__Sequence__copy(
  const bosdyn_msgs__msg__Node__Sequence * input,
  bosdyn_msgs__msg__Node__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Node);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Node * data =
      (bosdyn_msgs__msg__Node *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Node__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Node__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Node__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
