// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PageInfo.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/page_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `path`
// Member `source`
#include "rosidl_runtime_c/string_functions.h"
// Member `time_range`
#include "bosdyn_msgs/msg/detail/time_range__functions.h"
// Member `format`
#include "bosdyn_msgs/msg/detail/page_info_page_format__functions.h"
// Member `compression`
#include "bosdyn_msgs/msg/detail/page_info_compression__functions.h"
// Member `deleted_timestamp`
// Member `download_started_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__PageInfo__init(bosdyn_msgs__msg__PageInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    bosdyn_msgs__msg__PageInfo__fini(msg);
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__init(&msg->path)) {
    bosdyn_msgs__msg__PageInfo__fini(msg);
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    bosdyn_msgs__msg__PageInfo__fini(msg);
    return false;
  }
  // time_range
  if (!bosdyn_msgs__msg__TimeRange__init(&msg->time_range)) {
    bosdyn_msgs__msg__PageInfo__fini(msg);
    return false;
  }
  // time_range_is_set
  // num_ticks
  // total_bytes
  // format
  if (!bosdyn_msgs__msg__PageInfoPageFormat__init(&msg->format)) {
    bosdyn_msgs__msg__PageInfo__fini(msg);
    return false;
  }
  // compression
  if (!bosdyn_msgs__msg__PageInfoCompression__init(&msg->compression)) {
    bosdyn_msgs__msg__PageInfo__fini(msg);
    return false;
  }
  // is_open
  // is_downloaded
  // deleted_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->deleted_timestamp)) {
    bosdyn_msgs__msg__PageInfo__fini(msg);
    return false;
  }
  // deleted_timestamp_is_set
  // download_started_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->download_started_timestamp)) {
    bosdyn_msgs__msg__PageInfo__fini(msg);
    return false;
  }
  // download_started_timestamp_is_set
  // request_preserve
  return true;
}

void
bosdyn_msgs__msg__PageInfo__fini(bosdyn_msgs__msg__PageInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // path
  rosidl_runtime_c__String__fini(&msg->path);
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // time_range
  bosdyn_msgs__msg__TimeRange__fini(&msg->time_range);
  // time_range_is_set
  // num_ticks
  // total_bytes
  // format
  bosdyn_msgs__msg__PageInfoPageFormat__fini(&msg->format);
  // compression
  bosdyn_msgs__msg__PageInfoCompression__fini(&msg->compression);
  // is_open
  // is_downloaded
  // deleted_timestamp
  builtin_interfaces__msg__Time__fini(&msg->deleted_timestamp);
  // deleted_timestamp_is_set
  // download_started_timestamp
  builtin_interfaces__msg__Time__fini(&msg->download_started_timestamp);
  // download_started_timestamp_is_set
  // request_preserve
}

bool
bosdyn_msgs__msg__PageInfo__are_equal(const bosdyn_msgs__msg__PageInfo * lhs, const bosdyn_msgs__msg__PageInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // time_range
  if (!bosdyn_msgs__msg__TimeRange__are_equal(
      &(lhs->time_range), &(rhs->time_range)))
  {
    return false;
  }
  // time_range_is_set
  if (lhs->time_range_is_set != rhs->time_range_is_set) {
    return false;
  }
  // num_ticks
  if (lhs->num_ticks != rhs->num_ticks) {
    return false;
  }
  // total_bytes
  if (lhs->total_bytes != rhs->total_bytes) {
    return false;
  }
  // format
  if (!bosdyn_msgs__msg__PageInfoPageFormat__are_equal(
      &(lhs->format), &(rhs->format)))
  {
    return false;
  }
  // compression
  if (!bosdyn_msgs__msg__PageInfoCompression__are_equal(
      &(lhs->compression), &(rhs->compression)))
  {
    return false;
  }
  // is_open
  if (lhs->is_open != rhs->is_open) {
    return false;
  }
  // is_downloaded
  if (lhs->is_downloaded != rhs->is_downloaded) {
    return false;
  }
  // deleted_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->deleted_timestamp), &(rhs->deleted_timestamp)))
  {
    return false;
  }
  // deleted_timestamp_is_set
  if (lhs->deleted_timestamp_is_set != rhs->deleted_timestamp_is_set) {
    return false;
  }
  // download_started_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->download_started_timestamp), &(rhs->download_started_timestamp)))
  {
    return false;
  }
  // download_started_timestamp_is_set
  if (lhs->download_started_timestamp_is_set != rhs->download_started_timestamp_is_set) {
    return false;
  }
  // request_preserve
  if (lhs->request_preserve != rhs->request_preserve) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PageInfo__copy(
  const bosdyn_msgs__msg__PageInfo * input,
  bosdyn_msgs__msg__PageInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // time_range
  if (!bosdyn_msgs__msg__TimeRange__copy(
      &(input->time_range), &(output->time_range)))
  {
    return false;
  }
  // time_range_is_set
  output->time_range_is_set = input->time_range_is_set;
  // num_ticks
  output->num_ticks = input->num_ticks;
  // total_bytes
  output->total_bytes = input->total_bytes;
  // format
  if (!bosdyn_msgs__msg__PageInfoPageFormat__copy(
      &(input->format), &(output->format)))
  {
    return false;
  }
  // compression
  if (!bosdyn_msgs__msg__PageInfoCompression__copy(
      &(input->compression), &(output->compression)))
  {
    return false;
  }
  // is_open
  output->is_open = input->is_open;
  // is_downloaded
  output->is_downloaded = input->is_downloaded;
  // deleted_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->deleted_timestamp), &(output->deleted_timestamp)))
  {
    return false;
  }
  // deleted_timestamp_is_set
  output->deleted_timestamp_is_set = input->deleted_timestamp_is_set;
  // download_started_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->download_started_timestamp), &(output->download_started_timestamp)))
  {
    return false;
  }
  // download_started_timestamp_is_set
  output->download_started_timestamp_is_set = input->download_started_timestamp_is_set;
  // request_preserve
  output->request_preserve = input->request_preserve;
  return true;
}

bosdyn_msgs__msg__PageInfo *
bosdyn_msgs__msg__PageInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PageInfo * msg = (bosdyn_msgs__msg__PageInfo *)allocator.allocate(sizeof(bosdyn_msgs__msg__PageInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PageInfo));
  bool success = bosdyn_msgs__msg__PageInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PageInfo__destroy(bosdyn_msgs__msg__PageInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PageInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PageInfo__Sequence__init(bosdyn_msgs__msg__PageInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PageInfo * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PageInfo *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PageInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PageInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PageInfo__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PageInfo__Sequence__fini(bosdyn_msgs__msg__PageInfo__Sequence * array)
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
      bosdyn_msgs__msg__PageInfo__fini(&array->data[i]);
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

bosdyn_msgs__msg__PageInfo__Sequence *
bosdyn_msgs__msg__PageInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PageInfo__Sequence * array = (bosdyn_msgs__msg__PageInfo__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PageInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PageInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PageInfo__Sequence__destroy(bosdyn_msgs__msg__PageInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PageInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PageInfo__Sequence__are_equal(const bosdyn_msgs__msg__PageInfo__Sequence * lhs, const bosdyn_msgs__msg__PageInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PageInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PageInfo__Sequence__copy(
  const bosdyn_msgs__msg__PageInfo__Sequence * input,
  bosdyn_msgs__msg__PageInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PageInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PageInfo * data =
      (bosdyn_msgs__msg__PageInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PageInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PageInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PageInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
