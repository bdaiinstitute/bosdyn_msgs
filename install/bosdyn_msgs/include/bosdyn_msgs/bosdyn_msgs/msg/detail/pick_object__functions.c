// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PickObject.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/pick_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `object_rt_frame`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `grasp_params`
#include "bosdyn_msgs/msg/detail/grasp_params__functions.h"

bool
bosdyn_msgs__msg__PickObject__init(bosdyn_msgs__msg__PickObject * msg)
{
  if (!msg) {
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__init(&msg->frame_name)) {
    bosdyn_msgs__msg__PickObject__fini(msg);
    return false;
  }
  // object_rt_frame
  if (!geometry_msgs__msg__Vector3__init(&msg->object_rt_frame)) {
    bosdyn_msgs__msg__PickObject__fini(msg);
    return false;
  }
  // object_rt_frame_is_set
  // grasp_params
  if (!bosdyn_msgs__msg__GraspParams__init(&msg->grasp_params)) {
    bosdyn_msgs__msg__PickObject__fini(msg);
    return false;
  }
  // grasp_params_is_set
  return true;
}

void
bosdyn_msgs__msg__PickObject__fini(bosdyn_msgs__msg__PickObject * msg)
{
  if (!msg) {
    return;
  }
  // frame_name
  rosidl_runtime_c__String__fini(&msg->frame_name);
  // object_rt_frame
  geometry_msgs__msg__Vector3__fini(&msg->object_rt_frame);
  // object_rt_frame_is_set
  // grasp_params
  bosdyn_msgs__msg__GraspParams__fini(&msg->grasp_params);
  // grasp_params_is_set
}

bool
bosdyn_msgs__msg__PickObject__are_equal(const bosdyn_msgs__msg__PickObject * lhs, const bosdyn_msgs__msg__PickObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name), &(rhs->frame_name)))
  {
    return false;
  }
  // object_rt_frame
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->object_rt_frame), &(rhs->object_rt_frame)))
  {
    return false;
  }
  // object_rt_frame_is_set
  if (lhs->object_rt_frame_is_set != rhs->object_rt_frame_is_set) {
    return false;
  }
  // grasp_params
  if (!bosdyn_msgs__msg__GraspParams__are_equal(
      &(lhs->grasp_params), &(rhs->grasp_params)))
  {
    return false;
  }
  // grasp_params_is_set
  if (lhs->grasp_params_is_set != rhs->grasp_params_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PickObject__copy(
  const bosdyn_msgs__msg__PickObject * input,
  bosdyn_msgs__msg__PickObject * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name), &(output->frame_name)))
  {
    return false;
  }
  // object_rt_frame
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->object_rt_frame), &(output->object_rt_frame)))
  {
    return false;
  }
  // object_rt_frame_is_set
  output->object_rt_frame_is_set = input->object_rt_frame_is_set;
  // grasp_params
  if (!bosdyn_msgs__msg__GraspParams__copy(
      &(input->grasp_params), &(output->grasp_params)))
  {
    return false;
  }
  // grasp_params_is_set
  output->grasp_params_is_set = input->grasp_params_is_set;
  return true;
}

bosdyn_msgs__msg__PickObject *
bosdyn_msgs__msg__PickObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PickObject * msg = (bosdyn_msgs__msg__PickObject *)allocator.allocate(sizeof(bosdyn_msgs__msg__PickObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PickObject));
  bool success = bosdyn_msgs__msg__PickObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PickObject__destroy(bosdyn_msgs__msg__PickObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PickObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PickObject__Sequence__init(bosdyn_msgs__msg__PickObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PickObject * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PickObject *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PickObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PickObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PickObject__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PickObject__Sequence__fini(bosdyn_msgs__msg__PickObject__Sequence * array)
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
      bosdyn_msgs__msg__PickObject__fini(&array->data[i]);
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

bosdyn_msgs__msg__PickObject__Sequence *
bosdyn_msgs__msg__PickObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PickObject__Sequence * array = (bosdyn_msgs__msg__PickObject__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PickObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PickObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PickObject__Sequence__destroy(bosdyn_msgs__msg__PickObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PickObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PickObject__Sequence__are_equal(const bosdyn_msgs__msg__PickObject__Sequence * lhs, const bosdyn_msgs__msg__PickObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PickObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PickObject__Sequence__copy(
  const bosdyn_msgs__msg__PickObject__Sequence * input,
  bosdyn_msgs__msg__PickObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PickObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PickObject * data =
      (bosdyn_msgs__msg__PickObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PickObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PickObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PickObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
