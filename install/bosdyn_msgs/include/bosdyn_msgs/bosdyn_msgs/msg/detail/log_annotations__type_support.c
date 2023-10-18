// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/LogAnnotations.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/log_annotations__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/log_annotations__functions.h"
#include "bosdyn_msgs/msg/detail/log_annotations__struct.h"


// Include directives for member types
// Member `text_messages`
#include "bosdyn_msgs/msg/log_annotation_text_message.h"
// Member `text_messages`
#include "bosdyn_msgs/msg/detail/log_annotation_text_message__rosidl_typesupport_introspection_c.h"
// Member `operator_messages`
#include "bosdyn_msgs/msg/log_annotation_operator_message.h"
// Member `operator_messages`
#include "bosdyn_msgs/msg/detail/log_annotation_operator_message__rosidl_typesupport_introspection_c.h"
// Member `blob_data`
#include "bosdyn_msgs/msg/log_annotation_log_blob.h"
// Member `blob_data`
#include "bosdyn_msgs/msg/detail/log_annotation_log_blob__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__LogAnnotations__init(message_memory);
}

void bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__LogAnnotations__fini(message_memory);
}

size_t bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__size_function__LogAnnotations__text_messages(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence * member =
    (const bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_const_function__LogAnnotations__text_messages(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence * member =
    (const bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_function__LogAnnotations__text_messages(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence * member =
    (bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__fetch_function__LogAnnotations__text_messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__LogAnnotationTextMessage * item =
    ((const bosdyn_msgs__msg__LogAnnotationTextMessage *)
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_const_function__LogAnnotations__text_messages(untyped_member, index));
  bosdyn_msgs__msg__LogAnnotationTextMessage * value =
    (bosdyn_msgs__msg__LogAnnotationTextMessage *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__assign_function__LogAnnotations__text_messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__LogAnnotationTextMessage * item =
    ((bosdyn_msgs__msg__LogAnnotationTextMessage *)
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_function__LogAnnotations__text_messages(untyped_member, index));
  const bosdyn_msgs__msg__LogAnnotationTextMessage * value =
    (const bosdyn_msgs__msg__LogAnnotationTextMessage *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__resize_function__LogAnnotations__text_messages(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence * member =
    (bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence *)(untyped_member);
  bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence__fini(member);
  return bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__size_function__LogAnnotations__operator_messages(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence * member =
    (const bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_const_function__LogAnnotations__operator_messages(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence * member =
    (const bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_function__LogAnnotations__operator_messages(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence * member =
    (bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__fetch_function__LogAnnotations__operator_messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__LogAnnotationOperatorMessage * item =
    ((const bosdyn_msgs__msg__LogAnnotationOperatorMessage *)
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_const_function__LogAnnotations__operator_messages(untyped_member, index));
  bosdyn_msgs__msg__LogAnnotationOperatorMessage * value =
    (bosdyn_msgs__msg__LogAnnotationOperatorMessage *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__assign_function__LogAnnotations__operator_messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__LogAnnotationOperatorMessage * item =
    ((bosdyn_msgs__msg__LogAnnotationOperatorMessage *)
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_function__LogAnnotations__operator_messages(untyped_member, index));
  const bosdyn_msgs__msg__LogAnnotationOperatorMessage * value =
    (const bosdyn_msgs__msg__LogAnnotationOperatorMessage *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__resize_function__LogAnnotations__operator_messages(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence * member =
    (bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence *)(untyped_member);
  bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence__fini(member);
  return bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__size_function__LogAnnotations__blob_data(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence * member =
    (const bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_const_function__LogAnnotations__blob_data(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence * member =
    (const bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_function__LogAnnotations__blob_data(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence * member =
    (bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__fetch_function__LogAnnotations__blob_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__LogAnnotationLogBlob * item =
    ((const bosdyn_msgs__msg__LogAnnotationLogBlob *)
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_const_function__LogAnnotations__blob_data(untyped_member, index));
  bosdyn_msgs__msg__LogAnnotationLogBlob * value =
    (bosdyn_msgs__msg__LogAnnotationLogBlob *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__assign_function__LogAnnotations__blob_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__LogAnnotationLogBlob * item =
    ((bosdyn_msgs__msg__LogAnnotationLogBlob *)
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_function__LogAnnotations__blob_data(untyped_member, index));
  const bosdyn_msgs__msg__LogAnnotationLogBlob * value =
    (const bosdyn_msgs__msg__LogAnnotationLogBlob *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__resize_function__LogAnnotations__blob_data(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence * member =
    (bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence *)(untyped_member);
  bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__fini(member);
  return bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_message_member_array[3] = {
  {
    "text_messages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LogAnnotations, text_messages),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__size_function__LogAnnotations__text_messages,  // size() function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_const_function__LogAnnotations__text_messages,  // get_const(index) function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_function__LogAnnotations__text_messages,  // get(index) function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__fetch_function__LogAnnotations__text_messages,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__assign_function__LogAnnotations__text_messages,  // assign(index, value) function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__resize_function__LogAnnotations__text_messages  // resize(index) function pointer
  },
  {
    "operator_messages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LogAnnotations, operator_messages),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__size_function__LogAnnotations__operator_messages,  // size() function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_const_function__LogAnnotations__operator_messages,  // get_const(index) function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_function__LogAnnotations__operator_messages,  // get(index) function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__fetch_function__LogAnnotations__operator_messages,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__assign_function__LogAnnotations__operator_messages,  // assign(index, value) function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__resize_function__LogAnnotations__operator_messages  // resize(index) function pointer
  },
  {
    "blob_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LogAnnotations, blob_data),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__size_function__LogAnnotations__blob_data,  // size() function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_const_function__LogAnnotations__blob_data,  // get_const(index) function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__get_function__LogAnnotations__blob_data,  // get(index) function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__fetch_function__LogAnnotations__blob_data,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__assign_function__LogAnnotations__blob_data,  // assign(index, value) function pointer
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__resize_function__LogAnnotations__blob_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "LogAnnotations",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs__msg__LogAnnotations),
  bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_message_member_array,  // message members
  bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LogAnnotations)() {
  bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LogAnnotationTextMessage)();
  bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LogAnnotationOperatorMessage)();
  bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LogAnnotationLogBlob)();
  if (!bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__LogAnnotations__rosidl_typesupport_introspection_c__LogAnnotations_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
