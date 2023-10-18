// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/FailureBehaviorOneOfDefaultBehavior.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_ONE_OF_DEFAULT_BEHAVIOR__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_ONE_OF_DEFAULT_BEHAVIOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/failure_behavior_one_of_default_behavior__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'safe_power_off'
#include "bosdyn_msgs/msg/detail/failure_behavior_safe_power_off__traits.hpp"
// Member 'proceed_if_able'
#include "bosdyn_msgs/msg/detail/failure_behavior_proceed_if_able__traits.hpp"
// Member 'return_to_start_and_try_again_later'
#include "bosdyn_msgs/msg/detail/failure_behavior_return_to_start_and_try_again_later__traits.hpp"
// Member 'return_to_start_and_terminate'
#include "bosdyn_msgs/msg/detail/failure_behavior_return_to_start_and_terminate__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FailureBehaviorOneOfDefaultBehavior & msg,
  std::ostream & out)
{
  out << "{";
  // member: safe_power_off
  {
    out << "safe_power_off: ";
    to_flow_style_yaml(msg.safe_power_off, out);
    out << ", ";
  }

  // member: proceed_if_able
  {
    out << "proceed_if_able: ";
    to_flow_style_yaml(msg.proceed_if_able, out);
    out << ", ";
  }

  // member: return_to_start_and_try_again_later
  {
    out << "return_to_start_and_try_again_later: ";
    to_flow_style_yaml(msg.return_to_start_and_try_again_later, out);
    out << ", ";
  }

  // member: return_to_start_and_terminate
  {
    out << "return_to_start_and_terminate: ";
    to_flow_style_yaml(msg.return_to_start_and_terminate, out);
    out << ", ";
  }

  // member: default_behavior_choice
  {
    out << "default_behavior_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.default_behavior_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FailureBehaviorOneOfDefaultBehavior & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: safe_power_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_power_off:\n";
    to_block_style_yaml(msg.safe_power_off, out, indentation + 2);
  }

  // member: proceed_if_able
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "proceed_if_able:\n";
    to_block_style_yaml(msg.proceed_if_able, out, indentation + 2);
  }

  // member: return_to_start_and_try_again_later
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_to_start_and_try_again_later:\n";
    to_block_style_yaml(msg.return_to_start_and_try_again_later, out, indentation + 2);
  }

  // member: return_to_start_and_terminate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_to_start_and_terminate:\n";
    to_block_style_yaml(msg.return_to_start_and_terminate, out, indentation + 2);
  }

  // member: default_behavior_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_behavior_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.default_behavior_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FailureBehaviorOneOfDefaultBehavior & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior>()
{
  return "bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior";
}

template<>
inline const char * name<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior>()
{
  return "bosdyn_msgs/msg/FailureBehaviorOneOfDefaultBehavior";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::FailureBehaviorProceedIfAble>::value && has_fixed_size<bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTerminate>::value && has_fixed_size<bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater>::value && has_fixed_size<bosdyn_msgs::msg::FailureBehaviorSafePowerOff>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::FailureBehaviorProceedIfAble>::value && has_bounded_size<bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTerminate>::value && has_bounded_size<bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater>::value && has_bounded_size<bosdyn_msgs::msg::FailureBehaviorSafePowerOff>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_ONE_OF_DEFAULT_BEHAVIOR__TRAITS_HPP_
