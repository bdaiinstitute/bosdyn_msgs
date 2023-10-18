// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/DrawablePoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/drawable_points__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/drawable_points__functions.h"
#include "bosdyn_msgs/msg/detail/drawable_points__struct.h"


// Include directives for member types
// Member `points`
#include "geometry_msgs/msg/vector3.h"
// Member `points`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__DrawablePoints__init(message_memory);
}

void bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__DrawablePoints__fini(message_memory);
}

size_t bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__size_function__DrawablePoints__points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__get_const_function__DrawablePoints__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__get_function__DrawablePoints__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__fetch_function__DrawablePoints__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__get_const_function__DrawablePoints__points(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__assign_function__DrawablePoints__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__get_function__DrawablePoints__points(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__resize_function__DrawablePoints__points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_message_member_array[1] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DrawablePoints, points),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__size_function__DrawablePoints__points,  // size() function pointer
    bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__get_const_function__DrawablePoints__points,  // get_const(index) function pointer
    bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__get_function__DrawablePoints__points,  // get(index) function pointer
    bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__fetch_function__DrawablePoints__points,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__assign_function__DrawablePoints__points,  // assign(index, value) function pointer
    bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__resize_function__DrawablePoints__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "DrawablePoints",  // message name
  1,  // number of fields
  sizeof(bosdyn_msgs__msg__DrawablePoints),
  bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_message_member_array,  // message members
  bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DrawablePoints)() {
  bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__DrawablePoints__rosidl_typesupport_introspection_c__DrawablePoints_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
