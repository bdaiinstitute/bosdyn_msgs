// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/MatrixInt32.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/matrix_int32__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/matrix_int32__functions.h"
#include "bosdyn_msgs/msg/detail/matrix_int32__struct.h"


// Include directives for member types
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__MatrixInt32_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__MatrixInt32__init(message_memory);
}

void bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__MatrixInt32_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__MatrixInt32__fini(message_memory);
}

size_t bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__size_function__MatrixInt32__values(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__get_const_function__MatrixInt32__values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__get_function__MatrixInt32__values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__fetch_function__MatrixInt32__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__get_const_function__MatrixInt32__values(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__assign_function__MatrixInt32__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__get_function__MatrixInt32__values(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__resize_function__MatrixInt32__values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__MatrixInt32_message_member_array[3] = {
  {
    "rows",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__MatrixInt32, rows),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cols",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__MatrixInt32, cols),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__MatrixInt32, values),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__size_function__MatrixInt32__values,  // size() function pointer
    bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__get_const_function__MatrixInt32__values,  // get_const(index) function pointer
    bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__get_function__MatrixInt32__values,  // get(index) function pointer
    bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__fetch_function__MatrixInt32__values,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__assign_function__MatrixInt32__values,  // assign(index, value) function pointer
    bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__resize_function__MatrixInt32__values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__MatrixInt32_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "MatrixInt32",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs__msg__MatrixInt32),
  bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__MatrixInt32_message_member_array,  // message members
  bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__MatrixInt32_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__MatrixInt32_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__MatrixInt32_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__MatrixInt32_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, MatrixInt32)() {
  if (!bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__MatrixInt32_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__MatrixInt32_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__MatrixInt32__rosidl_typesupport_introspection_c__MatrixInt32_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
