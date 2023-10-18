// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DictParamChildSpec.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/dict_param_child_spec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `spec`
#include "bosdyn_msgs/msg/detail/custom_param_spec__functions.h"
// Member `ui_info`
#include "bosdyn_msgs/msg/detail/user_interface_info__functions.h"

bool
bosdyn_msgs__msg__DictParamChildSpec__init(bosdyn_msgs__msg__DictParamChildSpec * msg)
{
  if (!msg) {
    return false;
  }
  // spec
  if (!bosdyn_msgs__msg__CustomParamSpec__init(&msg->spec)) {
    bosdyn_msgs__msg__DictParamChildSpec__fini(msg);
    return false;
  }
  // spec_is_set
  // ui_info
  if (!bosdyn_msgs__msg__UserInterfaceInfo__init(&msg->ui_info)) {
    bosdyn_msgs__msg__DictParamChildSpec__fini(msg);
    return false;
  }
  // ui_info_is_set
  return true;
}

void
bosdyn_msgs__msg__DictParamChildSpec__fini(bosdyn_msgs__msg__DictParamChildSpec * msg)
{
  if (!msg) {
    return;
  }
  // spec
  bosdyn_msgs__msg__CustomParamSpec__fini(&msg->spec);
  // spec_is_set
  // ui_info
  bosdyn_msgs__msg__UserInterfaceInfo__fini(&msg->ui_info);
  // ui_info_is_set
}

bool
bosdyn_msgs__msg__DictParamChildSpec__are_equal(const bosdyn_msgs__msg__DictParamChildSpec * lhs, const bosdyn_msgs__msg__DictParamChildSpec * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // spec
  if (!bosdyn_msgs__msg__CustomParamSpec__are_equal(
      &(lhs->spec), &(rhs->spec)))
  {
    return false;
  }
  // spec_is_set
  if (lhs->spec_is_set != rhs->spec_is_set) {
    return false;
  }
  // ui_info
  if (!bosdyn_msgs__msg__UserInterfaceInfo__are_equal(
      &(lhs->ui_info), &(rhs->ui_info)))
  {
    return false;
  }
  // ui_info_is_set
  if (lhs->ui_info_is_set != rhs->ui_info_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DictParamChildSpec__copy(
  const bosdyn_msgs__msg__DictParamChildSpec * input,
  bosdyn_msgs__msg__DictParamChildSpec * output)
{
  if (!input || !output) {
    return false;
  }
  // spec
  if (!bosdyn_msgs__msg__CustomParamSpec__copy(
      &(input->spec), &(output->spec)))
  {
    return false;
  }
  // spec_is_set
  output->spec_is_set = input->spec_is_set;
  // ui_info
  if (!bosdyn_msgs__msg__UserInterfaceInfo__copy(
      &(input->ui_info), &(output->ui_info)))
  {
    return false;
  }
  // ui_info_is_set
  output->ui_info_is_set = input->ui_info_is_set;
  return true;
}

bosdyn_msgs__msg__DictParamChildSpec *
bosdyn_msgs__msg__DictParamChildSpec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DictParamChildSpec * msg = (bosdyn_msgs__msg__DictParamChildSpec *)allocator.allocate(sizeof(bosdyn_msgs__msg__DictParamChildSpec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DictParamChildSpec));
  bool success = bosdyn_msgs__msg__DictParamChildSpec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DictParamChildSpec__destroy(bosdyn_msgs__msg__DictParamChildSpec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DictParamChildSpec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DictParamChildSpec__Sequence__init(bosdyn_msgs__msg__DictParamChildSpec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DictParamChildSpec * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DictParamChildSpec *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DictParamChildSpec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DictParamChildSpec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DictParamChildSpec__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DictParamChildSpec__Sequence__fini(bosdyn_msgs__msg__DictParamChildSpec__Sequence * array)
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
      bosdyn_msgs__msg__DictParamChildSpec__fini(&array->data[i]);
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

bosdyn_msgs__msg__DictParamChildSpec__Sequence *
bosdyn_msgs__msg__DictParamChildSpec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DictParamChildSpec__Sequence * array = (bosdyn_msgs__msg__DictParamChildSpec__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DictParamChildSpec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DictParamChildSpec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DictParamChildSpec__Sequence__destroy(bosdyn_msgs__msg__DictParamChildSpec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DictParamChildSpec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DictParamChildSpec__Sequence__are_equal(const bosdyn_msgs__msg__DictParamChildSpec__Sequence * lhs, const bosdyn_msgs__msg__DictParamChildSpec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DictParamChildSpec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DictParamChildSpec__Sequence__copy(
  const bosdyn_msgs__msg__DictParamChildSpec__Sequence * input,
  bosdyn_msgs__msg__DictParamChildSpec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DictParamChildSpec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DictParamChildSpec * data =
      (bosdyn_msgs__msg__DictParamChildSpec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DictParamChildSpec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DictParamChildSpec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DictParamChildSpec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
