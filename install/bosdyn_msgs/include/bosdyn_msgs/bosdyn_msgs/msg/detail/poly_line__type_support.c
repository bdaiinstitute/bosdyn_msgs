// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/PolyLine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/poly_line__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/poly_line__functions.h"
#include "bosdyn_msgs/msg/detail/poly_line__struct.h"


// Include directives for member types
// Member `points`
#include "bosdyn_msgs/msg/vec2.h"
// Member `points`
#include "bosdyn_msgs/msg/detail/vec2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__PolyLine__init(message_memory);
}

void bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__PolyLine__fini(message_memory);
}

size_t bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__size_function__PolyLine__points(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Vec2__Sequence * member =
    (const bosdyn_msgs__msg__Vec2__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__get_const_function__PolyLine__points(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Vec2__Sequence * member =
    (const bosdyn_msgs__msg__Vec2__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__get_function__PolyLine__points(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Vec2__Sequence * member =
    (bosdyn_msgs__msg__Vec2__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__fetch_function__PolyLine__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Vec2 * item =
    ((const bosdyn_msgs__msg__Vec2 *)
    bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__get_const_function__PolyLine__points(untyped_member, index));
  bosdyn_msgs__msg__Vec2 * value =
    (bosdyn_msgs__msg__Vec2 *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__assign_function__PolyLine__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Vec2 * item =
    ((bosdyn_msgs__msg__Vec2 *)
    bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__get_function__PolyLine__points(untyped_member, index));
  const bosdyn_msgs__msg__Vec2 * value =
    (const bosdyn_msgs__msg__Vec2 *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__resize_function__PolyLine__points(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Vec2__Sequence * member =
    (bosdyn_msgs__msg__Vec2__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Vec2__Sequence__fini(member);
  return bosdyn_msgs__msg__Vec2__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_message_member_array[1] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PolyLine, points),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__size_function__PolyLine__points,  // size() function pointer
    bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__get_const_function__PolyLine__points,  // get_const(index) function pointer
    bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__get_function__PolyLine__points,  // get(index) function pointer
    bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__fetch_function__PolyLine__points,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__assign_function__PolyLine__points,  // assign(index, value) function pointer
    bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__resize_function__PolyLine__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "PolyLine",  // message name
  1,  // number of fields
  sizeof(bosdyn_msgs__msg__PolyLine),
  bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_message_member_array,  // message members
  bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PolyLine)() {
  bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Vec2)();
  if (!bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__PolyLine__rosidl_typesupport_introspection_c__PolyLine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
