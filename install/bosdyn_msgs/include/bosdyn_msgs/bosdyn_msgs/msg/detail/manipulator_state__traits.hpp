// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ManipulatorState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/manipulator_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'estimated_end_effector_force_in_hand'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'stow_state'
#include "bosdyn_msgs/msg/detail/manipulator_state_stow_state__traits.hpp"
// Member 'velocity_of_hand_in_vision'
// Member 'velocity_of_hand_in_odom'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'carry_state'
#include "bosdyn_msgs/msg/detail/manipulator_state_carry_state__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ManipulatorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: gripper_open_percentage
  {
    out << "gripper_open_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_open_percentage, out);
    out << ", ";
  }

  // member: is_gripper_holding_item
  {
    out << "is_gripper_holding_item: ";
    rosidl_generator_traits::value_to_yaml(msg.is_gripper_holding_item, out);
    out << ", ";
  }

  // member: estimated_end_effector_force_in_hand
  {
    out << "estimated_end_effector_force_in_hand: ";
    to_flow_style_yaml(msg.estimated_end_effector_force_in_hand, out);
    out << ", ";
  }

  // member: estimated_end_effector_force_in_hand_is_set
  {
    out << "estimated_end_effector_force_in_hand_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_end_effector_force_in_hand_is_set, out);
    out << ", ";
  }

  // member: stow_state
  {
    out << "stow_state: ";
    to_flow_style_yaml(msg.stow_state, out);
    out << ", ";
  }

  // member: velocity_of_hand_in_vision
  {
    out << "velocity_of_hand_in_vision: ";
    to_flow_style_yaml(msg.velocity_of_hand_in_vision, out);
    out << ", ";
  }

  // member: velocity_of_hand_in_vision_is_set
  {
    out << "velocity_of_hand_in_vision_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_of_hand_in_vision_is_set, out);
    out << ", ";
  }

  // member: velocity_of_hand_in_odom
  {
    out << "velocity_of_hand_in_odom: ";
    to_flow_style_yaml(msg.velocity_of_hand_in_odom, out);
    out << ", ";
  }

  // member: velocity_of_hand_in_odom_is_set
  {
    out << "velocity_of_hand_in_odom_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_of_hand_in_odom_is_set, out);
    out << ", ";
  }

  // member: carry_state
  {
    out << "carry_state: ";
    to_flow_style_yaml(msg.carry_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManipulatorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gripper_open_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_open_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_open_percentage, out);
    out << "\n";
  }

  // member: is_gripper_holding_item
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_gripper_holding_item: ";
    rosidl_generator_traits::value_to_yaml(msg.is_gripper_holding_item, out);
    out << "\n";
  }

  // member: estimated_end_effector_force_in_hand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_end_effector_force_in_hand:\n";
    to_block_style_yaml(msg.estimated_end_effector_force_in_hand, out, indentation + 2);
  }

  // member: estimated_end_effector_force_in_hand_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_end_effector_force_in_hand_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_end_effector_force_in_hand_is_set, out);
    out << "\n";
  }

  // member: stow_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stow_state:\n";
    to_block_style_yaml(msg.stow_state, out, indentation + 2);
  }

  // member: velocity_of_hand_in_vision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_of_hand_in_vision:\n";
    to_block_style_yaml(msg.velocity_of_hand_in_vision, out, indentation + 2);
  }

  // member: velocity_of_hand_in_vision_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_of_hand_in_vision_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_of_hand_in_vision_is_set, out);
    out << "\n";
  }

  // member: velocity_of_hand_in_odom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_of_hand_in_odom:\n";
    to_block_style_yaml(msg.velocity_of_hand_in_odom, out, indentation + 2);
  }

  // member: velocity_of_hand_in_odom_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_of_hand_in_odom_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_of_hand_in_odom_is_set, out);
    out << "\n";
  }

  // member: carry_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carry_state:\n";
    to_block_style_yaml(msg.carry_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManipulatorState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ManipulatorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ManipulatorState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ManipulatorState>()
{
  return "bosdyn_msgs::msg::ManipulatorState";
}

template<>
inline const char * name<bosdyn_msgs::msg::ManipulatorState>()
{
  return "bosdyn_msgs/msg/ManipulatorState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ManipulatorState>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ManipulatorStateCarryState>::value && has_fixed_size<bosdyn_msgs::msg::ManipulatorStateStowState>::value && has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ManipulatorState>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ManipulatorStateCarryState>::value && has_bounded_size<bosdyn_msgs::msg::ManipulatorStateStowState>::value && has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ManipulatorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATOR_STATE__TRAITS_HPP_
