// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Event.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
// Member `description`
// Member `source`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `start_time`
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `level`
#include "bosdyn_msgs/msg/detail/event_level__functions.h"
// Member `parameters`
#include "bosdyn_msgs/msg/detail/parameter__functions.h"
// Member `log_preserve_hint`
#include "bosdyn_msgs/msg/detail/event_log_preserve_hint__functions.h"

bool
bosdyn_msgs__msg__Event__init(bosdyn_msgs__msg__Event * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    bosdyn_msgs__msg__Event__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    bosdyn_msgs__msg__Event__fini(msg);
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    bosdyn_msgs__msg__Event__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    bosdyn_msgs__msg__Event__fini(msg);
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__init(&msg->start_time)) {
    bosdyn_msgs__msg__Event__fini(msg);
    return false;
  }
  // start_time_is_set
  // end_time
  if (!builtin_interfaces__msg__Time__init(&msg->end_time)) {
    bosdyn_msgs__msg__Event__fini(msg);
    return false;
  }
  // end_time_is_set
  // level
  if (!bosdyn_msgs__msg__EventLevel__init(&msg->level)) {
    bosdyn_msgs__msg__Event__fini(msg);
    return false;
  }
  // parameters
  if (!bosdyn_msgs__msg__Parameter__Sequence__init(&msg->parameters, 0)) {
    bosdyn_msgs__msg__Event__fini(msg);
    return false;
  }
  // log_preserve_hint
  if (!bosdyn_msgs__msg__EventLogPreserveHint__init(&msg->log_preserve_hint)) {
    bosdyn_msgs__msg__Event__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Event__fini(bosdyn_msgs__msg__Event * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // start_time
  builtin_interfaces__msg__Time__fini(&msg->start_time);
  // start_time_is_set
  // end_time
  builtin_interfaces__msg__Time__fini(&msg->end_time);
  // end_time_is_set
  // level
  bosdyn_msgs__msg__EventLevel__fini(&msg->level);
  // parameters
  bosdyn_msgs__msg__Parameter__Sequence__fini(&msg->parameters);
  // log_preserve_hint
  bosdyn_msgs__msg__EventLogPreserveHint__fini(&msg->log_preserve_hint);
}

bool
bosdyn_msgs__msg__Event__are_equal(const bosdyn_msgs__msg__Event * lhs, const bosdyn_msgs__msg__Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start_time), &(rhs->start_time)))
  {
    return false;
  }
  // start_time_is_set
  if (lhs->start_time_is_set != rhs->start_time_is_set) {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->end_time), &(rhs->end_time)))
  {
    return false;
  }
  // end_time_is_set
  if (lhs->end_time_is_set != rhs->end_time_is_set) {
    return false;
  }
  // level
  if (!bosdyn_msgs__msg__EventLevel__are_equal(
      &(lhs->level), &(rhs->level)))
  {
    return false;
  }
  // parameters
  if (!bosdyn_msgs__msg__Parameter__Sequence__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  // log_preserve_hint
  if (!bosdyn_msgs__msg__EventLogPreserveHint__are_equal(
      &(lhs->log_preserve_hint), &(rhs->log_preserve_hint)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Event__copy(
  const bosdyn_msgs__msg__Event * input,
  bosdyn_msgs__msg__Event * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start_time), &(output->start_time)))
  {
    return false;
  }
  // start_time_is_set
  output->start_time_is_set = input->start_time_is_set;
  // end_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end_time), &(output->end_time)))
  {
    return false;
  }
  // end_time_is_set
  output->end_time_is_set = input->end_time_is_set;
  // level
  if (!bosdyn_msgs__msg__EventLevel__copy(
      &(input->level), &(output->level)))
  {
    return false;
  }
  // parameters
  if (!bosdyn_msgs__msg__Parameter__Sequence__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  // log_preserve_hint
  if (!bosdyn_msgs__msg__EventLogPreserveHint__copy(
      &(input->log_preserve_hint), &(output->log_preserve_hint)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Event *
bosdyn_msgs__msg__Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Event * msg = (bosdyn_msgs__msg__Event *)allocator.allocate(sizeof(bosdyn_msgs__msg__Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Event));
  bool success = bosdyn_msgs__msg__Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Event__destroy(bosdyn_msgs__msg__Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Event__Sequence__init(bosdyn_msgs__msg__Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Event * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Event *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Event__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Event__Sequence__fini(bosdyn_msgs__msg__Event__Sequence * array)
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
      bosdyn_msgs__msg__Event__fini(&array->data[i]);
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

bosdyn_msgs__msg__Event__Sequence *
bosdyn_msgs__msg__Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Event__Sequence * array = (bosdyn_msgs__msg__Event__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Event__Sequence__destroy(bosdyn_msgs__msg__Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Event__Sequence__are_equal(const bosdyn_msgs__msg__Event__Sequence * lhs, const bosdyn_msgs__msg__Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Event__Sequence__copy(
  const bosdyn_msgs__msg__Event__Sequence * input,
  bosdyn_msgs__msg__Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Event * data =
      (bosdyn_msgs__msg__Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
