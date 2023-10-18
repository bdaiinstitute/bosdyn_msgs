// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bosdyn_msgs:msg/ImageFormat.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_FORMAT__FUNCTIONS_H_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_FORMAT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bosdyn_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bosdyn_msgs/msg/detail/image_format__struct.h"

/// Initialize msg/ImageFormat message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bosdyn_msgs__msg__ImageFormat
 * )) before or use
 * bosdyn_msgs__msg__ImageFormat__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ImageFormat__init(bosdyn_msgs__msg__ImageFormat * msg);

/// Finalize msg/ImageFormat message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ImageFormat__fini(bosdyn_msgs__msg__ImageFormat * msg);

/// Create msg/ImageFormat message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bosdyn_msgs__msg__ImageFormat__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__ImageFormat *
bosdyn_msgs__msg__ImageFormat__create();

/// Destroy msg/ImageFormat message.
/**
 * It calls
 * bosdyn_msgs__msg__ImageFormat__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ImageFormat__destroy(bosdyn_msgs__msg__ImageFormat * msg);

/// Check for msg/ImageFormat message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ImageFormat__are_equal(const bosdyn_msgs__msg__ImageFormat * lhs, const bosdyn_msgs__msg__ImageFormat * rhs);

/// Copy a msg/ImageFormat message.
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
bosdyn_msgs__msg__ImageFormat__copy(
  const bosdyn_msgs__msg__ImageFormat * input,
  bosdyn_msgs__msg__ImageFormat * output);

/// Initialize array of msg/ImageFormat messages.
/**
 * It allocates the memory for the number of elements and calls
 * bosdyn_msgs__msg__ImageFormat__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ImageFormat__Sequence__init(bosdyn_msgs__msg__ImageFormat__Sequence * array, size_t size);

/// Finalize array of msg/ImageFormat messages.
/**
 * It calls
 * bosdyn_msgs__msg__ImageFormat__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ImageFormat__Sequence__fini(bosdyn_msgs__msg__ImageFormat__Sequence * array);

/// Create array of msg/ImageFormat messages.
/**
 * It allocates the memory for the array and calls
 * bosdyn_msgs__msg__ImageFormat__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__ImageFormat__Sequence *
bosdyn_msgs__msg__ImageFormat__Sequence__create(size_t size);

/// Destroy array of msg/ImageFormat messages.
/**
 * It calls
 * bosdyn_msgs__msg__ImageFormat__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ImageFormat__Sequence__destroy(bosdyn_msgs__msg__ImageFormat__Sequence * array);

/// Check for msg/ImageFormat message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ImageFormat__Sequence__are_equal(const bosdyn_msgs__msg__ImageFormat__Sequence * lhs, const bosdyn_msgs__msg__ImageFormat__Sequence * rhs);

/// Copy an array of msg/ImageFormat messages.
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
bosdyn_msgs__msg__ImageFormat__Sequence__copy(
  const bosdyn_msgs__msg__ImageFormat__Sequence * input,
  bosdyn_msgs__msg__ImageFormat__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_FORMAT__FUNCTIONS_H_
