// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bosdyn_msgs:msg/ScreenDescription.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SCREEN_DESCRIPTION__FUNCTIONS_H_
#define BOSDYN_MSGS__MSG__DETAIL__SCREEN_DESCRIPTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bosdyn_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bosdyn_msgs/msg/detail/screen_description__struct.h"

/// Initialize msg/ScreenDescription message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bosdyn_msgs__msg__ScreenDescription
 * )) before or use
 * bosdyn_msgs__msg__ScreenDescription__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ScreenDescription__init(bosdyn_msgs__msg__ScreenDescription * msg);

/// Finalize msg/ScreenDescription message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ScreenDescription__fini(bosdyn_msgs__msg__ScreenDescription * msg);

/// Create msg/ScreenDescription message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bosdyn_msgs__msg__ScreenDescription__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__ScreenDescription *
bosdyn_msgs__msg__ScreenDescription__create();

/// Destroy msg/ScreenDescription message.
/**
 * It calls
 * bosdyn_msgs__msg__ScreenDescription__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ScreenDescription__destroy(bosdyn_msgs__msg__ScreenDescription * msg);

/// Check for msg/ScreenDescription message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ScreenDescription__are_equal(const bosdyn_msgs__msg__ScreenDescription * lhs, const bosdyn_msgs__msg__ScreenDescription * rhs);

/// Copy a msg/ScreenDescription message.
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
bosdyn_msgs__msg__ScreenDescription__copy(
  const bosdyn_msgs__msg__ScreenDescription * input,
  bosdyn_msgs__msg__ScreenDescription * output);

/// Initialize array of msg/ScreenDescription messages.
/**
 * It allocates the memory for the number of elements and calls
 * bosdyn_msgs__msg__ScreenDescription__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ScreenDescription__Sequence__init(bosdyn_msgs__msg__ScreenDescription__Sequence * array, size_t size);

/// Finalize array of msg/ScreenDescription messages.
/**
 * It calls
 * bosdyn_msgs__msg__ScreenDescription__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ScreenDescription__Sequence__fini(bosdyn_msgs__msg__ScreenDescription__Sequence * array);

/// Create array of msg/ScreenDescription messages.
/**
 * It allocates the memory for the array and calls
 * bosdyn_msgs__msg__ScreenDescription__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__ScreenDescription__Sequence *
bosdyn_msgs__msg__ScreenDescription__Sequence__create(size_t size);

/// Destroy array of msg/ScreenDescription messages.
/**
 * It calls
 * bosdyn_msgs__msg__ScreenDescription__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ScreenDescription__Sequence__destroy(bosdyn_msgs__msg__ScreenDescription__Sequence * array);

/// Check for msg/ScreenDescription message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ScreenDescription__Sequence__are_equal(const bosdyn_msgs__msg__ScreenDescription__Sequence * lhs, const bosdyn_msgs__msg__ScreenDescription__Sequence * rhs);

/// Copy an array of msg/ScreenDescription messages.
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
bosdyn_msgs__msg__ScreenDescription__Sequence__copy(
  const bosdyn_msgs__msg__ScreenDescription__Sequence * input,
  bosdyn_msgs__msg__ScreenDescription__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SCREEN_DESCRIPTION__FUNCTIONS_H_
