// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DockState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/dock_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/dock_state_docked_status__traits.hpp"
// Member 'dock_type'
#include "bosdyn_msgs/msg/detail/dock_type__traits.hpp"
// Member 'power_status'
#include "bosdyn_msgs/msg/detail/dock_state_link_status__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DockState & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: dock_type
  {
    out << "dock_type: ";
    to_flow_style_yaml(msg.dock_type, out);
    out << ", ";
  }

  // member: dock_id
  {
    out << "dock_id: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_id, out);
    out << ", ";
  }

  // member: power_status
  {
    out << "power_status: ";
    to_flow_style_yaml(msg.power_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DockState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: dock_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_type:\n";
    to_block_style_yaml(msg.dock_type, out, indentation + 2);
  }

  // member: dock_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_id: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_id, out);
    out << "\n";
  }

  // member: power_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_status:\n";
    to_block_style_yaml(msg.power_status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DockState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DockState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DockState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DockState>()
{
  return "bosdyn_msgs::msg::DockState";
}

template<>
inline const char * name<bosdyn_msgs::msg::DockState>()
{
  return "bosdyn_msgs/msg/DockState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DockState>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::DockStateDockedStatus>::value && has_fixed_size<bosdyn_msgs::msg::DockStateLinkStatus>::value && has_fixed_size<bosdyn_msgs::msg::DockType>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DockState>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::DockStateDockedStatus>::value && has_bounded_size<bosdyn_msgs::msg::DockStateLinkStatus>::value && has_bounded_size<bosdyn_msgs::msg::DockType>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::DockState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCK_STATE__TRAITS_HPP_
