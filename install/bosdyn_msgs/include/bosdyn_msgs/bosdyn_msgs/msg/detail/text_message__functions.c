// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/TextMessage.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/text_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message`
// Member `source`
// Member `tag`
// Member `filename`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `level`
#include "bosdyn_msgs/msg/detail/text_message_level__functions.h"

bool
bosdyn_msgs__msg__TextMessage__init(bosdyn_msgs__msg__TextMessage * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    bosdyn_msgs__msg__TextMessage__fini(msg);
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    bosdyn_msgs__msg__TextMessage__fini(msg);
    return false;
  }
  // timestamp_is_set
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    bosdyn_msgs__msg__TextMessage__fini(msg);
    return false;
  }
  // level
  if (!bosdyn_msgs__msg__TextMessageLevel__init(&msg->level)) {
    bosdyn_msgs__msg__TextMessage__fini(msg);
    return false;
  }
  // tag
  if (!rosidl_runtime_c__String__init(&msg->tag)) {
    bosdyn_msgs__msg__TextMessage__fini(msg);
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__init(&msg->filename)) {
    bosdyn_msgs__msg__TextMessage__fini(msg);
    return false;
  }
  // line_number
  return true;
}

void
bosdyn_msgs__msg__TextMessage__fini(bosdyn_msgs__msg__TextMessage * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // timestamp_is_set
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // level
  bosdyn_msgs__msg__TextMessageLevel__fini(&msg->level);
  // tag
  rosidl_runtime_c__String__fini(&msg->tag);
  // filename
  rosidl_runtime_c__String__fini(&msg->filename);
  // line_number
}

bool
bosdyn_msgs__msg__TextMessage__are_equal(const bosdyn_msgs__msg__TextMessage * lhs, const bosdyn_msgs__msg__TextMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  if (lhs->timestamp_is_set != rhs->timestamp_is_set) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // level
  if (!bosdyn_msgs__msg__TextMessageLevel__are_equal(
      &(lhs->level), &(rhs->level)))
  {
    return false;
  }
  // tag
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tag), &(rhs->tag)))
  {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->filename), &(rhs->filename)))
  {
    return false;
  }
  // line_number
  if (lhs->line_number != rhs->line_number) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__TextMessage__copy(
  const bosdyn_msgs__msg__TextMessage * input,
  bosdyn_msgs__msg__TextMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  output->timestamp_is_set = input->timestamp_is_set;
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // level
  if (!bosdyn_msgs__msg__TextMessageLevel__copy(
      &(input->level), &(output->level)))
  {
    return false;
  }
  // tag
  if (!rosidl_runtime_c__String__copy(
      &(input->tag), &(output->tag)))
  {
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__copy(
      &(input->filename), &(output->filename)))
  {
    return false;
  }
  // line_number
  output->line_number = input->line_number;
  return true;
}

bosdyn_msgs__msg__TextMessage *
bosdyn_msgs__msg__TextMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TextMessage * msg = (bosdyn_msgs__msg__TextMessage *)allocator.allocate(sizeof(bosdyn_msgs__msg__TextMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__TextMessage));
  bool success = bosdyn_msgs__msg__TextMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__TextMessage__destroy(bosdyn_msgs__msg__TextMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__TextMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__TextMessage__Sequence__init(bosdyn_msgs__msg__TextMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TextMessage * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__TextMessage *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__TextMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__TextMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__TextMessage__fini(&data[i - 1]);
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
bosdyn_msgs__msg__TextMessage__Sequence__fini(bosdyn_msgs__msg__TextMessage__Sequence * array)
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
      bosdyn_msgs__msg__TextMessage__fini(&array->data[i]);
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

bosdyn_msgs__msg__TextMessage__Sequence *
bosdyn_msgs__msg__TextMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TextMessage__Sequence * array = (bosdyn_msgs__msg__TextMessage__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__TextMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__TextMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__TextMessage__Sequence__destroy(bosdyn_msgs__msg__TextMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__TextMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__TextMessage__Sequence__are_equal(const bosdyn_msgs__msg__TextMessage__Sequence * lhs, const bosdyn_msgs__msg__TextMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__TextMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__TextMessage__Sequence__copy(
  const bosdyn_msgs__msg__TextMessage__Sequence * input,
  bosdyn_msgs__msg__TextMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__TextMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__TextMessage * data =
      (bosdyn_msgs__msg__TextMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__TextMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__TextMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__TextMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
