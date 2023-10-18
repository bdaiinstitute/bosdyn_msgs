// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `init_wrench_direction_in_frame_name`
#include "geometry_msgs/msg/detail/wrench__functions.h"
// Member `task_speed`
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_one_of_task_speed__functions.h"
// Member `task_type`
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_task_type__functions.h"
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `control_mode`
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_control_mode__functions.h"
// Member `task_target_position`
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_one_of_task_target_position__functions.h"

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__init(bosdyn_msgs__msg__ConstrainedManipulationCommandRequest * msg)
{
  if (!msg) {
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__init(&msg->frame_name)) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(msg);
    return false;
  }
  // init_wrench_direction_in_frame_name
  if (!geometry_msgs__msg__Wrench__init(&msg->init_wrench_direction_in_frame_name)) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(msg);
    return false;
  }
  // init_wrench_direction_in_frame_name_is_set
  // task_speed
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskSpeed__init(&msg->task_speed)) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(msg);
    return false;
  }
  // force_limit
  // force_limit_is_set
  // torque_limit
  // torque_limit_is_set
  // task_type
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestTaskType__init(&msg->task_type)) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(msg);
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__init(&msg->end_time)) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(msg);
    return false;
  }
  // end_time_is_set
  // enable_robot_locomotion
  // enable_robot_locomotion_is_set
  // control_mode
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestControlMode__init(&msg->control_mode)) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(msg);
    return false;
  }
  // task_target_position
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__init(&msg->task_target_position)) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(msg);
    return false;
  }
  // accel_limit
  // accel_limit_is_set
  // reset_estimator
  // reset_estimator_is_set
  return true;
}

