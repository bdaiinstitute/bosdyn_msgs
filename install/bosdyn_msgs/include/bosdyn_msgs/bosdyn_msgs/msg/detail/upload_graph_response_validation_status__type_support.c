// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/UploadGraphResponseValidationStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/upload_graph_response_validation_status__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/upload_graph_response_validation_status__functions.h"
#include "bosdyn_msgs/msg/detail/upload_graph_response_validation_status__struct.h"


// Include directives for member types
// Member `missing_waypoint_ids_in_edges`
// Member `missing_waypoint_ids_in_anchors`
// Member `waypoint_anchors_invalid_transform`
// Member `object_anchors_invalid_transform`
// Member `duplicate_waypoint_ids`
// Member `duplicate_waypoint_anchor_ids`
// Member `duplicate_object_anchor_ids`
// Member `invalid_waypoint_ids_self_edges`
#include "rosidl_runtime_c/string_functions.h"
// Member `edge_ids_invalid_transform`
// Member `duplicate_edge_ids`
#include "bosdyn_msgs/msg/edge_id.h"
// Member `edge_ids_invalid_transform`
// Member `duplicate_edge_ids`
#include "bosdyn_msgs/msg/detail/edge_id__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__UploadGraphResponseValidationStatus__init(message_memory);
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__UploadGraphResponseValidationStatus__fini(message_memory);
}

size_t bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__EdgeId__Sequence * member =
    (const bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__EdgeId__Sequence * member =
    (const bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__EdgeId__Sequence * member =
    (bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__EdgeId * item =
    ((const bosdyn_msgs__msg__EdgeId *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(untyped_member, index));
  bosdyn_msgs__msg__EdgeId * value =
    (bosdyn_msgs__msg__EdgeId *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__EdgeId * item =
    ((bosdyn_msgs__msg__EdgeId *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(untyped_member, index));
  const bosdyn_msgs__msg__EdgeId * value =
    (const bosdyn_msgs__msg__EdgeId *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__EdgeId__Sequence * member =
    (bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  bosdyn_msgs__msg__EdgeId__Sequence__fini(member);
  return bosdyn_msgs__msg__EdgeId__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__EdgeId__Sequence * member =
    (const bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__EdgeId__Sequence * member =
    (const bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__EdgeId__Sequence * member =
    (bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__EdgeId * item =
    ((const bosdyn_msgs__msg__EdgeId *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(untyped_member, index));
  bosdyn_msgs__msg__EdgeId * value =
    (bosdyn_msgs__msg__EdgeId *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__EdgeId * item =
    ((bosdyn_msgs__msg__EdgeId *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(untyped_member, index));
  const bosdyn_msgs__msg__EdgeId * value =
    (const bosdyn_msgs__msg__EdgeId *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__EdgeId__Sequence * member =
    (bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  bosdyn_msgs__msg__EdgeId__Sequence__fini(member);
  return bosdyn_msgs__msg__EdgeId__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_message_member_array[14] = {
  {
    "missing_waypoint_ids_in_edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, missing_waypoint_ids_in_edges),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges  // resize(index) function pointer
  },
  {
    "missing_waypoint_ids_in_anchors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, missing_waypoint_ids_in_anchors),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors  // resize(index) function pointer
  },
  {
    "edge_ids_invalid_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, edge_ids_invalid_transform),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform  // resize(index) function pointer
  },
  {
    "waypoint_anchors_invalid_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, waypoint_anchors_invalid_transform),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform  // resize(index) function pointer
  },
  {
    "object_anchors_invalid_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, object_anchors_invalid_transform),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform  // resize(index) function pointer
  },
  {
    "duplicate_waypoint_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, duplicate_waypoint_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids  // resize(index) function pointer
  },
  {
    "duplicate_waypoint_anchor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, duplicate_waypoint_anchor_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids  // resize(index) function pointer
  },
  {
    "duplicate_object_anchor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, duplicate_object_anchor_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids  // resize(index) function pointer
  },
  {
    "duplicate_edge_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, duplicate_edge_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__duplicate_edge_ids,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__duplicate_edge_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__duplicate_edge_ids,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__duplicate_edge_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__duplicate_edge_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__duplicate_edge_ids  // resize(index) function pointer
  },
  {
    "invalid_waypoint_ids_self_edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, invalid_waypoint_ids_self_edges),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__size_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges,  // size() function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_const_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges,  // get_const(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__get_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges,  // get(index) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__fetch_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__assign_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges,  // assign(index, value) function pointer
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__resize_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges  // resize(index) function pointer
  },
  {
    "has_empty_waypoint_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, has_empty_waypoint_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_empty_edge_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, has_empty_edge_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_empty_waypoint_anchor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, has_empty_waypoint_anchor_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_empty_object_anchor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus, has_empty_object_anchor_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "UploadGraphResponseValidationStatus",  // message name
  14,  // number of fields
  sizeof(bosdyn_msgs__msg__UploadGraphResponseValidationStatus),
  bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_message_member_array,  // message members
  bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, UploadGraphResponseValidationStatus)() {
  bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeId)();
  bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeId)();
  if (!bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__UploadGraphResponseValidationStatus__rosidl_typesupport_introspection_c__UploadGraphResponseValidationStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
