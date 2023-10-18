// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bosdyn_msgs:msg/ResourceTree.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESOURCE_TREE__FUNCTIONS_H_
#define BOSDYN_MSGS__MSG__DETAIL__RESOURCE_TREE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bosdyn_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bosdyn_msgs/msg/detail/resource_tree__struct.h"

/// Initialize msg/ResourceTree message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bosdyn_msgs__msg__ResourceTree
 * )) before or use
 * bosdyn_msgs__msg__ResourceTree__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ResourceTree__init(bosdyn_msgs__msg__ResourceTree * msg);

/// Finalize msg/ResourceTree message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ResourceTree__fini(bosdyn_msgs__msg__ResourceTree * msg);

/// Create msg/ResourceTree message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bosdyn_msgs__msg__ResourceTree__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__ResourceTree *
bosdyn_msgs__msg__ResourceTree__create();

/// Destroy msg/ResourceTree message.
/**
 * It calls
 * bosdyn_msgs__msg__ResourceTree__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ResourceTree__destroy(bosdyn_msgs__msg__ResourceTree * msg);

/// Check for msg/ResourceTree message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ResourceTree__are_equal(const bosdyn_msgs__msg__ResourceTree * lhs, const bosdyn_msgs__msg__ResourceTree * rhs);

/// Copy a msg/ResourceTree message.
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
bosdyn_msgs__msg__ResourceTree__copy(
  const bosdyn_msgs__msg__ResourceTree * input,
  bosdyn_msgs__msg__ResourceTree * output);

/// Initialize array of msg/ResourceTree messages.
/**
 * It allocates the memory for the number of elements and calls
 * bosdyn_msgs__msg__ResourceTree__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ResourceTree__Sequence__init(bosdyn_msgs__msg__ResourceTree__Sequence * array, size_t size);

/// Finalize array of msg/ResourceTree messages.
/**
 * It calls
 * bosdyn_msgs__msg__ResourceTree__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ResourceTree__Sequence__fini(bosdyn_msgs__msg__ResourceTree__Sequence * array);

/// Create array of msg/ResourceTree messages.
/**
 * It allocates the memory for the array and calls
 * bosdyn_msgs__msg__ResourceTree__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__ResourceTree__Sequence *
bosdyn_msgs__msg__ResourceTree__Sequence__create(size_t size);

/// Destroy array of msg/ResourceTree messages.
/**
 * It calls
 * bosdyn_msgs__msg__ResourceTree__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__ResourceTree__Sequence__destroy(bosdyn_msgs__msg__ResourceTree__Sequence * array);

/// Check for msg/ResourceTree message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__ResourceTree__Sequence__are_equal(const bosdyn_msgs__msg__ResourceTree__Sequence * lhs, const bosdyn_msgs__msg__ResourceTree__Sequence * rhs);

/// Copy an array of msg/ResourceTree messages.
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
bosdyn_msgs__msg__ResourceTree__Sequence__copy(
  const bosdyn_msgs__msg__ResourceTree__Sequence * input,
  bosdyn_msgs__msg__ResourceTree__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESOURCE_TREE__FUNCTIONS_H_
