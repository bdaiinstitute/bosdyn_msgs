// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StopCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STOP_COMMAND__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STOP_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/stop_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StopCommand & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StopCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StopCommand & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StopCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StopCommand & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StopCommand>()
{
  return "bosdyn_msgs::msg::StopCommand";
}

template<>
inline const char * name<bosdyn_msgs::msg::StopCommand>()
{
  return "bosdyn_msgs/msg/StopCommand";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StopCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StopCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::StopCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STOP_COMMAND__TRAITS_HPP_
