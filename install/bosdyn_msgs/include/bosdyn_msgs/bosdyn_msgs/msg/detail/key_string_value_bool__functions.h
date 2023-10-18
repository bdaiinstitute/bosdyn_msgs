// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bosdyn_msgs:msg/KeyStringValueBool.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOOL__FUNCTIONS_H_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOOL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bosdyn_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bosdyn_msgs/msg/detail/key_string_value_bool__struct.h"

/// Initialize msg/KeyStringValueBool message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bosdyn_msgs__msg__KeyStringValueBool
 * )) before or use
 * bosdyn_msgs__msg__KeyStringValueBool__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__KeyStringValueBool__init(bosdyn_msgs__msg__KeyStringValueBool * msg);

/// Finalize msg/KeyStringValueBool message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__KeyStringValueBool__fini(bosdyn_msgs__msg__KeyStringValueBool * msg);

/// Create msg/KeyStringValueBool message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bosdyn_msgs__msg__KeyStringValueBool__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__KeyStringValueBool *
bosdyn_msgs__msg__KeyStringValueBool__create();

/// Destroy msg/KeyStringValueBool message.
/**
 * It calls
 * bosdyn_msgs__msg__KeyStringValueBool__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__KeyStringValueBool__destroy(bosdyn_msgs__msg__KeyStringValueBool * msg);

/// Check for msg/KeyStringValueBool message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__KeyStringValueBool__are_equal(const bosdyn_msgs__msg__KeyStringValueBool * lhs, const bosdyn_msgs__msg__KeyStringValueBool * rhs);

/// Copy a msg/KeyStringValueBool message.
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
bosdyn_msgs__msg__KeyStringValueBool__copy(
  const bosdyn_msgs__msg__KeyStringValueBool * input,
  bosdyn_msgs__msg__KeyStringValueBool * output);

/// Initialize array of msg/KeyStringValueBool messages.
/**
 * It allocates the memory for the number of elements and calls
 * bosdyn_msgs__msg__KeyStringValueBool__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__KeyStringValueBool__Sequence__init(bosdyn_msgs__msg__KeyStringValueBool__Sequence * array, size_t size);

/// Finalize array of msg/KeyStringValueBool messages.
/**
 * It calls
 * bosdyn_msgs__msg__KeyStringValueBool__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__KeyStringValueBool__Sequence__fini(bosdyn_msgs__msg__KeyStringValueBool__Sequence * array);

/// Create array of msg/KeyStringValueBool messages.
/**
 * It allocates the memory for the array and calls
 * bosdyn_msgs__msg__KeyStringValueBool__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__KeyStringValueBool__Sequence *
bosdyn_msgs__msg__KeyStringValueBool__Sequence__create(size_t size);

/// Destroy array of msg/KeyStringValueBool messages.
/**
 * It calls
 * bosdyn_msgs__msg__KeyStringValueBool__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__KeyStringValueBool__Sequence__destroy(bosdyn_msgs__msg__KeyStringValueBool__Sequence * array);

/// Check for msg/KeyStringValueBool message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__KeyStringValueBool__Sequence__are_equal(const bosdyn_msgs__msg__KeyStringValueBool__Sequence * lhs, const bosdyn_msgs__msg__KeyStringValueBool__Sequence * rhs);

/// Copy an array of msg/KeyStringValueBool messages.
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
bosdyn_msgs__msg__KeyStringValueBool__Sequence__copy(
  const bosdyn_msgs__msg__KeyStringValueBool__Sequence * input,
  bosdyn_msgs__msg__KeyStringValueBool__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOOL__FUNCTIONS_H_
