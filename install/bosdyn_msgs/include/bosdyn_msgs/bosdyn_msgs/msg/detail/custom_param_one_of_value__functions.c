// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/CustomParamOneOfValue.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/custom_param_one_of_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `dict_value`
#include "bosdyn_msgs/msg/detail/serialized_message__functions.h"
// Member `list_value`
#include "bosdyn_msgs/msg/detail/list_param__functions.h"
// Member `int_value`
#include "bosdyn_msgs/msg/detail/int64_param__functions.h"
// Member `double_value`
#include "bosdyn_msgs/msg/detail/double_param__functions.h"
// Member `string_value`
#include "bosdyn_msgs/msg/detail/string_param__functions.h"
// Member `roi_value`
#include "bosdyn_msgs/msg/detail/region_of_interest_param__functions.h"
// Member `bool_value`
#include "bosdyn_msgs/msg/detail/bool_param__functions.h"
// Member `one_of_value`
#include "bosdyn_msgs/msg/detail/one_of_param__functions.h"

bool
bosdyn_msgs__msg__CustomParamOneOfValue__init(bosdyn_msgs__msg__CustomParamOneOfValue * msg)
{
  if (!msg) {
    return false;
  }
  // dict_value
  if (!bosdyn_msgs__msg__SerializedMessage__init(&msg->dict_value)) {
    bosdyn_msgs__msg__CustomParamOneOfValue__fini(msg);
    return false;
  }
  // list_value
  if (!bosdyn_msgs__msg__ListParam__init(&msg->list_value)) {
    bosdyn_msgs__msg__CustomParamOneOfValue__fini(msg);
    return false;
  }
  // int_value
  if (!bosdyn_msgs__msg__Int64Param__init(&msg->int_value)) {
    bosdyn_msgs__msg__CustomParamOneOfValue__fini(msg);
    return false;
  }
  // double_value
  if (!bosdyn_msgs__msg__DoubleParam__init(&msg->double_value)) {
    bosdyn_msgs__msg__CustomParamOneOfValue__fini(msg);
    return false;
  }
  // string_value
  if (!bosdyn_msgs__msg__StringParam__init(&msg->string_value)) {
    bosdyn_msgs__msg__CustomParamOneOfValue__fini(msg);
    return false;
  }
  // roi_value
  if (!bosdyn_msgs__msg__RegionOfInterestParam__init(&msg->roi_value)) {
    bosdyn_msgs__msg__CustomParamOneOfValue__fini(msg);
    return false;
  }
  // bool_value
  if (!bosdyn_msgs__msg__BoolParam__init(&msg->bool_value)) {
    bosdyn_msgs__msg__CustomParamOneOfValue__fini(msg);
    return false;
  }
  // one_of_value
  if (!bosdyn_msgs__msg__OneOfParam__init(&msg->one_of_value)) {
    bosdyn_msgs__msg__CustomParamOneOfValue__fini(msg);
    return false;
  }
  // value_choice
  return true;
}

void
bosdyn_msgs__msg__CustomParamOneOfValue__fini(bosdyn_msgs__msg__CustomParamOneOfValue * msg)
{
  if (!msg) {
    return;
  }
  // dict_value
  bosdyn_msgs__msg__SerializedMessage__fini(&msg->dict_value);
  // list_value
  bosdyn_msgs__msg__ListParam__fini(&msg->list_value);
  // int_value
  bosdyn_msgs__msg__Int64Param__fini(&msg->int_value);
  // double_value
  bosdyn_msgs__msg__DoubleParam__fini(&msg->double_value);
  // string_value
  bosdyn_msgs__msg__StringParam__fini(&msg->string_value);
  // roi_value
  bosdyn_msgs__msg__RegionOfInterestParam__fini(&msg->roi_value);
  // bool_value
  bosdyn_msgs__msg__BoolParam__fini(&msg->bool_value);
  // one_of_value
  bosdyn_msgs__msg__OneOfParam__fini(&msg->one_of_value);
  // value_choice
}

