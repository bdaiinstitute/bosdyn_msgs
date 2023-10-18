// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ImageSource.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/image_source__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `camera_models`
#include "bosdyn_msgs/msg/detail/image_source_one_of_camera_models__functions.h"
// Member `image_type`
#include "bosdyn_msgs/msg/detail/image_source_image_type__functions.h"
// Member `pixel_formats`
#include "bosdyn_msgs/msg/detail/image_pixel_format__functions.h"
// Member `image_formats`
#include "bosdyn_msgs/msg/detail/image_format__functions.h"
// Member `custom_params`
#include "bosdyn_msgs/msg/detail/dict_param_spec__functions.h"

bool
bosdyn_msgs__msg__ImageSource__init(bosdyn_msgs__msg__ImageSource * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__ImageSource__fini(msg);
    return false;
  }
  // cols
  // rows
  // depth_scale
  // camera_models
  if (!bosdyn_msgs__msg__ImageSourceOneOfCameraModels__init(&msg->camera_models)) {
    bosdyn_msgs__msg__ImageSource__fini(msg);
    return false;
  }
  // image_type
  if (!bosdyn_msgs__msg__ImageSourceImageType__init(&msg->image_type)) {
    bosdyn_msgs__msg__ImageSource__fini(msg);
    return false;
  }
  // pixel_formats
  if (!bosdyn_msgs__msg__ImagePixelFormat__Sequence__init(&msg->pixel_formats, 0)) {
    bosdyn_msgs__msg__ImageSource__fini(msg);
    return false;
  }
  // image_formats
  if (!bosdyn_msgs__msg__ImageFormat__Sequence__init(&msg->image_formats, 0)) {
    bosdyn_msgs__msg__ImageSource__fini(msg);
    return false;
  }
  // custom_params
  if (!bosdyn_msgs__msg__DictParamSpec__init(&msg->custom_params)) {
    bosdyn_msgs__msg__ImageSource__fini(msg);
    return false;
  }
  // custom_params_is_set
  return true;
}

void
bosdyn_msgs__msg__ImageSource__fini(bosdyn_msgs__msg__ImageSource * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // cols
  // rows
  // depth_scale
  // camera_models
  bosdyn_msgs__msg__ImageSourceOneOfCameraModels__fini(&msg->camera_models);
  // image_type
  bosdyn_msgs__msg__ImageSourceImageType__fini(&msg->image_type);
  // pixel_formats
  bosdyn_msgs__msg__ImagePixelFormat__Sequence__fini(&msg->pixel_formats);
  // image_formats
  bosdyn_msgs__msg__ImageFormat__Sequence__fini(&msg->image_formats);
  // custom_params
  bosdyn_msgs__msg__DictParamSpec__fini(&msg->custom_params);
  // custom_params_is_set
}

bool
bosdyn_msgs__msg__ImageSource__are_equal(const bosdyn_msgs__msg__ImageSource * lhs, const bosdyn_msgs__msg__ImageSource * rhs)
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
  // cols
  if (lhs->cols != rhs->cols) {
    return false;
  }
  // rows
  if (lhs->rows != rhs->rows) {
    return false;
  }
  // depth_scale
  if (lhs->depth_scale != rhs->depth_scale) {
    return false;
  }
  // camera_models
  if (!bosdyn_msgs__msg__ImageSourceOneOfCameraModels__are_equal(
      &(lhs->camera_models), &(rhs->camera_models)))
  {
    return false;
  }
  // image_type
  if (!bosdyn_msgs__msg__ImageSourceImageType__are_equal(
      &(lhs->image_type), &(rhs->image_type)))
  {
    return false;
  }
  // pixel_formats
  if (!bosdyn_msgs__msg__ImagePixelFormat__Sequence__are_equal(
      &(lhs->pixel_formats), &(rhs->pixel_formats)))
  {
    return false;
  }
  // image_formats
  if (!bosdyn_msgs__msg__ImageFormat__Sequence__are_equal(
      &(lhs->image_formats), &(rhs->image_formats)))
  {
    return false;
  }
  // custom_params
  if (!bosdyn_msgs__msg__DictParamSpec__are_equal(
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
bosdyn_msgs__msg__ImageSource__copy(
  const bosdyn_msgs__msg__ImageSource * input,
  bosdyn_msgs__msg__ImageSource * output)
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
  // cols
  output->cols = input->cols;
  // rows
  output->rows = input->rows;
  // depth_scale
  output->depth_scale = input->depth_scale;
  // camera_models
  if (!bosdyn_msgs__msg__ImageSourceOneOfCameraModels__copy(
      &(input->camera_models), &(output->camera_models)))
  {
    return false;
  }
  // image_type
  if (!bosdyn_msgs__msg__ImageSourceImageType__copy(
      &(input->image_type), &(output->image_type)))
  {
    return false;
  }
  // pixel_formats
  if (!bosdyn_msgs__msg__ImagePixelFormat__Sequence__copy(
      &(input->pixel_formats), &(output->pixel_formats)))
  {
    return false;
  }
  // image_formats
  if (!bosdyn_msgs__msg__ImageFormat__Sequence__copy(
      &(input->image_formats), &(output->image_formats)))
  {
    return false;
  }
  // custom_params
  if (!bosdyn_msgs__msg__DictParamSpec__copy(
      &(input->custom_params), &(output->custom_params)))
  {
    return false;
  }
  // custom_params_is_set
  output->custom_params_is_set = input->custom_params_is_set;
  return true;
}

bosdyn_msgs__msg__ImageSource *
bosdyn_msgs__msg__ImageSource__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageSource * msg = (bosdyn_msgs__msg__ImageSource *)allocator.allocate(sizeof(bosdyn_msgs__msg__ImageSource), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ImageSource));
  bool success = bosdyn_msgs__msg__ImageSource__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ImageSource__destroy(bosdyn_msgs__msg__ImageSource * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ImageSource__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ImageSource__Sequence__init(bosdyn_msgs__msg__ImageSource__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageSource * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ImageSource *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ImageSource), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ImageSource__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ImageSource__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ImageSource__Sequence__fini(bosdyn_msgs__msg__ImageSource__Sequence * array)
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
      bosdyn_msgs__msg__ImageSource__fini(&array->data[i]);
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

bosdyn_msgs__msg__ImageSource__Sequence *
bosdyn_msgs__msg__ImageSource__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageSource__Sequence * array = (bosdyn_msgs__msg__ImageSource__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ImageSource__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ImageSource__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ImageSource__Sequence__destroy(bosdyn_msgs__msg__ImageSource__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ImageSource__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ImageSource__Sequence__are_equal(const bosdyn_msgs__msg__ImageSource__Sequence * lhs, const bosdyn_msgs__msg__ImageSource__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ImageSource__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ImageSource__Sequence__copy(
  const bosdyn_msgs__msg__ImageSource__Sequence * input,
  bosdyn_msgs__msg__ImageSource__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ImageSource);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ImageSource * data =
      (bosdyn_msgs__msg__ImageSource *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ImageSource__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ImageSource__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ImageSource__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
