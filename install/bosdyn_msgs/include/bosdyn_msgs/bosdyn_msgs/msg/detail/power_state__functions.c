// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PowerState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/power_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `motor_power_state`
#include "bosdyn_msgs/msg/detail/power_state_motor_power_state__functions.h"
// Member `shore_power_state`
#include "bosdyn_msgs/msg/detail/power_state_shore_power_state__functions.h"
// Member `robot_power_state`
#include "bosdyn_msgs/msg/detail/power_state_robot_power_state__functions.h"
// Member `payload_ports_power_state`
#include "bosdyn_msgs/msg/detail/power_state_payload_ports_power_state__functions.h"
// Member `wifi_radio_power_state`
#include "bosdyn_msgs/msg/detail/power_state_wifi_radio_power_state__functions.h"
// Member `locomotion_estimated_runtime`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__PowerState__init(bosdyn_msgs__msg__PowerState * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    bosdyn_msgs__msg__PowerState__fini(msg);
    return false;
  }
  // timestamp_is_set
  // motor_power_state
  if (!bosdyn_msgs__msg__PowerStateMotorPowerState__init(&msg->motor_power_state)) {
    bosdyn_msgs__msg__PowerState__fini(msg);
    return false;
  }
  // shore_power_state
  if (!bosdyn_msgs__msg__PowerStateShorePowerState__init(&msg->shore_power_state)) {
    bosdyn_msgs__msg__PowerState__fini(msg);
    return false;
  }
  // robot_power_state
  if (!bosdyn_msgs__msg__PowerStateRobotPowerState__init(&msg->robot_power_state)) {
    bosdyn_msgs__msg__PowerState__fini(msg);
    return false;
  }
  // payload_ports_power_state
  if (!bosdyn_msgs__msg__PowerStatePayloadPortsPowerState__init(&msg->payload_ports_power_state)) {
    bosdyn_msgs__msg__PowerState__fini(msg);
    return false;
  }
  // wifi_radio_power_state
  if (!bosdyn_msgs__msg__PowerStateWifiRadioPowerState__init(&msg->wifi_radio_power_state)) {
    bosdyn_msgs__msg__PowerState__fini(msg);
    return false;
  }
  // locomotion_charge_percentage
  // locomotion_charge_percentage_is_set
  // locomotion_estimated_runtime
  if (!builtin_interfaces__msg__Duration__init(&msg->locomotion_estimated_runtime)) {
    bosdyn_msgs__msg__PowerState__fini(msg);
    return false;
  }
  // locomotion_estimated_runtime_is_set
  return true;
}

void
bosdyn_msgs__msg__PowerState__fini(bosdyn_msgs__msg__PowerState * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // timestamp_is_set
  // motor_power_state
  bosdyn_msgs__msg__PowerStateMotorPowerState__fini(&msg->motor_power_state);
  // shore_power_state
  bosdyn_msgs__msg__PowerStateShorePowerState__fini(&msg->shore_power_state);
  // robot_power_state
  bosdyn_msgs__msg__PowerStateRobotPowerState__fini(&msg->robot_power_state);
  // payload_ports_power_state
  bosdyn_msgs__msg__PowerStatePayloadPortsPowerState__fini(&msg->payload_ports_power_state);
  // wifi_radio_power_state
  bosdyn_msgs__msg__PowerStateWifiRadioPowerState__fini(&msg->wifi_radio_power_state);
  // locomotion_charge_percentage
  // locomotion_charge_percentage_is_set
  // locomotion_estimated_runtime
  builtin_interfaces__msg__Duration__fini(&msg->locomotion_estimated_runtime);
  // locomotion_estimated_runtime_is_set
}

