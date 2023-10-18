// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/LocalGrid.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/local_grid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `local_grid_type_name`
// Member `frame_name_local_grid_data`
#include "rosidl_runtime_c/string_functions.h"
// Member `acquisition_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__functions.h"
// Member `extent`
#include "bosdyn_msgs/msg/detail/local_grid_extent__functions.h"
// Member `cell_format`
#include "bosdyn_msgs/msg/detail/local_grid_cell_format__functions.h"
// Member `encoding`
#include "bosdyn_msgs/msg/detail/local_grid_encoding__functions.h"
// Member `data`
// Member `rle_counts`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bosdyn_msgs__msg__LocalGrid__init(bosdyn_msgs__msg__LocalGrid * msg)
{
  if (!msg) {
    return false;
  }
  // local_grid_type_name
  if (!rosidl_runtime_c__String__init(&msg->local_grid_type_name)) {
    bosdyn_msgs__msg__LocalGrid__fini(msg);
    return false;
  }
  // acquisition_time
  if (!builtin_interfaces__msg__Time__init(&msg->acquisition_time)) {
    bosdyn_msgs__msg__LocalGrid__fini(msg);
    return false;
  }
  // acquisition_time_is_set
  // transforms_snapshot
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__init(&msg->transforms_snapshot)) {
    bosdyn_msgs__msg__LocalGrid__fini(msg);
    return false;
  }
  // transforms_snapshot_is_set
  // frame_name_local_grid_data
  if (!rosidl_runtime_c__String__init(&msg->frame_name_local_grid_data)) {
    bosdyn_msgs__msg__LocalGrid__fini(msg);
    return false;
  }
  // extent
  if (!bosdyn_msgs__msg__LocalGridExtent__init(&msg->extent)) {
    bosdyn_msgs__msg__LocalGrid__fini(msg);
    return false;
  }
  // extent_is_set
  // cell_format
  if (!bosdyn_msgs__msg__LocalGridCellFormat__init(&msg->cell_format)) {
    bosdyn_msgs__msg__LocalGrid__fini(msg);
    return false;
  }
  // encoding
  if (!bosdyn_msgs__msg__LocalGridEncoding__init(&msg->encoding)) {
    bosdyn_msgs__msg__LocalGrid__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__octet__Sequence__init(&msg->data, 0)) {
    bosdyn_msgs__msg__LocalGrid__fini(msg);
    return false;
  }
  // rle_counts
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->rle_counts, 0)) {
    bosdyn_msgs__msg__LocalGrid__fini(msg);
    return false;
  }
  // cell_value_scale
  // cell_value_offset
  return true;
}

void
bosdyn_msgs__msg__LocalGrid__fini(bosdyn_msgs__msg__LocalGrid * msg)
{
  if (!msg) {
    return;
  }
  // local_grid_type_name
  rosidl_runtime_c__String__fini(&msg->local_grid_type_name);
  // acquisition_time
  builtin_interfaces__msg__Time__fini(&msg->acquisition_time);
  // acquisition_time_is_set
  // transforms_snapshot
  bosdyn_msgs__msg__FrameTreeSnapshot__fini(&msg->transforms_snapshot);
  // transforms_snapshot_is_set
  // frame_name_local_grid_data
  rosidl_runtime_c__String__fini(&msg->frame_name_local_grid_data);
  // extent
  bosdyn_msgs__msg__LocalGridExtent__fini(&msg->extent);
  // extent_is_set
  // cell_format
  bosdyn_msgs__msg__LocalGridCellFormat__fini(&msg->cell_format);
  // encoding
  bosdyn_msgs__msg__LocalGridEncoding__fini(&msg->encoding);
  // data
  rosidl_runtime_c__octet__Sequence__fini(&msg->data);
  // rle_counts
  rosidl_runtime_c__int32__Sequence__fini(&msg->rle_counts);
  // cell_value_scale
  // cell_value_offset
}

