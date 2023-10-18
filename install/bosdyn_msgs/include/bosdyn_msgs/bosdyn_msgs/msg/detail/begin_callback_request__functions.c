// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/BeginCallbackRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/begin_callback_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `region_info`
#include "bosdyn_msgs/msg/detail/region_information__functions.h"
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `recorded_data`
#include "bosdyn_msgs/msg/detail/area_callback_data__functions.h"
// Member `custom_params`
#include "bosdyn_msgs/msg/detail/dict_param__functions.h"

bool
bosdyn_msgs__msg__BeginCallbackRequest__init(bosdyn_msgs__msg__BeginCallbackRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__BeginCallbackRequest__fini(msg);
    return false;
  }
  // header_is_set
  // region_info
  if (!bosdyn_msgs__msg__RegionInformation__init(&msg->region_info)) {
    bosdyn_msgs__msg__BeginCallbackRequest__fini(msg);
    return false;
  }
  // region_info_is_set
  // end_time
  if (!builtin_interfaces__msg__Time__init(&msg->end_time)) {
    bosdyn_msgs__msg__BeginCallbackRequest__fini(msg);
    return false;
  }
  // end_time_is_set
  // recorded_data
  if (!bosdyn_msgs__msg__AreaCallbackData__init(&msg->recorded_data)) {
    bosdyn_msgs__msg__BeginCallbackRequest__fini(msg);
    return false;
  }
  // recorded_data_is_set
  // custom_params
  if (!bosdyn_msgs__msg__DictParam__init(&msg->custom_params)) {
    bosdyn_msgs__msg__BeginCallbackRequest__fini(msg);
    return false;
  }
  // custom_params_is_set
  return true;
}

void
bosdyn_msgs__msg__BeginCallbackRequest__fini(bosdyn_msgs__msg__BeginCallbackRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // region_info
  bosdyn_msgs__msg__RegionInformation__fini(&msg->region_info);
  // region_info_is_set
  // end_time
  builtin_interfaces__msg__Time__fini(&msg->end_time);
  // end_time_is_set
  // recorded_data
  bosdyn_msgs__msg__AreaCallbackData__fini(&msg->recorded_data);
  // recorded_data_is_set
  // custom_params
  bosdyn_msgs__msg__DictParam__fini(&msg->custom_params);
  // custom_params_is_set
}

bool
bosdyn_msgs__msg__BeginCallbackRequest__are_equal(const bosdyn_msgs__msg__BeginCallbackRequest * lhs, const bosdyn_msgs__msg__BeginCallbackRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // region_info
  if (!bosdyn_msgs__msg__RegionInformation__are_equal(
      &(lhs->region_info), &(rhs->region_info)))
  {
    return false;
  }
  // region_info_is_set
  if (lhs->region_info_is_set != rhs->region_info_is_set) {
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
  // recorded_data
  if (!bosdyn_msgs__msg__AreaCallbackData__are_equal(
      &(lhs->recorded_data), &(rhs->recorded_data)))
  {
    return false;
  }
  // recorded_data_is_set
  if (lhs->recorded_data_is_set != rhs->recorded_data_is_set) {
    return false;
  }
  // custom_params
  if (!bosdyn_msgs__msg__DictParam__are_equal(
      &(lhs->custom_params), &(rhs->custom_params)))
  {
    return false;
  }
  // custom_params_is_set
  if (lhs->custom_params_is_set != rhs->custom_params_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__BeginCallbackRequest__copy(
  const bosdyn_msgs__msg__BeginCallbackRequest * input,
  bosdyn_msgs__msg__BeginCallbackRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // region_info
  if (!bosdyn_msgs__msg__RegionInformation__copy(
      &(input->region_info), &(output->region_info)))
  {
    return false;
  }
  // region_info_is_set
  output->region_info_is_set = input->region_info_is_set;
  // end_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end_time), &(output->end_time)))
  {
    return false;
  }
  // end_time_is_set
  output->end_time_is_set = input->end_time_is_set;
  // recorded_data
  if (!bosdyn_msgs__msg__AreaCallbackData__copy(
      &(input->recorded_data), &(output->recorded_data)))
  {
    return false;
  }
  // recorded_data_is_set
  output->recorded_data_is_set = input->recorded_data_is_set;
  // custom_params
  if (!bosdyn_msgs__msg__DictParam__copy(
      &(input->custom_params), &(output->custom_params)))
  {
    return false;
  }
  // custom_params_is_set
  output->custom_params_is_set = input->custom_params_is_set;
  return true;
}

bosdyn_msgs__msg__BeginCallbackRequest *
bosdyn_msgs__msg__BeginCallbackRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BeginCallbackRequest * msg = (bosdyn_msgs__msg__BeginCallbackRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__BeginCallbackRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__BeginCallbackRequest));
  bool success = bosdyn_msgs__msg__BeginCallbackRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__BeginCallbackRequest__destroy(bosdyn_msgs__msg__BeginCallbackRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__BeginCallbackRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__BeginCallbackRequest__Sequence__init(bosdyn_msgs__msg__BeginCallbackRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BeginCallbackRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__BeginCallbackRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__BeginCallbackRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__BeginCallbackRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__BeginCallbackRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__BeginCallbackRequest__Sequence__fini(bosdyn_msgs__msg__BeginCallbackRequest__Sequence * array)
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
      bosdyn_msgs__msg__BeginCallbackRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__BeginCallbackRequest__Sequence *
bosdyn_msgs__msg__BeginCallbackRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BeginCallbackRequest__Sequence * array = (bosdyn_msgs__msg__BeginCallbackRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__BeginCallbackRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__BeginCallbackRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__BeginCallbackRequest__Sequence__destroy(bosdyn_msgs__msg__BeginCallbackRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__BeginCallbackRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__BeginCallbackRequest__Sequence__are_equal(const bosdyn_msgs__msg__BeginCallbackRequest__Sequence * lhs, const bosdyn_msgs__msg__BeginCallbackRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__BeginCallbackRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__BeginCallbackRequest__Sequence__copy(
  const bosdyn_msgs__msg__BeginCallbackRequest__Sequence * input,
  bosdyn_msgs__msg__BeginCallbackRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__BeginCallbackRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__BeginCallbackRequest * data =
      (bosdyn_msgs__msg__BeginCallbackRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__BeginCallbackRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__BeginCallbackRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__BeginCallbackRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
