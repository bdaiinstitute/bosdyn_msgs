// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestOdometryLoopClosureParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/process_topology_request_odometry_loop_closure_params__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/process_topology_request_odometry_loop_closure_params__functions.h"
#include "bosdyn_msgs/msg/detail/process_topology_request_odometry_loop_closure_params__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestOdometryLoopClosureParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__init(message_memory);
}

void bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestOdometryLoopClosureParams_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestOdometryLoopClosureParams_message_member_array[12] = {
  {
    "max_loop_closure_path_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams, max_loop_closure_path_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_loop_closure_path_length_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams, max_loop_closure_path_length_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_loop_closure_path_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams, min_loop_closure_path_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_loop_closure_path_length_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams, min_loop_closure_path_length_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_loop_closure_height_change",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams, max_loop_closure_height_change),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_loop_closure_height_change_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams, max_loop_closure_height_change_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_loop_closure_edge_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams, max_loop_closure_edge_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_loop_closure_edge_length_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams, max_loop_closure_edge_length_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_extra_loop_closure_iterations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams, num_extra_loop_closure_iterations),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_extra_loop_closure_iterations_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams, num_extra_loop_closure_iterations_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prune_edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams, prune_edges),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prune_edges_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams, prune_edges_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestOdometryLoopClosureParams_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ProcessTopologyRequestOdometryLoopClosureParams",  // message name
  12,  // number of fields
  sizeof(bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams),
  bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestOdometryLoopClosureParams_message_member_array,  // message members
  bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestOdometryLoopClosureParams_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestOdometryLoopClosureParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestOdometryLoopClosureParams_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestOdometryLoopClosureParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessTopologyRequestOdometryLoopClosureParams)() {
  if (!bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestOdometryLoopClosureParams_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestOdometryLoopClosureParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ProcessTopologyRequestOdometryLoopClosureParams__rosidl_typesupport_introspection_c__ProcessTopologyRequestOdometryLoopClosureParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
