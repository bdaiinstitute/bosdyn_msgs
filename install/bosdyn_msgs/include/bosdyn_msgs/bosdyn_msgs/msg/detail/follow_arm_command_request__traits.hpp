// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/FollowArmCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOLLOW_ARM_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOLLOW_ARM_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/follow_arm_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'body_offset_from_hand'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FollowArmCommandRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: body_offset_from_hand
  {
    out << "body_offset_from_hand: ";
    to_flow_style_yaml(msg.body_offset_from_hand, out);
    out << ", ";
  }

  // member: body_offset_from_hand_is_set
  {
    out << "body_offset_from_hand_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.body_offset_from_hand_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowArmCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: body_offset_from_hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_offset_from_hand:\n";
    to_block_style_yaml(msg.body_offset_from_hand, out, indentation + 2);
  }

  // member: body_offset_from_hand_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_offset_from_hand_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.body_offset_from_hand_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowArmCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::FollowArmCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::FollowArmCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::FollowArmCommandRequest>()
{
  return "bosdyn_msgs::msg::FollowArmCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::FollowArmCommandRequest>()
{
  return "bosdyn_msgs/msg/FollowArmCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::FollowArmCommandRequest>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::FollowArmCommandRequest>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::FollowArmCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOLLOW_ARM_COMMAND_REQUEST__TRAITS_HPP_
