// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ManipulationApiRequestOneOfManipulationCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/manipulation_api_request_one_of_manipulation_cmd__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/manipulation_api_request_one_of_manipulation_cmd__functions.h"
#include "bosdyn_msgs/msg/detail/manipulation_api_request_one_of_manipulation_cmd__struct.h"


// Include directives for member types
// Member `walk_to_object_ray_in_world`
#include "bosdyn_msgs/msg/walk_to_object_ray_in_world.h"
// Member `walk_to_object_ray_in_world`
#include "bosdyn_msgs/msg/detail/walk_to_object_ray_in_world__rosidl_typesupport_introspection_c.h"
// Member `walk_to_object_in_image`
#include "bosdyn_msgs/msg/walk_to_object_in_image.h"
// Member `walk_to_object_in_image`
#include "bosdyn_msgs/msg/detail/walk_to_object_in_image__rosidl_typesupport_introspection_c.h"
// Member `pick_object`
#include "bosdyn_msgs/msg/pick_object.h"
// Member `pick_object`
#include "bosdyn_msgs/msg/detail/pick_object__rosidl_typesupport_introspection_c.h"
// Member `pick_object_in_image`
#include "bosdyn_msgs/msg/pick_object_in_image.h"
// Member `pick_object_in_image`
#include "bosdyn_msgs/msg/detail/pick_object_in_image__rosidl_typesupport_introspection_c.h"
// Member `pick_object_ray_in_world`
#include "bosdyn_msgs/msg/pick_object_ray_in_world.h"
// Member `pick_object_ray_in_world`
#include "bosdyn_msgs/msg/detail/pick_object_ray_in_world__rosidl_typesupport_introspection_c.h"
// Member `pick_object_execute_plan`
#include "bosdyn_msgs/msg/pick_object_execute_plan.h"
// Member `pick_object_execute_plan`
#include "bosdyn_msgs/msg/detail/pick_object_execute_plan__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__init(message_memory);
}

void bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_member_array[7] = {
  {
    "walk_to_object_ray_in_world",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd, walk_to_object_ray_in_world),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "walk_to_object_in_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd, walk_to_object_in_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pick_object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd, pick_object),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pick_object_in_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd, pick_object_in_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pick_object_ray_in_world",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd, pick_object_ray_in_world),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pick_object_execute_plan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd, pick_object_execute_plan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "manipulation_cmd_choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd, manipulation_cmd_choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ManipulationApiRequestOneOfManipulationCmd",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd),
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_member_array,  // message members
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ManipulationApiRequestOneOfManipulationCmd)() {
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WalkToObjectRayInWorld)();
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WalkToObjectInImage)();
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PickObject)();
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PickObjectInImage)();
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PickObjectRayInWorld)();
  bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PickObjectExecutePlan)();
  if (!bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ManipulationApiRequestOneOfManipulationCmd__rosidl_typesupport_introspection_c__ManipulationApiRequestOneOfManipulationCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
