// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ImageSourceAndService.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/image_source_and_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `request_data`
#include "bosdyn_msgs/msg/detail/image_source_and_service_one_of_request_data__functions.h"
// Member `image_service`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__ImageSourceAndService__init(bosdyn_msgs__msg__ImageSourceAndService * msg)
{
  if (!msg) {
    return false;
  }
  // request_data
  if (!bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__init(&msg->request_data)) {
    bosdyn_msgs__msg__ImageSourceAndService__fini(msg);
    return false;
  }
  // image_service
  if (!rosidl_runtime_c__String__init(&msg->image_service)) {
    bosdyn_msgs__msg__ImageSourceAndService__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__ImageSourceAndService__fini(bosdyn_msgs__msg__ImageSourceAndService * msg)
{
  if (!msg) {
    return;
  }
  // request_data
  bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__fini(&msg->request_data);
  // image_service
  rosidl_runtime_c__String__fini(&msg->image_service);
}

bool
bosdyn_msgs__msg__ImageSourceAndService__are_equal(const bosdyn_msgs__msg__ImageSourceAndService * lhs, const bosdyn_msgs__msg__ImageSourceAndService * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request_data
  if (!bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__are_equal(
      &(lhs->request_data), &(rhs->request_data)))
  {
    return false;
  }
  // image_service
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->image_service), &(rhs->image_service)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ImageSourceAndService__copy(
  const bosdyn_msgs__msg__ImageSourceAndService * input,
  bosdyn_msgs__msg__ImageSourceAndService * output)
{
  if (!input || !output) {
    return false;
  }
  // request_data
  if (!bosdyn_msgs__msg__ImageSourceAndServiceOneOfRequestData__copy(
      &(input->request_data), &(output->request_data)))
  {
    return false;
  }
  // image_service
  if (!rosidl_runtime_c__String__copy(
      &(input->image_service), &(output->image_service)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__ImageSourceAndService *
bosdyn_msgs__msg__ImageSourceAndService__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageSourceAndService * msg = (bosdyn_msgs__msg__ImageSourceAndService *)allocator.allocate(sizeof(bosdyn_msgs__msg__ImageSourceAndService), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ImageSourceAndService));
  bool success = bosdyn_msgs__msg__ImageSourceAndService__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ImageSourceAndService__destroy(bosdyn_msgs__msg__ImageSourceAndService * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ImageSourceAndService__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ImageSourceAndService__Sequence__init(bosdyn_msgs__msg__ImageSourceAndService__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageSourceAndService * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ImageSourceAndService *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ImageSourceAndService), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ImageSourceAndService__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ImageSourceAndService__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ImageSourceAndService__Sequence__fini(bosdyn_msgs__msg__ImageSourceAndService__Sequence * array)
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
      bosdyn_msgs__msg__ImageSourceAndService__fini(&array->data[i]);
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

bosdyn_msgs__msg__ImageSourceAndService__Sequence *
bosdyn_msgs__msg__ImageSourceAndService__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageSourceAndService__Sequence * array = (bosdyn_msgs__msg__ImageSourceAndService__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ImageSourceAndService__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ImageSourceAndService__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ImageSourceAndService__Sequence__destroy(bosdyn_msgs__msg__ImageSourceAndService__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ImageSourceAndService__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ImageSourceAndService__Sequence__are_equal(const bosdyn_msgs__msg__ImageSourceAndService__Sequence * lhs, const bosdyn_msgs__msg__ImageSourceAndService__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ImageSourceAndService__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ImageSourceAndService__Sequence__copy(
  const bosdyn_msgs__msg__ImageSourceAndService__Sequence * input,
  bosdyn_msgs__msg__ImageSourceAndService__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ImageSourceAndService);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ImageSourceAndService * data =
      (bosdyn_msgs__msg__ImageSourceAndService *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ImageSourceAndService__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ImageSourceAndService__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ImageSourceAndService__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
