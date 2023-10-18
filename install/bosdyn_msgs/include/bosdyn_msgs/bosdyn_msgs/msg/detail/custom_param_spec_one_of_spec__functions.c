// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/CustomParamSpecOneOfSpec.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/custom_param_spec_one_of_spec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `dict_spec`
#include "bosdyn_msgs/msg/detail/serialized_message__functions.h"
// Member `list_spec`
#include "bosdyn_msgs/msg/detail/list_param_spec__functions.h"
// Member `int_spec`
#include "bosdyn_msgs/msg/detail/int64_param_spec__functions.h"
// Member `double_spec`
#include "bosdyn_msgs/msg/detail/double_param_spec__functions.h"
// Member `string_spec`
#include "bosdyn_msgs/msg/detail/string_param_spec__functions.h"
// Member `roi_spec`
#include "bosdyn_msgs/msg/detail/region_of_interest_param_spec__functions.h"
// Member `bool_spec`
#include "bosdyn_msgs/msg/detail/bool_param_spec__functions.h"
// Member `one_of_spec`
#include "bosdyn_msgs/msg/detail/one_of_param_spec__functions.h"

bool
bosdyn_msgs__msg__CustomParamSpecOneOfSpec__init(bosdyn_msgs__msg__CustomParamSpecOneOfSpec * msg)
{
  if (!msg) {
    return false;
  }
  // dict_spec
  if (!bosdyn_msgs__msg__SerializedMessage__init(&msg->dict_spec)) {
    bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(msg);
    return false;
  }
  // list_spec
  if (!bosdyn_msgs__msg__ListParamSpec__init(&msg->list_spec)) {
    bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(msg);
    return false;
  }
  // int_spec
  if (!bosdyn_msgs__msg__Int64ParamSpec__init(&msg->int_spec)) {
    bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(msg);
    return false;
  }
  // double_spec
  if (!bosdyn_msgs__msg__DoubleParamSpec__init(&msg->double_spec)) {
    bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(msg);
    return false;
  }
  // string_spec
  if (!bosdyn_msgs__msg__StringParamSpec__init(&msg->string_spec)) {
    bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(msg);
    return false;
  }
  // roi_spec
  if (!bosdyn_msgs__msg__RegionOfInterestParamSpec__init(&msg->roi_spec)) {
    bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(msg);
    return false;
  }
  // bool_spec
  if (!bosdyn_msgs__msg__BoolParamSpec__init(&msg->bool_spec)) {
    bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(msg);
    return false;
  }
  // one_of_spec
  if (!bosdyn_msgs__msg__OneOfParamSpec__init(&msg->one_of_spec)) {
    bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(msg);
    return false;
  }
  // spec_choice
  return true;
}

void
bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(bosdyn_msgs__msg__CustomParamSpecOneOfSpec * msg)
{
  if (!msg) {
    return;
  }
  // dict_spec
  bosdyn_msgs__msg__SerializedMessage__fini(&msg->dict_spec);
  // list_spec
  bosdyn_msgs__msg__ListParamSpec__fini(&msg->list_spec);
  // int_spec
  bosdyn_msgs__msg__Int64ParamSpec__fini(&msg->int_spec);
  // double_spec
  bosdyn_msgs__msg__DoubleParamSpec__fini(&msg->double_spec);
  // string_spec
  bosdyn_msgs__msg__StringParamSpec__fini(&msg->string_spec);
  // roi_spec
  bosdyn_msgs__msg__RegionOfInterestParamSpec__fini(&msg->roi_spec);
  // bool_spec
  bosdyn_msgs__msg__BoolParamSpec__fini(&msg->bool_spec);
  // one_of_spec
  bosdyn_msgs__msg__OneOfParamSpec__fini(&msg->one_of_spec);
  // spec_choice
}

