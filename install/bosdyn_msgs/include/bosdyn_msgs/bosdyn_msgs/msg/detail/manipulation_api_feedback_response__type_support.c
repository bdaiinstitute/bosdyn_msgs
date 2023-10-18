// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ManipulationApiFeedbackResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/manipulation_api_feedback_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/manipulation_api_feedback_response__functions.h"
#include "bosdyn_msgs/msg/detail/manipulation_api_feedback_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `current_state`
#include "bosdyn_msgs/msg/manipulation_feedback_state.h"
// Member `current_state`
#include "bosdyn_msgs/msg/detail/manipulation_feedback_state__rosidl_typesupport_introspection_c.h"
// Member `transforms_snapshot_manipulation_data`
#include "bosdyn_msgs/msg/frame_tree_snapshot.h"
// Member `transforms_snapshot_manipulation_data`
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ManipulationApiFeedbackResponse__init(message_memory);
}

void bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ManipulationApiFeedbackResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ManipulationApiFeedbackResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__ManipulationApiFeedbackResponse, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "manipulation_cmd_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ManipulationApiFeedbackResponse, manipulation_cmd_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ManipulationApiFeedbackResponse, current_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transforms_snapshot_manipulation_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ManipulationApiFeedbackResponse, transforms_snapshot_manipulation_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transforms_snapshot_manipulation_data_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ManipulationApiFeedbackResponse, transforms_snapshot_manipulation_data_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ManipulationApiFeedbackResponse",  // message name
  6,  // number of fields
  sizeof(bosdyn_msgs__msg__ManipulationApiFeedbackResponse),
  bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_message_member_array,  // message members
  bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ManipulationApiFeedbackResponse)() {
  bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ManipulationFeedbackState)();
  bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FrameTreeSnapshot)();
  if (!bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ManipulationApiFeedbackResponse__rosidl_typesupport_introspection_c__ManipulationApiFeedbackResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
