// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/NetworkComputeInputData.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/network_compute_input_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `input`
#include "bosdyn_msgs/msg/detail/network_compute_input_data_one_of_input__functions.h"
// Member `model_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `rotate_image`
#include "bosdyn_msgs/msg/detail/network_compute_input_data_rotate_image__functions.h"

bool
bosdyn_msgs__msg__NetworkComputeInputData__init(bosdyn_msgs__msg__NetworkComputeInputData * msg)
{
  if (!msg) {
    return false;
  }
  // input
  if (!bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput__init(&msg->input)) {
    bosdyn_msgs__msg__NetworkComputeInputData__fini(msg);
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    bosdyn_msgs__msg__NetworkComputeInputData__fini(msg);
    return false;
  }
  // min_confidence
  // rotate_image
  if (!bosdyn_msgs__msg__NetworkComputeInputDataRotateImage__init(&msg->rotate_image)) {
    bosdyn_msgs__msg__NetworkComputeInputData__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__NetworkComputeInputData__fini(bosdyn_msgs__msg__NetworkComputeInputData * msg)
{
  if (!msg) {
    return;
  }
  // input
  bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput__fini(&msg->input);
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
  // min_confidence
  // rotate_image
  bosdyn_msgs__msg__NetworkComputeInputDataRotateImage__fini(&msg->rotate_image);
}

bool
bosdyn_msgs__msg__NetworkComputeInputData__are_equal(const bosdyn_msgs__msg__NetworkComputeInputData * lhs, const bosdyn_msgs__msg__NetworkComputeInputData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (!bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_name), &(rhs->model_name)))
  {
    return false;
  }
  // min_confidence
  if (lhs->min_confidence != rhs->min_confidence) {
    return false;
  }
  // rotate_image
  if (!bosdyn_msgs__msg__NetworkComputeInputDataRotateImage__are_equal(
      &(lhs->rotate_image), &(rhs->rotate_image)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__NetworkComputeInputData__copy(
  const bosdyn_msgs__msg__NetworkComputeInputData * input,
  bosdyn_msgs__msg__NetworkComputeInputData * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  if (!bosdyn_msgs__msg__NetworkComputeInputDataOneOfInput__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->model_name), &(output->model_name)))
  {
    return false;
  }
  // min_confidence
  output->min_confidence = input->min_confidence;
  // rotate_image
  if (!bosdyn_msgs__msg__NetworkComputeInputDataRotateImage__copy(
      &(input->rotate_image), &(output->rotate_image)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__NetworkComputeInputData *
bosdyn_msgs__msg__NetworkComputeInputData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NetworkComputeInputData * msg = (bosdyn_msgs__msg__NetworkComputeInputData *)allocator.allocate(sizeof(bosdyn_msgs__msg__NetworkComputeInputData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__NetworkComputeInputData));
  bool success = bosdyn_msgs__msg__NetworkComputeInputData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__NetworkComputeInputData__destroy(bosdyn_msgs__msg__NetworkComputeInputData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__NetworkComputeInputData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__NetworkComputeInputData__Sequence__init(bosdyn_msgs__msg__NetworkComputeInputData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NetworkComputeInputData * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__NetworkComputeInputData *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__NetworkComputeInputData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__NetworkComputeInputData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__NetworkComputeInputData__fini(&data[i - 1]);
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
bosdyn_msgs__msg__NetworkComputeInputData__Sequence__fini(bosdyn_msgs__msg__NetworkComputeInputData__Sequence * array)
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
      bosdyn_msgs__msg__NetworkComputeInputData__fini(&array->data[i]);
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

bosdyn_msgs__msg__NetworkComputeInputData__Sequence *
bosdyn_msgs__msg__NetworkComputeInputData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NetworkComputeInputData__Sequence * array = (bosdyn_msgs__msg__NetworkComputeInputData__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__NetworkComputeInputData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__NetworkComputeInputData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__NetworkComputeInputData__Sequence__destroy(bosdyn_msgs__msg__NetworkComputeInputData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__NetworkComputeInputData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__NetworkComputeInputData__Sequence__are_equal(const bosdyn_msgs__msg__NetworkComputeInputData__Sequence * lhs, const bosdyn_msgs__msg__NetworkComputeInputData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__NetworkComputeInputData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__NetworkComputeInputData__Sequence__copy(
  const bosdyn_msgs__msg__NetworkComputeInputData__Sequence * input,
  bosdyn_msgs__msg__NetworkComputeInputData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__NetworkComputeInputData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__NetworkComputeInputData * data =
      (bosdyn_msgs__msg__NetworkComputeInputData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__NetworkComputeInputData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__NetworkComputeInputData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__NetworkComputeInputData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
