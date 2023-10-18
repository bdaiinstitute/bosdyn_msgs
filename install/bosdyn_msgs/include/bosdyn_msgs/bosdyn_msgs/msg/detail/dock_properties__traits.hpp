// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DockProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCK_PROPERTIES__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCK_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/dock_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/dock_type__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DockProperties & msg,
  std::ostream & out)
{
  out << "{";
  // member: dock_id
  {
    out << "dock_id: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: frame_name_dock
  {
    out << "frame_name_dock: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_dock, out);
    out << ", ";
  }

  // member: unavailable
  {
    out << "unavailable: ";
    rosidl_generator_traits::value_to_yaml(msg.unavailable, out);
    out << ", ";
  }

  // member: from_prior
  {
    out << "from_prior: ";
    rosidl_generator_traits::value_to_yaml(msg.from_prior, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DockProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dock_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dock_id: ";
    rosidl_generator_traits::value_to_yaml(msg.dock_id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

  // member: frame_name_dock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name_dock: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_dock, out);
    out << "\n";
  }

  // member: unavailable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unavailable: ";
    rosidl_generator_traits::value_to_yaml(msg.unavailable, out);
    out << "\n";
  }

  // member: from_prior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_prior: ";
    rosidl_generator_traits::value_to_yaml(msg.from_prior, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DockProperties & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DockProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DockProperties & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DockProperties>()
{
  return "bosdyn_msgs::msg::DockProperties";
}

template<>
inline const char * name<bosdyn_msgs::msg::DockProperties>()
{
  return "bosdyn_msgs/msg/DockProperties";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DockProperties>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DockProperties>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::DockProperties>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCK_PROPERTIES__TRAITS_HPP_
