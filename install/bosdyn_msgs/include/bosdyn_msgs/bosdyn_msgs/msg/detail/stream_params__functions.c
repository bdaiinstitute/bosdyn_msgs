// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StreamParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/stream_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `awb`
#include "bosdyn_msgs/msg/detail/stream_params_awb_mode__functions.h"
// Member `exposure`
#include "bosdyn_msgs/msg/detail/stream_params_one_of_exposure__functions.h"

bool
bosdyn_msgs__msg__StreamParams__init(bosdyn_msgs__msg__StreamParams * msg)
{
  if (!msg) {
    return false;
  }
  // targetbitrate
  // targetbitrate_is_set
  // refreshinterval
  // refreshinterval_is_set
  // idrinterval
  // idrinterval_is_set
  // awb
  if (!bosdyn_msgs__msg__StreamParamsAwbMode__init(&msg->awb)) {
    bosdyn_msgs__msg__StreamParams__fini(msg);
    return false;
  }
  // awb_is_set
  // exposure
  if (!bosdyn_msgs__msg__StreamParamsOneOfExposure__init(&msg->exposure)) {
    bosdyn_msgs__msg__StreamParams__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__StreamParams__fini(bosdyn_msgs__msg__StreamParams * msg)
{
  if (!msg) {
    return;
  }
  // targetbitrate
  // targetbitrate_is_set
  // refreshinterval
  // refreshinterval_is_set
  // idrinterval
  // idrinterval_is_set
  // awb
  bosdyn_msgs__msg__StreamParamsAwbMode__fini(&msg->awb);
  // awb_is_set
  // exposure
  bosdyn_msgs__msg__StreamParamsOneOfExposure__fini(&msg->exposure);
}

bool
bosdyn_msgs__msg__StreamParams__are_equal(const bosdyn_msgs__msg__StreamParams * lhs, const bosdyn_msgs__msg__StreamParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // targetbitrate
  if (lhs->targetbitrate != rhs->targetbitrate) {
    return false;
  }
  // targetbitrate_is_set
  if (lhs->targetbitrate_is_set != rhs->targetbitrate_is_set) {
    return false;
  }
  // refreshinterval
  if (lhs->refreshinterval != rhs->refreshinterval) {
    return false;
  }
  // refreshinterval_is_set
  if (lhs->refreshinterval_is_set != rhs->refreshinterval_is_set) {
    return false;
  }
  // idrinterval
  if (lhs->idrinterval != rhs->idrinterval) {
    return false;
  }
  // idrinterval_is_set
  if (lhs->idrinterval_is_set != rhs->idrinterval_is_set) {
    return false;
  }
  // awb
  if (!bosdyn_msgs__msg__StreamParamsAwbMode__are_equal(
      &(lhs->awb), &(rhs->awb)))
  {
    return false;
  }
  // awb_is_set
  if (lhs->awb_is_set != rhs->awb_is_set) {
    return false;
  }
  // exposure
  if (!bosdyn_msgs__msg__StreamParamsOneOfExposure__are_equal(
      &(lhs->exposure), &(rhs->exposure)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StreamParams__copy(
  const bosdyn_msgs__msg__StreamParams * input,
  bosdyn_msgs__msg__StreamParams * output)
{
  if (!input || !output) {
    return false;
  }
  // targetbitrate
  output->targetbitrate = input->targetbitrate;
  // targetbitrate_is_set
  output->targetbitrate_is_set = input->targetbitrate_is_set;
  // refreshinterval
  output->refreshinterval = input->refreshinterval;
  // refreshinterval_is_set
  output->refreshinterval_is_set = input->refreshinterval_is_set;
  // idrinterval
  output->idrinterval = input->idrinterval;
  // idrinterval_is_set
  output->idrinterval_is_set = input->idrinterval_is_set;
  // awb
  if (!bosdyn_msgs__msg__StreamParamsAwbMode__copy(
      &(input->awb), &(output->awb)))
  {
    return false;
  }
  // awb_is_set
  output->awb_is_set = input->awb_is_set;
  // exposure
  if (!bosdyn_msgs__msg__StreamParamsOneOfExposure__copy(
      &(input->exposure), &(output->exposure)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__StreamParams *
bosdyn_msgs__msg__StreamParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StreamParams * msg = (bosdyn_msgs__msg__StreamParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__StreamParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StreamParams));
  bool success = bosdyn_msgs__msg__StreamParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StreamParams__destroy(bosdyn_msgs__msg__StreamParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StreamParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StreamParams__Sequence__init(bosdyn_msgs__msg__StreamParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StreamParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StreamParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StreamParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StreamParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StreamParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StreamParams__Sequence__fini(bosdyn_msgs__msg__StreamParams__Sequence * array)
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
      bosdyn_msgs__msg__StreamParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__StreamParams__Sequence *
bosdyn_msgs__msg__StreamParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StreamParams__Sequence * array = (bosdyn_msgs__msg__StreamParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StreamParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StreamParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StreamParams__Sequence__destroy(bosdyn_msgs__msg__StreamParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StreamParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StreamParams__Sequence__are_equal(const bosdyn_msgs__msg__StreamParams__Sequence * lhs, const bosdyn_msgs__msg__StreamParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StreamParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StreamParams__Sequence__copy(
  const bosdyn_msgs__msg__StreamParams__Sequence * input,
  bosdyn_msgs__msg__StreamParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StreamParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StreamParams * data =
      (bosdyn_msgs__msg__StreamParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StreamParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StreamParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StreamParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
