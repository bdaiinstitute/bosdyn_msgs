// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/AcquisitionRequestList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/acquisition_request_list__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/acquisition_request_list__functions.h"
#include "bosdyn_msgs/msg/detail/acquisition_request_list__struct.h"


// Include directives for member types
// Member `image_captures`
#include "bosdyn_msgs/msg/image_source_capture.h"
// Member `image_captures`
#include "bosdyn_msgs/msg/detail/image_source_capture__rosidl_typesupport_introspection_c.h"
// Member `data_captures`
#include "bosdyn_msgs/msg/data_capture.h"
// Member `data_captures`
#include "bosdyn_msgs/msg/detail/data_capture__rosidl_typesupport_introspection_c.h"
// Member `network_compute_captures`
#include "bosdyn_msgs/msg/network_compute_capture.h"
// Member `network_compute_captures`
#include "bosdyn_msgs/msg/detail/network_compute_capture__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__AcquisitionRequestList__init(message_memory);
}

void bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__AcquisitionRequestList__fini(message_memory);
}

size_t bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__size_function__AcquisitionRequestList__image_captures(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ImageSourceCapture__Sequence * member =
    (const bosdyn_msgs__msg__ImageSourceCapture__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionRequestList__image_captures(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ImageSourceCapture__Sequence * member =
    (const bosdyn_msgs__msg__ImageSourceCapture__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_function__AcquisitionRequestList__image_captures(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ImageSourceCapture__Sequence * member =
    (bosdyn_msgs__msg__ImageSourceCapture__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__fetch_function__AcquisitionRequestList__image_captures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ImageSourceCapture * item =
    ((const bosdyn_msgs__msg__ImageSourceCapture *)
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionRequestList__image_captures(untyped_member, index));
  bosdyn_msgs__msg__ImageSourceCapture * value =
    (bosdyn_msgs__msg__ImageSourceCapture *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__assign_function__AcquisitionRequestList__image_captures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ImageSourceCapture * item =
    ((bosdyn_msgs__msg__ImageSourceCapture *)
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_function__AcquisitionRequestList__image_captures(untyped_member, index));
  const bosdyn_msgs__msg__ImageSourceCapture * value =
    (const bosdyn_msgs__msg__ImageSourceCapture *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__resize_function__AcquisitionRequestList__image_captures(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ImageSourceCapture__Sequence * member =
    (bosdyn_msgs__msg__ImageSourceCapture__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ImageSourceCapture__Sequence__fini(member);
  return bosdyn_msgs__msg__ImageSourceCapture__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__size_function__AcquisitionRequestList__data_captures(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__DataCapture__Sequence * member =
    (const bosdyn_msgs__msg__DataCapture__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionRequestList__data_captures(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__DataCapture__Sequence * member =
    (const bosdyn_msgs__msg__DataCapture__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_function__AcquisitionRequestList__data_captures(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__DataCapture__Sequence * member =
    (bosdyn_msgs__msg__DataCapture__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__fetch_function__AcquisitionRequestList__data_captures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__DataCapture * item =
    ((const bosdyn_msgs__msg__DataCapture *)
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionRequestList__data_captures(untyped_member, index));
  bosdyn_msgs__msg__DataCapture * value =
    (bosdyn_msgs__msg__DataCapture *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__assign_function__AcquisitionRequestList__data_captures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__DataCapture * item =
    ((bosdyn_msgs__msg__DataCapture *)
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_function__AcquisitionRequestList__data_captures(untyped_member, index));
  const bosdyn_msgs__msg__DataCapture * value =
    (const bosdyn_msgs__msg__DataCapture *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__resize_function__AcquisitionRequestList__data_captures(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__DataCapture__Sequence * member =
    (bosdyn_msgs__msg__DataCapture__Sequence *)(untyped_member);
  bosdyn_msgs__msg__DataCapture__Sequence__fini(member);
  return bosdyn_msgs__msg__DataCapture__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__size_function__AcquisitionRequestList__network_compute_captures(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__NetworkComputeCapture__Sequence * member =
    (const bosdyn_msgs__msg__NetworkComputeCapture__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionRequestList__network_compute_captures(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__NetworkComputeCapture__Sequence * member =
    (const bosdyn_msgs__msg__NetworkComputeCapture__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_function__AcquisitionRequestList__network_compute_captures(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__NetworkComputeCapture__Sequence * member =
    (bosdyn_msgs__msg__NetworkComputeCapture__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__fetch_function__AcquisitionRequestList__network_compute_captures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__NetworkComputeCapture * item =
    ((const bosdyn_msgs__msg__NetworkComputeCapture *)
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionRequestList__network_compute_captures(untyped_member, index));
  bosdyn_msgs__msg__NetworkComputeCapture * value =
    (bosdyn_msgs__msg__NetworkComputeCapture *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__assign_function__AcquisitionRequestList__network_compute_captures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__NetworkComputeCapture * item =
    ((bosdyn_msgs__msg__NetworkComputeCapture *)
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_function__AcquisitionRequestList__network_compute_captures(untyped_member, index));
  const bosdyn_msgs__msg__NetworkComputeCapture * value =
    (const bosdyn_msgs__msg__NetworkComputeCapture *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__resize_function__AcquisitionRequestList__network_compute_captures(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__NetworkComputeCapture__Sequence * member =
    (bosdyn_msgs__msg__NetworkComputeCapture__Sequence *)(untyped_member);
  bosdyn_msgs__msg__NetworkComputeCapture__Sequence__fini(member);
  return bosdyn_msgs__msg__NetworkComputeCapture__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_message_member_array[3] = {
  {
    "image_captures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AcquisitionRequestList, image_captures),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__size_function__AcquisitionRequestList__image_captures,  // size() function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionRequestList__image_captures,  // get_const(index) function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_function__AcquisitionRequestList__image_captures,  // get(index) function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__fetch_function__AcquisitionRequestList__image_captures,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__assign_function__AcquisitionRequestList__image_captures,  // assign(index, value) function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__resize_function__AcquisitionRequestList__image_captures  // resize(index) function pointer
  },
  {
    "data_captures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AcquisitionRequestList, data_captures),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__size_function__AcquisitionRequestList__data_captures,  // size() function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionRequestList__data_captures,  // get_const(index) function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_function__AcquisitionRequestList__data_captures,  // get(index) function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__fetch_function__AcquisitionRequestList__data_captures,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__assign_function__AcquisitionRequestList__data_captures,  // assign(index, value) function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__resize_function__AcquisitionRequestList__data_captures  // resize(index) function pointer
  },
  {
    "network_compute_captures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AcquisitionRequestList, network_compute_captures),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__size_function__AcquisitionRequestList__network_compute_captures,  // size() function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionRequestList__network_compute_captures,  // get_const(index) function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__get_function__AcquisitionRequestList__network_compute_captures,  // get(index) function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__fetch_function__AcquisitionRequestList__network_compute_captures,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__assign_function__AcquisitionRequestList__network_compute_captures,  // assign(index, value) function pointer
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__resize_function__AcquisitionRequestList__network_compute_captures  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "AcquisitionRequestList",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs__msg__AcquisitionRequestList),
  bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_message_member_array,  // message members
  bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AcquisitionRequestList)() {
  bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageSourceCapture)();
  bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DataCapture)();
  bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NetworkComputeCapture)();
  if (!bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__AcquisitionRequestList__rosidl_typesupport_introspection_c__AcquisitionRequestList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
