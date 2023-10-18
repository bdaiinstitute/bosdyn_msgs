// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/WaypointSnapshot.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/waypoint_snapshot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `version_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `images`
#include "bosdyn_msgs/msg/detail/image_response__functions.h"
// Member `point_cloud`
#include "bosdyn_msgs/msg/detail/point_cloud__functions.h"
// Member `objects`
#include "bosdyn_msgs/msg/detail/world_object__functions.h"
// Member `robot_state`
#include "bosdyn_msgs/msg/detail/robot_state__functions.h"
// Member `robot_local_grids`
#include "bosdyn_msgs/msg/detail/local_grid__functions.h"
// Member `body_tform_remote_point_cloud_sensor`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `payloads`
#include "bosdyn_msgs/msg/detail/payload__functions.h"
// Member `robot_id`
#include "bosdyn_msgs/msg/detail/robot_id__functions.h"
// Member `recording_started_on`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__WaypointSnapshot__init(bosdyn_msgs__msg__WaypointSnapshot * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    bosdyn_msgs__msg__WaypointSnapshot__fini(msg);
    return false;
  }
  // images
  if (!bosdyn_msgs__msg__ImageResponse__Sequence__init(&msg->images, 0)) {
    bosdyn_msgs__msg__WaypointSnapshot__fini(msg);
    return false;
  }
  // point_cloud
  if (!bosdyn_msgs__msg__PointCloud__init(&msg->point_cloud)) {
    bosdyn_msgs__msg__WaypointSnapshot__fini(msg);
    return false;
  }
  // point_cloud_is_set
  // objects
  if (!bosdyn_msgs__msg__WorldObject__Sequence__init(&msg->objects, 0)) {
    bosdyn_msgs__msg__WaypointSnapshot__fini(msg);
    return false;
  }
  // robot_state
  if (!bosdyn_msgs__msg__RobotState__init(&msg->robot_state)) {
    bosdyn_msgs__msg__WaypointSnapshot__fini(msg);
    return false;
  }
  // robot_state_is_set
  // robot_local_grids
  if (!bosdyn_msgs__msg__LocalGrid__Sequence__init(&msg->robot_local_grids, 0)) {
    bosdyn_msgs__msg__WaypointSnapshot__fini(msg);
    return false;
  }
  // is_point_cloud_processed
  // version_id
  if (!rosidl_runtime_c__String__init(&msg->version_id)) {
    bosdyn_msgs__msg__WaypointSnapshot__fini(msg);
    return false;
  }
  // has_remote_point_cloud_sensor
  // body_tform_remote_point_cloud_sensor
  if (!geometry_msgs__msg__Pose__init(&msg->body_tform_remote_point_cloud_sensor)) {
    bosdyn_msgs__msg__WaypointSnapshot__fini(msg);
    return false;
  }
  // body_tform_remote_point_cloud_sensor_is_set
  // payloads
  if (!bosdyn_msgs__msg__Payload__Sequence__init(&msg->payloads, 0)) {
    bosdyn_msgs__msg__WaypointSnapshot__fini(msg);
    return false;
  }
  // robot_id
  if (!bosdyn_msgs__msg__RobotId__init(&msg->robot_id)) {
    bosdyn_msgs__msg__WaypointSnapshot__fini(msg);
    return false;
  }
  // robot_id_is_set
  // recording_started_on
  if (!builtin_interfaces__msg__Time__init(&msg->recording_started_on)) {
    bosdyn_msgs__msg__WaypointSnapshot__fini(msg);
    return false;
  }
  // recording_started_on_is_set
  return true;
}

