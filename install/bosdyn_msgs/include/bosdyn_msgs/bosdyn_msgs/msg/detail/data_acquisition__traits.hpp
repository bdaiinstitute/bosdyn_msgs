// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DataAcquisition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/data_acquisition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "bosdyn_msgs/msg/detail/acquire_data_request__traits.hpp"
// Member 'completion_behavior'
#include "bosdyn_msgs/msg/detail/data_acquisition_completion_behavior__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DataAcquisition & msg,
  std::ostream & out)
{
  out << "{";
  // member: service_name
  {
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << ", ";
  }

  // member: host
  {
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << ", ";
  }

  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
    out << ", ";
  }

  // member: request_is_set
  {
    out << "request_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.request_is_set, out);
    out << ", ";
  }

  // member: completion_behavior
  {
    out << "completion_behavior: ";
    to_flow_style_yaml(msg.completion_behavior, out);
    out << ", ";
  }

  // member: group_name_format
  {
    out << "group_name_format: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name_format, out);
    out << ", ";
  }

  // member: request_name_in_blackboard
  {
    out << "request_name_in_blackboard: ";
    rosidl_generator_traits::value_to_yaml(msg.request_name_in_blackboard, out);
    out << ", ";
  }

  // member: metadata_name_in_blackboard
  {
    out << "metadata_name_in_blackboard: ";
    rosidl_generator_traits::value_to_yaml(msg.metadata_name_in_blackboard, out);
    out << ", ";
  }

  // member: action_name_format
  {
    out << "action_name_format: ";
    rosidl_generator_traits::value_to_yaml(msg.action_name_format, out);
    out << ", ";
  }

  // member: disable_cancel_on_pause_or_stop
  {
    out << "disable_cancel_on_pause_or_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_cancel_on_pause_or_stop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DataAcquisition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: service_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << "\n";
  }

  // member: host
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << "\n";
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_block_style_yaml(msg.request, out, indentation + 2);
  }

  // member: request_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.request_is_set, out);
    out << "\n";
  }

  // member: completion_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completion_behavior:\n";
    to_block_style_yaml(msg.completion_behavior, out, indentation + 2);
  }

  // member: group_name_format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name_format: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name_format, out);
    out << "\n";
  }

  // member: request_name_in_blackboard
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_name_in_blackboard: ";
    rosidl_generator_traits::value_to_yaml(msg.request_name_in_blackboard, out);
    out << "\n";
  }

  // member: metadata_name_in_blackboard
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "metadata_name_in_blackboard: ";
    rosidl_generator_traits::value_to_yaml(msg.metadata_name_in_blackboard, out);
    out << "\n";
  }

  // member: action_name_format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_name_format: ";
    rosidl_generator_traits::value_to_yaml(msg.action_name_format, out);
    out << "\n";
  }

  // member: disable_cancel_on_pause_or_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_cancel_on_pause_or_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_cancel_on_pause_or_stop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataAcquisition & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DataAcquisition & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DataAcquisition & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DataAcquisition>()
{
  return "bosdyn_msgs::msg::DataAcquisition";
}

template<>
inline const char * name<bosdyn_msgs::msg::DataAcquisition>()
{
  return "bosdyn_msgs/msg/DataAcquisition";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DataAcquisition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DataAcquisition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::DataAcquisition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION__TRAITS_HPP_
