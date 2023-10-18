// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/WorldObject.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/world_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `acquisition_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__functions.h"
// Member `object_lifetime`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `drawable_properties`
#include "bosdyn_msgs/msg/detail/drawable_properties__functions.h"
// Member `apriltag_properties`
#include "bosdyn_msgs/msg/detail/april_tag_properties__functions.h"
// Member `nogo_region_properties`
#include "bosdyn_msgs/msg/detail/no_go_region_properties__functions.h"
// Member `image_properties`
#include "bosdyn_msgs/msg/detail/image_properties__functions.h"
// Member `dock_properties`
#include "bosdyn_msgs/msg/detail/dock_properties__functions.h"
// Member `ray_properties`
#include "bosdyn_msgs/msg/detail/ray_properties__functions.h"
// Member `bounding_box_properties`
#include "bosdyn_msgs/msg/detail/bounding_box_properties__functions.h"
// Member `staircase_properties`
#include "bosdyn_msgs/msg/detail/staircase_properties__functions.h"

bool
bosdyn_msgs__msg__WorldObject__init(bosdyn_msgs__msg__WorldObject * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
    return false;
  }
  // acquisition_time
  if (!builtin_interfaces__msg__Time__init(&msg->acquisition_time)) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
    return false;
  }
  // acquisition_time_is_set
  // transforms_snapshot
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__init(&msg->transforms_snapshot)) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
    return false;
  }
  // transforms_snapshot_is_set
  // object_lifetime
  if (!builtin_interfaces__msg__Duration__init(&msg->object_lifetime)) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
    return false;
  }
  // object_lifetime_is_set
  // drawable_properties
  if (!bosdyn_msgs__msg__DrawableProperties__Sequence__init(&msg->drawable_properties, 0)) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
    return false;
  }
  // apriltag_properties
  if (!bosdyn_msgs__msg__AprilTagProperties__init(&msg->apriltag_properties)) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
    return false;
  }
  // apriltag_properties_is_set
  // nogo_region_properties
  if (!bosdyn_msgs__msg__NoGoRegionProperties__init(&msg->nogo_region_properties)) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
    return false;
  }
  // nogo_region_properties_is_set
  // image_properties
  if (!bosdyn_msgs__msg__ImageProperties__init(&msg->image_properties)) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
    return false;
  }
  // image_properties_is_set
  // dock_properties
  if (!bosdyn_msgs__msg__DockProperties__init(&msg->dock_properties)) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
    return false;
  }
  // dock_properties_is_set
  // ray_properties
  if (!bosdyn_msgs__msg__RayProperties__init(&msg->ray_properties)) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
    return false;
  }
  // ray_properties_is_set
  // bounding_box_properties
  if (!bosdyn_msgs__msg__BoundingBoxProperties__init(&msg->bounding_box_properties)) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
    return false;
  }
  // bounding_box_properties_is_set
  // staircase_properties
  if (!bosdyn_msgs__msg__StaircaseProperties__init(&msg->staircase_properties)) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
    return false;
  }
  // staircase_properties_is_set
  return true;
}

void
bosdyn_msgs__msg__WorldObject__fini(bosdyn_msgs__msg__WorldObject * msg)
{
  if (!msg) {
    return;
  }
  // id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // acquisition_time
  builtin_interfaces__msg__Time__fini(&msg->acquisition_time);
  // acquisition_time_is_set
  // transforms_snapshot
  bosdyn_msgs__msg__FrameTreeSnapshot__fini(&msg->transforms_snapshot);
  // transforms_snapshot_is_set
  // object_lifetime
  builtin_interfaces__msg__Duration__fini(&msg->object_lifetime);
  // object_lifetime_is_set
  // drawable_properties
  bosdyn_msgs__msg__DrawableProperties__Sequence__fini(&msg->drawable_properties);
  // apriltag_properties
  bosdyn_msgs__msg__AprilTagProperties__fini(&msg->apriltag_properties);
  // apriltag_properties_is_set
  // nogo_region_properties
  bosdyn_msgs__msg__NoGoRegionProperties__fini(&msg->nogo_region_properties);
  // nogo_region_properties_is_set
  // image_properties
  bosdyn_msgs__msg__ImageProperties__fini(&msg->image_properties);
  // image_properties_is_set
  // dock_properties
  bosdyn_msgs__msg__DockProperties__fini(&msg->dock_properties);
  // dock_properties_is_set
  // ray_properties
  bosdyn_msgs__msg__RayProperties__fini(&msg->ray_properties);
  // ray_properties_is_set
  // bounding_box_properties
  bosdyn_msgs__msg__BoundingBoxProperties__fini(&msg->bounding_box_properties);
  // bounding_box_properties_is_set
  // staircase_properties
  bosdyn_msgs__msg__StaircaseProperties__fini(&msg->staircase_properties);
  // staircase_properties_is_set
}