void
bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(bosdyn_msgs__msg__ConstrainedManipulationCommandRequest * msg)
{
  if (!msg) {
    return;
  }
  // frame_name
  rosidl_runtime_c__String__fini(&msg->frame_name);
  // init_wrench_direction_in_frame_name
  geometry_msgs__msg__Wrench__fini(&msg->init_wrench_direction_in_frame_name);
  // init_wrench_direction_in_frame_name_is_set
  // task_speed
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskSpeed__fini(&msg->task_speed);
  // force_limit
  // force_limit_is_set
  // torque_limit
  // torque_limit_is_set
  // task_type
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequestTaskType__fini(&msg->task_type);
  // end_time
  builtin_interfaces__msg__Time__fini(&msg->end_time);
  // end_time_is_set
  // enable_robot_locomotion
  // enable_robot_locomotion_is_set
  // control_mode
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequestControlMode__fini(&msg->control_mode);
  // task_target_position
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__fini(&msg->task_target_position);
  // accel_limit
  // accel_limit_is_set
  // reset_estimator
  // reset_estimator_is_set
}

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__are_equal(const bosdyn_msgs__msg__ConstrainedManipulationCommandRequest * lhs, const bosdyn_msgs__msg__ConstrainedManipulationCommandRequest * rhs)
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
  // init_wrench_direction_in_frame_name
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->init_wrench_direction_in_frame_name), &(rhs->init_wrench_direction_in_frame_name)))
  {
    return false;
  }
  // init_wrench_direction_in_frame_name_is_set
  if (lhs->init_wrench_direction_in_frame_name_is_set != rhs->init_wrench_direction_in_frame_name_is_set) {
    return false;
  }
  // task_speed
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskSpeed__are_equal(
      &(lhs->task_speed), &(rhs->task_speed)))
  {
    return false;
  }
  // force_limit
  if (lhs->force_limit != rhs->force_limit) {
    return false;
  }
  // force_limit_is_set
  if (lhs->force_limit_is_set != rhs->force_limit_is_set) {
    return false;
  }
  // torque_limit
  if (lhs->torque_limit != rhs->torque_limit) {
    return false;
  }
  // torque_limit_is_set
  if (lhs->torque_limit_is_set != rhs->torque_limit_is_set) {
    return false;
  }
  // task_type
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestTaskType__are_equal(
      &(lhs->task_type), &(rhs->task_type)))
  {
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
  // enable_robot_locomotion
  if (lhs->enable_robot_locomotion != rhs->enable_robot_locomotion) {
    return false;
  }
  // enable_robot_locomotion_is_set
  if (lhs->enable_robot_locomotion_is_set != rhs->enable_robot_locomotion_is_set) {
    return false;
  }
  // control_mode
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestControlMode__are_equal(
      &(lhs->control_mode), &(rhs->control_mode)))
  {
    return false;
  }
  // task_target_position
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__are_equal(
      &(lhs->task_target_position), &(rhs->task_target_position)))
  {
    return false;
  }
  // accel_limit
  if (lhs->accel_limit != rhs->accel_limit) {
    return false;
  }
  // accel_limit_is_set
  if (lhs->accel_limit_is_set != rhs->accel_limit_is_set) {
    return false;
  }
  // reset_estimator
  if (lhs->reset_estimator != rhs->reset_estimator) {
    return false;
  }
  // reset_estimator_is_set
  if (lhs->reset_estimator_is_set != rhs->reset_estimator_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__copy(
  const bosdyn_msgs__msg__ConstrainedManipulationCommandRequest * input,
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequest * output)
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
  // init_wrench_direction_in_frame_name
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->init_wrench_direction_in_frame_name), &(output->init_wrench_direction_in_frame_name)))
  {
    return false;
  }
  // init_wrench_direction_in_frame_name_is_set
  output->init_wrench_direction_in_frame_name_is_set = input->init_wrench_direction_in_frame_name_is_set;
  // task_speed
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskSpeed__copy(
      &(input->task_speed), &(output->task_speed)))
  {
    return false;
  }
  // force_limit
  output->force_limit = input->force_limit;
  // force_limit_is_set
  output->force_limit_is_set = input->force_limit_is_set;
  // torque_limit
  output->torque_limit = input->torque_limit;
  // torque_limit_is_set
  output->torque_limit_is_set = input->torque_limit_is_set;
  // task_type
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestTaskType__copy(
      &(input->task_type), &(output->task_type)))
  {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end_time), &(output->end_time)))
  {
    return false;
  }
  // end_time_is_set
  output->end_time_is_set = input->end_time_is_set;
  // enable_robot_locomotion
  output->enable_robot_locomotion = input->enable_robot_locomotion;
  // enable_robot_locomotion_is_set
  output->enable_robot_locomotion_is_set = input->enable_robot_locomotion_is_set;
  // control_mode
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestControlMode__copy(
      &(input->control_mode), &(output->control_mode)))
  {
    return false;
  }
  // task_target_position
  if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequestOneOfTaskTargetPosition__copy(
      &(input->task_target_position), &(output->task_target_position)))
  {
    return false;
  }
  // accel_limit
  output->accel_limit = input->accel_limit;
  // accel_limit_is_set
  output->accel_limit_is_set = input->accel_limit_is_set;
  // reset_estimator
  output->reset_estimator = input->reset_estimator;
  // reset_estimator_is_set
  output->reset_estimator_is_set = input->reset_estimator_is_set;
  return true;
}

bosdyn_msgs__msg__ConstrainedManipulationCommandRequest *
bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequest * msg = (bosdyn_msgs__msg__ConstrainedManipulationCommandRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandRequest));
  bool success = bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__destroy(bosdyn_msgs__msg__ConstrainedManipulationCommandRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence__init(bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ConstrainedManipulationCommandRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence__fini(bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence * array)
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
      bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence *
bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence * array = (bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence__destroy(bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence__are_equal(const bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence * lhs, const bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence__copy(
  const bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence * input,
  bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ConstrainedManipulationCommandRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ConstrainedManipulationCommandRequest * data =
      (bosdyn_msgs__msg__ConstrainedManipulationCommandRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ConstrainedManipulationCommandRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