bool
bosdyn_msgs__msg__CustomParamOneOfValue__are_equal(const bosdyn_msgs__msg__CustomParamOneOfValue * lhs, const bosdyn_msgs__msg__CustomParamOneOfValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dict_value
  if (!bosdyn_msgs__msg__SerializedMessage__are_equal(
      &(lhs->dict_value), &(rhs->dict_value)))
  {
    return false;
  }
  // list_value
  if (!bosdyn_msgs__msg__ListParam__are_equal(
      &(lhs->list_value), &(rhs->list_value)))
  {
    return false;
  }
  // int_value
  if (!bosdyn_msgs__msg__Int64Param__are_equal(
      &(lhs->int_value), &(rhs->int_value)))
  {
    return false;
  }
  // double_value
  if (!bosdyn_msgs__msg__DoubleParam__are_equal(
      &(lhs->double_value), &(rhs->double_value)))
  {
    return false;
  }
  // string_value
  if (!bosdyn_msgs__msg__StringParam__are_equal(
      &(lhs->string_value), &(rhs->string_value)))
  {
    return false;
  }
  // roi_value
  if (!bosdyn_msgs__msg__RegionOfInterestParam__are_equal(
      &(lhs->roi_value), &(rhs->roi_value)))
  {
    return false;
  }
  // bool_value
  if (!bosdyn_msgs__msg__BoolParam__are_equal(
      &(lhs->bool_value), &(rhs->bool_value)))
  {
    return false;
  }
  // one_of_value
  if (!bosdyn_msgs__msg__OneOfParam__are_equal(
      &(lhs->one_of_value), &(rhs->one_of_value)))
  {
    return false;
  }
  // value_choice
  if (lhs->value_choice != rhs->value_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__CustomParamOneOfValue__copy(
  const bosdyn_msgs__msg__CustomParamOneOfValue * input,
  bosdyn_msgs__msg__CustomParamOneOfValue * output)
{
  if (!input || !output) {
    return false;
  }
  // dict_value
  if (!bosdyn_msgs__msg__SerializedMessage__copy(
      &(input->dict_value), &(output->dict_value)))
  {
    return false;
  }
  // list_value
  if (!bosdyn_msgs__msg__ListParam__copy(
      &(input->list_value), &(output->list_value)))
  {
    return false;
  }
  // int_value
  if (!bosdyn_msgs__msg__Int64Param__copy(
      &(input->int_value), &(output->int_value)))
  {
    return false;
  }
  // double_value
  if (!bosdyn_msgs__msg__DoubleParam__copy(
      &(input->double_value), &(output->double_value)))
  {
    return false;
  }
  // string_value
  if (!bosdyn_msgs__msg__StringParam__copy(
      &(input->string_value), &(output->string_value)))
  {
    return false;
  }
  // roi_value
  if (!bosdyn_msgs__msg__RegionOfInterestParam__copy(
      &(input->roi_value), &(output->roi_value)))
  {
    return false;
  }
  // bool_value
  if (!bosdyn_msgs__msg__BoolParam__copy(
      &(input->bool_value), &(output->bool_value)))
  {
    return false;
  }
  // one_of_value
  if (!bosdyn_msgs__msg__OneOfParam__copy(
      &(input->one_of_value), &(output->one_of_value)))
  {
    return false;
  }
  // value_choice
  output->value_choice = input->value_choice;
  return true;
}

bosdyn_msgs__msg__CustomParamOneOfValue *
bosdyn_msgs__msg__CustomParamOneOfValue__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CustomParamOneOfValue * msg = (bosdyn_msgs__msg__CustomParamOneOfValue *)allocator.allocate(sizeof(bosdyn_msgs__msg__CustomParamOneOfValue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__CustomParamOneOfValue));
  bool success = bosdyn_msgs__msg__CustomParamOneOfValue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__CustomParamOneOfValue__destroy(bosdyn_msgs__msg__CustomParamOneOfValue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__CustomParamOneOfValue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__CustomParamOneOfValue__Sequence__init(bosdyn_msgs__msg__CustomParamOneOfValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CustomParamOneOfValue * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__CustomParamOneOfValue *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__CustomParamOneOfValue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__CustomParamOneOfValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__CustomParamOneOfValue__fini(&data[i - 1]);
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
bosdyn_msgs__msg__CustomParamOneOfValue__Sequence__fini(bosdyn_msgs__msg__CustomParamOneOfValue__Sequence * array)
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
      bosdyn_msgs__msg__CustomParamOneOfValue__fini(&array->data[i]);
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

bosdyn_msgs__msg__CustomParamOneOfValue__Sequence *
bosdyn_msgs__msg__CustomParamOneOfValue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CustomParamOneOfValue__Sequence * array = (bosdyn_msgs__msg__CustomParamOneOfValue__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__CustomParamOneOfValue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__CustomParamOneOfValue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__CustomParamOneOfValue__Sequence__destroy(bosdyn_msgs__msg__CustomParamOneOfValue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__CustomParamOneOfValue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__CustomParamOneOfValue__Sequence__are_equal(const bosdyn_msgs__msg__CustomParamOneOfValue__Sequence * lhs, const bosdyn_msgs__msg__CustomParamOneOfValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__CustomParamOneOfValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__CustomParamOneOfValue__Sequence__copy(
  const bosdyn_msgs__msg__CustomParamOneOfValue__Sequence * input,
  bosdyn_msgs__msg__CustomParamOneOfValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__CustomParamOneOfValue);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__CustomParamOneOfValue * data =
      (bosdyn_msgs__msg__CustomParamOneOfValue *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__CustomParamOneOfValue__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__CustomParamOneOfValue__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__CustomParamOneOfValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
