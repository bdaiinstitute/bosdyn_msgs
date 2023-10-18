// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ProcessAnchoringResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/process_anchoring_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/process_anchoring_response__functions.h"
#include "bosdyn_msgs/msg/detail/process_anchoring_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/process_anchoring_response_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/process_anchoring_response_status__rosidl_typesupport_introspection_c.h"
// Member `waypoint_results`
#include "bosdyn_msgs/msg/anchor.h"
// Member `waypoint_results`
#include "bosdyn_msgs/msg/detail/anchor__rosidl_typesupport_introspection_c.h"
// Member `world_object_results`
#include "bosdyn_msgs/msg/anchored_world_object.h"
// Member `world_object_results`
#include "bosdyn_msgs/msg/detail/anchored_world_object__rosidl_typesupport_introspection_c.h"
// Member `violated_waypoint_constraints`
#include "bosdyn_msgs/msg/waypoint_anchor_hint.h"
// Member `violated_waypoint_constraints`
#include "bosdyn_msgs/msg/detail/waypoint_anchor_hint__rosidl_typesupport_introspection_c.h"
// Member `violated_object_constraints`
#include "bosdyn_msgs/msg/world_object_anchor_hint.h"
// Member `violated_object_constraints`
#include "bosdyn_msgs/msg/detail/world_object_anchor_hint__rosidl_typesupport_introspection_c.h"
// Member `missing_snapshot_ids`
// Member `missing_waypoint_ids`
// Member `invalid_hints`
#include "rosidl_runtime_c/string_functions.h"
// Member `inconsistent_edges`
#include "bosdyn_msgs/msg/edge_id.h"
// Member `inconsistent_edges`
#include "bosdyn_msgs/msg/detail/edge_id__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ProcessAnchoringResponse__init(message_memory);
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ProcessAnchoringResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__waypoint_results(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Anchor__Sequence * member =
    (const bosdyn_msgs__msg__Anchor__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__waypoint_results(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Anchor__Sequence * member =
    (const bosdyn_msgs__msg__Anchor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__waypoint_results(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Anchor__Sequence * member =
    (bosdyn_msgs__msg__Anchor__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__waypoint_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Anchor * item =
    ((const bosdyn_msgs__msg__Anchor *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__waypoint_results(untyped_member, index));
  bosdyn_msgs__msg__Anchor * value =
    (bosdyn_msgs__msg__Anchor *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__waypoint_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Anchor * item =
    ((bosdyn_msgs__msg__Anchor *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__waypoint_results(untyped_member, index));
  const bosdyn_msgs__msg__Anchor * value =
    (const bosdyn_msgs__msg__Anchor *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__waypoint_results(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Anchor__Sequence * member =
    (bosdyn_msgs__msg__Anchor__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Anchor__Sequence__fini(member);
  return bosdyn_msgs__msg__Anchor__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__world_object_results(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__AnchoredWorldObject__Sequence * member =
    (const bosdyn_msgs__msg__AnchoredWorldObject__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__world_object_results(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__AnchoredWorldObject__Sequence * member =
    (const bosdyn_msgs__msg__AnchoredWorldObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__world_object_results(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__AnchoredWorldObject__Sequence * member =
    (bosdyn_msgs__msg__AnchoredWorldObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__world_object_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__AnchoredWorldObject * item =
    ((const bosdyn_msgs__msg__AnchoredWorldObject *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__world_object_results(untyped_member, index));
  bosdyn_msgs__msg__AnchoredWorldObject * value =
    (bosdyn_msgs__msg__AnchoredWorldObject *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__world_object_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__AnchoredWorldObject * item =
    ((bosdyn_msgs__msg__AnchoredWorldObject *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__world_object_results(untyped_member, index));
  const bosdyn_msgs__msg__AnchoredWorldObject * value =
    (const bosdyn_msgs__msg__AnchoredWorldObject *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__world_object_results(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__AnchoredWorldObject__Sequence * member =
    (bosdyn_msgs__msg__AnchoredWorldObject__Sequence *)(untyped_member);
  bosdyn_msgs__msg__AnchoredWorldObject__Sequence__fini(member);
  return bosdyn_msgs__msg__AnchoredWorldObject__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__violated_waypoint_constraints(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__WaypointAnchorHint__Sequence * member =
    (const bosdyn_msgs__msg__WaypointAnchorHint__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__violated_waypoint_constraints(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__WaypointAnchorHint__Sequence * member =
    (const bosdyn_msgs__msg__WaypointAnchorHint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__violated_waypoint_constraints(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__WaypointAnchorHint__Sequence * member =
    (bosdyn_msgs__msg__WaypointAnchorHint__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__violated_waypoint_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__WaypointAnchorHint * item =
    ((const bosdyn_msgs__msg__WaypointAnchorHint *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__violated_waypoint_constraints(untyped_member, index));
  bosdyn_msgs__msg__WaypointAnchorHint * value =
    (bosdyn_msgs__msg__WaypointAnchorHint *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__violated_waypoint_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__WaypointAnchorHint * item =
    ((bosdyn_msgs__msg__WaypointAnchorHint *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__violated_waypoint_constraints(untyped_member, index));
  const bosdyn_msgs__msg__WaypointAnchorHint * value =
    (const bosdyn_msgs__msg__WaypointAnchorHint *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__violated_waypoint_constraints(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__WaypointAnchorHint__Sequence * member =
    (bosdyn_msgs__msg__WaypointAnchorHint__Sequence *)(untyped_member);
  bosdyn_msgs__msg__WaypointAnchorHint__Sequence__fini(member);
  return bosdyn_msgs__msg__WaypointAnchorHint__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__violated_object_constraints(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence * member =
    (const bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__violated_object_constraints(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence * member =
    (const bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__violated_object_constraints(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence * member =
    (bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__violated_object_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__WorldObjectAnchorHint * item =
    ((const bosdyn_msgs__msg__WorldObjectAnchorHint *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__violated_object_constraints(untyped_member, index));
  bosdyn_msgs__msg__WorldObjectAnchorHint * value =
    (bosdyn_msgs__msg__WorldObjectAnchorHint *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__violated_object_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__WorldObjectAnchorHint * item =
    ((bosdyn_msgs__msg__WorldObjectAnchorHint *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__violated_object_constraints(untyped_member, index));
  const bosdyn_msgs__msg__WorldObjectAnchorHint * value =
    (const bosdyn_msgs__msg__WorldObjectAnchorHint *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__violated_object_constraints(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence * member =
    (bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence *)(untyped_member);
  bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__fini(member);
  return bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__missing_snapshot_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__missing_snapshot_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__missing_snapshot_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__missing_snapshot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__missing_snapshot_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__missing_snapshot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__missing_snapshot_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__missing_snapshot_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__missing_waypoint_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__missing_waypoint_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__missing_waypoint_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__missing_waypoint_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__missing_waypoint_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__missing_waypoint_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__missing_waypoint_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__missing_waypoint_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__invalid_hints(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__invalid_hints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__invalid_hints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__invalid_hints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__invalid_hints(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__invalid_hints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__invalid_hints(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__invalid_hints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__inconsistent_edges(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__EdgeId__Sequence * member =
    (const bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__inconsistent_edges(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__EdgeId__Sequence * member =
    (const bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__inconsistent_edges(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__EdgeId__Sequence * member =
    (bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__inconsistent_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__EdgeId * item =
    ((const bosdyn_msgs__msg__EdgeId *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__inconsistent_edges(untyped_member, index));
  bosdyn_msgs__msg__EdgeId * value =
    (bosdyn_msgs__msg__EdgeId *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__inconsistent_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__EdgeId * item =
    ((bosdyn_msgs__msg__EdgeId *)
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__inconsistent_edges(untyped_member, index));
  const bosdyn_msgs__msg__EdgeId * value =
    (const bosdyn_msgs__msg__EdgeId *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__inconsistent_edges(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__EdgeId__Sequence * member =
    (bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  bosdyn_msgs__msg__EdgeId__Sequence__fini(member);
  return bosdyn_msgs__msg__EdgeId__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_member_array[15] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoint_results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, waypoint_results),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__waypoint_results,  // size() function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__waypoint_results,  // get_const(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__waypoint_results,  // get(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__waypoint_results,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__waypoint_results,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__waypoint_results  // resize(index) function pointer
  },
  {
    "world_object_results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, world_object_results),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__world_object_results,  // size() function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__world_object_results,  // get_const(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__world_object_results,  // get(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__world_object_results,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__world_object_results,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__world_object_results  // resize(index) function pointer
  },
  {
    "anchoring_on_server_was_modified",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, anchoring_on_server_was_modified),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "iteration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, iteration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, cost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_iteration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, final_iteration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "violated_waypoint_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, violated_waypoint_constraints),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__violated_waypoint_constraints,  // size() function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__violated_waypoint_constraints,  // get_const(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__violated_waypoint_constraints,  // get(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__violated_waypoint_constraints,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__violated_waypoint_constraints,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__violated_waypoint_constraints  // resize(index) function pointer
  },
  {
    "violated_object_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, violated_object_constraints),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__violated_object_constraints,  // size() function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__violated_object_constraints,  // get_const(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__violated_object_constraints,  // get(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__violated_object_constraints,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__violated_object_constraints,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__violated_object_constraints  // resize(index) function pointer
  },
  {
    "missing_snapshot_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, missing_snapshot_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__missing_snapshot_ids,  // size() function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__missing_snapshot_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__missing_snapshot_ids,  // get(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__missing_snapshot_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__missing_snapshot_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__missing_snapshot_ids  // resize(index) function pointer
  },
  {
    "missing_waypoint_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, missing_waypoint_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__missing_waypoint_ids,  // size() function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__missing_waypoint_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__missing_waypoint_ids,  // get(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__missing_waypoint_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__missing_waypoint_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__missing_waypoint_ids  // resize(index) function pointer
  },
  {
    "invalid_hints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, invalid_hints),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__invalid_hints,  // size() function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__invalid_hints,  // get_const(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__invalid_hints,  // get(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__invalid_hints,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__invalid_hints,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__invalid_hints  // resize(index) function pointer
  },
  {
    "inconsistent_edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringResponse, inconsistent_edges),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__size_function__ProcessAnchoringResponse__inconsistent_edges,  // size() function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_const_function__ProcessAnchoringResponse__inconsistent_edges,  // get_const(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__get_function__ProcessAnchoringResponse__inconsistent_edges,  // get(index) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__fetch_function__ProcessAnchoringResponse__inconsistent_edges,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__assign_function__ProcessAnchoringResponse__inconsistent_edges,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__resize_function__ProcessAnchoringResponse__inconsistent_edges  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ProcessAnchoringResponse",  // message name
  15,  // number of fields
  sizeof(bosdyn_msgs__msg__ProcessAnchoringResponse),
  bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_member_array,  // message members
  bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessAnchoringResponse)() {
  bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessAnchoringResponseStatus)();
  bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Anchor)();
  bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AnchoredWorldObject)();
  bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WaypointAnchorHint)();
  bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WorldObjectAnchorHint)();
  bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeId)();
  if (!bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ProcessAnchoringResponse__rosidl_typesupport_introspection_c__ProcessAnchoringResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