bool
bosdyn_msgs__msg__CustomParamSpecOneOfSpec__are_equal(const bosdyn_msgs__msg__CustomParamSpecOneOfSpec * lhs, const bosdyn_msgs__msg__CustomParamSpecOneOfSpec * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dict_spec
  if (!bosdyn_msgs__msg__SerializedMessage__are_equal(
      &(lhs->dict_spec), &(rhs->dict_spec)))
  {
    return false;
  }
  // list_spec
  if (!bosdyn_msgs__msg__ListParamSpec__are_equal(
      &(lhs->list_spec), &(rhs->list_spec)))
  {
    return false;
  }
  // int_spec
  if (!bosdyn_msgs__msg__Int64ParamSpec__are_equal(
      &(lhs->int_spec), &(rhs->int_spec)))
  {
    return false;
  }
  // double_spec
  if (!bosdyn_msgs__msg__DoubleParamSpec__are_equal(
      &(lhs->double_spec), &(rhs->double_spec)))
  {
    return false;
  }
  // string_spec
  if (!bosdyn_msgs__msg__StringParamSpec__are_equal(
      &(lhs->string_spec), &(rhs->string_spec)))
  {
    return false;
  }
  // roi_spec
  if (!bosdyn_msgs__msg__RegionOfInterestParamSpec__are_equal(
      &(lhs->roi_spec), &(rhs->roi_spec)))
  {
    return false;
  }
  // bool_spec
  if (!bosdyn_msgs__msg__BoolParamSpec__are_equal(
      &(lhs->bool_spec), &(rhs->bool_spec)))
  {
    return false;
  }
  // one_of_spec
  if (!bosdyn_msgs__msg__OneOfParamSpec__are_equal(
      &(lhs->one_of_spec), &(rhs->one_of_spec)))
  {
    return false;
  }
  // spec_choice
  if (lhs->spec_choice != rhs->spec_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__CustomParamSpecOneOfSpec__copy(
  const bosdyn_msgs__msg__CustomParamSpecOneOfSpec * input,
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec * output)
{
  if (!input || !output) {
    return false;
  }
  // dict_spec
  if (!bosdyn_msgs__msg__SerializedMessage__copy(
      &(input->dict_spec), &(output->dict_spec)))
  {
    return false;
  }
  // list_spec
  if (!bosdyn_msgs__msg__ListParamSpec__copy(
      &(input->list_spec), &(output->list_spec)))
  {
    return false;
  }
  // int_spec
  if (!bosdyn_msgs__msg__Int64ParamSpec__copy(
      &(input->int_spec), &(output->int_spec)))
  {
    return false;
  }
  // double_spec
  if (!bosdyn_msgs__msg__DoubleParamSpec__copy(
      &(input->double_spec), &(output->double_spec)))
  {
    return false;
  }
  // string_spec
  if (!bosdyn_msgs__msg__StringParamSpec__copy(
      &(input->string_spec), &(output->string_spec)))
  {
    return false;
  }
  // roi_spec
  if (!bosdyn_msgs__msg__RegionOfInterestParamSpec__copy(
      &(input->roi_spec), &(output->roi_spec)))
  {
    return false;
  }
  // bool_spec
  if (!bosdyn_msgs__msg__BoolParamSpec__copy(
      &(input->bool_spec), &(output->bool_spec)))
  {
    return false;
  }
  // one_of_spec
  if (!bosdyn_msgs__msg__OneOfParamSpec__copy(
      &(input->one_of_spec), &(output->one_of_spec)))
  {
    return false;
  }
  // spec_choice
  output->spec_choice = input->spec_choice;
  return true;
}

bosdyn_msgs__msg__CustomParamSpecOneOfSpec *
bosdyn_msgs__msg__CustomParamSpecOneOfSpec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec * msg = (bosdyn_msgs__msg__CustomParamSpecOneOfSpec *)allocator.allocate(sizeof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec));
  bool success = bosdyn_msgs__msg__CustomParamSpecOneOfSpec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__CustomParamSpecOneOfSpec__destroy(bosdyn_msgs__msg__CustomParamSpecOneOfSpec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence__init(bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__CustomParamSpecOneOfSpec *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__CustomParamSpecOneOfSpec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(&data[i - 1]);
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
bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence__fini(bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence * array)
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
      bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(&array->data[i]);
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

bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence *
bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence * array = (bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence__destroy(bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence__are_equal(const bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence * lhs, const bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__CustomParamSpecOneOfSpec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence__copy(
  const bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence * input,
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__CustomParamSpecOneOfSpec * data =
      (bosdyn_msgs__msg__CustomParamSpecOneOfSpec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__CustomParamSpecOneOfSpec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__CustomParamSpecOneOfSpec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
