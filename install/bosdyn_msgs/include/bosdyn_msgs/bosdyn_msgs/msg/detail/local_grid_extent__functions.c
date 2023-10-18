// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/LocalGridExtent.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/local_grid_extent__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__LocalGridExtent__init(bosdyn_msgs__msg__LocalGridExtent * msg)
{
  if (!msg) {
    return false;
  }
  // cell_size
  // num_cells_x
  // num_cells_y
  return true;
}

void
bosdyn_msgs__msg__LocalGridExtent__fini(bosdyn_msgs__msg__LocalGridExtent * msg)
{
  if (!msg) {
    return;
  }
  // cell_size
  // num_cells_x
  // num_cells_y
}

bool
bosdyn_msgs__msg__LocalGridExtent__are_equal(const bosdyn_msgs__msg__LocalGridExtent * lhs, const bosdyn_msgs__msg__LocalGridExtent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cell_size
  if (lhs->cell_size != rhs->cell_size) {
    return false;
  }
  // num_cells_x
  if (lhs->num_cells_x != rhs->num_cells_x) {
    return false;
  }
  // num_cells_y
  if (lhs->num_cells_y != rhs->num_cells_y) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__LocalGridExtent__copy(
  const bosdyn_msgs__msg__LocalGridExtent * input,
  bosdyn_msgs__msg__LocalGridExtent * output)
{
  if (!input || !output) {
    return false;
  }
  // cell_size
  output->cell_size = input->cell_size;
  // num_cells_x
  output->num_cells_x = input->num_cells_x;
  // num_cells_y
  output->num_cells_y = input->num_cells_y;
  return true;
}

bosdyn_msgs__msg__LocalGridExtent *
bosdyn_msgs__msg__LocalGridExtent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LocalGridExtent * msg = (bosdyn_msgs__msg__LocalGridExtent *)allocator.allocate(sizeof(bosdyn_msgs__msg__LocalGridExtent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__LocalGridExtent));
  bool success = bosdyn_msgs__msg__LocalGridExtent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__LocalGridExtent__destroy(bosdyn_msgs__msg__LocalGridExtent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__LocalGridExtent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__LocalGridExtent__Sequence__init(bosdyn_msgs__msg__LocalGridExtent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LocalGridExtent * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__LocalGridExtent *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__LocalGridExtent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__LocalGridExtent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__LocalGridExtent__fini(&data[i - 1]);
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
bosdyn_msgs__msg__LocalGridExtent__Sequence__fini(bosdyn_msgs__msg__LocalGridExtent__Sequence * array)
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
      bosdyn_msgs__msg__LocalGridExtent__fini(&array->data[i]);
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

bosdyn_msgs__msg__LocalGridExtent__Sequence *
bosdyn_msgs__msg__LocalGridExtent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LocalGridExtent__Sequence * array = (bosdyn_msgs__msg__LocalGridExtent__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__LocalGridExtent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__LocalGridExtent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__LocalGridExtent__Sequence__destroy(bosdyn_msgs__msg__LocalGridExtent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__LocalGridExtent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__LocalGridExtent__Sequence__are_equal(const bosdyn_msgs__msg__LocalGridExtent__Sequence * lhs, const bosdyn_msgs__msg__LocalGridExtent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__LocalGridExtent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__LocalGridExtent__Sequence__copy(
  const bosdyn_msgs__msg__LocalGridExtent__Sequence * input,
  bosdyn_msgs__msg__LocalGridExtent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__LocalGridExtent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__LocalGridExtent * data =
      (bosdyn_msgs__msg__LocalGridExtent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__LocalGridExtent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__LocalGridExtent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__LocalGridExtent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
