// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/NamedArmPositionsCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAMED_ARM_POSITIONS_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAMED_ARM_POSITIONS_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/named_arm_positions_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "bosdyn_msgs/msg/detail/named_arm_positions_command_positions__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NamedArmPositionsCommandRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NamedArmPositionsCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NamedArmPositionsCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::NamedArmPositionsCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::NamedArmPositionsCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::NamedArmPositionsCommandRequest>()
{
  return "bosdyn_msgs::msg::NamedArmPositionsCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::NamedArmPositionsCommandRequest>()
{
  return "bosdyn_msgs/msg/NamedArmPositionsCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::NamedArmPositionsCommandRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::NamedArmPositionsCommandPositions>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::NamedArmPositionsCommandRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::NamedArmPositionsCommandPositions>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::NamedArmPositionsCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAMED_ARM_POSITIONS_COMMAND_REQUEST__TRAITS_HPP_