bool
bosdyn_msgs__msg__PowerState__are_equal(const bosdyn_msgs__msg__PowerState * lhs, const bosdyn_msgs__msg__PowerState * rhs)
{
  if (!lhs || !rhs) {
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
  // motor_power_state
  if (!bosdyn_msgs__msg__PowerStateMotorPowerState__are_equal(
      &(lhs->motor_power_state), &(rhs->motor_power_state)))
  {
    return false;
  }
  // shore_power_state
  if (!bosdyn_msgs__msg__PowerStateShorePowerState__are_equal(
      &(lhs->shore_power_state), &(rhs->shore_power_state)))
  {
    return false;
  }
  // robot_power_state
  if (!bosdyn_msgs__msg__PowerStateRobotPowerState__are_equal(
      &(lhs->robot_power_state), &(rhs->robot_power_state)))
  {
    return false;
  }
  // payload_ports_power_state
  if (!bosdyn_msgs__msg__PowerStatePayloadPortsPowerState__are_equal(
      &(lhs->payload_ports_power_state), &(rhs->payload_ports_power_state)))
  {
    return false;
  }
  // wifi_radio_power_state
  if (!bosdyn_msgs__msg__PowerStateWifiRadioPowerState__are_equal(
      &(lhs->wifi_radio_power_state), &(rhs->wifi_radio_power_state)))
  {
    return false;
  }
  // locomotion_charge_percentage
  if (lhs->locomotion_charge_percentage != rhs->locomotion_charge_percentage) {
    return false;
  }
  // locomotion_charge_percentage_is_set
  if (lhs->locomotion_charge_percentage_is_set != rhs->locomotion_charge_percentage_is_set) {
    return false;
  }
  // locomotion_estimated_runtime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->locomotion_estimated_runtime), &(rhs->locomotion_estimated_runtime)))
  {
    return false;
  }
  // locomotion_estimated_runtime_is_set
  if (lhs->locomotion_estimated_runtime_is_set != rhs->locomotion_estimated_runtime_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PowerState__copy(
  const bosdyn_msgs__msg__PowerState * input,
  bosdyn_msgs__msg__PowerState * output)
{
  if (!input || !output) {
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
  // motor_power_state
  if (!bosdyn_msgs__msg__PowerStateMotorPowerState__copy(
      &(input->motor_power_state), &(output->motor_power_state)))
  {
    return false;
  }
  // shore_power_state
  if (!bosdyn_msgs__msg__PowerStateShorePowerState__copy(
      &(input->shore_power_state), &(output->shore_power_state)))
  {
    return false;
  }
  // robot_power_state
  if (!bosdyn_msgs__msg__PowerStateRobotPowerState__copy(
      &(input->robot_power_state), &(output->robot_power_state)))
  {
    return false;
  }
  // payload_ports_power_state
  if (!bosdyn_msgs__msg__PowerStatePayloadPortsPowerState__copy(
      &(input->payload_ports_power_state), &(output->payload_ports_power_state)))
  {
    return false;
  }
  // wifi_radio_power_state
  if (!bosdyn_msgs__msg__PowerStateWifiRadioPowerState__copy(
      &(input->wifi_radio_power_state), &(output->wifi_radio_power_state)))
  {
    return false;
  }
  // locomotion_charge_percentage
  output->locomotion_charge_percentage = input->locomotion_charge_percentage;
  // locomotion_charge_percentage_is_set
  output->locomotion_charge_percentage_is_set = input->locomotion_charge_percentage_is_set;
  // locomotion_estimated_runtime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->locomotion_estimated_runtime), &(output->locomotion_estimated_runtime)))
  {
    return false;
  }
  // locomotion_estimated_runtime_is_set
  output->locomotion_estimated_runtime_is_set = input->locomotion_estimated_runtime_is_set;
  return true;
}

bosdyn_msgs__msg__PowerState *
bosdyn_msgs__msg__PowerState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PowerState * msg = (bosdyn_msgs__msg__PowerState *)allocator.allocate(sizeof(bosdyn_msgs__msg__PowerState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PowerState));
  bool success = bosdyn_msgs__msg__PowerState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PowerState__destroy(bosdyn_msgs__msg__PowerState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PowerState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PowerState__Sequence__init(bosdyn_msgs__msg__PowerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PowerState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PowerState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PowerState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PowerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PowerState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PowerState__Sequence__fini(bosdyn_msgs__msg__PowerState__Sequence * array)
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
      bosdyn_msgs__msg__PowerState__fini(&array->data[i]);
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

bosdyn_msgs__msg__PowerState__Sequence *
bosdyn_msgs__msg__PowerState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PowerState__Sequence * array = (bosdyn_msgs__msg__PowerState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PowerState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PowerState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PowerState__Sequence__destroy(bosdyn_msgs__msg__PowerState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PowerState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PowerState__Sequence__are_equal(const bosdyn_msgs__msg__PowerState__Sequence * lhs, const bosdyn_msgs__msg__PowerState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PowerState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PowerState__Sequence__copy(
  const bosdyn_msgs__msg__PowerState__Sequence * input,
  bosdyn_msgs__msg__PowerState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PowerState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PowerState * data =
      (bosdyn_msgs__msg__PowerState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PowerState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PowerState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PowerState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
