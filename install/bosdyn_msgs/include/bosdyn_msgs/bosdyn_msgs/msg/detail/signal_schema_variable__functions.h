// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bosdyn_msgs:msg/SignalSchemaVariable.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_VARIABLE__FUNCTIONS_H_
#define BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_VARIABLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bosdyn_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bosdyn_msgs/msg/detail/signal_schema_variable__struct.h"

/// Initialize msg/SignalSchemaVariable message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bosdyn_msgs__msg__SignalSchemaVariable
 * )) before or use
 * bosdyn_msgs__msg__SignalSchemaVariable__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__SignalSchemaVariable__init(bosdyn_msgs__msg__SignalSchemaVariable * msg);

/// Finalize msg/SignalSchemaVariable message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__SignalSchemaVariable__fini(bosdyn_msgs__msg__SignalSchemaVariable * msg);

/// Create msg/SignalSchemaVariable message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bosdyn_msgs__msg__SignalSchemaVariable__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__SignalSchemaVariable *
bosdyn_msgs__msg__SignalSchemaVariable__create();

/// Destroy msg/SignalSchemaVariable message.
/**
 * It calls
 * bosdyn_msgs__msg__SignalSchemaVariable__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__SignalSchemaVariable__destroy(bosdyn_msgs__msg__SignalSchemaVariable * msg);

/// Check for msg/SignalSchemaVariable message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__SignalSchemaVariable__are_equal(const bosdyn_msgs__msg__SignalSchemaVariable * lhs, const bosdyn_msgs__msg__SignalSchemaVariable * rhs);

/// Copy a msg/SignalSchemaVariable message.
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
bosdyn_msgs__msg__SignalSchemaVariable__copy(
  const bosdyn_msgs__msg__SignalSchemaVariable * input,
  bosdyn_msgs__msg__SignalSchemaVariable * output);

/// Initialize array of msg/SignalSchemaVariable messages.
/**
 * It allocates the memory for the number of elements and calls
 * bosdyn_msgs__msg__SignalSchemaVariable__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__SignalSchemaVariable__Sequence__init(bosdyn_msgs__msg__SignalSchemaVariable__Sequence * array, size_t size);

/// Finalize array of msg/SignalSchemaVariable messages.
/**
 * It calls
 * bosdyn_msgs__msg__SignalSchemaVariable__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__SignalSchemaVariable__Sequence__fini(bosdyn_msgs__msg__SignalSchemaVariable__Sequence * array);

/// Create array of msg/SignalSchemaVariable messages.
/**
 * It allocates the memory for the array and calls
 * bosdyn_msgs__msg__SignalSchemaVariable__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__SignalSchemaVariable__Sequence *
bosdyn_msgs__msg__SignalSchemaVariable__Sequence__create(size_t size);

/// Destroy array of msg/SignalSchemaVariable messages.
/**
 * It calls
 * bosdyn_msgs__msg__SignalSchemaVariable__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__SignalSchemaVariable__Sequence__destroy(bosdyn_msgs__msg__SignalSchemaVariable__Sequence * array);

/// Check for msg/SignalSchemaVariable message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__SignalSchemaVariable__Sequence__are_equal(const bosdyn_msgs__msg__SignalSchemaVariable__Sequence * lhs, const bosdyn_msgs__msg__SignalSchemaVariable__Sequence * rhs);

/// Copy an array of msg/SignalSchemaVariable messages.
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
bosdyn_msgs__msg__SignalSchemaVariable__Sequence__copy(
  const bosdyn_msgs__msg__SignalSchemaVariable__Sequence * input,
  bosdyn_msgs__msg__SignalSchemaVariable__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_VARIABLE__FUNCTIONS_H_
