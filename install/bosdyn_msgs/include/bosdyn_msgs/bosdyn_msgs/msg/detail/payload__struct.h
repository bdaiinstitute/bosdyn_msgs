// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Payload.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'guid'
// Member 'name'
// Member 'description'
// Member 'label_prefix'
// Member 'ipv4_address'
#include "rosidl_runtime_c/string.h"
// Member 'version'
#include "bosdyn_msgs/msg/detail/software_version__struct.h"
// Member 'body_tform_payload'
// Member 'mount_tform_payload'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'mount_frame_name'
#include "bosdyn_msgs/msg/detail/mount_frame_name__struct.h"
// Member 'mass_volume_properties'
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__struct.h"
// Member 'preset_configurations'
#include "bosdyn_msgs/msg/detail/payload_preset__struct.h"

/// Struct defined in msg/Payload in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Payload
{
  /// A Payload describes a single payload installed on the Spot platform.
  /// It includes all external information necessary to represent
  /// the payload to the user as a single record.
  /// A unique id provided by the payload or auto-generated by the website.
  rosidl_runtime_c__String guid;
  /// A human readable name describing this payload. It is provided by the
  /// payload as part of the payload announcement system.
  rosidl_runtime_c__String name;
  /// A human-readable description string providing more context as to the
  /// function of this payload. It is displayed in UIs.
  rosidl_runtime_c__String description;
  /// A list of labels used to indicate what type of payload this is.
  rosidl_runtime_c__String__Sequence label_prefix;
  /// Set true once the payload is authorized by the administrator in the payload webpage.
  /// Must be set to false at registration time.
  bool is_authorized;
  /// Set true if the payload is attached to the robot.
  /// Must be set to false at registration time.
  bool is_enabled;
  /// Set true for payloads registered without their own computers. These records
  /// are all manually entered.
  bool is_noncompute_payload;
  /// Payload version details.
  bosdyn_msgs__msg__SoftwareVersion version;
  bool version_is_set;
  /// The pose of the payload relative to the body frame.
  geometry_msgs__msg__Pose body_tform_payload;
  bool body_tform_payload_is_set;
  /// The pose of the payload relative to the mount frame.
  geometry_msgs__msg__Pose mount_tform_payload;
  bool mount_tform_payload_is_set;
  /// Optional - mount frame_name (if not included, payload is assumed to be in the body mount
  /// frame)
  bosdyn_msgs__msg__MountFrameName mount_frame_name;
  /// Number of seconds to wait between heartbeats before assuming payload is no longer live
  /// If unset (0) liveness checks will be disabled for this service.
  double liveness_timeout_secs;
  /// IP address of the payload for the robot to ping
  /// If left empty, assume that the payload will send heartbeats
  rosidl_runtime_c__String ipv4_address;
  /// In mbps (10, 100, 1000, etc)
  int32_t link_speed;
  /// The mass and volume properties of the payload.
  bosdyn_msgs__msg__PayloadMassVolumeProperties mass_volume_properties;
  bool mass_volume_properties_is_set;
  /// A list of possible physical configurations for the payload.
  bosdyn_msgs__msg__PayloadPreset__Sequence preset_configurations;
} bosdyn_msgs__msg__Payload;

// Struct for a sequence of bosdyn_msgs__msg__Payload.
typedef struct bosdyn_msgs__msg__Payload__Sequence
{
  bosdyn_msgs__msg__Payload * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Payload__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD__STRUCT_H_
