// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ServiceEntry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/service_entry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'service_type'
#include "bosdyn_msgs/msg/detail/service_entry_one_of_service_type__traits.hpp"
// Member 'last_update'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServiceEntry & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: service_type
  {
    out << "service_type: ";
    to_flow_style_yaml(msg.service_type, out);
    out << ", ";
  }

  // member: authority
  {
    out << "authority: ";
    rosidl_generator_traits::value_to_yaml(msg.authority, out);
    out << ", ";
  }

  // member: last_update
  {
    out << "last_update: ";
    to_flow_style_yaml(msg.last_update, out);
    out << ", ";
  }

  // member: last_update_is_set
  {
    out << "last_update_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.last_update_is_set, out);
    out << ", ";
  }

  // member: user_token_required
  {
    out << "user_token_required: ";
    rosidl_generator_traits::value_to_yaml(msg.user_token_required, out);
    out << ", ";
  }

  // member: permission_required
  {
    out << "permission_required: ";
    rosidl_generator_traits::value_to_yaml(msg.permission_required, out);
    out << ", ";
  }

  // member: liveness_timeout_secs
  {
    out << "liveness_timeout_secs: ";
    rosidl_generator_traits::value_to_yaml(msg.liveness_timeout_secs, out);
    out << ", ";
  }

  // member: host_payload_guid
  {
    out << "host_payload_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.host_payload_guid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServiceEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: service_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_type:\n";
    to_block_style_yaml(msg.service_type, out, indentation + 2);
  }

  // member: authority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "authority: ";
    rosidl_generator_traits::value_to_yaml(msg.authority, out);
    out << "\n";
  }

  // member: last_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_update:\n";
    to_block_style_yaml(msg.last_update, out, indentation + 2);
  }

  // member: last_update_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_update_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.last_update_is_set, out);
    out << "\n";
  }

  // member: user_token_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_token_required: ";
    rosidl_generator_traits::value_to_yaml(msg.user_token_required, out);
    out << "\n";
  }

  // member: permission_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "permission_required: ";
    rosidl_generator_traits::value_to_yaml(msg.permission_required, out);
    out << "\n";
  }

  // member: liveness_timeout_secs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "liveness_timeout_secs: ";
    rosidl_generator_traits::value_to_yaml(msg.liveness_timeout_secs, out);
    out << "\n";
  }

  // member: host_payload_guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host_payload_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.host_payload_guid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServiceEntry & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ServiceEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ServiceEntry & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ServiceEntry>()
{
  return "bosdyn_msgs::msg::ServiceEntry";
}

template<>
inline const char * name<bosdyn_msgs::msg::ServiceEntry>()
{
  return "bosdyn_msgs/msg/ServiceEntry";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ServiceEntry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ServiceEntry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ServiceEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY__TRAITS_HPP_
