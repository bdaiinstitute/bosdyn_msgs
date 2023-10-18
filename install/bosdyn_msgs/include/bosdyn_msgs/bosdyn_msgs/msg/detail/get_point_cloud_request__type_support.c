// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/GetPointCloudRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/get_point_cloud_request__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/get_point_cloud_request__functions.h"
#include "bosdyn_msgs/msg/detail/get_point_cloud_request__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/request_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__rosidl_typesupport_introspection_c.h"
// Member `point_cloud_requests`
#include "bosdyn_msgs/msg/point_cloud_request.h"
// Member `point_cloud_requests`
#include "bosdyn_msgs/msg/detail/point_cloud_request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__GetPointCloudRequest__init(message_memory);
}

void bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__GetPointCloudRequest__fini(message_memory);
}

size_t bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__size_function__GetPointCloudRequest__point_cloud_requests(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__PointCloudRequest__Sequence * member =
    (const bosdyn_msgs__msg__PointCloudRequest__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__get_const_function__GetPointCloudRequest__point_cloud_requests(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__PointCloudRequest__Sequence * member =
    (const bosdyn_msgs__msg__PointCloudRequest__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__get_function__GetPointCloudRequest__point_cloud_requests(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__PointCloudRequest__Sequence * member =
    (bosdyn_msgs__msg__PointCloudRequest__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__fetch_function__GetPointCloudRequest__point_cloud_requests(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__PointCloudRequest * item =
    ((const bosdyn_msgs__msg__PointCloudRequest *)
    bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__get_const_function__GetPointCloudRequest__point_cloud_requests(untyped_member, index));
  bosdyn_msgs__msg__PointCloudRequest * value =
    (bosdyn_msgs__msg__PointCloudRequest *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__assign_function__GetPointCloudRequest__point_cloud_requests(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__PointCloudRequest * item =
    ((bosdyn_msgs__msg__PointCloudRequest *)
    bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__get_function__GetPointCloudRequest__point_cloud_requests(untyped_member, index));
  const bosdyn_msgs__msg__PointCloudRequest * value =
    (const bosdyn_msgs__msg__PointCloudRequest *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__resize_function__GetPointCloudRequest__point_cloud_requests(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__PointCloudRequest__Sequence * member =
    (bosdyn_msgs__msg__PointCloudRequest__Sequence *)(untyped_member);
  bosdyn_msgs__msg__PointCloudRequest__Sequence__fini(member);
  return bosdyn_msgs__msg__PointCloudRequest__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GetPointCloudRequest, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__GetPointCloudRequest, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_cloud_requests",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GetPointCloudRequest, point_cloud_requests),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__size_function__GetPointCloudRequest__point_cloud_requests,  // size() function pointer
    bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__get_const_function__GetPointCloudRequest__point_cloud_requests,  // get_const(index) function pointer
    bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__get_function__GetPointCloudRequest__point_cloud_requests,  // get(index) function pointer
    bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__fetch_function__GetPointCloudRequest__point_cloud_requests,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__assign_function__GetPointCloudRequest__point_cloud_requests,  // assign(index, value) function pointer
    bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__resize_function__GetPointCloudRequest__point_cloud_requests  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "GetPointCloudRequest",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs__msg__GetPointCloudRequest),
  bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_message_member_array,  // message members
  bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, GetPointCloudRequest)() {
  bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RequestHeader)();
  bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PointCloudRequest)();
  if (!bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__GetPointCloudRequest__rosidl_typesupport_introspection_c__GetPointCloudRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
