// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ICEServerAuthParamsOneOfCredential.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/ice_server_auth_params_one_of_credential__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `oauth`
#include "bosdyn_msgs/msg/detail/ice_server_auth_params_oauth_pair__functions.h"
// Member `password`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__init(bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential * msg)
{
  if (!msg) {
    return false;
  }
  // oauth
  if (!bosdyn_msgs__msg__ICEServerAuthParamsOauthPair__init(&msg->oauth)) {
    bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__fini(msg);
    return false;
  }
  // password
  if (!rosidl_runtime_c__String__init(&msg->password)) {
    bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__fini(msg);
    return false;
  }
  // credential_choice
  return true;
}

void
bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__fini(bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential * msg)
{
  if (!msg) {
    return;
  }
  // oauth
  bosdyn_msgs__msg__ICEServerAuthParamsOauthPair__fini(&msg->oauth);
  // password
  rosidl_runtime_c__String__fini(&msg->password);
  // credential_choice
}

bool
bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__are_equal(const bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential * lhs, const bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // oauth
  if (!bosdyn_msgs__msg__ICEServerAuthParamsOauthPair__are_equal(
      &(lhs->oauth), &(rhs->oauth)))
  {
    return false;
  }
  // password
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->password), &(rhs->password)))
  {
    return false;
  }
  // credential_choice
  if (lhs->credential_choice != rhs->credential_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__copy(
  const bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential * input,
  bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential * output)
{
  if (!input || !output) {
    return false;
  }
  // oauth
  if (!bosdyn_msgs__msg__ICEServerAuthParamsOauthPair__copy(
      &(input->oauth), &(output->oauth)))
  {
    return false;
  }
  // password
  if (!rosidl_runtime_c__String__copy(
      &(input->password), &(output->password)))
  {
    return false;
  }
  // credential_choice
  output->credential_choice = input->credential_choice;
  return true;
}

bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential *
bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential * msg = (bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential *)allocator.allocate(sizeof(bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential));
  bool success = bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__destroy(bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence__init(bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence__fini(bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence * array)
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
      bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__fini(&array->data[i]);
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

bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence *
bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence * array = (bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence__destroy(bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence__are_equal(const bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence * lhs, const bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence__copy(
  const bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence * input,
  bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential * data =
      (bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