bool
bosdyn_msgs__msg__LocalGrid__are_equal(const bosdyn_msgs__msg__LocalGrid * lhs, const bosdyn_msgs__msg__LocalGrid * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // local_grid_type_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->local_grid_type_name), &(rhs->local_grid_type_name)))
  {
    return false;
  }
  // acquisition_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->acquisition_time), &(rhs->acquisition_time)))
  {
    return false;
  }
  // acquisition_time_is_set
  if (lhs->acquisition_time_is_set != rhs->acquisition_time_is_set) {
    return false;
  }
  // transforms_snapshot
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__are_equal(
      &(lhs->transforms_snapshot), &(rhs->transforms_snapshot)))
  {
    return false;
  }
  // transforms_snapshot_is_set
  if (lhs->transforms_snapshot_is_set != rhs->transforms_snapshot_is_set) {
    return false;
  }
  // frame_name_local_grid_data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name_local_grid_data), &(rhs->frame_name_local_grid_data)))
  {
    return false;
  }
  // extent
  if (!bosdyn_msgs__msg__LocalGridExtent__are_equal(
      &(lhs->extent), &(rhs->extent)))
  {
    return false;
  }
  // extent_is_set
  if (lhs->extent_is_set != rhs->extent_is_set) {
    return false;
  }
  // cell_format
  if (!bosdyn_msgs__msg__LocalGridCellFormat__are_equal(
      &(lhs->cell_format), &(rhs->cell_format)))
  {
    return false;
  }
  // encoding
  if (!bosdyn_msgs__msg__LocalGridEncoding__are_equal(
      &(lhs->encoding), &(rhs->encoding)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__octet__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // rle_counts
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->rle_counts), &(rhs->rle_counts)))
  {
    return false;
  }
  // cell_value_scale
  if (lhs->cell_value_scale != rhs->cell_value_scale) {
    return false;
  }
  // cell_value_offset
  if (lhs->cell_value_offset != rhs->cell_value_offset) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__LocalGrid__copy(
  const bosdyn_msgs__msg__LocalGrid * input,
  bosdyn_msgs__msg__LocalGrid * output)
{
  if (!input || !output) {
    return false;
  }
  // local_grid_type_name
  if (!rosidl_runtime_c__String__copy(
      &(input->local_grid_type_name), &(output->local_grid_type_name)))
  {
    return false;
  }
  // acquisition_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->acquisition_time), &(output->acquisition_time)))
  {
    return false;
  }
  // acquisition_time_is_set
  output->acquisition_time_is_set = input->acquisition_time_is_set;
  // transforms_snapshot
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__copy(
      &(input->transforms_snapshot), &(output->transforms_snapshot)))
  {
    return false;
  }
  // transforms_snapshot_is_set
  output->transforms_snapshot_is_set = input->transforms_snapshot_is_set;
  // frame_name_local_grid_data
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name_local_grid_data), &(output->frame_name_local_grid_data)))
  {
    return false;
  }
  // extent
  if (!bosdyn_msgs__msg__LocalGridExtent__copy(
      &(input->extent), &(output->extent)))
  {
    return false;
  }
  // extent_is_set
  output->extent_is_set = input->extent_is_set;
  // cell_format
  if (!bosdyn_msgs__msg__LocalGridCellFormat__copy(
      &(input->cell_format), &(output->cell_format)))
  {
    return false;
  }
  // encoding
  if (!bosdyn_msgs__msg__LocalGridEncoding__copy(
      &(input->encoding), &(output->encoding)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__octet__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // rle_counts
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->rle_counts), &(output->rle_counts)))
  {
    return false;
  }
  // cell_value_scale
  output->cell_value_scale = input->cell_value_scale;
  // cell_value_offset
  output->cell_value_offset = input->cell_value_offset;
  return true;
}

bosdyn_msgs__msg__LocalGrid *
bosdyn_msgs__msg__LocalGrid__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LocalGrid * msg = (bosdyn_msgs__msg__LocalGrid *)allocator.allocate(sizeof(bosdyn_msgs__msg__LocalGrid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__LocalGrid));
  bool success = bosdyn_msgs__msg__LocalGrid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__LocalGrid__destroy(bosdyn_msgs__msg__LocalGrid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__LocalGrid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__LocalGrid__Sequence__init(bosdyn_msgs__msg__LocalGrid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LocalGrid * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__LocalGrid *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__LocalGrid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__LocalGrid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__LocalGrid__fini(&data[i - 1]);
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
bosdyn_msgs__msg__LocalGrid__Sequence__fini(bosdyn_msgs__msg__LocalGrid__Sequence * array)
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
      bosdyn_msgs__msg__LocalGrid__fini(&array->data[i]);
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

bosdyn_msgs__msg__LocalGrid__Sequence *
bosdyn_msgs__msg__LocalGrid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LocalGrid__Sequence * array = (bosdyn_msgs__msg__LocalGrid__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__LocalGrid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__LocalGrid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__LocalGrid__Sequence__destroy(bosdyn_msgs__msg__LocalGrid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__LocalGrid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__LocalGrid__Sequence__are_equal(const bosdyn_msgs__msg__LocalGrid__Sequence * lhs, const bosdyn_msgs__msg__LocalGrid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__LocalGrid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__LocalGrid__Sequence__copy(
  const bosdyn_msgs__msg__LocalGrid__Sequence * input,
  bosdyn_msgs__msg__LocalGrid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__LocalGrid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__LocalGrid * data =
      (bosdyn_msgs__msg__LocalGrid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__LocalGrid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__LocalGrid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__LocalGrid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
