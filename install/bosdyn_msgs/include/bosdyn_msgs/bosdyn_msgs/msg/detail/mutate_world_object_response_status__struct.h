// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/MutateWorldObjectResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_RESPONSE_STATUS__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
/**
  * Status of request is unknown. Check the status code of the response header.
 */
enum
{
  bosdyn_msgs__msg__MutateWorldObjectResponseStatus__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_OK'.
/**
  * Request was accepted; GetObjectListResponse must still be checked to verify the changes.
 */
enum
{
  bosdyn_msgs__msg__MutateWorldObjectResponseStatus__STATUS_OK = 1
};

/// Constant 'STATUS_INVALID_MUTATION_ID'.
/**
  * The mutation object's ID is unknown such that the service could not recognize this
  * object. This error applies to the CHANGE and DELETE actions, since it must identify the
  * object by it's id number given by the service.
 */
enum
{
  bosdyn_msgs__msg__MutateWorldObjectResponseStatus__STATUS_INVALID_MUTATION_ID = 2
};

/// Constant 'STATUS_NO_PERMISSION'.
/**
  * The mutation request is not allowed because it is attempting to change or delete an
  * object detected by Spot's perception system.
 */
enum
{
  bosdyn_msgs__msg__MutateWorldObjectResponseStatus__STATUS_NO_PERMISSION = 3
};

/// Constant 'STATUS_INVALID_WORLD_OBJECT'.
/**
  * The mutation request is not allowed because some aspect of the world object is invalid.
  * For example, something could be defined in an unallowed reference frame.
 */
enum
{
  bosdyn_msgs__msg__MutateWorldObjectResponseStatus__STATUS_INVALID_WORLD_OBJECT = 4
};

/// Struct defined in msg/MutateWorldObjectResponseStatus in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__MutateWorldObjectResponseStatus
{
  int8_t value;
} bosdyn_msgs__msg__MutateWorldObjectResponseStatus;

// Struct for a sequence of bosdyn_msgs__msg__MutateWorldObjectResponseStatus.
typedef struct bosdyn_msgs__msg__MutateWorldObjectResponseStatus__Sequence
{
  bosdyn_msgs__msg__MutateWorldObjectResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__MutateWorldObjectResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_RESPONSE_STATUS__STRUCT_H_
