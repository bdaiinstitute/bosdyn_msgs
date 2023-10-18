// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: disable_body_force_limiter
  {
    out << "disable_body_force_limiter: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_body_force_limiter, out);
    out << ", ";
  }

  // member: disable_body_force_limiter_is_set
  {
    out << "disable_body_force_limiter_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_body_force_limiter_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: disable_body_force_limiter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_body_force_limiter: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_body_force_limiter, out);
    out << "\n";
  }

  // member: disable_body_force_limiter_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_body_force_limiter_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_body_force_limiter_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmParams>()
{
  return "bosdyn_msgs::msg::ArmParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmParams>()
{
  return "bosdyn_msgs/msg/ArmParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_PARAMS__TRAITS_HPP_
