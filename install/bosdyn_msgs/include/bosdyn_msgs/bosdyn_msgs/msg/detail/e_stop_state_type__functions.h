// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bosdyn_msgs:msg/EStopStateType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__E_STOP_STATE_TYPE__FUNCTIONS_H_
#define BOSDYN_MSGS__MSG__DETAIL__E_STOP_STATE_TYPE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bosdyn_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bosdyn_msgs/msg/detail/e_stop_state_type__struct.h"

/// Initialize msg/EStopStateType message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bosdyn_msgs__msg__EStopStateType
 * )) before or use
 * bosdyn_msgs__msg__EStopStateType__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__EStopStateType__init(bosdyn_msgs__msg__EStopStateType * msg);

/// Finalize msg/EStopStateType message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__EStopStateType__fini(bosdyn_msgs__msg__EStopStateType * msg);

/// Create msg/EStopStateType message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bosdyn_msgs__msg__EStopStateType__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__EStopStateType *
bosdyn_msgs__msg__EStopStateType__create();

/// Destroy msg/EStopStateType message.
/**
 * It calls
 * bosdyn_msgs__msg__EStopStateType__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__EStopStateType__destroy(bosdyn_msgs__msg__EStopStateType * msg);

/// Check for msg/EStopStateType message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__EStopStateType__are_equal(const bosdyn_msgs__msg__EStopStateType * lhs, const bosdyn_msgs__msg__EStopStateType * rhs);

/// Copy a msg/EStopStateType message.
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
bosdyn_msgs__msg__EStopStateType__copy(
  const bosdyn_msgs__msg__EStopStateType * input,
  bosdyn_msgs__msg__EStopStateType * output);

/// Initialize array of msg/EStopStateType messages.
/**
 * It allocates the memory for the number of elements and calls
 * bosdyn_msgs__msg__EStopStateType__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__EStopStateType__Sequence__init(bosdyn_msgs__msg__EStopStateType__Sequence * array, size_t size);

/// Finalize array of msg/EStopStateType messages.
/**
 * It calls
 * bosdyn_msgs__msg__EStopStateType__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__EStopStateType__Sequence__fini(bosdyn_msgs__msg__EStopStateType__Sequence * array);

/// Create array of msg/EStopStateType messages.
/**
 * It allocates the memory for the array and calls
 * bosdyn_msgs__msg__EStopStateType__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__EStopStateType__Sequence *
bosdyn_msgs__msg__EStopStateType__Sequence__create(size_t size);

/// Destroy array of msg/EStopStateType messages.
/**
 * It calls
 * bosdyn_msgs__msg__EStopStateType__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__EStopStateType__Sequence__destroy(bosdyn_msgs__msg__EStopStateType__Sequence * array);

/// Check for msg/EStopStateType message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__EStopStateType__Sequence__are_equal(const bosdyn_msgs__msg__EStopStateType__Sequence * lhs, const bosdyn_msgs__msg__EStopStateType__Sequence * rhs);

/// Copy an array of msg/EStopStateType messages.
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
bosdyn_msgs__msg__EStopStateType__Sequence__copy(
  const bosdyn_msgs__msg__EStopStateType__Sequence * input,
  bosdyn_msgs__msg__EStopStateType__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__E_STOP_STATE_TYPE__FUNCTIONS_H_
