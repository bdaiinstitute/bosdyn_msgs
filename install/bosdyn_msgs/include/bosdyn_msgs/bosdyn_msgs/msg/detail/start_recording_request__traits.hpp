// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StartRecordingRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/start_recording_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__traits.hpp"
// Member 'recording_environment'
#include "bosdyn_msgs/msg/detail/recording_environment__traits.hpp"
// Member 'session_start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StartRecordingRequest & msg,
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

  // member: lease
  {
    out << "lease: ";
    to_flow_style_yaml(msg.lease, out);
    out << ", ";
  }

  // member: lease_is_set
  {
    out << "lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_is_set, out);
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

  // member: require_fiducials
  {
    if (msg.require_fiducials.size() == 0) {
      out << "require_fiducials: []";
    } else {
      out << "require_fiducials: [";
      size_t pending_items = msg.require_fiducials.size();
      for (auto item : msg.require_fiducials) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartRecordingRequest & msg,
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

  // member: lease
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease:\n";
    to_block_style_yaml(msg.lease, out, indentation + 2);
  }

  // member: lease_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_is_set, out);
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

  // member: require_fiducials
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.require_fiducials.size() == 0) {
      out << "require_fiducials: []\n";
    } else {
      out << "require_fiducials:\n";
      for (auto item : msg.require_fiducials) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartRecordingRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StartRecordingRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StartRecordingRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StartRecordingRequest>()
{
  return "bosdyn_msgs::msg::StartRecordingRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::StartRecordingRequest>()
{
  return "bosdyn_msgs/msg/StartRecordingRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StartRecordingRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StartRecordingRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::StartRecordingRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_REQUEST__TRAITS_HPP_
