// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ActionDataAcquisition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/action_data_acquisition__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/action_data_acquisition__functions.h"
#include "bosdyn_msgs/msg/detail/action_data_acquisition__struct.h"


// Include directives for member types
// Member `acquire_data_request`
#include "bosdyn_msgs/msg/acquire_data_request.h"
// Member `acquire_data_request`
#include "bosdyn_msgs/msg/detail/acquire_data_request__rosidl_typesupport_introspection_c.h"
// Member `completion_behavior`
#include "bosdyn_msgs/msg/data_acquisition_completion_behavior.h"
// Member `completion_behavior`
#include "bosdyn_msgs/msg/detail/data_acquisition_completion_behavior__rosidl_typesupport_introspection_c.h"
// Member `last_known_capabilities`
#include "bosdyn_msgs/msg/acquisition_capability_list.h"
// Member `last_known_capabilities`
#include "bosdyn_msgs/msg/detail/acquisition_capability_list__rosidl_typesupport_introspection_c.h"
// Member `record_time_images`
#include "bosdyn_msgs/msg/image_capture_and_source.h"
// Member `record_time_images`
#include "bosdyn_msgs/msg/detail/image_capture_and_source__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ActionDataAcquisition__init(message_memory);
}

void bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ActionDataAcquisition__fini(message_memory);
}

size_t bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__size_function__ActionDataAcquisition__record_time_images(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ImageCaptureAndSource__Sequence * member =
    (const bosdyn_msgs__msg__ImageCaptureAndSource__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__get_const_function__ActionDataAcquisition__record_time_images(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ImageCaptureAndSource__Sequence * member =
    (const bosdyn_msgs__msg__ImageCaptureAndSource__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__get_function__ActionDataAcquisition__record_time_images(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence * member =
    (bosdyn_msgs__msg__ImageCaptureAndSource__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__fetch_function__ActionDataAcquisition__record_time_images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ImageCaptureAndSource * item =
    ((const bosdyn_msgs__msg__ImageCaptureAndSource *)
    bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__get_const_function__ActionDataAcquisition__record_time_images(untyped_member, index));
  bosdyn_msgs__msg__ImageCaptureAndSource * value =
    (bosdyn_msgs__msg__ImageCaptureAndSource *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__assign_function__ActionDataAcquisition__record_time_images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ImageCaptureAndSource * item =
    ((bosdyn_msgs__msg__ImageCaptureAndSource *)
    bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__get_function__ActionDataAcquisition__record_time_images(untyped_member, index));
  const bosdyn_msgs__msg__ImageCaptureAndSource * value =
    (const bosdyn_msgs__msg__ImageCaptureAndSource *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__resize_function__ActionDataAcquisition__record_time_images(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence * member =
    (bosdyn_msgs__msg__ImageCaptureAndSource__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__fini(member);
  return bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_message_member_array[6] = {
  {
    "acquire_data_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionDataAcquisition, acquire_data_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acquire_data_request_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionDataAcquisition, acquire_data_request_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "completion_behavior",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionDataAcquisition, completion_behavior),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_known_capabilities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionDataAcquisition, last_known_capabilities),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_known_capabilities_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionDataAcquisition, last_known_capabilities_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "record_time_images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionDataAcquisition, record_time_images),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__size_function__ActionDataAcquisition__record_time_images,  // size() function pointer
    bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__get_const_function__ActionDataAcquisition__record_time_images,  // get_const(index) function pointer
    bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__get_function__ActionDataAcquisition__record_time_images,  // get(index) function pointer
    bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__fetch_function__ActionDataAcquisition__record_time_images,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__assign_function__ActionDataAcquisition__record_time_images,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__resize_function__ActionDataAcquisition__record_time_images  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ActionDataAcquisition",  // message name
  6,  // number of fields
  sizeof(bosdyn_msgs__msg__ActionDataAcquisition),
  bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_message_member_array,  // message members
  bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionDataAcquisition)() {
  bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AcquireDataRequest)();
  bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DataAcquisitionCompletionBehavior)();
  bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AcquisitionCapabilityList)();
  bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageCaptureAndSource)();
  if (!bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ActionDataAcquisition__rosidl_typesupport_introspection_c__ActionDataAcquisition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
