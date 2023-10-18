// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PowerStatus.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/power_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__PowerStatus__init(bosdyn_msgs__msg__PowerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // ptz
  // ptz_is_set
  // aux1
  // aux1_is_set
  // aux2
  // aux2_is_set
  // external_mic
  // external_mic_is_set
  return true;
}

void
bosdyn_msgs__msg__PowerStatus__fini(bosdyn_msgs__msg__PowerStatus * msg)
{
  if (!msg) {
    return;
  }
  // ptz
  // ptz_is_set
  // aux1
  // aux1_is_set
  // aux2
  // aux2_is_set
  // external_mic
  // external_mic_is_set
}

bool
bosdyn_msgs__msg__PowerStatus__are_equal(const bosdyn_msgs__msg__PowerStatus * lhs, const bosdyn_msgs__msg__PowerStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ptz
  if (lhs->ptz != rhs->ptz) {
    return false;
  }
  // ptz_is_set
  if (lhs->ptz_is_set != rhs->ptz_is_set) {
    return false;
  }
  // aux1
  if (lhs->aux1 != rhs->aux1) {
    return false;
  }
  // aux1_is_set
  if (lhs->aux1_is_set != rhs->aux1_is_set) {
    return false;
  }
  // aux2
  if (lhs->aux2 != rhs->aux2) {
    return false;
  }
  // aux2_is_set
  if (lhs->aux2_is_set != rhs->aux2_is_set) {
    return false;
  }
  // external_mic
  if (lhs->external_mic != rhs->external_mic) {
    return false;
  }
  // external_mic_is_set
  if (lhs->external_mic_is_set != rhs->external_mic_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PowerStatus__copy(
  const bosdyn_msgs__msg__PowerStatus * input,
  bosdyn_msgs__msg__PowerStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // ptz
  output->ptz = input->ptz;
  // ptz_is_set
  output->ptz_is_set = input->ptz_is_set;
  // aux1
  output->aux1 = input->aux1;
  // aux1_is_set
  output->aux1_is_set = input->aux1_is_set;
  // aux2
  output->aux2 = input->aux2;
  // aux2_is_set
  output->aux2_is_set = input->aux2_is_set;
  // external_mic
  output->external_mic = input->external_mic;
  // external_mic_is_set
  output->external_mic_is_set = input->external_mic_is_set;
  return true;
}

bosdyn_msgs__msg__PowerStatus *
bosdyn_msgs__msg__PowerStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PowerStatus * msg = (bosdyn_msgs__msg__PowerStatus *)allocator.allocate(sizeof(bosdyn_msgs__msg__PowerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PowerStatus));
  bool success = bosdyn_msgs__msg__PowerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PowerStatus__destroy(bosdyn_msgs__msg__PowerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PowerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PowerStatus__Sequence__init(bosdyn_msgs__msg__PowerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PowerStatus * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PowerStatus *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PowerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PowerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PowerStatus__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PowerStatus__Sequence__fini(bosdyn_msgs__msg__PowerStatus__Sequence * array)
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
      bosdyn_msgs__msg__PowerStatus__fini(&array->data[i]);
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

bosdyn_msgs__msg__PowerStatus__Sequence *
bosdyn_msgs__msg__PowerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PowerStatus__Sequence * array = (bosdyn_msgs__msg__PowerStatus__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PowerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PowerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PowerStatus__Sequence__destroy(bosdyn_msgs__msg__PowerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PowerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PowerStatus__Sequence__are_equal(const bosdyn_msgs__msg__PowerStatus__Sequence * lhs, const bosdyn_msgs__msg__PowerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PowerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PowerStatus__Sequence__copy(
  const bosdyn_msgs__msg__PowerStatus__Sequence * input,
  bosdyn_msgs__msg__PowerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PowerStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PowerStatus * data =
      (bosdyn_msgs__msg__PowerStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PowerStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PowerStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PowerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
