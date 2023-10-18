// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params__functions.h"
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params__struct.h"


// Include directives for member types
// Member `optimizer_params`
#include "bosdyn_msgs/msg/process_anchoring_request_params_optimizer_params.h"
// Member `optimizer_params`
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_optimizer_params__rosidl_typesupport_introspection_c.h"
// Member `measurement_params`
#include "bosdyn_msgs/msg/process_anchoring_request_params_measurement_params.h"
// Member `measurement_params`
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_measurement_params__rosidl_typesupport_introspection_c.h"
// Member `weights`
#include "bosdyn_msgs/msg/process_anchoring_request_params_weights.h"
// Member `weights`
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_weights__rosidl_typesupport_introspection_c.h"
// Member `gravity_ewrt_seed`
#include "geometry_msgs/msg/vector3.h"
// Member `gravity_ewrt_seed`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ProcessAnchoringRequestParams__init(message_memory);
}

void bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ProcessAnchoringRequestParams__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_message_member_array[10] = {
  {
    "optimizer_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringRequestParams, optimizer_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "optimizer_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringRequestParams, optimizer_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measurement_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringRequestParams, measurement_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measurement_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringRequestParams, measurement_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringRequestParams, weights),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weights_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringRequestParams, weights_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "optimize_existing_anchoring",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringRequestParams, optimize_existing_anchoring),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "optimize_existing_anchoring_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringRequestParams, optimize_existing_anchoring_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gravity_ewrt_seed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringRequestParams, gravity_ewrt_seed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gravity_ewrt_seed_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ProcessAnchoringRequestParams, gravity_ewrt_seed_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ProcessAnchoringRequestParams",  // message name
  10,  // number of fields
  sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParams),
  bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_message_member_array,  // message members
  bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessAnchoringRequestParams)() {
  bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessAnchoringRequestParamsOptimizerParams)();
  bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessAnchoringRequestParamsMeasurementParams)();
  bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ProcessAnchoringRequestParamsWeights)();
  bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ProcessAnchoringRequestParams__rosidl_typesupport_introspection_c__ProcessAnchoringRequestParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
