// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ImageSourceAndServiceOneOfRequestData.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/image_source_and_service_one_of_request_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image_source`
#include "rosidl_runtime_c/string_functions.h"
// Member `image_request`
#include "bosdyn_msgs/msg/detail/image_request__functions.h"

bool
bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__init(bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData * msg)
{
  if (!msg) {
    return false;
  }
  // image_source
  if (!rosidl_runtime_c__String__init(&msg->image_source)) {
    bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__fini(msg);
    return false;
  }
  // image_request
  if (!bosdyn_msgs__msg__ImageRequest__init(&msg->image_request)) {
    bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__fini(msg);
    return false;
  }
  // request_data_choice
  return true;
}

void
bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__fini(bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData * msg)
{
  if (!msg) {
    return;
  }
  // image_source
  rosidl_runtime_c__String__fini(&msg->image_source);
  // image_request
  bosdyn_msgs__msg__ImageRequest__fini(&msg->image_request);
  // request_data_choice
}

bool
bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__are_equal(const bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData * lhs, const bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image_source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->image_source), &(rhs->image_source)))
  {
    return false;
  }
  // image_request
  if (!bosdyn_msgs__msg__ImageRequest__are_equal(
      &(lhs->image_request), &(rhs->image_request)))
  {
    return false;
  }
  // request_data_choice
  if (lhs->request_data_choice != rhs->request_data_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__copy(
  const bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData * input,
  bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData * output)
{
  if (!input || !output) {
    return false;
  }
  // image_source
  if (!rosidl_runtime_c__String__copy(
      &(input->image_source), &(output->image_source)))
  {
    return false;
  }
  // image_request
  if (!bosdyn_msgs__msg__ImageRequest__copy(
      &(input->image_request), &(output->image_request)))
  {
    return false;
  }
  // request_data_choice
  output->request_data_choice = input->request_data_choice;
  return true;
}

bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData *
bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData * msg = (bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData *)allocator.allocate(sizeof(bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData));
  bool success = bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__destroy(bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence__init(bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence__fini(bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence * array)
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
      bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__fini(&array->data[i]);
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

bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence *
bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence * array = (bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence__destroy(bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence__are_equal(const bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence * lhs, const bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence__copy(
  const bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence * input,
  bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData * data =
      (bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
