// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bosdyn_msgs:msg/StopResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STOP_RESPONSE_STATUS__FUNCTIONS_H_
#define BOSDYN_MSGS__MSG__DETAIL__STOP_RESPONSE_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bosdyn_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bosdyn_msgs/msg/detail/stop_response_status__struct.h"

/// Initialize msg/StopResponseStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bosdyn_msgs__msg__StopResponseStatus
 * )) before or use
 * bosdyn_msgs__msg__StopResponseStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__StopResponseStatus__init(bosdyn_msgs__msg__StopResponseStatus * msg);

/// Finalize msg/StopResponseStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__StopResponseStatus__fini(bosdyn_msgs__msg__StopResponseStatus * msg);

/// Create msg/StopResponseStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bosdyn_msgs__msg__StopResponseStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__StopResponseStatus *
bosdyn_msgs__msg__StopResponseStatus__create();

/// Destroy msg/StopResponseStatus message.
/**
 * It calls
 * bosdyn_msgs__msg__StopResponseStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__StopResponseStatus__destroy(bosdyn_msgs__msg__StopResponseStatus * msg);

/// Check for msg/StopResponseStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__StopResponseStatus__are_equal(const bosdyn_msgs__msg__StopResponseStatus * lhs, const bosdyn_msgs__msg__StopResponseStatus * rhs);

/// Copy a msg/StopResponseStatus message.
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
bosdyn_msgs__msg__StopResponseStatus__copy(
  const bosdyn_msgs__msg__StopResponseStatus * input,
  bosdyn_msgs__msg__StopResponseStatus * output);

/// Initialize array of msg/StopResponseStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * bosdyn_msgs__msg__StopResponseStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__StopResponseStatus__Sequence__init(bosdyn_msgs__msg__StopResponseStatus__Sequence * array, size_t size);

/// Finalize array of msg/StopResponseStatus messages.
/**
 * It calls
 * bosdyn_msgs__msg__StopResponseStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__StopResponseStatus__Sequence__fini(bosdyn_msgs__msg__StopResponseStatus__Sequence * array);

/// Create array of msg/StopResponseStatus messages.
/**
 * It allocates the memory for the array and calls
 * bosdyn_msgs__msg__StopResponseStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__StopResponseStatus__Sequence *
bosdyn_msgs__msg__StopResponseStatus__Sequence__create(size_t size);

/// Destroy array of msg/StopResponseStatus messages.
/**
 * It calls
 * bosdyn_msgs__msg__StopResponseStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__StopResponseStatus__Sequence__destroy(bosdyn_msgs__msg__StopResponseStatus__Sequence * array);

/// Check for msg/StopResponseStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__StopResponseStatus__Sequence__are_equal(const bosdyn_msgs__msg__StopResponseStatus__Sequence * lhs, const bosdyn_msgs__msg__StopResponseStatus__Sequence * rhs);

/// Copy an array of msg/StopResponseStatus messages.
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
bosdyn_msgs__msg__StopResponseStatus__Sequence__copy(
  const bosdyn_msgs__msg__StopResponseStatus__Sequence * input,
  bosdyn_msgs__msg__StopResponseStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__STOP_RESPONSE_STATUS__FUNCTIONS_H_
