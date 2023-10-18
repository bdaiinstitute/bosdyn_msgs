// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ListSoundsResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/list_sounds_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/list_sounds_response__functions.h"
#include "bosdyn_msgs/msg/detail/list_sounds_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `sounds`
#include "bosdyn_msgs/msg/sound.h"
// Member `sounds`
#include "bosdyn_msgs/msg/detail/sound__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ListSoundsResponse__init(message_memory);
}

void bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ListSoundsResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__size_function__ListSoundsResponse__sounds(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Sound__Sequence * member =
    (const bosdyn_msgs__msg__Sound__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__get_const_function__ListSoundsResponse__sounds(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Sound__Sequence * member =
    (const bosdyn_msgs__msg__Sound__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__get_function__ListSoundsResponse__sounds(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Sound__Sequence * member =
    (bosdyn_msgs__msg__Sound__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__fetch_function__ListSoundsResponse__sounds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Sound * item =
    ((const bosdyn_msgs__msg__Sound *)
    bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__get_const_function__ListSoundsResponse__sounds(untyped_member, index));
  bosdyn_msgs__msg__Sound * value =
    (bosdyn_msgs__msg__Sound *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__assign_function__ListSoundsResponse__sounds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Sound * item =
    ((bosdyn_msgs__msg__Sound *)
    bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__get_function__ListSoundsResponse__sounds(untyped_member, index));
  const bosdyn_msgs__msg__Sound * value =
    (const bosdyn_msgs__msg__Sound *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__resize_function__ListSoundsResponse__sounds(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Sound__Sequence * member =
    (bosdyn_msgs__msg__Sound__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Sound__Sequence__fini(member);
  return bosdyn_msgs__msg__Sound__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ListSoundsResponse, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "header_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ListSoundsResponse, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ListSoundsResponse, sounds),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__size_function__ListSoundsResponse__sounds,  // size() function pointer
    bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__get_const_function__ListSoundsResponse__sounds,  // get_const(index) function pointer
    bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__get_function__ListSoundsResponse__sounds,  // get(index) function pointer
    bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__fetch_function__ListSoundsResponse__sounds,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__assign_function__ListSoundsResponse__sounds,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__resize_function__ListSoundsResponse__sounds  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ListSoundsResponse",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs__msg__ListSoundsResponse),
  bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_message_member_array,  // message members
  bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ListSoundsResponse)() {
  bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Sound)();
  if (!bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ListSoundsResponse__rosidl_typesupport_introspection_c__ListSoundsResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
