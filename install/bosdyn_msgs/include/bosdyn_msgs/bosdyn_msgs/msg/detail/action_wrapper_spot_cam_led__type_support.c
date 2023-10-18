// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamLed.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_led__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_led__functions.h"
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_led__struct.h"


// Include directives for member types
// Member `brightnesses`
#include "bosdyn_msgs/msg/key_int32_value_float32.h"
// Member `brightnesses`
#include "bosdyn_msgs/msg/detail/key_int32_value_float32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ActionWrapperSpotCamLed__init(message_memory);
}

void bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ActionWrapperSpotCamLed__fini(message_memory);
}

size_t bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__size_function__ActionWrapperSpotCamLed__brightnesses(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyInt32ValueFloat32__Sequence * member =
    (const bosdyn_msgs__msg__KeyInt32ValueFloat32__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__get_const_function__ActionWrapperSpotCamLed__brightnesses(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyInt32ValueFloat32__Sequence * member =
    (const bosdyn_msgs__msg__KeyInt32ValueFloat32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__get_function__ActionWrapperSpotCamLed__brightnesses(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyInt32ValueFloat32__Sequence * member =
    (bosdyn_msgs__msg__KeyInt32ValueFloat32__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__fetch_function__ActionWrapperSpotCamLed__brightnesses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyInt32ValueFloat32 * item =
    ((const bosdyn_msgs__msg__KeyInt32ValueFloat32 *)
    bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__get_const_function__ActionWrapperSpotCamLed__brightnesses(untyped_member, index));
  bosdyn_msgs__msg__KeyInt32ValueFloat32 * value =
    (bosdyn_msgs__msg__KeyInt32ValueFloat32 *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__assign_function__ActionWrapperSpotCamLed__brightnesses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyInt32ValueFloat32 * item =
    ((bosdyn_msgs__msg__KeyInt32ValueFloat32 *)
    bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__get_function__ActionWrapperSpotCamLed__brightnesses(untyped_member, index));
  const bosdyn_msgs__msg__KeyInt32ValueFloat32 * value =
    (const bosdyn_msgs__msg__KeyInt32ValueFloat32 *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__resize_function__ActionWrapperSpotCamLed__brightnesses(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyInt32ValueFloat32__Sequence * member =
    (bosdyn_msgs__msg__KeyInt32ValueFloat32__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyInt32ValueFloat32__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyInt32ValueFloat32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_message_member_array[1] = {
  {
    "brightnesses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapperSpotCamLed, brightnesses),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__size_function__ActionWrapperSpotCamLed__brightnesses,  // size() function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__get_const_function__ActionWrapperSpotCamLed__brightnesses,  // get_const(index) function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__get_function__ActionWrapperSpotCamLed__brightnesses,  // get(index) function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__fetch_function__ActionWrapperSpotCamLed__brightnesses,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__assign_function__ActionWrapperSpotCamLed__brightnesses,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__resize_function__ActionWrapperSpotCamLed__brightnesses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ActionWrapperSpotCamLed",  // message name
  1,  // number of fields
  sizeof(bosdyn_msgs__msg__ActionWrapperSpotCamLed),
  bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_message_member_array,  // message members
  bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionWrapperSpotCamLed)() {
  bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyInt32ValueFloat32)();
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ActionWrapperSpotCamLed__rosidl_typesupport_introspection_c__ActionWrapperSpotCamLed_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
