// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BosdynDockState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_DOCK_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_DOCK_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/bosdyn_dock_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'child'
#include "bosdyn_msgs/msg/detail/node__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BosdynDockState & msg,
  std::ostream & out)
{
  out << "{";
  // member: service_name
  {
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << ", ";
  }

  // member: host
  {
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << ", ";
  }

  // member: child
  {
    out << "child: ";
    to_flow_style_yaml(msg.child, out);
    out << ", ";
  }

  // member: child_is_set
  {
    out << "child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_is_set, out);
    out << ", ";
  }

  // member: state_name
  {
    out << "state_name: ";
    rosidl_generator_traits::value_to_yaml(msg.state_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BosdynDockState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: service_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << "\n";
  }

  // member: host
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << "\n";
  }

  // member: child
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child:\n";
    to_block_style_yaml(msg.child, out, indentation + 2);
  }

  // member: child_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_is_set, out);
    out << "\n";
  }

  // member: state_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_name: ";
    rosidl_generator_traits::value_to_yaml(msg.state_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BosdynDockState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BosdynDockState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BosdynDockState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BosdynDockState>()
{
  return "bosdyn_msgs::msg::BosdynDockState";
}

template<>
inline const char * name<bosdyn_msgs::msg::BosdynDockState>()
{
  return "bosdyn_msgs/msg/BosdynDockState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BosdynDockState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BosdynDockState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::BosdynDockState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_DOCK_STATE__TRAITS_HPP_
