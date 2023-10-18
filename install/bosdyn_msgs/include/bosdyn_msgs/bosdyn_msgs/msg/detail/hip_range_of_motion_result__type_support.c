// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/HipRangeOfMotionResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/hip_range_of_motion_result__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/hip_range_of_motion_result__functions.h"
#include "bosdyn_msgs/msg/detail/hip_range_of_motion_result__struct.h"


// Include directives for member types
// Member `error`
#include "bosdyn_msgs/msg/hip_range_of_motion_result_error.h"
// Member `error`
#include "bosdyn_msgs/msg/detail/hip_range_of_motion_result_error__rosidl_typesupport_introspection_c.h"
// Member `hx`
// Member `hy`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__HipRangeOfMotionResult__init(message_memory);
}

void bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__HipRangeOfMotionResult__fini(message_memory);
}

size_t bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__size_function__HipRangeOfMotionResult__hx(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__get_const_function__HipRangeOfMotionResult__hx(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__get_function__HipRangeOfMotionResult__hx(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__fetch_function__HipRangeOfMotionResult__hx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__get_const_function__HipRangeOfMotionResult__hx(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__assign_function__HipRangeOfMotionResult__hx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__get_function__HipRangeOfMotionResult__hx(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__resize_function__HipRangeOfMotionResult__hx(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__size_function__HipRangeOfMotionResult__hy(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__get_const_function__HipRangeOfMotionResult__hy(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__get_function__HipRangeOfMotionResult__hy(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__fetch_function__HipRangeOfMotionResult__hy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__get_const_function__HipRangeOfMotionResult__hy(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__assign_function__HipRangeOfMotionResult__hy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__get_function__HipRangeOfMotionResult__hy(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__resize_function__HipRangeOfMotionResult__hy(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_message_member_array[3] = {
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__HipRangeOfMotionResult, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__HipRangeOfMotionResult, hx),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__size_function__HipRangeOfMotionResult__hx,  // size() function pointer
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__get_const_function__HipRangeOfMotionResult__hx,  // get_const(index) function pointer
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__get_function__HipRangeOfMotionResult__hx,  // get(index) function pointer
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__fetch_function__HipRangeOfMotionResult__hx,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__assign_function__HipRangeOfMotionResult__hx,  // assign(index, value) function pointer
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__resize_function__HipRangeOfMotionResult__hx  // resize(index) function pointer
  },
  {
    "hy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__HipRangeOfMotionResult, hy),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__size_function__HipRangeOfMotionResult__hy,  // size() function pointer
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__get_const_function__HipRangeOfMotionResult__hy,  // get_const(index) function pointer
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__get_function__HipRangeOfMotionResult__hy,  // get(index) function pointer
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__fetch_function__HipRangeOfMotionResult__hy,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__assign_function__HipRangeOfMotionResult__hy,  // assign(index, value) function pointer
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__resize_function__HipRangeOfMotionResult__hy  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "HipRangeOfMotionResult",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs__msg__HipRangeOfMotionResult),
  bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_message_member_array,  // message members
  bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, HipRangeOfMotionResult)() {
  bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, HipRangeOfMotionResultError)();
  if (!bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__HipRangeOfMotionResult__rosidl_typesupport_introspection_c__HipRangeOfMotionResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
