// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ServiceEntry.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/service_entry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `authority`
// Member `permission_required`
// Member `host_payload_guid`
#include "rosidl_runtime_c/string_functions.h"
// Member `service_type`
#include "bosdyn_msgs/msg/detail/service_entry_one_of_service_type__functions.h"
// Member `last_update`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__ServiceEntry__init(bosdyn_msgs__msg__ServiceEntry * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__ServiceEntry__fini(msg);
    return false;
  }
  // service_type
  if (!bosdyn_msgs__msg__ServiceEntryOneOfServiceType__init(&msg->service_type)) {
    bosdyn_msgs__msg__ServiceEntry__fini(msg);
    return false;
  }
  // authority
  if (!rosidl_runtime_c__String__init(&msg->authority)) {
    bosdyn_msgs__msg__ServiceEntry__fini(msg);
    return false;
  }
  // last_update
  if (!builtin_interfaces__msg__Time__init(&msg->last_update)) {
    bosdyn_msgs__msg__ServiceEntry__fini(msg);
    return false;
  }
  // last_update_is_set
  // user_token_required
  // permission_required
  if (!rosidl_runtime_c__String__init(&msg->permission_required)) {
    bosdyn_msgs__msg__ServiceEntry__fini(msg);
    return false;
  }
  // liveness_timeout_secs
  // host_payload_guid
  if (!rosidl_runtime_c__String__init(&msg->host_payload_guid)) {
    bosdyn_msgs__msg__ServiceEntry__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__ServiceEntry__fini(bosdyn_msgs__msg__ServiceEntry * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // service_type
  bosdyn_msgs__msg__ServiceEntryOneOfServiceType__fini(&msg->service_type);
  // authority
  rosidl_runtime_c__String__fini(&msg->authority);
  // last_update
  builtin_interfaces__msg__Time__fini(&msg->last_update);
  // last_update_is_set
  // user_token_required
  // permission_required
  rosidl_runtime_c__String__fini(&msg->permission_required);
  // liveness_timeout_secs
  // host_payload_guid
  rosidl_runtime_c__String__fini(&msg->host_payload_guid);
}

bool
bosdyn_msgs__msg__ServiceEntry__are_equal(const bosdyn_msgs__msg__ServiceEntry * lhs, const bosdyn_msgs__msg__ServiceEntry * rhs)
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
  // service_type
  if (!bosdyn_msgs__msg__ServiceEntryOneOfServiceType__are_equal(
      &(lhs->service_type), &(rhs->service_type)))
  {
    return false;
  }
  // authority
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->authority), &(rhs->authority)))
  {
    return false;
  }
  // last_update
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->last_update), &(rhs->last_update)))
  {
    return false;
  }
  // last_update_is_set
  if (lhs->last_update_is_set != rhs->last_update_is_set) {
    return false;
  }
  // user_token_required
  if (lhs->user_token_required != rhs->user_token_required) {
    return false;
  }
  // permission_required
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->permission_required), &(rhs->permission_required)))
  {
    return false;
  }
  // liveness_timeout_secs
  if (lhs->liveness_timeout_secs != rhs->liveness_timeout_secs) {
    return false;
  }
  // host_payload_guid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->host_payload_guid), &(rhs->host_payload_guid)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ServiceEntry__copy(
  const bosdyn_msgs__msg__ServiceEntry * input,
  bosdyn_msgs__msg__ServiceEntry * output)
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
  // service_type
  if (!bosdyn_msgs__msg__ServiceEntryOneOfServiceType__copy(
      &(input->service_type), &(output->service_type)))
  {
    return false;
  }
  // authority
  if (!rosidl_runtime_c__String__copy(
      &(input->authority), &(output->authority)))
  {
    return false;
  }
  // last_update
  if (!builtin_interfaces__msg__Time__copy(
      &(input->last_update), &(output->last_update)))
  {
    return false;
  }
  // last_update_is_set
  output->last_update_is_set = input->last_update_is_set;
  // user_token_required
  output->user_token_required = input->user_token_required;
  // permission_required
  if (!rosidl_runtime_c__String__copy(
      &(input->permission_required), &(output->permission_required)))
  {
    return false;
  }
  // liveness_timeout_secs
  output->liveness_timeout_secs = input->liveness_timeout_secs;
  // host_payload_guid
  if (!rosidl_runtime_c__String__copy(
      &(input->host_payload_guid), &(output->host_payload_guid)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__ServiceEntry *
bosdyn_msgs__msg__ServiceEntry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ServiceEntry * msg = (bosdyn_msgs__msg__ServiceEntry *)allocator.allocate(sizeof(bosdyn_msgs__msg__ServiceEntry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ServiceEntry));
  bool success = bosdyn_msgs__msg__ServiceEntry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ServiceEntry__destroy(bosdyn_msgs__msg__ServiceEntry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ServiceEntry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ServiceEntry__Sequence__init(bosdyn_msgs__msg__ServiceEntry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ServiceEntry * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ServiceEntry *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ServiceEntry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ServiceEntry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ServiceEntry__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ServiceEntry__Sequence__fini(bosdyn_msgs__msg__ServiceEntry__Sequence * array)
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
      bosdyn_msgs__msg__ServiceEntry__fini(&array->data[i]);
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

bosdyn_msgs__msg__ServiceEntry__Sequence *
bosdyn_msgs__msg__ServiceEntry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ServiceEntry__Sequence * array = (bosdyn_msgs__msg__ServiceEntry__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ServiceEntry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ServiceEntry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ServiceEntry__Sequence__destroy(bosdyn_msgs__msg__ServiceEntry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ServiceEntry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ServiceEntry__Sequence__are_equal(const bosdyn_msgs__msg__ServiceEntry__Sequence * lhs, const bosdyn_msgs__msg__ServiceEntry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ServiceEntry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ServiceEntry__Sequence__copy(
  const bosdyn_msgs__msg__ServiceEntry__Sequence * input,
  bosdyn_msgs__msg__ServiceEntry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ServiceEntry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ServiceEntry * data =
      (bosdyn_msgs__msg__ServiceEntry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ServiceEntry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ServiceEntry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ServiceEntry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
