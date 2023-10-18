// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/process_topology_request_params__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/process_topology_request_params__functions.h"
#include "bosdyn_msgs/msg/detail/process_topology_request_params__struct.h"


// Include directives for member types
// Member `odometry_loop_closure_params`
#include "bosdyn_msgs/msg/process_topology_request_odometry_loop_closure_params.h"
// Member `odometry_loop_closure_params`
#include "bosdyn_msgs/msg/detail/process_topology_request_odometry_loop_closure_params__rosidl_typesupport_introspection_c.h"
// Member `icp_params`
#include "bosdyn_msgs/msg/process_topology_request_icp_params.h"
// Member `icp_params`
#include "bosdyn_msgs/msg/detail/process_topology_request_icp_params__rosidl_typesupport_introspection_c.h"
// Member `fiducial_loop_closure_params`
#include "bosdyn_msgs/msg/process_topology_request_fiducial_loop_closure_params.h"
// Member `fiducial_loop_closure_params`
#include "bosdyn_msgs/msg/detail/process_topology_request_fiducial_loop_closure_params__rosidl_typesupport_introspection_c.h"
// Member `collision_check_params`
#include "bosdyn_msgs/msg/process_topology_request_collision_checking_params.h"
// Member `collision_check_params`
#include "bosdyn_msgs/msg/detail/process_topology_request_collision_checking_params__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ProcessTopologyRequestParams__init(message_memory);
}

void bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ProcessTopologyRequestParams__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_message_member_array[13] = {
  {
    "do_odometry_loop_closure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, do_odometry_loop_closure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "do_odometry_loop_closure_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, do_odometry_loop_closure_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odometry_loop_closure_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, odometry_loop_closure_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odometry_loop_closure_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, odometry_loop_closure_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, icp_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "icp_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, icp_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "do_fiducial_loop_closure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, do_fiducial_loop_closure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "do_fiducial_loop_closure_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, do_fiducial_loop_closure_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fiducial_loop_closure_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, fiducial_loop_closure_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fiducial_loop_closure_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, fiducial_loop_closure_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_check_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, collision_check_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "collision_check_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, collision_check_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout_seconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestParams, timeout_seconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ProcessTopologyRequestParams",  // message name
  13,  // number of fields
  sizeof(bosdyn_msgs__msg__ProcessTopologyRequestParams),
  bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_message_member_array,  // message members
  bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessTopologyRequestParams)() {
  bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessTopologyRequestOdometryLoopClosureParams)();
  bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessTopologyRequestICPParams)();
  bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessTopologyRequestFiducialLoopClosureParams)();
  bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessTopologyRequestCollisionCheckingParams)();
  if (!bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ProcessTopologyRequestParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
