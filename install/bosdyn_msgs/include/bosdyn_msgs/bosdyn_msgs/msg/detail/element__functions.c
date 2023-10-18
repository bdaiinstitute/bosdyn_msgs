// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Element.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/element__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `target`
#include "bosdyn_msgs/msg/detail/target__functions.h"
// Member `target_failure_behavior`
// Member `action_failure_behavior`
#include "bosdyn_msgs/msg/detail/failure_behavior__functions.h"
// Member `action`
#include "bosdyn_msgs/msg/detail/action__functions.h"
// Member `action_wrapper`
#include "bosdyn_msgs/msg/detail/action_wrapper__functions.h"
// Member `battery_monitor`
#include "bosdyn_msgs/msg/detail/battery_monitor__functions.h"
// Member `action_duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__Element__init(bosdyn_msgs__msg__Element * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__Element__fini(msg);
    return false;
  }
  // target
  if (!bosdyn_msgs__msg__Target__init(&msg->target)) {
    bosdyn_msgs__msg__Element__fini(msg);
    return false;
  }
  // target_is_set
  // target_failure_behavior
  if (!bosdyn_msgs__msg__FailureBehavior__init(&msg->target_failure_behavior)) {
    bosdyn_msgs__msg__Element__fini(msg);
    return false;
  }
  // target_failure_behavior_is_set
  // action
  if (!bosdyn_msgs__msg__Action__init(&msg->action)) {
    bosdyn_msgs__msg__Element__fini(msg);
    return false;
  }
  // action_is_set
  // action_wrapper
  if (!bosdyn_msgs__msg__ActionWrapper__init(&msg->action_wrapper)) {
    bosdyn_msgs__msg__Element__fini(msg);
    return false;
  }
  // action_wrapper_is_set
  // action_failure_behavior
  if (!bosdyn_msgs__msg__FailureBehavior__init(&msg->action_failure_behavior)) {
    bosdyn_msgs__msg__Element__fini(msg);
    return false;
  }
  // action_failure_behavior_is_set
  // is_skipped
  // battery_monitor
  if (!bosdyn_msgs__msg__BatteryMonitor__init(&msg->battery_monitor)) {
    bosdyn_msgs__msg__Element__fini(msg);
    return false;
  }
  // battery_monitor_is_set
  // action_duration
  if (!builtin_interfaces__msg__Duration__init(&msg->action_duration)) {
    bosdyn_msgs__msg__Element__fini(msg);
    return false;
  }
  // action_duration_is_set
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    bosdyn_msgs__msg__Element__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Element__fini(bosdyn_msgs__msg__Element * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // target
  bosdyn_msgs__msg__Target__fini(&msg->target);
  // target_is_set
  // target_failure_behavior
  bosdyn_msgs__msg__FailureBehavior__fini(&msg->target_failure_behavior);
  // target_failure_behavior_is_set
  // action
  bosdyn_msgs__msg__Action__fini(&msg->action);
  // action_is_set
  // action_wrapper
  bosdyn_msgs__msg__ActionWrapper__fini(&msg->action_wrapper);
  // action_wrapper_is_set
  // action_failure_behavior
  bosdyn_msgs__msg__FailureBehavior__fini(&msg->action_failure_behavior);
  // action_failure_behavior_is_set
  // is_skipped
  // battery_monitor
  bosdyn_msgs__msg__BatteryMonitor__fini(&msg->battery_monitor);
  // battery_monitor_is_set
  // action_duration
  builtin_interfaces__msg__Duration__fini(&msg->action_duration);
  // action_duration_is_set
  // id
  rosidl_runtime_c__String__fini(&msg->id);
}

