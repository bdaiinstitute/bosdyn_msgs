// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ModelData.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/model_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `model_name`
// Member `available_labels`
#include "rosidl_runtime_c/string_functions.h"
// Member `output_image_spec`
#include "bosdyn_msgs/msg/detail/output_image_spec__functions.h"
// Member `custom_params`
#include "bosdyn_msgs/msg/detail/dict_param_spec__functions.h"

bool
bosdyn_msgs__msg__ModelData__init(bosdyn_msgs__msg__ModelData * msg)
{
  if (!msg) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    bosdyn_msgs__msg__ModelData__fini(msg);
    return false;
  }
  // available_labels
  if (!rosidl_runtime_c__String__Sequence__init(&msg->available_labels, 0)) {
    bosdyn_msgs__msg__ModelData__fini(msg);
    return false;
  }
  // output_image_spec
  if (!bosdyn_msgs__msg__OutputImageSpec__Sequence__init(&msg->output_image_spec, 0)) {
    bosdyn_msgs__msg__ModelData__fini(msg);
    return false;
  }
  // custom_params
  if (!bosdyn_msgs__msg__DictParamSpec__init(&msg->custom_params)) {
    bosdyn_msgs__msg__ModelData__fini(msg);
    return false;
  }
  // custom_params_is_set
  return true;
}

void
bosdyn_msgs__msg__ModelData__fini(bosdyn_msgs__msg__ModelData * msg)
{
  if (!msg) {
    return;
  }
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
  // available_labels
  rosidl_runtime_c__String__Sequence__fini(&msg->available_labels);
  // output_image_spec
  bosdyn_msgs__msg__OutputImageSpec__Sequence__fini(&msg->output_image_spec);
  // custom_params
  bosdyn_msgs__msg__DictParamSpec__fini(&msg->custom_params);
  // custom_params_is_set
}

bool
bosdyn_msgs__msg__ModelData__are_equal(const bosdyn_msgs__msg__ModelData * lhs, const bosdyn_msgs__msg__ModelData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_name), &(rhs->model_name)))
  {
    return false;
  }
  // available_labels
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->available_labels), &(rhs->available_labels)))
  {
    return false;
  }
  // output_image_spec
  if (!bosdyn_msgs__msg__OutputImageSpec__Sequence__are_equal(
      &(lhs->output_image_spec), &(rhs->output_image_spec)))
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
bosdyn_msgs__msg__ModelData__copy(
  const bosdyn_msgs__msg__ModelData * input,
  bosdyn_msgs__msg__ModelData * output)
{
  if (!input || !output) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->model_name), &(output->model_name)))
  {
    return false;
  }
  // available_labels
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->available_labels), &(output->available_labels)))
  {
    return false;
  }
  // output_image_spec
  if (!bosdyn_msgs__msg__OutputImageSpec__Sequence__copy(
      &(input->output_image_spec), &(output->output_image_spec)))
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

bosdyn_msgs__msg__ModelData *
bosdyn_msgs__msg__ModelData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ModelData * msg = (bosdyn_msgs__msg__ModelData *)allocator.allocate(sizeof(bosdyn_msgs__msg__ModelData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ModelData));
  bool success = bosdyn_msgs__msg__ModelData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ModelData__destroy(bosdyn_msgs__msg__ModelData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ModelData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ModelData__Sequence__init(bosdyn_msgs__msg__ModelData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ModelData * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ModelData *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ModelData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ModelData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ModelData__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ModelData__Sequence__fini(bosdyn_msgs__msg__ModelData__Sequence * array)
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
      bosdyn_msgs__msg__ModelData__fini(&array->data[i]);
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

bosdyn_msgs__msg__ModelData__Sequence *
bosdyn_msgs__msg__ModelData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ModelData__Sequence * array = (bosdyn_msgs__msg__ModelData__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ModelData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ModelData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ModelData__Sequence__destroy(bosdyn_msgs__msg__ModelData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ModelData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ModelData__Sequence__are_equal(const bosdyn_msgs__msg__ModelData__Sequence * lhs, const bosdyn_msgs__msg__ModelData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ModelData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ModelData__Sequence__copy(
  const bosdyn_msgs__msg__ModelData__Sequence * input,
  bosdyn_msgs__msg__ModelData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ModelData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ModelData * data =
      (bosdyn_msgs__msg__ModelData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ModelData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ModelData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ModelData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