void
bosdyn_msgs__msg__WaypointSnapshot__fini(bosdyn_msgs__msg__WaypointSnapshot * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // images
  bosdyn_msgs__msg__ImageResponse__Sequence__fini(&msg->images);
  // point_cloud
  bosdyn_msgs__msg__PointCloud__fini(&msg->point_cloud);
  // point_cloud_is_set
  // objects
  bosdyn_msgs__msg__WorldObject__Sequence__fini(&msg->objects);
  // robot_state
  bosdyn_msgs__msg__RobotState__fini(&msg->robot_state);
  // robot_state_is_set
  // robot_local_grids
  bosdyn_msgs__msg__LocalGrid__Sequence__fini(&msg->robot_local_grids);
  // is_point_cloud_processed
  // version_id
  rosidl_runtime_c__String__fini(&msg->version_id);
  // has_remote_point_cloud_sensor
  // body_tform_remote_point_cloud_sensor
  geometry_msgs__msg__Pose__fini(&msg->body_tform_remote_point_cloud_sensor);
  // body_tform_remote_point_cloud_sensor_is_set
  // payloads
  bosdyn_msgs__msg__Payload__Sequence__fini(&msg->payloads);
  // robot_id
  bosdyn_msgs__msg__RobotId__fini(&msg->robot_id);
  // robot_id_is_set
  // recording_started_on
  builtin_interfaces__msg__Time__fini(&msg->recording_started_on);
  // recording_started_on_is_set
}

