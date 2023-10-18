// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StateAnsweredQuestion.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/state_answered_question__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `question`
#include "bosdyn_msgs/msg/detail/question__functions.h"

bool
bosdyn_msgs__msg__StateAnsweredQuestion__init(bosdyn_msgs__msg__StateAnsweredQuestion * msg)
{
  if (!msg) {
    return false;
  }
  // question
  if (!bosdyn_msgs__msg__Question__init(&msg->question)) {
    bosdyn_msgs__msg__StateAnsweredQuestion__fini(msg);
    return false;
  }
  // question_is_set
  // accepted_answer_code
  return true;
}

void
bosdyn_msgs__msg__StateAnsweredQuestion__fini(bosdyn_msgs__msg__StateAnsweredQuestion * msg)
{
  if (!msg) {
    return;
  }
  // question
  bosdyn_msgs__msg__Question__fini(&msg->question);
  // question_is_set
  // accepted_answer_code
}

bool
bosdyn_msgs__msg__StateAnsweredQuestion__are_equal(const bosdyn_msgs__msg__StateAnsweredQuestion * lhs, const bosdyn_msgs__msg__StateAnsweredQuestion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // question
  if (!bosdyn_msgs__msg__Question__are_equal(
      &(lhs->question), &(rhs->question)))
  {
    return false;
  }
  // question_is_set
  if (lhs->question_is_set != rhs->question_is_set) {
    return false;
  }
  // accepted_answer_code
  if (lhs->accepted_answer_code != rhs->accepted_answer_code) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StateAnsweredQuestion__copy(
  const bosdyn_msgs__msg__StateAnsweredQuestion * input,
  bosdyn_msgs__msg__StateAnsweredQuestion * output)
{
  if (!input || !output) {
    return false;
  }
  // question
  if (!bosdyn_msgs__msg__Question__copy(
      &(input->question), &(output->question)))
  {
    return false;
  }
  // question_is_set
  output->question_is_set = input->question_is_set;
  // accepted_answer_code
  output->accepted_answer_code = input->accepted_answer_code;
  return true;
}

bosdyn_msgs__msg__StateAnsweredQuestion *
bosdyn_msgs__msg__StateAnsweredQuestion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StateAnsweredQuestion * msg = (bosdyn_msgs__msg__StateAnsweredQuestion *)allocator.allocate(sizeof(bosdyn_msgs__msg__StateAnsweredQuestion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StateAnsweredQuestion));
  bool success = bosdyn_msgs__msg__StateAnsweredQuestion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StateAnsweredQuestion__destroy(bosdyn_msgs__msg__StateAnsweredQuestion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StateAnsweredQuestion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__init(bosdyn_msgs__msg__StateAnsweredQuestion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StateAnsweredQuestion * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StateAnsweredQuestion *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StateAnsweredQuestion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StateAnsweredQuestion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StateAnsweredQuestion__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__fini(bosdyn_msgs__msg__StateAnsweredQuestion__Sequence * array)
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
      bosdyn_msgs__msg__StateAnsweredQuestion__fini(&array->data[i]);
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

bosdyn_msgs__msg__StateAnsweredQuestion__Sequence *
bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StateAnsweredQuestion__Sequence * array = (bosdyn_msgs__msg__StateAnsweredQuestion__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StateAnsweredQuestion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__destroy(bosdyn_msgs__msg__StateAnsweredQuestion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__are_equal(const bosdyn_msgs__msg__StateAnsweredQuestion__Sequence * lhs, const bosdyn_msgs__msg__StateAnsweredQuestion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StateAnsweredQuestion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__copy(
  const bosdyn_msgs__msg__StateAnsweredQuestion__Sequence * input,
  bosdyn_msgs__msg__StateAnsweredQuestion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StateAnsweredQuestion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StateAnsweredQuestion * data =
      (bosdyn_msgs__msg__StateAnsweredQuestion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StateAnsweredQuestion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StateAnsweredQuestion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StateAnsweredQuestion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