bool
bosdyn_msgs__msg__Element__are_equal(const bosdyn_msgs__msg__Element * lhs, const bosdyn_msgs__msg__Element * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // target
  if (!bosdyn_msgs__msg__Target__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  // target_is_set
  if (lhs->target_is_set != rhs->target_is_set) {
    return false;
  }
  // target_failure_behavior
  if (!bosdyn_msgs__msg__FailureBehavior__are_equal(
      &(lhs->target_failure_behavior), &(rhs->target_failure_behavior)))
  {
    return false;
  }
  // target_failure_behavior_is_set
  if (lhs->target_failure_behavior_is_set != rhs->target_failure_behavior_is_set) {
    return false;
  }
  // action
  if (!bosdyn_msgs__msg__Action__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // action_is_set
  if (lhs->action_is_set != rhs->action_is_set) {
    return false;
  }
  // action_wrapper
  if (!bosdyn_msgs__msg__ActionWrapper__are_equal(
      &(lhs->action_wrapper), &(rhs->action_wrapper)))
  {
    return false;
  }
  // action_wrapper_is_set
  if (lhs->action_wrapper_is_set != rhs->action_wrapper_is_set) {
    return false;
  }
  // action_failure_behavior
  if (!bosdyn_msgs__msg__FailureBehavior__are_equal(
      &(lhs->action_failure_behavior), &(rhs->action_failure_behavior)))
  {
    return false;
  }
  // action_failure_behavior_is_set
  if (lhs->action_failure_behavior_is_set != rhs->action_failure_behavior_is_set) {
    return false;
  }
  // is_skipped
  if (lhs->is_skipped != rhs->is_skipped) {
    return false;
  }
  // battery_monitor
  if (!bosdyn_msgs__msg__BatteryMonitor__are_equal(
      &(lhs->battery_monitor), &(rhs->battery_monitor)))
  {
    return false;
  }
  // battery_monitor_is_set
  if (lhs->battery_monitor_is_set != rhs->battery_monitor_is_set) {
    return false;
  }
  // action_duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->action_duration), &(rhs->action_duration)))
  {
    return false;
  }
  // action_duration_is_set
  if (lhs->action_duration_is_set != rhs->action_duration_is_set) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Element__copy(
  const bosdyn_msgs__msg__Element * input,
  bosdyn_msgs__msg__Element * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // target
  if (!bosdyn_msgs__msg__Target__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  // target_is_set
  output->target_is_set = input->target_is_set;
  // target_failure_behavior
  if (!bosdyn_msgs__msg__FailureBehavior__copy(
      &(input->target_failure_behavior), &(output->target_failure_behavior)))
  {
    return false;
  }
  // target_failure_behavior_is_set
  output->target_failure_behavior_is_set = input->target_failure_behavior_is_set;
  // action
  if (!bosdyn_msgs__msg__Action__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // action_is_set
  output->action_is_set = input->action_is_set;
  // action_wrapper
  if (!bosdyn_msgs__msg__ActionWrapper__copy(
      &(input->action_wrapper), &(output->action_wrapper)))
  {
    return false;
  }
  // action_wrapper_is_set
  output->action_wrapper_is_set = input->action_wrapper_is_set;
  // action_failure_behavior
  if (!bosdyn_msgs__msg__FailureBehavior__copy(
      &(input->action_failure_behavior), &(output->action_failure_behavior)))
  {
    return false;
  }
  // action_failure_behavior_is_set
  output->action_failure_behavior_is_set = input->action_failure_behavior_is_set;
  // is_skipped
  output->is_skipped = input->is_skipped;
  // battery_monitor
  if (!bosdyn_msgs__msg__BatteryMonitor__copy(
      &(input->battery_monitor), &(output->battery_monitor)))
  {
    return false;
  }
  // battery_monitor_is_set
  output->battery_monitor_is_set = input->battery_monitor_is_set;
  // action_duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->action_duration), &(output->action_duration)))
  {
    return false;
  }
  // action_duration_is_set
  output->action_duration_is_set = input->action_duration_is_set;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Element *
bosdyn_msgs__msg__Element__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Element * msg = (bosdyn_msgs__msg__Element *)allocator.allocate(sizeof(bosdyn_msgs__msg__Element), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Element));
  bool success = bosdyn_msgs__msg__Element__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Element__destroy(bosdyn_msgs__msg__Element * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Element__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Element__Sequence__init(bosdyn_msgs__msg__Element__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Element * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Element *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Element), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Element__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Element__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Element__Sequence__fini(bosdyn_msgs__msg__Element__Sequence * array)
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
      bosdyn_msgs__msg__Element__fini(&array->data[i]);
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

bosdyn_msgs__msg__Element__Sequence *
bosdyn_msgs__msg__Element__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Element__Sequence * array = (bosdyn_msgs__msg__Element__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Element__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Element__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Element__Sequence__destroy(bosdyn_msgs__msg__Element__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Element__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Element__Sequence__are_equal(const bosdyn_msgs__msg__Element__Sequence * lhs, const bosdyn_msgs__msg__Element__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Element__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Element__Sequence__copy(
  const bosdyn_msgs__msg__Element__Sequence * input,
  bosdyn_msgs__msg__Element__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Element);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Element * data =
      (bosdyn_msgs__msg__Element *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Element__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Element__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Element__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
