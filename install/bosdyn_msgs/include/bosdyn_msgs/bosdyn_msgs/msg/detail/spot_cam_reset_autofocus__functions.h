// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bosdyn_msgs:msg/SpotCamResetAutofocus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_RESET_AUTOFOCUS__FUNCTIONS_H_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_RESET_AUTOFOCUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bosdyn_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bosdyn_msgs/msg/detail/spot_cam_reset_autofocus__struct.h"

/// Initialize msg/SpotCamResetAutofocus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bosdyn_msgs__msg__SpotCamResetAutofocus
 * )) before or use
 * bosdyn_msgs__msg__SpotCamResetAutofocus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__SpotCamResetAutofocus__init(bosdyn_msgs__msg__SpotCamResetAutofocus * msg);

/// Finalize msg/SpotCamResetAutofocus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__SpotCamResetAutofocus__fini(bosdyn_msgs__msg__SpotCamResetAutofocus * msg);

/// Create msg/SpotCamResetAutofocus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bosdyn_msgs__msg__SpotCamResetAutofocus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__SpotCamResetAutofocus *
bosdyn_msgs__msg__SpotCamResetAutofocus__create();

/// Destroy msg/SpotCamResetAutofocus message.
/**
 * It calls
 * bosdyn_msgs__msg__SpotCamResetAutofocus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__SpotCamResetAutofocus__destroy(bosdyn_msgs__msg__SpotCamResetAutofocus * msg);

/// Check for msg/SpotCamResetAutofocus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__SpotCamResetAutofocus__are_equal(const bosdyn_msgs__msg__SpotCamResetAutofocus * lhs, const bosdyn_msgs__msg__SpotCamResetAutofocus * rhs);

/// Copy a msg/SpotCamResetAutofocus message.
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
bosdyn_msgs__msg__SpotCamResetAutofocus__copy(
  const bosdyn_msgs__msg__SpotCamResetAutofocus * input,
  bosdyn_msgs__msg__SpotCamResetAutofocus * output);

/// Initialize array of msg/SpotCamResetAutofocus messages.
/**
 * It allocates the memory for the number of elements and calls
 * bosdyn_msgs__msg__SpotCamResetAutofocus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence__init(bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence * array, size_t size);

/// Finalize array of msg/SpotCamResetAutofocus messages.
/**
 * It calls
 * bosdyn_msgs__msg__SpotCamResetAutofocus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence__fini(bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence * array);

/// Create array of msg/SpotCamResetAutofocus messages.
/**
 * It allocates the memory for the array and calls
 * bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence *
bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence__create(size_t size);

/// Destroy array of msg/SpotCamResetAutofocus messages.
/**
 * It calls
 * bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
void
bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence__destroy(bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence * array);

/// Check for msg/SpotCamResetAutofocus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bosdyn_msgs
bool
bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence__are_equal(const bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence * lhs, const bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence * rhs);

/// Copy an array of msg/SpotCamResetAutofocus messages.
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
bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence__copy(
  const bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence * input,
  bosdyn_msgs__msg__SpotCamResetAutofocus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_RESET_AUTOFOCUS__FUNCTIONS_H_
