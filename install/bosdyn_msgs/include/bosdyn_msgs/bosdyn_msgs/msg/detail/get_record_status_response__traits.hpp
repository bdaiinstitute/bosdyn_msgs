// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GetRecordStatusResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_RECORD_STATUS_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_RECORD_STATUS_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/get_record_status_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'recording_environment'
#include "bosdyn_msgs/msg/detail/recording_environment__traits.hpp"
// Member 'map_state'
#include "bosdyn_msgs/msg/detail/get_record_status_response_map_state__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/get_record_status_response_status__traits.hpp"
// Member 'impaired_state'
#include "bosdyn_msgs/msg/detail/robot_impaired_state__traits.hpp"
// Member 'session_start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'map_stats'
#include "bosdyn_msgs/msg/detail/map_stats__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GetRecordStatusResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_is_set
  {
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << ", ";
  }

  // member: is_recording
  {
    out << "is_recording: ";
    rosidl_generator_traits::value_to_yaml(msg.is_recording, out);
    out << ", ";
  }

  // member: recording_environment
  {
    out << "recording_environment: ";
    to_flow_style_yaml(msg.recording_environment, out);
    out << ", ";
  }

  // member: recording_environment_is_set
  {
    out << "recording_environment_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.recording_environment_is_set, out);
    out << ", ";
  }

  // member: map_state
  {
    out << "map_state: ";
    to_flow_style_yaml(msg.map_state, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: impaired_state
  {
    out << "impaired_state: ";
    to_flow_style_yaml(msg.impaired_state, out);
    out << ", ";
  }

  // member: impaired_state_is_set
  {
    out << "impaired_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.impaired_state_is_set, out);
    out << ", ";
  }

  // member: session_start_time
  {
    out << "session_start_time: ";
    to_flow_style_yaml(msg.session_start_time, out);
    out << ", ";
  }

  // member: session_start_time_is_set
  {
    out << "session_start_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.session_start_time_is_set, out);
    out << ", ";
  }

  // member: map_stats
  {
    out << "map_stats: ";
    to_flow_style_yaml(msg.map_stats, out);
    out << ", ";
  }

  // member: map_stats_is_set
  {
    out << "map_stats_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.map_stats_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetRecordStatusResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << "\n";
  }

  // member: is_recording
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_recording: ";
    rosidl_generator_traits::value_to_yaml(msg.is_recording, out);
    out << "\n";
  }

  // member: recording_environment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recording_environment:\n";
    to_block_style_yaml(msg.recording_environment, out, indentation + 2);
  }

  // member: recording_environment_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recording_environment_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.recording_environment_is_set, out);
    out << "\n";
  }

  // member: map_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_state:\n";
    to_block_style_yaml(msg.map_state, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: impaired_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "impaired_state:\n";
    to_block_style_yaml(msg.impaired_state, out, indentation + 2);
  }

  // member: impaired_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "impaired_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.impaired_state_is_set, out);
    out << "\n";
  }

  // member: session_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_start_time:\n";
    to_block_style_yaml(msg.session_start_time, out, indentation + 2);
  }

  // member: session_start_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_start_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.session_start_time_is_set, out);
    out << "\n";
  }

  // member: map_stats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_stats:\n";
    to_block_style_yaml(msg.map_stats, out, indentation + 2);
  }

  // member: map_stats_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_stats_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.map_stats_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetRecordStatusResponse & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace bosdyn_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bosdyn_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bosdyn_msgs::msg::GetRecordStatusResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GetRecordStatusResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GetRecordStatusResponse>()
{
  return "bosdyn_msgs::msg::GetRecordStatusResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::GetRecordStatusResponse>()
{
  return "bosdyn_msgs/msg/GetRecordStatusResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GetRecordStatusResponse>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::GetRecordStatusResponseMapState>::value && has_fixed_size<bosdyn_msgs::msg::GetRecordStatusResponseStatus>::value && has_fixed_size<bosdyn_msgs::msg::MapStats>::value && has_fixed_size<bosdyn_msgs::msg::RecordingEnvironment>::value && has_fixed_size<bosdyn_msgs::msg::ResponseHeader>::value && has_fixed_size<bosdyn_msgs::msg::RobotImpairedState>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GetRecordStatusResponse>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::GetRecordStatusResponseMapState>::value && has_bounded_size<bosdyn_msgs::msg::GetRecordStatusResponseStatus>::value && has_bounded_size<bosdyn_msgs::msg::MapStats>::value && has_bounded_size<bosdyn_msgs::msg::RecordingEnvironment>::value && has_bounded_size<bosdyn_msgs::msg::ResponseHeader>::value && has_bounded_size<bosdyn_msgs::msg::RobotImpairedState>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::GetRecordStatusResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_RECORD_STATUS_RESPONSE__TRAITS_HPP_
