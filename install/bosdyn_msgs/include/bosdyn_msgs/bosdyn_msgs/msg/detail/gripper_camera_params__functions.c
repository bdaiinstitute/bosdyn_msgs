// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/GripperCameraParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/gripper_camera_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `camera_mode`
#include "bosdyn_msgs/msg/detail/gripper_camera_params_camera_mode__functions.h"
// Member `exposure_roi`
// Member `focus_roi`
#include "bosdyn_msgs/msg/detail/roi_parameters__functions.h"
// Member `hdr`
#include "bosdyn_msgs/msg/detail/hdr_parameters__functions.h"
// Member `led_mode`
#include "bosdyn_msgs/msg/detail/gripper_camera_params_led_mode__functions.h"

bool
bosdyn_msgs__msg__GripperCameraParams__init(bosdyn_msgs__msg__GripperCameraParams * msg)
{
  if (!msg) {
    return false;
  }
  // camera_mode
  if (!bosdyn_msgs__msg__GripperCameraParamsCameraMode__init(&msg->camera_mode)) {
    bosdyn_msgs__msg__GripperCameraParams__fini(msg);
    return false;
  }
  // brightness
  // brightness_is_set
  // contrast
  // contrast_is_set
  // saturation
  // saturation_is_set
  // gain
  // gain_is_set
  // exposure_auto
  // exposure_auto_is_set
  // exposure_absolute
  // exposure_absolute_is_set
  // exposure_roi
  if (!bosdyn_msgs__msg__RoiParameters__init(&msg->exposure_roi)) {
    bosdyn_msgs__msg__GripperCameraParams__fini(msg);
    return false;
  }
  // exposure_roi_is_set
  // focus_auto
  // focus_auto_is_set
  // focus_absolute
  // focus_absolute_is_set
  // focus_roi
  if (!bosdyn_msgs__msg__RoiParameters__init(&msg->focus_roi)) {
    bosdyn_msgs__msg__GripperCameraParams__fini(msg);
    return false;
  }
  // focus_roi_is_set
  // draw_focus_roi_rectangle
  // draw_focus_roi_rectangle_is_set
  // hdr
  if (!bosdyn_msgs__msg__HdrParameters__init(&msg->hdr)) {
    bosdyn_msgs__msg__GripperCameraParams__fini(msg);
    return false;
  }
  // led_mode
  if (!bosdyn_msgs__msg__GripperCameraParamsLedMode__init(&msg->led_mode)) {
    bosdyn_msgs__msg__GripperCameraParams__fini(msg);
    return false;
  }
  // led_torch_brightness
  // led_torch_brightness_is_set
  // white_balance_temperature_auto
  // white_balance_temperature_auto_is_set
  // gamma
  // gamma_is_set
  // white_balance_temperature
  // white_balance_temperature_is_set
  // sharpness
  // sharpness_is_set
  return true;
}

void
bosdyn_msgs__msg__GripperCameraParams__fini(bosdyn_msgs__msg__GripperCameraParams * msg)
{
  if (!msg) {
    return;
  }
  // camera_mode
  bosdyn_msgs__msg__GripperCameraParamsCameraMode__fini(&msg->camera_mode);
  // brightness
  // brightness_is_set
  // contrast
  // contrast_is_set
  // saturation
  // saturation_is_set
  // gain
  // gain_is_set
  // exposure_auto
  // exposure_auto_is_set
  // exposure_absolute
  // exposure_absolute_is_set
  // exposure_roi
  bosdyn_msgs__msg__RoiParameters__fini(&msg->exposure_roi);
  // exposure_roi_is_set
  // focus_auto
  // focus_auto_is_set
  // focus_absolute
  // focus_absolute_is_set
  // focus_roi
  bosdyn_msgs__msg__RoiParameters__fini(&msg->focus_roi);
  // focus_roi_is_set
  // draw_focus_roi_rectangle
  // draw_focus_roi_rectangle_is_set
  // hdr
  bosdyn_msgs__msg__HdrParameters__fini(&msg->hdr);
  // led_mode
  bosdyn_msgs__msg__GripperCameraParamsLedMode__fini(&msg->led_mode);
  // led_torch_brightness
  // led_torch_brightness_is_set
  // white_balance_temperature_auto
  // white_balance_temperature_auto_is_set
  // gamma
  // gamma_is_set
  // white_balance_temperature
  // white_balance_temperature_is_set
  // sharpness
  // sharpness_is_set
}

