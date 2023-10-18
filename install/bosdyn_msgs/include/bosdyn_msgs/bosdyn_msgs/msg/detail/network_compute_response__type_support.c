// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/NetworkComputeResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/network_compute_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/network_compute_response__functions.h"
#include "bosdyn_msgs/msg/detail/network_compute_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `object_in_image`
#include "bosdyn_msgs/msg/world_object.h"
// Member `object_in_image`
#include "bosdyn_msgs/msg/detail/world_object__rosidl_typesupport_introspection_c.h"
// Member `image_responses`
#include "bosdyn_msgs/msg/image_capture_and_source.h"
// Member `image_responses`
#include "bosdyn_msgs/msg/detail/image_capture_and_source__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/network_compute_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/network_compute_status__rosidl_typesupport_introspection_c.h"
// Member `custom_param_error`
#include "bosdyn_msgs/msg/custom_param_error.h"
// Member `custom_param_error`
#include "bosdyn_msgs/msg/detail/custom_param_error__rosidl_typesupport_introspection_c.h"
// Member `output_images`
#include "bosdyn_msgs/msg/key_string_value_bosdyn_msgs_output_image.h"
// Member `output_images`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_output_image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__NetworkComputeResponse__init(message_memory);
}

void bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__NetworkComputeResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__size_function__NetworkComputeResponse__object_in_image(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__WorldObject__Sequence * member =
    (const bosdyn_msgs__msg__WorldObject__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_const_function__NetworkComputeResponse__object_in_image(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__WorldObject__Sequence * member =
    (const bosdyn_msgs__msg__WorldObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_function__NetworkComputeResponse__object_in_image(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__WorldObject__Sequence * member =
    (bosdyn_msgs__msg__WorldObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__fetch_function__NetworkComputeResponse__object_in_image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__WorldObject * item =
    ((const bosdyn_msgs__msg__WorldObject *)
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_const_function__NetworkComputeResponse__object_in_image(untyped_member, index));
  bosdyn_msgs__msg__WorldObject * value =
    (bosdyn_msgs__msg__WorldObject *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__assign_function__NetworkComputeResponse__object_in_image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__WorldObject * item =
    ((bosdyn_msgs__msg__WorldObject *)
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_function__NetworkComputeResponse__object_in_image(untyped_member, index));
  const bosdyn_msgs__msg__WorldObject * value =
    (const bosdyn_msgs__msg__WorldObject *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__resize_function__NetworkComputeResponse__object_in_image(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__WorldObject__Sequence * member =
    (bosdyn_msgs__msg__WorldObject__Sequence *)(untyped_member);
  bosdyn_msgs__msg__WorldObject__Sequence__fini(member);
  return bosdyn_msgs__msg__WorldObject__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__size_function__NetworkComputeResponse__image_responses(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ImageCaptureAndSource__Sequence * member =
    (const bosdyn_msgs__msg__ImageCaptureAndSource__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_const_function__NetworkComputeResponse__image_responses(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ImageCaptureAndSource__Sequence * member =
    (const bosdyn_msgs__msg__ImageCaptureAndSource__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_function__NetworkComputeResponse__image_responses(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence * member =
    (bosdyn_msgs__msg__ImageCaptureAndSource__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__fetch_function__NetworkComputeResponse__image_responses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ImageCaptureAndSource * item =
    ((const bosdyn_msgs__msg__ImageCaptureAndSource *)
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_const_function__NetworkComputeResponse__image_responses(untyped_member, index));
  bosdyn_msgs__msg__ImageCaptureAndSource * value =
    (bosdyn_msgs__msg__ImageCaptureAndSource *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__assign_function__NetworkComputeResponse__image_responses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ImageCaptureAndSource * item =
    ((bosdyn_msgs__msg__ImageCaptureAndSource *)
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_function__NetworkComputeResponse__image_responses(untyped_member, index));
  const bosdyn_msgs__msg__ImageCaptureAndSource * value =
    (const bosdyn_msgs__msg__ImageCaptureAndSource *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__resize_function__NetworkComputeResponse__image_responses(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence * member =
    (bosdyn_msgs__msg__ImageCaptureAndSource__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__fini(member);
  return bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__size_function__NetworkComputeResponse__output_images(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_const_function__NetworkComputeResponse__output_images(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_function__NetworkComputeResponse__output_images(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__fetch_function__NetworkComputeResponse__output_images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage * item =
    ((const bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage *)
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_const_function__NetworkComputeResponse__output_images(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage * value =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__assign_function__NetworkComputeResponse__output_images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage * item =
    ((bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage *)
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_function__NetworkComputeResponse__output_images(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage * value =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__resize_function__NetworkComputeResponse__output_images(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueBosdynMsgsOutputImage__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NetworkComputeResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__NetworkComputeResponse, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_in_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NetworkComputeResponse, object_in_image),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__size_function__NetworkComputeResponse__object_in_image,  // size() function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_const_function__NetworkComputeResponse__object_in_image,  // get_const(index) function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_function__NetworkComputeResponse__object_in_image,  // get(index) function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__fetch_function__NetworkComputeResponse__object_in_image,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__assign_function__NetworkComputeResponse__object_in_image,  // assign(index, value) function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__resize_function__NetworkComputeResponse__object_in_image  // resize(index) function pointer
  },
  {
    "image_responses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NetworkComputeResponse, image_responses),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__size_function__NetworkComputeResponse__image_responses,  // size() function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_const_function__NetworkComputeResponse__image_responses,  // get_const(index) function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_function__NetworkComputeResponse__image_responses,  // get(index) function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__fetch_function__NetworkComputeResponse__image_responses,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__assign_function__NetworkComputeResponse__image_responses,  // assign(index, value) function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__resize_function__NetworkComputeResponse__image_responses  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NetworkComputeResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "custom_param_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NetworkComputeResponse, custom_param_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "custom_param_error_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NetworkComputeResponse, custom_param_error_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output_images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NetworkComputeResponse, output_images),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__size_function__NetworkComputeResponse__output_images,  // size() function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_const_function__NetworkComputeResponse__output_images,  // get_const(index) function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__get_function__NetworkComputeResponse__output_images,  // get(index) function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__fetch_function__NetworkComputeResponse__output_images,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__assign_function__NetworkComputeResponse__output_images,  // assign(index, value) function pointer
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__resize_function__NetworkComputeResponse__output_images  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "NetworkComputeResponse",  // message name
  8,  // number of fields
  sizeof(bosdyn_msgs__msg__NetworkComputeResponse),
  bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_member_array,  // message members
  bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NetworkComputeResponse)() {
  bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WorldObject)();
  bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageCaptureAndSource)();
  bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NetworkComputeStatus)();
  bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, CustomParamError)();
  bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueBosdynMsgsOutputImage)();
  if (!bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__NetworkComputeResponse__rosidl_typesupport_introspection_c__NetworkComputeResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
