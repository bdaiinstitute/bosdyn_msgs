// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ImageSource.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/image_source__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/image_source__functions.h"
#include "bosdyn_msgs/msg/detail/image_source__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `camera_models`
#include "bosdyn_msgs/msg/image_source_one_of_camera_models.h"
// Member `camera_models`
#include "bosdyn_msgs/msg/detail/image_source_one_of_camera_models__rosidl_typesupport_introspection_c.h"
// Member `image_type`
#include "bosdyn_msgs/msg/image_source_image_type.h"
// Member `image_type`
#include "bosdyn_msgs/msg/detail/image_source_image_type__rosidl_typesupport_introspection_c.h"
// Member `pixel_formats`
#include "bosdyn_msgs/msg/image_pixel_format.h"
// Member `pixel_formats`
#include "bosdyn_msgs/msg/detail/image_pixel_format__rosidl_typesupport_introspection_c.h"
// Member `image_formats`
#include "bosdyn_msgs/msg/image_format.h"
// Member `image_formats`
#include "bosdyn_msgs/msg/detail/image_format__rosidl_typesupport_introspection_c.h"
// Member `custom_params`
#include "bosdyn_msgs/msg/dict_param_spec.h"
// Member `custom_params`
#include "bosdyn_msgs/msg/detail/dict_param_spec__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ImageSource__init(message_memory);
}

void bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ImageSource__fini(message_memory);
}

size_t bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__size_function__ImageSource__pixel_formats(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ImagePixelFormat__Sequence * member =
    (const bosdyn_msgs__msg__ImagePixelFormat__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__get_const_function__ImageSource__pixel_formats(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ImagePixelFormat__Sequence * member =
    (const bosdyn_msgs__msg__ImagePixelFormat__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__get_function__ImageSource__pixel_formats(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ImagePixelFormat__Sequence * member =
    (bosdyn_msgs__msg__ImagePixelFormat__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__fetch_function__ImageSource__pixel_formats(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ImagePixelFormat * item =
    ((const bosdyn_msgs__msg__ImagePixelFormat *)
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__get_const_function__ImageSource__pixel_formats(untyped_member, index));
  bosdyn_msgs__msg__ImagePixelFormat * value =
    (bosdyn_msgs__msg__ImagePixelFormat *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__assign_function__ImageSource__pixel_formats(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ImagePixelFormat * item =
    ((bosdyn_msgs__msg__ImagePixelFormat *)
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__get_function__ImageSource__pixel_formats(untyped_member, index));
  const bosdyn_msgs__msg__ImagePixelFormat * value =
    (const bosdyn_msgs__msg__ImagePixelFormat *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__resize_function__ImageSource__pixel_formats(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ImagePixelFormat__Sequence * member =
    (bosdyn_msgs__msg__ImagePixelFormat__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ImagePixelFormat__Sequence__fini(member);
  return bosdyn_msgs__msg__ImagePixelFormat__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__size_function__ImageSource__image_formats(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ImageFormat__Sequence * member =
    (const bosdyn_msgs__msg__ImageFormat__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__get_const_function__ImageSource__image_formats(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ImageFormat__Sequence * member =
    (const bosdyn_msgs__msg__ImageFormat__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__get_function__ImageSource__image_formats(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ImageFormat__Sequence * member =
    (bosdyn_msgs__msg__ImageFormat__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__fetch_function__ImageSource__image_formats(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ImageFormat * item =
    ((const bosdyn_msgs__msg__ImageFormat *)
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__get_const_function__ImageSource__image_formats(untyped_member, index));
  bosdyn_msgs__msg__ImageFormat * value =
    (bosdyn_msgs__msg__ImageFormat *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__assign_function__ImageSource__image_formats(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ImageFormat * item =
    ((bosdyn_msgs__msg__ImageFormat *)
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__get_function__ImageSource__image_formats(untyped_member, index));
  const bosdyn_msgs__msg__ImageFormat * value =
    (const bosdyn_msgs__msg__ImageFormat *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__resize_function__ImageSource__image_formats(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ImageFormat__Sequence * member =
    (bosdyn_msgs__msg__ImageFormat__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ImageFormat__Sequence__fini(member);
  return bosdyn_msgs__msg__ImageFormat__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_member_array[10] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ImageSource, name),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__ImageSource, cols),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rows",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ImageSource, rows),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ImageSource, depth_scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_models",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ImageSource, camera_models),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ImageSource, image_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pixel_formats",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ImageSource, pixel_formats),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__size_function__ImageSource__pixel_formats,  // size() function pointer
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__get_const_function__ImageSource__pixel_formats,  // get_const(index) function pointer
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__get_function__ImageSource__pixel_formats,  // get(index) function pointer
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__fetch_function__ImageSource__pixel_formats,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__assign_function__ImageSource__pixel_formats,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__resize_function__ImageSource__pixel_formats  // resize(index) function pointer
  },
  {
    "image_formats",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ImageSource, image_formats),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__size_function__ImageSource__image_formats,  // size() function pointer
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__get_const_function__ImageSource__image_formats,  // get_const(index) function pointer
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__get_function__ImageSource__image_formats,  // get(index) function pointer
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__fetch_function__ImageSource__image_formats,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__assign_function__ImageSource__image_formats,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__resize_function__ImageSource__image_formats  // resize(index) function pointer
  },
  {
    "custom_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ImageSource, custom_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "custom_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ImageSource, custom_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ImageSource",  // message name
  10,  // number of fields
  sizeof(bosdyn_msgs__msg__ImageSource),
  bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_member_array,  // message members
  bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageSource)() {
  bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageSourceOneOfCameraModels)();
  bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageSourceImageType)();
  bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImagePixelFormat)();
  bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageFormat)();
  bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DictParamSpec)();
  if (!bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ImageSource__rosidl_typesupport_introspection_c__ImageSource_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