bool
bosdyn_msgs__msg__GripperCameraParams__are_equal(const bosdyn_msgs__msg__GripperCameraParams * lhs, const bosdyn_msgs__msg__GripperCameraParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // camera_mode
  if (!bosdyn_msgs__msg__GripperCameraParamsCameraMode__are_equal(
      &(lhs->camera_mode), &(rhs->camera_mode)))
  {
    return false;
  }
  // brightness
  if (lhs->brightness != rhs->brightness) {
    return false;
  }
  // brightness_is_set
  if (lhs->brightness_is_set != rhs->brightness_is_set) {
    return false;
  }
  // contrast
  if (lhs->contrast != rhs->contrast) {
    return false;
  }
  // contrast_is_set
  if (lhs->contrast_is_set != rhs->contrast_is_set) {
    return false;
  }
  // saturation
  if (lhs->saturation != rhs->saturation) {
    return false;
  }
  // saturation_is_set
  if (lhs->saturation_is_set != rhs->saturation_is_set) {
    return false;
  }
  // gain
  if (lhs->gain != rhs->gain) {
    return false;
  }
  // gain_is_set
  if (lhs->gain_is_set != rhs->gain_is_set) {
    return false;
  }
  // exposure_auto
  if (lhs->exposure_auto != rhs->exposure_auto) {
    return false;
  }
  // exposure_auto_is_set
  if (lhs->exposure_auto_is_set != rhs->exposure_auto_is_set) {
    return false;
  }
  // exposure_absolute
  if (lhs->exposure_absolute != rhs->exposure_absolute) {
    return false;
  }
  // exposure_absolute_is_set
  if (lhs->exposure_absolute_is_set != rhs->exposure_absolute_is_set) {
    return false;
  }
  // exposure_roi
  if (!bosdyn_msgs__msg__RoiParameters__are_equal(
      &(lhs->exposure_roi), &(rhs->exposure_roi)))
  {
    return false;
  }
  // exposure_roi_is_set
  if (lhs->exposure_roi_is_set != rhs->exposure_roi_is_set) {
    return false;
  }
  // focus_auto
  if (lhs->focus_auto != rhs->focus_auto) {
    return false;
  }
  // focus_auto_is_set
  if (lhs->focus_auto_is_set != rhs->focus_auto_is_set) {
    return false;
  }
  // focus_absolute
  if (lhs->focus_absolute != rhs->focus_absolute) {
    return false;
  }
  // focus_absolute_is_set
  if (lhs->focus_absolute_is_set != rhs->focus_absolute_is_set) {
    return false;
  }
  // focus_roi
  if (!bosdyn_msgs__msg__RoiParameters__are_equal(
      &(lhs->focus_roi), &(rhs->focus_roi)))
  {
    return false;
  }
  // focus_roi_is_set
  if (lhs->focus_roi_is_set != rhs->focus_roi_is_set) {
    return false;
  }
  // draw_focus_roi_rectangle
  if (lhs->draw_focus_roi_rectangle != rhs->draw_focus_roi_rectangle) {
    return false;
  }
  // draw_focus_roi_rectangle_is_set
  if (lhs->draw_focus_roi_rectangle_is_set != rhs->draw_focus_roi_rectangle_is_set) {
    return false;
  }
  // hdr
  if (!bosdyn_msgs__msg__HdrParameters__are_equal(
      &(lhs->hdr), &(rhs->hdr)))
  {
    return false;
  }
  // led_mode
  if (!bosdyn_msgs__msg__GripperCameraParamsLedMode__are_equal(
      &(lhs->led_mode), &(rhs->led_mode)))
  {
    return false;
  }
  // led_torch_brightness
  if (lhs->led_torch_brightness != rhs->led_torch_brightness) {
    return false;
  }
  // led_torch_brightness_is_set
  if (lhs->led_torch_brightness_is_set != rhs->led_torch_brightness_is_set) {
    return false;
  }
  // white_balance_temperature_auto
  if (lhs->white_balance_temperature_auto != rhs->white_balance_temperature_auto) {
    return false;
  }
  // white_balance_temperature_auto_is_set
  if (lhs->white_balance_temperature_auto_is_set != rhs->white_balance_temperature_auto_is_set) {
    return false;
  }
  // gamma
  if (lhs->gamma != rhs->gamma) {
    return false;
  }
  // gamma_is_set
  if (lhs->gamma_is_set != rhs->gamma_is_set) {
    return false;
  }
  // white_balance_temperature
  if (lhs->white_balance_temperature != rhs->white_balance_temperature) {
    return false;
  }
  // white_balance_temperature_is_set
  if (lhs->white_balance_temperature_is_set != rhs->white_balance_temperature_is_set) {
    return false;
  }
  // sharpness
  if (lhs->sharpness != rhs->sharpness) {
    return false;
  }
  // sharpness_is_set
  if (lhs->sharpness_is_set != rhs->sharpness_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__GripperCameraParams__copy(
  const bosdyn_msgs__msg__GripperCameraParams * input,
  bosdyn_msgs__msg__GripperCameraParams * output)
{
  if (!input || !output) {
    return false;
  }
  // camera_mode
  if (!bosdyn_msgs__msg__GripperCameraParamsCameraMode__copy(
      &(input->camera_mode), &(output->camera_mode)))
  {
    return false;
  }
  // brightness
  output->brightness = input->brightness;
  // brightness_is_set
  output->brightness_is_set = input->brightness_is_set;
  // contrast
  output->contrast = input->contrast;
  // contrast_is_set
  output->contrast_is_set = input->contrast_is_set;
  // saturation
  output->saturation = input->saturation;
  // saturation_is_set
  output->saturation_is_set = input->saturation_is_set;
  // gain
  output->gain = input->gain;
  // gain_is_set
  output->gain_is_set = input->gain_is_set;
  // exposure_auto
  output->exposure_auto = input->exposure_auto;
  // exposure_auto_is_set
  output->exposure_auto_is_set = input->exposure_auto_is_set;
  // exposure_absolute
  output->exposure_absolute = input->exposure_absolute;
  // exposure_absolute_is_set
  output->exposure_absolute_is_set = input->exposure_absolute_is_set;
  // exposure_roi
  if (!bosdyn_msgs__msg__RoiParameters__copy(
      &(input->exposure_roi), &(output->exposure_roi)))
  {
    return false;
  }
  // exposure_roi_is_set
  output->exposure_roi_is_set = input->exposure_roi_is_set;
  // focus_auto
  output->focus_auto = input->focus_auto;
  // focus_auto_is_set
  output->focus_auto_is_set = input->focus_auto_is_set;
  // focus_absolute
  output->focus_absolute = input->focus_absolute;
  // focus_absolute_is_set
  output->focus_absolute_is_set = input->focus_absolute_is_set;
  // focus_roi
  if (!bosdyn_msgs__msg__RoiParameters__copy(
      &(input->focus_roi), &(output->focus_roi)))
  {
    return false;
  }
  // focus_roi_is_set
  output->focus_roi_is_set = input->focus_roi_is_set;
  // draw_focus_roi_rectangle
  output->draw_focus_roi_rectangle = input->draw_focus_roi_rectangle;
  // draw_focus_roi_rectangle_is_set
  output->draw_focus_roi_rectangle_is_set = input->draw_focus_roi_rectangle_is_set;
  // hdr
  if (!bosdyn_msgs__msg__HdrParameters__copy(
      &(input->hdr), &(output->hdr)))
  {
    return false;
  }
  // led_mode
  if (!bosdyn_msgs__msg__GripperCameraParamsLedMode__copy(
      &(input->led_mode), &(output->led_mode)))
  {
    return false;
  }
  // led_torch_brightness
  output->led_torch_brightness = input->led_torch_brightness;
  // led_torch_brightness_is_set
  output->led_torch_brightness_is_set = input->led_torch_brightness_is_set;
  // white_balance_temperature_auto
  output->white_balance_temperature_auto = input->white_balance_temperature_auto;
  // white_balance_temperature_auto_is_set
  output->white_balance_temperature_auto_is_set = input->white_balance_temperature_auto_is_set;
  // gamma
  output->gamma = input->gamma;
  // gamma_is_set
  output->gamma_is_set = input->gamma_is_set;
  // white_balance_temperature
  output->white_balance_temperature = input->white_balance_temperature;
  // white_balance_temperature_is_set
  output->white_balance_temperature_is_set = input->white_balance_temperature_is_set;
  // sharpness
  output->sharpness = input->sharpness;
  // sharpness_is_set
  output->sharpness_is_set = input->sharpness_is_set;
  return true;
}

bosdyn_msgs__msg__GripperCameraParams *
bosdyn_msgs__msg__GripperCameraParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GripperCameraParams * msg = (bosdyn_msgs__msg__GripperCameraParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__GripperCameraParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__GripperCameraParams));
  bool success = bosdyn_msgs__msg__GripperCameraParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__GripperCameraParams__destroy(bosdyn_msgs__msg__GripperCameraParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__GripperCameraParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__GripperCameraParams__Sequence__init(bosdyn_msgs__msg__GripperCameraParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GripperCameraParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__GripperCameraParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__GripperCameraParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__GripperCameraParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__GripperCameraParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__GripperCameraParams__Sequence__fini(bosdyn_msgs__msg__GripperCameraParams__Sequence * array)
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
      bosdyn_msgs__msg__GripperCameraParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__GripperCameraParams__Sequence *
bosdyn_msgs__msg__GripperCameraParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GripperCameraParams__Sequence * array = (bosdyn_msgs__msg__GripperCameraParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__GripperCameraParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__GripperCameraParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__GripperCameraParams__Sequence__destroy(bosdyn_msgs__msg__GripperCameraParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__GripperCameraParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__GripperCameraParams__Sequence__are_equal(const bosdyn_msgs__msg__GripperCameraParams__Sequence * lhs, const bosdyn_msgs__msg__GripperCameraParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__GripperCameraParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__GripperCameraParams__Sequence__copy(
  const bosdyn_msgs__msg__GripperCameraParams__Sequence * input,
  bosdyn_msgs__msg__GripperCameraParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__GripperCameraParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__GripperCameraParams * data =
      (bosdyn_msgs__msg__GripperCameraParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__GripperCameraParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__GripperCameraParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__GripperCameraParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