bool
bosdyn_msgs__msg__WaypointSnapshot__are_equal(const bosdyn_msgs__msg__WaypointSnapshot * lhs, const bosdyn_msgs__msg__WaypointSnapshot * rhs)
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
  // images
  if (!bosdyn_msgs__msg__ImageResponse__Sequence__are_equal(
      &(lhs->images), &(rhs->images)))
  {
    return false;
  }
  // point_cloud
  if (!bosdyn_msgs__msg__PointCloud__are_equal(
      &(lhs->point_cloud), &(rhs->point_cloud)))
  {
    return false;
  }
  // point_cloud_is_set
  if (lhs->point_cloud_is_set != rhs->point_cloud_is_set) {
    return false;
  }
  // objects
  if (!bosdyn_msgs__msg__WorldObject__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  // robot_state
  if (!bosdyn_msgs__msg__RobotState__are_equal(
      &(lhs->robot_state), &(rhs->robot_state)))
  {
    return false;
  }
  // robot_state_is_set
  if (lhs->robot_state_is_set != rhs->robot_state_is_set) {
    return false;
  }
  // robot_local_grids
  if (!bosdyn_msgs__msg__LocalGrid__Sequence__are_equal(
      &(lhs->robot_local_grids), &(rhs->robot_local_grids)))
  {
    return false;
  }
  // is_point_cloud_processed
  if (lhs->is_point_cloud_processed != rhs->is_point_cloud_processed) {
    return false;
  }
  // version_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version_id), &(rhs->version_id)))
  {
    return false;
  }
  // has_remote_point_cloud_sensor
  if (lhs->has_remote_point_cloud_sensor != rhs->has_remote_point_cloud_sensor) {
    return false;
  }
  // body_tform_remote_point_cloud_sensor
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->body_tform_remote_point_cloud_sensor), &(rhs->body_tform_remote_point_cloud_sensor)))
  {
    return false;
  }
  // body_tform_remote_point_cloud_sensor_is_set
  if (lhs->body_tform_remote_point_cloud_sensor_is_set != rhs->body_tform_remote_point_cloud_sensor_is_set) {
    return false;
  }
  // payloads
  if (!bosdyn_msgs__msg__Payload__Sequence__are_equal(
      &(lhs->payloads), &(rhs->payloads)))
  {
    return false;
  }
  // robot_id
  if (!bosdyn_msgs__msg__RobotId__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  // robot_id_is_set
  if (lhs->robot_id_is_set != rhs->robot_id_is_set) {
    return false;
  }
  // recording_started_on
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->recording_started_on), &(rhs->recording_started_on)))
  {
    return false;
  }
  // recording_started_on_is_set
  if (lhs->recording_started_on_is_set != rhs->recording_started_on_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__WaypointSnapshot__copy(
  const bosdyn_msgs__msg__WaypointSnapshot * input,
  bosdyn_msgs__msg__WaypointSnapshot * output)
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
  // images
  if (!bosdyn_msgs__msg__ImageResponse__Sequence__copy(
      &(input->images), &(output->images)))
  {
    return false;
  }
  // point_cloud
  if (!bosdyn_msgs__msg__PointCloud__copy(
      &(input->point_cloud), &(output->point_cloud)))
  {
    return false;
  }
  // point_cloud_is_set
  output->point_cloud_is_set = input->point_cloud_is_set;
  // objects
  if (!bosdyn_msgs__msg__WorldObject__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  // robot_state
  if (!bosdyn_msgs__msg__RobotState__copy(
      &(input->robot_state), &(output->robot_state)))
  {
    return false;
  }
  // robot_state_is_set
  output->robot_state_is_set = input->robot_state_is_set;
  // robot_local_grids
  if (!bosdyn_msgs__msg__LocalGrid__Sequence__copy(
      &(input->robot_local_grids), &(output->robot_local_grids)))
  {
    return false;
  }
  // is_point_cloud_processed
  output->is_point_cloud_processed = input->is_point_cloud_processed;
  // version_id
  if (!rosidl_runtime_c__String__copy(
      &(input->version_id), &(output->version_id)))
  {
    return false;
  }
  // has_remote_point_cloud_sensor
  output->has_remote_point_cloud_sensor = input->has_remote_point_cloud_sensor;
  // body_tform_remote_point_cloud_sensor
  if (!geometry_msgs__msg__Pose__copy(
      &(input->body_tform_remote_point_cloud_sensor), &(output->body_tform_remote_point_cloud_sensor)))
  {
    return false;
  }
  // body_tform_remote_point_cloud_sensor_is_set
  output->body_tform_remote_point_cloud_sensor_is_set = input->body_tform_remote_point_cloud_sensor_is_set;
  // payloads
  if (!bosdyn_msgs__msg__Payload__Sequence__copy(
      &(input->payloads), &(output->payloads)))
  {
    return false;
  }
  // robot_id
  if (!bosdyn_msgs__msg__RobotId__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // robot_id_is_set
  output->robot_id_is_set = input->robot_id_is_set;
  // recording_started_on
  if (!builtin_interfaces__msg__Time__copy(
      &(input->recording_started_on), &(output->recording_started_on)))
  {
    return false;
  }
  // recording_started_on_is_set
  output->recording_started_on_is_set = input->recording_started_on_is_set;
  return true;
}

bosdyn_msgs__msg__WaypointSnapshot *
bosdyn_msgs__msg__WaypointSnapshot__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WaypointSnapshot * msg = (bosdyn_msgs__msg__WaypointSnapshot *)allocator.allocate(sizeof(bosdyn_msgs__msg__WaypointSnapshot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__WaypointSnapshot));
  bool success = bosdyn_msgs__msg__WaypointSnapshot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__WaypointSnapshot__destroy(bosdyn_msgs__msg__WaypointSnapshot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__WaypointSnapshot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__WaypointSnapshot__Sequence__init(bosdyn_msgs__msg__WaypointSnapshot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WaypointSnapshot * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__WaypointSnapshot *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__WaypointSnapshot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__WaypointSnapshot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__WaypointSnapshot__fini(&data[i - 1]);
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
bosdyn_msgs__msg__WaypointSnapshot__Sequence__fini(bosdyn_msgs__msg__WaypointSnapshot__Sequence * array)
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
      bosdyn_msgs__msg__WaypointSnapshot__fini(&array->data[i]);
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

bosdyn_msgs__msg__WaypointSnapshot__Sequence *
bosdyn_msgs__msg__WaypointSnapshot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WaypointSnapshot__Sequence * array = (bosdyn_msgs__msg__WaypointSnapshot__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__WaypointSnapshot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__WaypointSnapshot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__WaypointSnapshot__Sequence__destroy(bosdyn_msgs__msg__WaypointSnapshot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__WaypointSnapshot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__WaypointSnapshot__Sequence__are_equal(const bosdyn_msgs__msg__WaypointSnapshot__Sequence * lhs, const bosdyn_msgs__msg__WaypointSnapshot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__WaypointSnapshot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__WaypointSnapshot__Sequence__copy(
  const bosdyn_msgs__msg__WaypointSnapshot__Sequence * input,
  bosdyn_msgs__msg__WaypointSnapshot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__WaypointSnapshot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__WaypointSnapshot * data =
      (bosdyn_msgs__msg__WaypointSnapshot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__WaypointSnapshot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__WaypointSnapshot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__WaypointSnapshot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
