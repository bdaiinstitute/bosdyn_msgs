// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AcquireDataRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_DATA_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_DATA_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/acquire_data_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'action_id'
#include "bosdyn_msgs/msg/detail/capture_action_id__traits.hpp"
// Member 'metadata'
#include "bosdyn_msgs/msg/detail/metadata__traits.hpp"
// Member 'acquisition_requests'
#include "bosdyn_msgs/msg/detail/acquisition_request_list__traits.hpp"
// Member 'min_timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AcquireDataRequest & msg,
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

  // member: action_id
  {
    out << "action_id: ";
    to_flow_style_yaml(msg.action_id, out);
    out << ", ";
  }

  // member: action_id_is_set
  {
    out << "action_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.action_id_is_set, out);
    out << ", ";
  }

  // member: metadata
  {
    out << "metadata: ";
    to_flow_style_yaml(msg.metadata, out);
    out << ", ";
  }

  // member: metadata_is_set
  {
    out << "metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.metadata_is_set, out);
    out << ", ";
  }

  // member: acquisition_requests
  {
    out << "acquisition_requests: ";
    to_flow_style_yaml(msg.acquisition_requests, out);
    out << ", ";
  }

  // member: acquisition_requests_is_set
  {
    out << "acquisition_requests_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_requests_is_set, out);
    out << ", ";
  }

  // member: min_timeout
  {
    out << "min_timeout: ";
    to_flow_style_yaml(msg.min_timeout, out);
    out << ", ";
  }

  // member: min_timeout_is_set
  {
    out << "min_timeout_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.min_timeout_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcquireDataRequest & msg,
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

  // member: action_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_id:\n";
    to_block_style_yaml(msg.action_id, out, indentation + 2);
  }

  // member: action_id_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.action_id_is_set, out);
    out << "\n";
  }

  // member: metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "metadata:\n";
    to_block_style_yaml(msg.metadata, out, indentation + 2);
  }

  // member: metadata_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.metadata_is_set, out);
    out << "\n";
  }

  // member: acquisition_requests
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_requests:\n";
    to_block_style_yaml(msg.acquisition_requests, out, indentation + 2);
  }

  // member: acquisition_requests_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_requests_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_requests_is_set, out);
    out << "\n";
  }

  // member: min_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_timeout:\n";
    to_block_style_yaml(msg.min_timeout, out, indentation + 2);
  }

  // member: min_timeout_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_timeout_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.min_timeout_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcquireDataRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AcquireDataRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AcquireDataRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AcquireDataRequest>()
{
  return "bosdyn_msgs::msg::AcquireDataRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::AcquireDataRequest>()
{
  return "bosdyn_msgs/msg/AcquireDataRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AcquireDataRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::AcquisitionRequestList>::value && has_fixed_size<bosdyn_msgs::msg::CaptureActionId>::value && has_fixed_size<bosdyn_msgs::msg::Metadata>::value && has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value && has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AcquireDataRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::AcquisitionRequestList>::value && has_bounded_size<bosdyn_msgs::msg::CaptureActionId>::value && has_bounded_size<bosdyn_msgs::msg::Metadata>::value && has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value && has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::AcquireDataRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_DATA_REQUEST__TRAITS_HPP_
