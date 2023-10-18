// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StanceCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STANCE_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STANCE_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/stance_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'stance'
#include "bosdyn_msgs/msg/detail/stance__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StanceCommandRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: end_time
  {
    out << "end_time: ";
    to_flow_style_yaml(msg.end_time, out);
    out << ", ";
  }

  // member: end_time_is_set
  {
    out << "end_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time_is_set, out);
    out << ", ";
  }

  // member: stance
  {
    out << "stance: ";
    to_flow_style_yaml(msg.stance, out);
    out << ", ";
  }

  // member: stance_is_set
  {
    out << "stance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.stance_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StanceCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time:\n";
    to_block_style_yaml(msg.end_time, out, indentation + 2);
  }

  // member: end_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time_is_set, out);
    out << "\n";
  }

  // member: stance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stance:\n";
    to_block_style_yaml(msg.stance, out, indentation + 2);
  }

  // member: stance_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.stance_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StanceCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StanceCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StanceCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StanceCommandRequest>()
{
  return "bosdyn_msgs::msg::StanceCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::StanceCommandRequest>()
{
  return "bosdyn_msgs/msg/StanceCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StanceCommandRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Stance>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StanceCommandRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Stance>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::StanceCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STANCE_COMMAND_REQUEST__TRAITS_HPP_
