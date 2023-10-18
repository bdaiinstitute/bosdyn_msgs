// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/AreaCallbackData.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/area_callback_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `custom_params`
#include "bosdyn_msgs/msg/detail/dict_param__functions.h"

bool
bosdyn_msgs__msg__AreaCallbackData__init(bosdyn_msgs__msg__AreaCallbackData * msg)
{
  if (!msg) {
    return false;
  }
  // custom_params
  if (!bosdyn_msgs__msg__DictParam__init(&msg->custom_params)) {
    bosdyn_msgs__msg__AreaCallbackData__fini(msg);
    return false;
  }
  // custom_params_is_set
  return true;
}

void
bosdyn_msgs__msg__AreaCallbackData__fini(bosdyn_msgs__msg__AreaCallbackData * msg)
{
  if (!msg) {
    return;
  }
  // custom_params
  bosdyn_msgs__msg__DictParam__fini(&msg->custom_params);
  // custom_params_is_set
}

bool
bosdyn_msgs__msg__AreaCallbackData__are_equal(const bosdyn_msgs__msg__AreaCallbackData * lhs, const bosdyn_msgs__msg__AreaCallbackData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // custom_params
  if (!bosdyn_msgs__msg__DictParam__are_equal(
      &(lhs->custom_params), &(rhs->custom_params)))
  {
    return false;
  }
  // custom_params_is_set
  if (lhs->custom_params_is_set != rhs->custom_params_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__AreaCallbackData__copy(
  const bosdyn_msgs__msg__AreaCallbackData * input,
  bosdyn_msgs__msg__AreaCallbackData * output)
{
  if (!input || !output) {
    return false;
  }
  // custom_params
  if (!bosdyn_msgs__msg__DictParam__copy(
      &(input->custom_params), &(output->custom_params)))
  {
    return false;
  }
  // custom_params_is_set
  output->custom_params_is_set = input->custom_params_is_set;
  return true;
}

bosdyn_msgs__msg__AreaCallbackData *
bosdyn_msgs__msg__AreaCallbackData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackData * msg = (bosdyn_msgs__msg__AreaCallbackData *)allocator.allocate(sizeof(bosdyn_msgs__msg__AreaCallbackData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__AreaCallbackData));
  bool success = bosdyn_msgs__msg__AreaCallbackData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__AreaCallbackData__destroy(bosdyn_msgs__msg__AreaCallbackData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__AreaCallbackData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__AreaCallbackData__Sequence__init(bosdyn_msgs__msg__AreaCallbackData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackData * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__AreaCallbackData *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__AreaCallbackData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__AreaCallbackData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__AreaCallbackData__fini(&data[i - 1]);
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
bosdyn_msgs__msg__AreaCallbackData__Sequence__fini(bosdyn_msgs__msg__AreaCallbackData__Sequence * array)
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
      bosdyn_msgs__msg__AreaCallbackData__fini(&array->data[i]);
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

bosdyn_msgs__msg__AreaCallbackData__Sequence *
bosdyn_msgs__msg__AreaCallbackData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackData__Sequence * array = (bosdyn_msgs__msg__AreaCallbackData__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__AreaCallbackData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__AreaCallbackData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__AreaCallbackData__Sequence__destroy(bosdyn_msgs__msg__AreaCallbackData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__AreaCallbackData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__AreaCallbackData__Sequence__are_equal(const bosdyn_msgs__msg__AreaCallbackData__Sequence * lhs, const bosdyn_msgs__msg__AreaCallbackData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__AreaCallbackData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__AreaCallbackData__Sequence__copy(
  const bosdyn_msgs__msg__AreaCallbackData__Sequence * input,
  bosdyn_msgs__msg__AreaCallbackData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__AreaCallbackData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__AreaCallbackData * data =
      (bosdyn_msgs__msg__AreaCallbackData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__AreaCallbackData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__AreaCallbackData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__AreaCallbackData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
