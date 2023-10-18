// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ComputeParameters.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/compute_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `model_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `reference_images`
#include "bosdyn_msgs/msg/detail/image_capture_and_source__functions.h"
// Member `custom_params`
#include "bosdyn_msgs/msg/detail/dict_param__functions.h"

bool
bosdyn_msgs__msg__ComputeParameters__init(bosdyn_msgs__msg__ComputeParameters * msg)
{
  if (!msg) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    bosdyn_msgs__msg__ComputeParameters__fini(msg);
    return false;
  }
  // reference_images
  if (!bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__init(&msg->reference_images, 0)) {
    bosdyn_msgs__msg__ComputeParameters__fini(msg);
    return false;
  }
  // custom_params
  if (!bosdyn_msgs__msg__DictParam__init(&msg->custom_params)) {
    bosdyn_msgs__msg__ComputeParameters__fini(msg);
    return false;
  }
  // custom_params_is_set
  return true;
}

void
bosdyn_msgs__msg__ComputeParameters__fini(bosdyn_msgs__msg__ComputeParameters * msg)
{
  if (!msg) {
    return;
  }
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
  // reference_images
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__fini(&msg->reference_images);
  // custom_params
  bosdyn_msgs__msg__DictParam__fini(&msg->custom_params);
  // custom_params_is_set
}

bool
bosdyn_msgs__msg__ComputeParameters__are_equal(const bosdyn_msgs__msg__ComputeParameters * lhs, const bosdyn_msgs__msg__ComputeParameters * rhs)
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
  // reference_images
  if (!bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__are_equal(
      &(lhs->reference_images), &(rhs->reference_images)))
  {
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
bosdyn_msgs__msg__ComputeParameters__copy(
  const bosdyn_msgs__msg__ComputeParameters * input,
  bosdyn_msgs__msg__ComputeParameters * output)
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
  // reference_images
  if (!bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__copy(
      &(input->reference_images), &(output->reference_images)))
  {
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

bosdyn_msgs__msg__ComputeParameters *
bosdyn_msgs__msg__ComputeParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ComputeParameters * msg = (bosdyn_msgs__msg__ComputeParameters *)allocator.allocate(sizeof(bosdyn_msgs__msg__ComputeParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ComputeParameters));
  bool success = bosdyn_msgs__msg__ComputeParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ComputeParameters__destroy(bosdyn_msgs__msg__ComputeParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ComputeParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ComputeParameters__Sequence__init(bosdyn_msgs__msg__ComputeParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ComputeParameters * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ComputeParameters *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ComputeParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ComputeParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ComputeParameters__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ComputeParameters__Sequence__fini(bosdyn_msgs__msg__ComputeParameters__Sequence * array)
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
      bosdyn_msgs__msg__ComputeParameters__fini(&array->data[i]);
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

bosdyn_msgs__msg__ComputeParameters__Sequence *
bosdyn_msgs__msg__ComputeParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ComputeParameters__Sequence * array = (bosdyn_msgs__msg__ComputeParameters__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ComputeParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ComputeParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ComputeParameters__Sequence__destroy(bosdyn_msgs__msg__ComputeParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ComputeParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ComputeParameters__Sequence__are_equal(const bosdyn_msgs__msg__ComputeParameters__Sequence * lhs, const bosdyn_msgs__msg__ComputeParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ComputeParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ComputeParameters__Sequence__copy(
  const bosdyn_msgs__msg__ComputeParameters__Sequence * input,
  bosdyn_msgs__msg__ComputeParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ComputeParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ComputeParameters * data =
      (bosdyn_msgs__msg__ComputeParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ComputeParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ComputeParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ComputeParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
