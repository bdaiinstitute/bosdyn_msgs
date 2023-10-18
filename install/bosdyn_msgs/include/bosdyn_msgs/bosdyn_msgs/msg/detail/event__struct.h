// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bosdyn_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EVENT__STRUCT_H_
#define BOSDYN_MSGS__MSG__DETAIL__EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'description'
// Member 'source'
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'start_time'
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'level'
#include "bosdyn_msgs/msg/detail/event_level__struct.h"
// Member 'parameters'
#include "bosdyn_msgs/msg/detail/parameter__struct.h"
// Member 'log_preserve_hint'
#include "bosdyn_msgs/msg/detail/event_log_preserve_hint__struct.h"

/// Struct defined in msg/Event in the package bosdyn_msgs.
/**
  * AUTOMATICALLY GENERATED BY PROTO CONVERSION
 */
typedef struct bosdyn_msgs__msg__Event
{
  /// This message contains event data for logging to the public timeline.
  /// Type of event, typically prefixed with a project or organization, e.g. "bosdyn:startup"
  rosidl_runtime_c__String type;
  /// Event description.
  /// This is optional.
  rosidl_runtime_c__String description;
  /// A description of the source of this event. May be the client name.
  /// - Not required to be unique.
  /// - Disambiguates the source of similar event types.
  rosidl_runtime_c__String source;
  /// Unique identifier. Used to link start and end messages for events with a duration.
  /// - Long running events may have separate messages at the start and end, in case the message
  ///    for the end of the event is lost.
  /// - For events without a separate start and end message (in which case both start_time and
  ///    end time should be specified), the 'id' field will be set by the service during upload,
  ///    unless the user has already set it.
  /// - This id is not tracked internally by the service. It is only used to consume the event
  ///    timeline.
  /// - To be effective, the id value should be generated randomly by the client.
  rosidl_runtime_c__String id;
  /// Start and end times for the event:
  /// - Some events are instantaneous. For these, set start_timestamp and end_timestamp to the
  ///    same value and send a single message (without an id).
  /// - Some events take time. At the onset, send a message with a unique id, the start time, and
  ///    type. The end message should include all data from the start message, any
  ///    additional data, and an end time.  If you have the end message, you should not need
  ///    the start message since it is a strict subset.
  builtin_interfaces__msg__Time start_time;
  bool start_time_is_set;
  builtin_interfaces__msg__Time end_time;
  bool end_time_is_set;
  /// Level, or similarly "visibility," "importance," or "weight" of event.
  ///  - Higher level events will increase the visibility on the event timeline, relative to other
  ///    events.
  ///  - In general, higher level events should be more consequential with respect to the robot
  ///    operation on a per-occurence basis.
  ///  - Lower level events should be less consequential on a per occurence basis.
  ///  - Non-critical events may be one of LOW, MEDIUM, or HIGH.  UNSET is logically equivalent to
  ///    LOW level.
  ///  - Critical events may be either mission or system critical.
  ///  - System-critical is quasi-reserved for internal robot use, and is used to identify events
  ///    that directly affect robot status or capability, such as the onset of a critical fault or
  ///    start of an enabling capability.
  ///  - Mission-critical is quasi-reserved client use, and is intended for events that directly
  ///    affect the ability of the robot to "do what the user wants," such as the onset of a
  ///    service fault or start of an enabling capability.
  /// The relative importance of the event.
  bosdyn_msgs__msg__EventLevel level;
  /// Optional set of event parameters.
  bosdyn_msgs__msg__Parameter__Sequence parameters;
  /// LogPreserveHint may encode a hint to the robot's logging system for whether to preserve
  /// internal log data near the time of this event.  This could be useful in saving data
  /// to be used in a service log to send to Boston Dynamics.
  /// Optionally request that the robot try to preserve data near this time for a service log.
  bosdyn_msgs__msg__EventLogPreserveHint log_preserve_hint;
} bosdyn_msgs__msg__Event;

// Struct for a sequence of bosdyn_msgs__msg__Event.
typedef struct bosdyn_msgs__msg__Event__Sequence
{
  bosdyn_msgs__msg__Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bosdyn_msgs__msg__Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOSDYN_MSGS__MSG__DETAIL__EVENT__STRUCT_H_
