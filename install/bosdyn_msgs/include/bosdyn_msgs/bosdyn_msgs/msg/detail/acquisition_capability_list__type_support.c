// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/AcquisitionCapabilityList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/acquisition_capability_list__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/acquisition_capability_list__functions.h"
#include "bosdyn_msgs/msg/detail/acquisition_capability_list__struct.h"


// Include directives for member types
// Member `data_sources`
#include "bosdyn_msgs/msg/data_acquisition_capability.h"
// Member `data_sources`
#include "bosdyn_msgs/msg/detail/data_acquisition_capability__rosidl_typesupport_introspection_c.h"
// Member `image_sources`
#include "bosdyn_msgs/msg/image_acquisition_capability.h"
// Member `image_sources`
#include "bosdyn_msgs/msg/detail/image_acquisition_capability__rosidl_typesupport_introspection_c.h"
// Member `network_compute_sources`
#include "bosdyn_msgs/msg/network_compute_capability.h"
// Member `network_compute_sources`
#include "bosdyn_msgs/msg/detail/network_compute_capability__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__AcquisitionCapabilityList__init(message_memory);
}

void bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__AcquisitionCapabilityList__fini(message_memory);
}

size_t bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__size_function__AcquisitionCapabilityList__data_sources(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__DataAcquisitionCapability__Sequence * member =
    (const bosdyn_msgs__msg__DataAcquisitionCapability__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionCapabilityList__data_sources(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__DataAcquisitionCapability__Sequence * member =
    (const bosdyn_msgs__msg__DataAcquisitionCapability__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_function__AcquisitionCapabilityList__data_sources(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__DataAcquisitionCapability__Sequence * member =
    (bosdyn_msgs__msg__DataAcquisitionCapability__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__fetch_function__AcquisitionCapabilityList__data_sources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__DataAcquisitionCapability * item =
    ((const bosdyn_msgs__msg__DataAcquisitionCapability *)
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionCapabilityList__data_sources(untyped_member, index));
  bosdyn_msgs__msg__DataAcquisitionCapability * value =
    (bosdyn_msgs__msg__DataAcquisitionCapability *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__assign_function__AcquisitionCapabilityList__data_sources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__DataAcquisitionCapability * item =
    ((bosdyn_msgs__msg__DataAcquisitionCapability *)
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_function__AcquisitionCapabilityList__data_sources(untyped_member, index));
  const bosdyn_msgs__msg__DataAcquisitionCapability * value =
    (const bosdyn_msgs__msg__DataAcquisitionCapability *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__resize_function__AcquisitionCapabilityList__data_sources(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__DataAcquisitionCapability__Sequence * member =
    (bosdyn_msgs__msg__DataAcquisitionCapability__Sequence *)(untyped_member);
  bosdyn_msgs__msg__DataAcquisitionCapability__Sequence__fini(member);
  return bosdyn_msgs__msg__DataAcquisitionCapability__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__size_function__AcquisitionCapabilityList__image_sources(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ImageAcquisitionCapability__Sequence * member =
    (const bosdyn_msgs__msg__ImageAcquisitionCapability__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionCapabilityList__image_sources(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ImageAcquisitionCapability__Sequence * member =
    (const bosdyn_msgs__msg__ImageAcquisitionCapability__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_function__AcquisitionCapabilityList__image_sources(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ImageAcquisitionCapability__Sequence * member =
    (bosdyn_msgs__msg__ImageAcquisitionCapability__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__fetch_function__AcquisitionCapabilityList__image_sources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ImageAcquisitionCapability * item =
    ((const bosdyn_msgs__msg__ImageAcquisitionCapability *)
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionCapabilityList__image_sources(untyped_member, index));
  bosdyn_msgs__msg__ImageAcquisitionCapability * value =
    (bosdyn_msgs__msg__ImageAcquisitionCapability *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__assign_function__AcquisitionCapabilityList__image_sources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ImageAcquisitionCapability * item =
    ((bosdyn_msgs__msg__ImageAcquisitionCapability *)
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_function__AcquisitionCapabilityList__image_sources(untyped_member, index));
  const bosdyn_msgs__msg__ImageAcquisitionCapability * value =
    (const bosdyn_msgs__msg__ImageAcquisitionCapability *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__resize_function__AcquisitionCapabilityList__image_sources(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ImageAcquisitionCapability__Sequence * member =
    (bosdyn_msgs__msg__ImageAcquisitionCapability__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ImageAcquisitionCapability__Sequence__fini(member);
  return bosdyn_msgs__msg__ImageAcquisitionCapability__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__size_function__AcquisitionCapabilityList__network_compute_sources(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__NetworkComputeCapability__Sequence * member =
    (const bosdyn_msgs__msg__NetworkComputeCapability__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionCapabilityList__network_compute_sources(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__NetworkComputeCapability__Sequence * member =
    (const bosdyn_msgs__msg__NetworkComputeCapability__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_function__AcquisitionCapabilityList__network_compute_sources(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__NetworkComputeCapability__Sequence * member =
    (bosdyn_msgs__msg__NetworkComputeCapability__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__fetch_function__AcquisitionCapabilityList__network_compute_sources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__NetworkComputeCapability * item =
    ((const bosdyn_msgs__msg__NetworkComputeCapability *)
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionCapabilityList__network_compute_sources(untyped_member, index));
  bosdyn_msgs__msg__NetworkComputeCapability * value =
    (bosdyn_msgs__msg__NetworkComputeCapability *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__assign_function__AcquisitionCapabilityList__network_compute_sources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__NetworkComputeCapability * item =
    ((bosdyn_msgs__msg__NetworkComputeCapability *)
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_function__AcquisitionCapabilityList__network_compute_sources(untyped_member, index));
  const bosdyn_msgs__msg__NetworkComputeCapability * value =
    (const bosdyn_msgs__msg__NetworkComputeCapability *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__resize_function__AcquisitionCapabilityList__network_compute_sources(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__NetworkComputeCapability__Sequence * member =
    (bosdyn_msgs__msg__NetworkComputeCapability__Sequence *)(untyped_member);
  bosdyn_msgs__msg__NetworkComputeCapability__Sequence__fini(member);
  return bosdyn_msgs__msg__NetworkComputeCapability__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_message_member_array[3] = {
  {
    "data_sources",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AcquisitionCapabilityList, data_sources),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__size_function__AcquisitionCapabilityList__data_sources,  // size() function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionCapabilityList__data_sources,  // get_const(index) function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_function__AcquisitionCapabilityList__data_sources,  // get(index) function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__fetch_function__AcquisitionCapabilityList__data_sources,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__assign_function__AcquisitionCapabilityList__data_sources,  // assign(index, value) function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__resize_function__AcquisitionCapabilityList__data_sources  // resize(index) function pointer
  },
  {
    "image_sources",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AcquisitionCapabilityList, image_sources),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__size_function__AcquisitionCapabilityList__image_sources,  // size() function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionCapabilityList__image_sources,  // get_const(index) function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_function__AcquisitionCapabilityList__image_sources,  // get(index) function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__fetch_function__AcquisitionCapabilityList__image_sources,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__assign_function__AcquisitionCapabilityList__image_sources,  // assign(index, value) function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__resize_function__AcquisitionCapabilityList__image_sources  // resize(index) function pointer
  },
  {
    "network_compute_sources",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AcquisitionCapabilityList, network_compute_sources),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__size_function__AcquisitionCapabilityList__network_compute_sources,  // size() function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_const_function__AcquisitionCapabilityList__network_compute_sources,  // get_const(index) function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__get_function__AcquisitionCapabilityList__network_compute_sources,  // get(index) function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__fetch_function__AcquisitionCapabilityList__network_compute_sources,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__assign_function__AcquisitionCapabilityList__network_compute_sources,  // assign(index, value) function pointer
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__resize_function__AcquisitionCapabilityList__network_compute_sources  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "AcquisitionCapabilityList",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs__msg__AcquisitionCapabilityList),
  bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_message_member_array,  // message members
  bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AcquisitionCapabilityList)() {
  bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DataAcquisitionCapability)();
  bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageAcquisitionCapability)();
  bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NetworkComputeCapability)();
  if (!bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__AcquisitionCapabilityList__rosidl_typesupport_introspection_c__AcquisitionCapabilityList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