bool
bosdyn_msgs__msg__WorldObject__are_equal(const bosdyn_msgs__msg__WorldObject * lhs, const bosdyn_msgs__msg__WorldObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
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
  // object_lifetime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->object_lifetime), &(rhs->object_lifetime)))
  {
    return false;
  }
  // object_lifetime_is_set
  if (lhs->object_lifetime_is_set != rhs->object_lifetime_is_set) {
    return false;
  }
  // drawable_properties
  if (!bosdyn_msgs__msg__DrawableProperties__Sequence__are_equal(
      &(lhs->drawable_properties), &(rhs->drawable_properties)))
  {
    return false;
  }
  // apriltag_properties
  if (!bosdyn_msgs__msg__AprilTagProperties__are_equal(
      &(lhs->apriltag_properties), &(rhs->apriltag_properties)))
  {
    return false;
  }
  // apriltag_properties_is_set
  if (lhs->apriltag_properties_is_set != rhs->apriltag_properties_is_set) {
    return false;
  }
  // nogo_region_properties
  if (!bosdyn_msgs__msg__NoGoRegionProperties__are_equal(
      &(lhs->nogo_region_properties), &(rhs->nogo_region_properties)))
  {
    return false;
  }
  // nogo_region_properties_is_set
  if (lhs->nogo_region_properties_is_set != rhs->nogo_region_properties_is_set) {
    return false;
  }
  // image_properties
  if (!bosdyn_msgs__msg__ImageProperties__are_equal(
      &(lhs->image_properties), &(rhs->image_properties)))
  {
    return false;
  }
  // image_properties_is_set
  if (lhs->image_properties_is_set != rhs->image_properties_is_set) {
    return false;
  }
  // dock_properties
  if (!bosdyn_msgs__msg__DockProperties__are_equal(
      &(lhs->dock_properties), &(rhs->dock_properties)))
  {
    return false;
  }
  // dock_properties_is_set
  if (lhs->dock_properties_is_set != rhs->dock_properties_is_set) {
    return false;
  }
  // ray_properties
  if (!bosdyn_msgs__msg__RayProperties__are_equal(
      &(lhs->ray_properties), &(rhs->ray_properties)))
  {
    return false;
  }
  // ray_properties_is_set
  if (lhs->ray_properties_is_set != rhs->ray_properties_is_set) {
    return false;
  }
  // bounding_box_properties
  if (!bosdyn_msgs__msg__BoundingBoxProperties__are_equal(
      &(lhs->bounding_box_properties), &(rhs->bounding_box_properties)))
  {
    return false;
  }
  // bounding_box_properties_is_set
  if (lhs->bounding_box_properties_is_set != rhs->bounding_box_properties_is_set) {
    return false;
  }
  // staircase_properties
  if (!bosdyn_msgs__msg__StaircaseProperties__are_equal(
      &(lhs->staircase_properties), &(rhs->staircase_properties)))
  {
    return false;
  }
  // staircase_properties_is_set
  if (lhs->staircase_properties_is_set != rhs->staircase_properties_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__WorldObject__copy(
  const bosdyn_msgs__msg__WorldObject * input,
  bosdyn_msgs__msg__WorldObject * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
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
  // object_lifetime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->object_lifetime), &(output->object_lifetime)))
  {
    return false;
  }
  // object_lifetime_is_set
  output->object_lifetime_is_set = input->object_lifetime_is_set;
  // drawable_properties
  if (!bosdyn_msgs__msg__DrawableProperties__Sequence__copy(
      &(input->drawable_properties), &(output->drawable_properties)))
  {
    return false;
  }
  // apriltag_properties
  if (!bosdyn_msgs__msg__AprilTagProperties__copy(
      &(input->apriltag_properties), &(output->apriltag_properties)))
  {
    return false;
  }
  // apriltag_properties_is_set
  output->apriltag_properties_is_set = input->apriltag_properties_is_set;
  // nogo_region_properties
  if (!bosdyn_msgs__msg__NoGoRegionProperties__copy(
      &(input->nogo_region_properties), &(output->nogo_region_properties)))
  {
    return false;
  }
  // nogo_region_properties_is_set
  output->nogo_region_properties_is_set = input->nogo_region_properties_is_set;
  // image_properties
  if (!bosdyn_msgs__msg__ImageProperties__copy(
      &(input->image_properties), &(output->image_properties)))
  {
    return false;
  }
  // image_properties_is_set
  output->image_properties_is_set = input->image_properties_is_set;
  // dock_properties
  if (!bosdyn_msgs__msg__DockProperties__copy(
      &(input->dock_properties), &(output->dock_properties)))
  {
    return false;
  }
  // dock_properties_is_set
  output->dock_properties_is_set = input->dock_properties_is_set;
  // ray_properties
  if (!bosdyn_msgs__msg__RayProperties__copy(
      &(input->ray_properties), &(output->ray_properties)))
  {
    return false;
  }
  // ray_properties_is_set
  output->ray_properties_is_set = input->ray_properties_is_set;
  // bounding_box_properties
  if (!bosdyn_msgs__msg__BoundingBoxProperties__copy(
      &(input->bounding_box_properties), &(output->bounding_box_properties)))
  {
    return false;
  }
  // bounding_box_properties_is_set
  output->bounding_box_properties_is_set = input->bounding_box_properties_is_set;
  // staircase_properties
  if (!bosdyn_msgs__msg__StaircaseProperties__copy(
      &(input->staircase_properties), &(output->staircase_properties)))
  {
    return false;
  }
  // staircase_properties_is_set
  output->staircase_properties_is_set = input->staircase_properties_is_set;
  return true;
}

bosdyn_msgs__msg__WorldObject *
bosdyn_msgs__msg__WorldObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WorldObject * msg = (bosdyn_msgs__msg__WorldObject *)allocator.allocate(sizeof(bosdyn_msgs__msg__WorldObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__WorldObject));
  bool success = bosdyn_msgs__msg__WorldObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__WorldObject__destroy(bosdyn_msgs__msg__WorldObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__WorldObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__WorldObject__Sequence__init(bosdyn_msgs__msg__WorldObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WorldObject * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__WorldObject *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__WorldObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__WorldObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__WorldObject__fini(&data[i - 1]);
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
bosdyn_msgs__msg__WorldObject__Sequence__fini(bosdyn_msgs__msg__WorldObject__Sequence * array)
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
      bosdyn_msgs__msg__WorldObject__fini(&array->data[i]);
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

bosdyn_msgs__msg__WorldObject__Sequence *
bosdyn_msgs__msg__WorldObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WorldObject__Sequence * array = (bosdyn_msgs__msg__WorldObject__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__WorldObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__WorldObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__WorldObject__Sequence__destroy(bosdyn_msgs__msg__WorldObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__WorldObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__WorldObject__Sequence__are_equal(const bosdyn_msgs__msg__WorldObject__Sequence * lhs, const bosdyn_msgs__msg__WorldObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__WorldObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__WorldObject__Sequence__copy(
  const bosdyn_msgs__msg__WorldObject__Sequence * input,
  bosdyn_msgs__msg__WorldObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__WorldObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__WorldObject * data =
      (bosdyn_msgs__msg__WorldObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__WorldObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__WorldObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__WorldObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
