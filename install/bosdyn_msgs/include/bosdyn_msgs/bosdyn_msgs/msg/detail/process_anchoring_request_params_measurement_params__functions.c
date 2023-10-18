// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParamsMeasurementParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_measurement_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__init(bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams * msg)
{
  if (!msg) {
    return false;
  }
  // use_kinematic_odometry
  // use_kinematic_odometry_is_set
  // use_visual_odometry
  // use_visual_odometry_is_set
  // use_gyroscope_measurements
  // use_gyroscope_measurements_is_set
  // use_loop_closures
  // use_loop_closures_is_set
  // use_world_objects
  // use_world_objects_is_set
  return true;
}

void
bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__fini(bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams * msg)
{
  if (!msg) {
    return;
  }
  // use_kinematic_odometry
  // use_kinematic_odometry_is_set
  // use_visual_odometry
  // use_visual_odometry_is_set
  // use_gyroscope_measurements
  // use_gyroscope_measurements_is_set
  // use_loop_closures
  // use_loop_closures_is_set
  // use_world_objects
  // use_world_objects_is_set
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__are_equal(const bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams * lhs, const bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // use_kinematic_odometry
  if (lhs->use_kinematic_odometry != rhs->use_kinematic_odometry) {
    return false;
  }
  // use_kinematic_odometry_is_set
  if (lhs->use_kinematic_odometry_is_set != rhs->use_kinematic_odometry_is_set) {
    return false;
  }
  // use_visual_odometry
  if (lhs->use_visual_odometry != rhs->use_visual_odometry) {
    return false;
  }
  // use_visual_odometry_is_set
  if (lhs->use_visual_odometry_is_set != rhs->use_visual_odometry_is_set) {
    return false;
  }
  // use_gyroscope_measurements
  if (lhs->use_gyroscope_measurements != rhs->use_gyroscope_measurements) {
    return false;
  }
  // use_gyroscope_measurements_is_set
  if (lhs->use_gyroscope_measurements_is_set != rhs->use_gyroscope_measurements_is_set) {
    return false;
  }
  // use_loop_closures
  if (lhs->use_loop_closures != rhs->use_loop_closures) {
    return false;
  }
  // use_loop_closures_is_set
  if (lhs->use_loop_closures_is_set != rhs->use_loop_closures_is_set) {
    return false;
  }
  // use_world_objects
  if (lhs->use_world_objects != rhs->use_world_objects) {
    return false;
  }
  // use_world_objects_is_set
  if (lhs->use_world_objects_is_set != rhs->use_world_objects_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__copy(
  const bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams * input,
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams * output)
{
  if (!input || !output) {
    return false;
  }
  // use_kinematic_odometry
  output->use_kinematic_odometry = input->use_kinematic_odometry;
  // use_kinematic_odometry_is_set
  output->use_kinematic_odometry_is_set = input->use_kinematic_odometry_is_set;
  // use_visual_odometry
  output->use_visual_odometry = input->use_visual_odometry;
  // use_visual_odometry_is_set
  output->use_visual_odometry_is_set = input->use_visual_odometry_is_set;
  // use_gyroscope_measurements
  output->use_gyroscope_measurements = input->use_gyroscope_measurements;
  // use_gyroscope_measurements_is_set
  output->use_gyroscope_measurements_is_set = input->use_gyroscope_measurements_is_set;
  // use_loop_closures
  output->use_loop_closures = input->use_loop_closures;
  // use_loop_closures_is_set
  output->use_loop_closures_is_set = input->use_loop_closures_is_set;
  // use_world_objects
  output->use_world_objects = input->use_world_objects;
  // use_world_objects_is_set
  output->use_world_objects_is_set = input->use_world_objects_is_set;
  return true;
}

bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams *
bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams * msg = (bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams));
  bool success = bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__destroy(bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence__init(bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence__fini(bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence * array)
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
      bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence *
bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence * array = (bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence__destroy(bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence__are_equal(const bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence * lhs, const bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence__copy(
  const bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence * input,
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams * data =
      (bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
