// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/AreaCallbackServiceError.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/area_callback_service_error__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/area_callback_service_error__functions.h"
#include "bosdyn_msgs/msg/detail/area_callback_service_error__struct.h"


// Include directives for member types
// Member `missing_services`
#include "rosidl_runtime_c/string_functions.h"
// Member `faulted_services`
#include "bosdyn_msgs/msg/service_fault.h"
// Member `faulted_services`
#include "bosdyn_msgs/msg/detail/service_fault__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__AreaCallbackServiceError__init(message_memory);
}

void bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__AreaCallbackServiceError__fini(message_memory);
}

size_t bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__size_function__AreaCallbackServiceError__missing_services(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__get_const_function__AreaCallbackServiceError__missing_services(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__get_function__AreaCallbackServiceError__missing_services(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__fetch_function__AreaCallbackServiceError__missing_services(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__get_const_function__AreaCallbackServiceError__missing_services(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__assign_function__AreaCallbackServiceError__missing_services(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__get_function__AreaCallbackServiceError__missing_services(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__resize_function__AreaCallbackServiceError__missing_services(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__size_function__AreaCallbackServiceError__faulted_services(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ServiceFault__Sequence * member =
    (const bosdyn_msgs__msg__ServiceFault__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__get_const_function__AreaCallbackServiceError__faulted_services(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ServiceFault__Sequence * member =
    (const bosdyn_msgs__msg__ServiceFault__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__get_function__AreaCallbackServiceError__faulted_services(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ServiceFault__Sequence * member =
    (bosdyn_msgs__msg__ServiceFault__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__fetch_function__AreaCallbackServiceError__faulted_services(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ServiceFault * item =
    ((const bosdyn_msgs__msg__ServiceFault *)
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__get_const_function__AreaCallbackServiceError__faulted_services(untyped_member, index));
  bosdyn_msgs__msg__ServiceFault * value =
    (bosdyn_msgs__msg__ServiceFault *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__assign_function__AreaCallbackServiceError__faulted_services(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ServiceFault * item =
    ((bosdyn_msgs__msg__ServiceFault *)
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__get_function__AreaCallbackServiceError__faulted_services(untyped_member, index));
  const bosdyn_msgs__msg__ServiceFault * value =
    (const bosdyn_msgs__msg__ServiceFault *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__resize_function__AreaCallbackServiceError__faulted_services(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ServiceFault__Sequence * member =
    (bosdyn_msgs__msg__ServiceFault__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ServiceFault__Sequence__fini(member);
  return bosdyn_msgs__msg__ServiceFault__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_message_member_array[2] = {
  {
    "missing_services",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AreaCallbackServiceError, missing_services),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__size_function__AreaCallbackServiceError__missing_services,  // size() function pointer
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__get_const_function__AreaCallbackServiceError__missing_services,  // get_const(index) function pointer
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__get_function__AreaCallbackServiceError__missing_services,  // get(index) function pointer
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__fetch_function__AreaCallbackServiceError__missing_services,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__assign_function__AreaCallbackServiceError__missing_services,  // assign(index, value) function pointer
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__resize_function__AreaCallbackServiceError__missing_services  // resize(index) function pointer
  },
  {
    "faulted_services",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AreaCallbackServiceError, faulted_services),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__size_function__AreaCallbackServiceError__faulted_services,  // size() function pointer
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__get_const_function__AreaCallbackServiceError__faulted_services,  // get_const(index) function pointer
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__get_function__AreaCallbackServiceError__faulted_services,  // get(index) function pointer
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__fetch_function__AreaCallbackServiceError__faulted_services,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__assign_function__AreaCallbackServiceError__faulted_services,  // assign(index, value) function pointer
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__resize_function__AreaCallbackServiceError__faulted_services  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "AreaCallbackServiceError",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs__msg__AreaCallbackServiceError),
  bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_message_member_array,  // message members
  bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AreaCallbackServiceError)() {
  bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ServiceFault)();
  if (!bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__AreaCallbackServiceError__rosidl_typesupport_introspection_c__AreaCallbackServiceError_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
