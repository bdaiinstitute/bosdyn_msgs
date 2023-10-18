// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Logpoint.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/logpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `tag`
#include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "bosdyn_msgs/msg/detail/logpoint_record_type__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/logpoint_log_status__functions.h"
// Member `queue_status`
#include "bosdyn_msgs/msg/detail/logpoint_queue_status__functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `image_params`
#include "bosdyn_msgs/msg/detail/logpoint_image_params__functions.h"
// Member `calibration`
#include "bosdyn_msgs/msg/detail/logpoint_calibration__functions.h"

bool
bosdyn_msgs__msg__Logpoint__init(bosdyn_msgs__msg__Logpoint * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__Logpoint__fini(msg);
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__LogpointRecordType__init(&msg->type)) {
    bosdyn_msgs__msg__Logpoint__fini(msg);
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__LogpointLogStatus__init(&msg->status)) {
    bosdyn_msgs__msg__Logpoint__fini(msg);
    return false;
  }
  // queue_status
  if (!bosdyn_msgs__msg__LogpointQueueStatus__init(&msg->queue_status)) {
    bosdyn_msgs__msg__Logpoint__fini(msg);
    return false;
  }
  // tag
  if (!rosidl_runtime_c__String__init(&msg->tag)) {
    bosdyn_msgs__msg__Logpoint__fini(msg);
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    bosdyn_msgs__msg__Logpoint__fini(msg);
    return false;
  }
  // timestamp_is_set
  // image_params
  if (!bosdyn_msgs__msg__LogpointImageParams__init(&msg->image_params)) {
    bosdyn_msgs__msg__Logpoint__fini(msg);
    return false;
  }
  // image_params_is_set
  // calibration
  if (!bosdyn_msgs__msg__LogpointCalibration__Sequence__init(&msg->calibration, 0)) {
    bosdyn_msgs__msg__Logpoint__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Logpoint__fini(bosdyn_msgs__msg__Logpoint * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  bosdyn_msgs__msg__LogpointRecordType__fini(&msg->type);
  // status
  bosdyn_msgs__msg__LogpointLogStatus__fini(&msg->status);
  // queue_status
  bosdyn_msgs__msg__LogpointQueueStatus__fini(&msg->queue_status);
  // tag
  rosidl_runtime_c__String__fini(&msg->tag);
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // timestamp_is_set
  // image_params
  bosdyn_msgs__msg__LogpointImageParams__fini(&msg->image_params);
  // image_params_is_set
  // calibration
  bosdyn_msgs__msg__LogpointCalibration__Sequence__fini(&msg->calibration);
}

bool
bosdyn_msgs__msg__Logpoint__are_equal(const bosdyn_msgs__msg__Logpoint * lhs, const bosdyn_msgs__msg__Logpoint * rhs)
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
  // type
  if (!bosdyn_msgs__msg__LogpointRecordType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__LogpointLogStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // queue_status
  if (!bosdyn_msgs__msg__LogpointQueueStatus__are_equal(
      &(lhs->queue_status), &(rhs->queue_status)))
  {
    return false;
  }
  // tag
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tag), &(rhs->tag)))
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
  // image_params
  if (!bosdyn_msgs__msg__LogpointImageParams__are_equal(
      &(lhs->image_params), &(rhs->image_params)))
  {
    return false;
  }
  // image_params_is_set
  if (lhs->image_params_is_set != rhs->image_params_is_set) {
    return false;
  }
  // calibration
  if (!bosdyn_msgs__msg__LogpointCalibration__Sequence__are_equal(
      &(lhs->calibration), &(rhs->calibration)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Logpoint__copy(
  const bosdyn_msgs__msg__Logpoint * input,
  bosdyn_msgs__msg__Logpoint * output)
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
  // type
  if (!bosdyn_msgs__msg__LogpointRecordType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__LogpointLogStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // queue_status
  if (!bosdyn_msgs__msg__LogpointQueueStatus__copy(
      &(input->queue_status), &(output->queue_status)))
  {
    return false;
  }
  // tag
  if (!rosidl_runtime_c__String__copy(
      &(input->tag), &(output->tag)))
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
  // image_params
  if (!bosdyn_msgs__msg__LogpointImageParams__copy(
      &(input->image_params), &(output->image_params)))
  {
    return false;
  }
  // image_params_is_set
  output->image_params_is_set = input->image_params_is_set;
  // calibration
  if (!bosdyn_msgs__msg__LogpointCalibration__Sequence__copy(
      &(input->calibration), &(output->calibration)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Logpoint *
bosdyn_msgs__msg__Logpoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Logpoint * msg = (bosdyn_msgs__msg__Logpoint *)allocator.allocate(sizeof(bosdyn_msgs__msg__Logpoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Logpoint));
  bool success = bosdyn_msgs__msg__Logpoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Logpoint__destroy(bosdyn_msgs__msg__Logpoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Logpoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Logpoint__Sequence__init(bosdyn_msgs__msg__Logpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Logpoint * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Logpoint *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Logpoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Logpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Logpoint__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Logpoint__Sequence__fini(bosdyn_msgs__msg__Logpoint__Sequence * array)
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
      bosdyn_msgs__msg__Logpoint__fini(&array->data[i]);
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

bosdyn_msgs__msg__Logpoint__Sequence *
bosdyn_msgs__msg__Logpoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Logpoint__Sequence * array = (bosdyn_msgs__msg__Logpoint__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Logpoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Logpoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Logpoint__Sequence__destroy(bosdyn_msgs__msg__Logpoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Logpoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Logpoint__Sequence__are_equal(const bosdyn_msgs__msg__Logpoint__Sequence * lhs, const bosdyn_msgs__msg__Logpoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Logpoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Logpoint__Sequence__copy(
  const bosdyn_msgs__msg__Logpoint__Sequence * input,
  bosdyn_msgs__msg__Logpoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Logpoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Logpoint * data =
      (bosdyn_msgs__msg__Logpoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Logpoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Logpoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Logpoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
