// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmJointPosition.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_joint_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__ArmJointPosition__init(bosdyn_msgs__msg__ArmJointPosition * msg)
{
  if (!msg) {
    return false;
  }
  // sh0
  // sh0_is_set
  // sh1
  // sh1_is_set
  // el0
  // el0_is_set
  // el1
  // el1_is_set
  // wr0
  // wr0_is_set
  // wr1
  // wr1_is_set
  return true;
}

void
bosdyn_msgs__msg__ArmJointPosition__fini(bosdyn_msgs__msg__ArmJointPosition * msg)
{
  if (!msg) {
    return;
  }
  // sh0
  // sh0_is_set
  // sh1
  // sh1_is_set
  // el0
  // el0_is_set
  // el1
  // el1_is_set
  // wr0
  // wr0_is_set
  // wr1
  // wr1_is_set
}

bool
bosdyn_msgs__msg__ArmJointPosition__are_equal(const bosdyn_msgs__msg__ArmJointPosition * lhs, const bosdyn_msgs__msg__ArmJointPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sh0
  if (lhs->sh0 != rhs->sh0) {
    return false;
  }
  // sh0_is_set
  if (lhs->sh0_is_set != rhs->sh0_is_set) {
    return false;
  }
  // sh1
  if (lhs->sh1 != rhs->sh1) {
    return false;
  }
  // sh1_is_set
  if (lhs->sh1_is_set != rhs->sh1_is_set) {
    return false;
  }
  // el0
  if (lhs->el0 != rhs->el0) {
    return false;
  }
  // el0_is_set
  if (lhs->el0_is_set != rhs->el0_is_set) {
    return false;
  }
  // el1
  if (lhs->el1 != rhs->el1) {
    return false;
  }
  // el1_is_set
  if (lhs->el1_is_set != rhs->el1_is_set) {
    return false;
  }
  // wr0
  if (lhs->wr0 != rhs->wr0) {
    return false;
  }
  // wr0_is_set
  if (lhs->wr0_is_set != rhs->wr0_is_set) {
    return false;
  }
  // wr1
  if (lhs->wr1 != rhs->wr1) {
    return false;
  }
  // wr1_is_set
  if (lhs->wr1_is_set != rhs->wr1_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmJointPosition__copy(
  const bosdyn_msgs__msg__ArmJointPosition * input,
  bosdyn_msgs__msg__ArmJointPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // sh0
  output->sh0 = input->sh0;
  // sh0_is_set
  output->sh0_is_set = input->sh0_is_set;
  // sh1
  output->sh1 = input->sh1;
  // sh1_is_set
  output->sh1_is_set = input->sh1_is_set;
  // el0
  output->el0 = input->el0;
  // el0_is_set
  output->el0_is_set = input->el0_is_set;
  // el1
  output->el1 = input->el1;
  // el1_is_set
  output->el1_is_set = input->el1_is_set;
  // wr0
  output->wr0 = input->wr0;
  // wr0_is_set
  output->wr0_is_set = input->wr0_is_set;
  // wr1
  output->wr1 = input->wr1;
  // wr1_is_set
  output->wr1_is_set = input->wr1_is_set;
  return true;
}

bosdyn_msgs__msg__ArmJointPosition *
bosdyn_msgs__msg__ArmJointPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmJointPosition * msg = (bosdyn_msgs__msg__ArmJointPosition *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmJointPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmJointPosition));
  bool success = bosdyn_msgs__msg__ArmJointPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmJointPosition__destroy(bosdyn_msgs__msg__ArmJointPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmJointPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmJointPosition__Sequence__init(bosdyn_msgs__msg__ArmJointPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmJointPosition * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmJointPosition *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmJointPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmJointPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmJointPosition__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmJointPosition__Sequence__fini(bosdyn_msgs__msg__ArmJointPosition__Sequence * array)
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
      bosdyn_msgs__msg__ArmJointPosition__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmJointPosition__Sequence *
bosdyn_msgs__msg__ArmJointPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmJointPosition__Sequence * array = (bosdyn_msgs__msg__ArmJointPosition__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmJointPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmJointPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmJointPosition__Sequence__destroy(bosdyn_msgs__msg__ArmJointPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmJointPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmJointPosition__Sequence__are_equal(const bosdyn_msgs__msg__ArmJointPosition__Sequence * lhs, const bosdyn_msgs__msg__ArmJointPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmJointPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmJointPosition__Sequence__copy(
  const bosdyn_msgs__msg__ArmJointPosition__Sequence * input,
  bosdyn_msgs__msg__ArmJointPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmJointPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmJointPosition * data =
      (bosdyn_msgs__msg__ArmJointPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmJointPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmJointPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmJointPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
