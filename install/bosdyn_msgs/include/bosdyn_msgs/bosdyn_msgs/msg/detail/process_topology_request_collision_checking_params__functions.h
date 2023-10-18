// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestCollisionCheckingParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__FUNCTIONS_H_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bosdyn_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bosdyn_msgs/msg/detail/process_topology_request_collision_checking_params__struct.h"

/// Initialize msg/ProcessTopologyRequestCollisionCheckingParams message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams
 * )) before or use
 * bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__init(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * msg);

/// Finalize msg/ProcessTopologyRequestCollisionCheckingParams message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__fini(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * msg);

/// Create msg/ProcessTopologyRequestCollisionCheckingParams message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams *
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__create();

/// Destroy msg/ProcessTopologyRequestCollisionCheckingParams message.
/**
 * It calls
 * bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__destroy(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * msg);

/// Check for msg/ProcessTopologyRequestCollisionCheckingParams message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__are_equal(const bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * lhs, const bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * rhs);

/// Copy a msg/ProcessTopologyRequestCollisionCheckingParams message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__copy(
  const bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * input,
  bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams * output);

/// Initialize array of msg/ProcessTopologyRequestCollisionCheckingParams messages.
/**
 * It allocates the memory for the number of elements and calls
 * bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__init(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * array, size_t size);

/// Finalize array of msg/ProcessTopologyRequestCollisionCheckingParams messages.
/**
 * It calls
 * bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__fini(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * array);

/// Create array of msg/ProcessTopologyRequestCollisionCheckingParams messages.
/**
 * It allocates the memory for the array and calls
 * bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence *
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__create(size_t size);

/// Destroy array of msg/ProcessTopologyRequestCollisionCheckingParams messages.
/**
 * It calls
 * bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__destroy(bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * array);

/// Check for msg/ProcessTopologyRequestCollisionCheckingParams message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__are_equal(const bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * lhs, const bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * rhs);

/// Copy an array of msg/ProcessTopologyRequestCollisionCheckingParams messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence__copy(
  const bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * input,
  bosdyn_msgs__msg__ProcessTopologyRequestCollisionCheckingParams__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_COLLISION_CHECKING_PARAMS__FUNCTIONS_H_
