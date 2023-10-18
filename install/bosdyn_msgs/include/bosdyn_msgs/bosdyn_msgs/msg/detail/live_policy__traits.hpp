// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/LivePolicy.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIVE_POLICY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIVE_POLICY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/live_policy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'policy'
#include "bosdyn_msgs/msg/detail/policy__traits.hpp"
// Member 'last_checkin'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LivePolicy & msg,
  std::ostream & out)
{
  out << "{";
  // member: policy_id
  {
    out << "policy_id: ";
    rosidl_generator_traits::value_to_yaml(msg.policy_id, out);
    out << ", ";
  }

  // member: policy
  {
    out << "policy: ";
    to_flow_style_yaml(msg.policy, out);
    out << ", ";
  }

  // member: policy_is_set
  {
    out << "policy_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.policy_is_set, out);
    out << ", ";
  }

  // member: last_checkin
  {
    out << "last_checkin: ";
    to_flow_style_yaml(msg.last_checkin, out);
    out << ", ";
  }

  // member: last_checkin_is_set
  {
    out << "last_checkin_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.last_checkin_is_set, out);
    out << ", ";
  }

  // member: client_name
  {
    out << "client_name: ";
    rosidl_generator_traits::value_to_yaml(msg.client_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LivePolicy & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: policy_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "policy_id: ";
    rosidl_generator_traits::value_to_yaml(msg.policy_id, out);
    out << "\n";
  }

  // member: policy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "policy:\n";
    to_block_style_yaml(msg.policy, out, indentation + 2);
  }

  // member: policy_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "policy_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.policy_is_set, out);
    out << "\n";
  }

  // member: last_checkin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_checkin:\n";
    to_block_style_yaml(msg.last_checkin, out, indentation + 2);
  }

  // member: last_checkin_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_checkin_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.last_checkin_is_set, out);
    out << "\n";
  }

  // member: client_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_name: ";
    rosidl_generator_traits::value_to_yaml(msg.client_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LivePolicy & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::LivePolicy & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::LivePolicy & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::LivePolicy>()
{
  return "bosdyn_msgs::msg::LivePolicy";
}

template<>
inline const char * name<bosdyn_msgs::msg::LivePolicy>()
{
  return "bosdyn_msgs/msg/LivePolicy";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::LivePolicy>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::LivePolicy>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::LivePolicy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIVE_POLICY__TRAITS_HPP_
