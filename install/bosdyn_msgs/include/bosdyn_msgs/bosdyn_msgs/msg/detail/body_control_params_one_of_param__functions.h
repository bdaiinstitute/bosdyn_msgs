// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bosdyn_msgs:msg/BodyControlParamsOneOfParam.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_ONE_OF_PARAM__FUNCTIONS_H_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_ONE_OF_PARAM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bosdyn_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bosdyn_msgs/msg/detail/body_control_params_one_of_param__struct.h"

/// Initialize msg/BodyControlParamsOneOfParam message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bosdyn_msgs__msg__BodyControlParamsOneOfParam
 * )) before or use
 * bosdyn_msgs__msg__BodyControlParamsOneOfParam__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__BodyControlParamsOneOfParam__init(bosdyn_msgs__msg__BodyControlParamsOneOfParam * msg);

/// Finalize msg/BodyControlParamsOneOfParam message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__BodyControlParamsOneOfParam__fini(bosdyn_msgs__msg__BodyControlParamsOneOfParam * msg);

/// Create msg/BodyControlParamsOneOfParam message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bosdyn_msgs__msg__BodyControlParamsOneOfParam__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__BodyControlParamsOneOfParam *
bosdyn_msgs__msg__BodyControlParamsOneOfParam__create();

/// Destroy msg/BodyControlParamsOneOfParam message.
/**
 * It calls
 * bosdyn_msgs__msg__BodyControlParamsOneOfParam__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__BodyControlParamsOneOfParam__destroy(bosdyn_msgs__msg__BodyControlParamsOneOfParam * msg);

/// Check for msg/BodyControlParamsOneOfParam message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__BodyControlParamsOneOfParam__are_equal(const bosdyn_msgs__msg__BodyControlParamsOneOfParam * lhs, const bosdyn_msgs__msg__BodyControlParamsOneOfParam * rhs);

/// Copy a msg/BodyControlParamsOneOfParam message.
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
bosdyn_msgs__msg__BodyControlParamsOneOfParam__copy(
  const bosdyn_msgs__msg__BodyControlParamsOneOfParam * input,
  bosdyn_msgs__msg__BodyControlParamsOneOfParam * output);

/// Initialize array of msg/BodyControlParamsOneOfParam messages.
/**
 * It allocates the memory for the number of elements and calls
 * bosdyn_msgs__msg__BodyControlParamsOneOfParam__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__init(bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * array, size_t size);

/// Finalize array of msg/BodyControlParamsOneOfParam messages.
/**
 * It calls
 * bosdyn_msgs__msg__BodyControlParamsOneOfParam__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__fini(bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * array);

/// Create array of msg/BodyControlParamsOneOfParam messages.
/**
 * It allocates the memory for the array and calls
 * bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence *
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__create(size_t size);

/// Destroy array of msg/BodyControlParamsOneOfParam messages.
/**
 * It calls
 * bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__destroy(bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * array);

/// Check for msg/BodyControlParamsOneOfParam message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__are_equal(const bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * lhs, const bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * rhs);

/// Copy an array of msg/BodyControlParamsOneOfParam messages.
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
bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence__copy(
  const bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * input,
  bosdyn_msgs__msg__BodyControlParamsOneOfParam__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_ONE_OF_PARAM__FUNCTIONS_H_
