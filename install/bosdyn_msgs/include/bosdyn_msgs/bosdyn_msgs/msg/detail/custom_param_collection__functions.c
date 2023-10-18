// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/CustomParamCollection.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/custom_param_collection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `specs`
#include "bosdyn_msgs/msg/detail/dict_param_spec__functions.h"
// Member `values`
#include "bosdyn_msgs/msg/detail/dict_param__functions.h"

bool
bosdyn_msgs__msg__CustomParamCollection__init(bosdyn_msgs__msg__CustomParamCollection * msg)
{
  if (!msg) {
    return false;
  }
  // specs
  if (!bosdyn_msgs__msg__DictParamSpec__init(&msg->specs)) {
    bosdyn_msgs__msg__CustomParamCollection__fini(msg);
    return false;
  }
  // specs_is_set
  // values
  if (!bosdyn_msgs__msg__DictParam__init(&msg->values)) {
    bosdyn_msgs__msg__CustomParamCollection__fini(msg);
    return false;
  }
  // values_is_set
  return true;
}

void
bosdyn_msgs__msg__CustomParamCollection__fini(bosdyn_msgs__msg__CustomParamCollection * msg)
{
  if (!msg) {
    return;
  }
  // specs
  bosdyn_msgs__msg__DictParamSpec__fini(&msg->specs);
  // specs_is_set
  // values
  bosdyn_msgs__msg__DictParam__fini(&msg->values);
  // values_is_set
}

bool
bosdyn_msgs__msg__CustomParamCollection__are_equal(const bosdyn_msgs__msg__CustomParamCollection * lhs, const bosdyn_msgs__msg__CustomParamCollection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // specs
  if (!bosdyn_msgs__msg__DictParamSpec__are_equal(
      &(lhs->specs), &(rhs->specs)))
  {
    return false;
  }
  // specs_is_set
  if (lhs->specs_is_set != rhs->specs_is_set) {
    return false;
  }
  // values
  if (!bosdyn_msgs__msg__DictParam__are_equal(
      &(lhs->values), &(rhs->values)))
  {
    return false;
  }
  // values_is_set
  if (lhs->values_is_set != rhs->values_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__CustomParamCollection__copy(
  const bosdyn_msgs__msg__CustomParamCollection * input,
  bosdyn_msgs__msg__CustomParamCollection * output)
{
  if (!input || !output) {
    return false;
  }
  // specs
  if (!bosdyn_msgs__msg__DictParamSpec__copy(
      &(input->specs), &(output->specs)))
  {
    return false;
  }
  // specs_is_set
  output->specs_is_set = input->specs_is_set;
  // values
  if (!bosdyn_msgs__msg__DictParam__copy(
      &(input->values), &(output->values)))
  {
    return false;
  }
  // values_is_set
  output->values_is_set = input->values_is_set;
  return true;
}

bosdyn_msgs__msg__CustomParamCollection *
bosdyn_msgs__msg__CustomParamCollection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CustomParamCollection * msg = (bosdyn_msgs__msg__CustomParamCollection *)allocator.allocate(sizeof(bosdyn_msgs__msg__CustomParamCollection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__CustomParamCollection));
  bool success = bosdyn_msgs__msg__CustomParamCollection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__CustomParamCollection__destroy(bosdyn_msgs__msg__CustomParamCollection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__CustomParamCollection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__CustomParamCollection__Sequence__init(bosdyn_msgs__msg__CustomParamCollection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CustomParamCollection * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__CustomParamCollection *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__CustomParamCollection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__CustomParamCollection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__CustomParamCollection__fini(&data[i - 1]);
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
bosdyn_msgs__msg__CustomParamCollection__Sequence__fini(bosdyn_msgs__msg__CustomParamCollection__Sequence * array)
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
      bosdyn_msgs__msg__CustomParamCollection__fini(&array->data[i]);
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

bosdyn_msgs__msg__CustomParamCollection__Sequence *
bosdyn_msgs__msg__CustomParamCollection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CustomParamCollection__Sequence * array = (bosdyn_msgs__msg__CustomParamCollection__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__CustomParamCollection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__CustomParamCollection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__CustomParamCollection__Sequence__destroy(bosdyn_msgs__msg__CustomParamCollection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__CustomParamCollection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__CustomParamCollection__Sequence__are_equal(const bosdyn_msgs__msg__CustomParamCollection__Sequence * lhs, const bosdyn_msgs__msg__CustomParamCollection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__CustomParamCollection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__CustomParamCollection__Sequence__copy(
  const bosdyn_msgs__msg__CustomParamCollection__Sequence * input,
  bosdyn_msgs__msg__CustomParamCollection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__CustomParamCollection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__CustomParamCollection * data =
      (bosdyn_msgs__msg__CustomParamCollection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__CustomParamCollection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__CustomParamCollection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__CustomParamCollection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
