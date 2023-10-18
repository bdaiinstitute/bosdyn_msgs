// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'command'
#include "bosdyn_msgs/msg/detail/arm_command_request_one_of_command__traits.hpp"
// Member 'params'
#include "bosdyn_msgs/msg/detail/arm_params__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmCommandRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    to_flow_style_yaml(msg.command, out);
    out << ", ";
  }

  // member: params
  {
    out << "params: ";
    to_flow_style_yaml(msg.params, out);
    out << ", ";
  }

  // member: params_is_set
  {
    out << "params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.params_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command:\n";
    to_block_style_yaml(msg.command, out, indentation + 2);
  }

  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params:\n";
    to_block_style_yaml(msg.params, out, indentation + 2);
  }

  // member: params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.params_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmCommandRequest>()
{
  return "bosdyn_msgs::msg::ArmCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmCommandRequest>()
{
  return "bosdyn_msgs/msg/ArmCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmCommandRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand>::value && has_fixed_size<bosdyn_msgs::msg::ArmParams>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmCommandRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ArmCommandRequestOneOfCommand>::value && has_bounded_size<bosdyn_msgs::msg::ArmParams>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_REQUEST__TRAITS_HPP_
