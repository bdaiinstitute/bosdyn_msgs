// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DataAcquisitionCapability.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/data_acquisition_capability__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `description`
// Member `channel_name`
// Member `service_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `custom_params`
#include "bosdyn_msgs/msg/detail/dict_param_spec__functions.h"

bool
bosdyn_msgs__msg__DataAcquisitionCapability__init(bosdyn_msgs__msg__DataAcquisitionCapability * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__DataAcquisitionCapability__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    bosdyn_msgs__msg__DataAcquisitionCapability__fini(msg);
    return false;
  }
  // channel_name
  if (!rosidl_runtime_c__String__init(&msg->channel_name)) {
    bosdyn_msgs__msg__DataAcquisitionCapability__fini(msg);
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__DataAcquisitionCapability__fini(msg);
    return false;
  }
  // custom_params
  if (!bosdyn_msgs__msg__DictParamSpec__init(&msg->custom_params)) {
    bosdyn_msgs__msg__DataAcquisitionCapability__fini(msg);
    return false;
  }
  // custom_params_is_set
  return true;
}

void
bosdyn_msgs__msg__DataAcquisitionCapability__fini(bosdyn_msgs__msg__DataAcquisitionCapability * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // channel_name
  rosidl_runtime_c__String__fini(&msg->channel_name);
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // custom_params
  bosdyn_msgs__msg__DictParamSpec__fini(&msg->custom_params);
  // custom_params_is_set
}

bool
bosdyn_msgs__msg__DataAcquisitionCapability__are_equal(const bosdyn_msgs__msg__DataAcquisitionCapability * lhs, const bosdyn_msgs__msg__DataAcquisitionCapability * rhs)
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
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // channel_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->channel_name), &(rhs->channel_name)))
  {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // custom_params
  if (!bosdyn_msgs__msg__DictParamSpec__are_equal(
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
bosdyn_msgs__msg__DataAcquisitionCapability__copy(
  const bosdyn_msgs__msg__DataAcquisitionCapability * input,
  bosdyn_msgs__msg__DataAcquisitionCapability * output)
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
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // channel_name
  if (!rosidl_runtime_c__String__copy(
      &(input->channel_name), &(output->channel_name)))
  {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // custom_params
  if (!bosdyn_msgs__msg__DictParamSpec__copy(
      &(input->custom_params), &(output->custom_params)))
  {
    return false;
  }
  // custom_params_is_set
  output->custom_params_is_set = input->custom_params_is_set;
  return true;
}

bosdyn_msgs__msg__DataAcquisitionCapability *
bosdyn_msgs__msg__DataAcquisitionCapability__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataAcquisitionCapability * msg = (bosdyn_msgs__msg__DataAcquisitionCapability *)allocator.allocate(sizeof(bosdyn_msgs__msg__DataAcquisitionCapability), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DataAcquisitionCapability));
  bool success = bosdyn_msgs__msg__DataAcquisitionCapability__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DataAcquisitionCapability__destroy(bosdyn_msgs__msg__DataAcquisitionCapability * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DataAcquisitionCapability__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DataAcquisitionCapability__Sequence__init(bosdyn_msgs__msg__DataAcquisitionCapability__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataAcquisitionCapability * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DataAcquisitionCapability *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DataAcquisitionCapability), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DataAcquisitionCapability__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DataAcquisitionCapability__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DataAcquisitionCapability__Sequence__fini(bosdyn_msgs__msg__DataAcquisitionCapability__Sequence * array)
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
      bosdyn_msgs__msg__DataAcquisitionCapability__fini(&array->data[i]);
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

bosdyn_msgs__msg__DataAcquisitionCapability__Sequence *
bosdyn_msgs__msg__DataAcquisitionCapability__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataAcquisitionCapability__Sequence * array = (bosdyn_msgs__msg__DataAcquisitionCapability__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DataAcquisitionCapability__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DataAcquisitionCapability__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DataAcquisitionCapability__Sequence__destroy(bosdyn_msgs__msg__DataAcquisitionCapability__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DataAcquisitionCapability__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DataAcquisitionCapability__Sequence__are_equal(const bosdyn_msgs__msg__DataAcquisitionCapability__Sequence * lhs, const bosdyn_msgs__msg__DataAcquisitionCapability__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DataAcquisitionCapability__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DataAcquisitionCapability__Sequence__copy(
  const bosdyn_msgs__msg__DataAcquisitionCapability__Sequence * input,
  bosdyn_msgs__msg__DataAcquisitionCapability__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DataAcquisitionCapability);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DataAcquisitionCapability * data =
      (bosdyn_msgs__msg__DataAcquisitionCapability *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DataAcquisitionCapability__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DataAcquisitionCapability__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DataAcquisitionCapability__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
