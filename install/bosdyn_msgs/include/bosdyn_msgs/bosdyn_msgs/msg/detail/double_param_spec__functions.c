// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DoubleParamSpec.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/double_param_spec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `units`
#include "bosdyn_msgs/msg/detail/units__functions.h"

bool
bosdyn_msgs__msg__DoubleParamSpec__init(bosdyn_msgs__msg__DoubleParamSpec * msg)
{
  if (!msg) {
    return false;
  }
  // default_value
  // default_value_is_set
  // units
  if (!bosdyn_msgs__msg__Units__init(&msg->units)) {
    bosdyn_msgs__msg__DoubleParamSpec__fini(msg);
    return false;
  }
  // units_is_set
  // min_value
  // min_value_is_set
  // max_value
  // max_value_is_set
  return true;
}

void
bosdyn_msgs__msg__DoubleParamSpec__fini(bosdyn_msgs__msg__DoubleParamSpec * msg)
{
  if (!msg) {
    return;
  }
  // default_value
  // default_value_is_set
  // units
  bosdyn_msgs__msg__Units__fini(&msg->units);
  // units_is_set
  // min_value
  // min_value_is_set
  // max_value
  // max_value_is_set
}

bool
bosdyn_msgs__msg__DoubleParamSpec__are_equal(const bosdyn_msgs__msg__DoubleParamSpec * lhs, const bosdyn_msgs__msg__DoubleParamSpec * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // default_value
  if (lhs->default_value != rhs->default_value) {
    return false;
  }
  // default_value_is_set
  if (lhs->default_value_is_set != rhs->default_value_is_set) {
    return false;
  }
  // units
  if (!bosdyn_msgs__msg__Units__are_equal(
      &(lhs->units), &(rhs->units)))
  {
    return false;
  }
  // units_is_set
  if (lhs->units_is_set != rhs->units_is_set) {
    return false;
  }
  // min_value
  if (lhs->min_value != rhs->min_value) {
    return false;
  }
  // min_value_is_set
  if (lhs->min_value_is_set != rhs->min_value_is_set) {
    return false;
  }
  // max_value
  if (lhs->max_value != rhs->max_value) {
    return false;
  }
  // max_value_is_set
  if (lhs->max_value_is_set != rhs->max_value_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DoubleParamSpec__copy(
  const bosdyn_msgs__msg__DoubleParamSpec * input,
  bosdyn_msgs__msg__DoubleParamSpec * output)
{
  if (!input || !output) {
    return false;
  }
  // default_value
  output->default_value = input->default_value;
  // default_value_is_set
  output->default_value_is_set = input->default_value_is_set;
  // units
  if (!bosdyn_msgs__msg__Units__copy(
      &(input->units), &(output->units)))
  {
    return false;
  }
  // units_is_set
  output->units_is_set = input->units_is_set;
  // min_value
  output->min_value = input->min_value;
  // min_value_is_set
  output->min_value_is_set = input->min_value_is_set;
  // max_value
  output->max_value = input->max_value;
  // max_value_is_set
  output->max_value_is_set = input->max_value_is_set;
  return true;
}

bosdyn_msgs__msg__DoubleParamSpec *
bosdyn_msgs__msg__DoubleParamSpec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DoubleParamSpec * msg = (bosdyn_msgs__msg__DoubleParamSpec *)allocator.allocate(sizeof(bosdyn_msgs__msg__DoubleParamSpec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DoubleParamSpec));
  bool success = bosdyn_msgs__msg__DoubleParamSpec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DoubleParamSpec__destroy(bosdyn_msgs__msg__DoubleParamSpec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DoubleParamSpec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DoubleParamSpec__Sequence__init(bosdyn_msgs__msg__DoubleParamSpec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DoubleParamSpec * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DoubleParamSpec *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DoubleParamSpec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DoubleParamSpec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DoubleParamSpec__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DoubleParamSpec__Sequence__fini(bosdyn_msgs__msg__DoubleParamSpec__Sequence * array)
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
      bosdyn_msgs__msg__DoubleParamSpec__fini(&array->data[i]);
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

bosdyn_msgs__msg__DoubleParamSpec__Sequence *
bosdyn_msgs__msg__DoubleParamSpec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DoubleParamSpec__Sequence * array = (bosdyn_msgs__msg__DoubleParamSpec__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DoubleParamSpec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DoubleParamSpec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DoubleParamSpec__Sequence__destroy(bosdyn_msgs__msg__DoubleParamSpec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DoubleParamSpec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DoubleParamSpec__Sequence__are_equal(const bosdyn_msgs__msg__DoubleParamSpec__Sequence * lhs, const bosdyn_msgs__msg__DoubleParamSpec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DoubleParamSpec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DoubleParamSpec__Sequence__copy(
  const bosdyn_msgs__msg__DoubleParamSpec__Sequence * input,
  bosdyn_msgs__msg__DoubleParamSpec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DoubleParamSpec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DoubleParamSpec * data =
      (bosdyn_msgs__msg__DoubleParamSpec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DoubleParamSpec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DoubleParamSpec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DoubleParamSpec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
