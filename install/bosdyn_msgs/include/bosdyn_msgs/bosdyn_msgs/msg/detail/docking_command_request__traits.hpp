// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DockingCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/docking_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__traits.hpp"
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'prep_pose_behavior'
#include "bosdyn_msgs/msg/detail/prep_pose_behavior__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DockingCommandRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_is_set
  {
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << ", ";
  }

  // member: lease
  {
    out << "lease: ";
    to_flow_style_yaml(msg.lease, out);
    out << ", ";
  }

  // member: lease_is_set
  {
    out << "lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_is_set, out);
    out << ", ";
  }

  // member: docking_station_id
  {
    out << "docking_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_station_id, out);
    out << ", ";
  }

  // member: clock_identifier
  {
    out << "clock_identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_identifier, out);
    out << ", ";
  }

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

  // member: prep_pose_behavior
  {
    out << "prep_pose_behavior: ";
    to_flow_style_yaml(msg.prep_pose_behavior, out);
    out << ", ";
  }

  // member: require_fiducial
  {
    out << "require_fiducial: ";
    rosidl_generator_traits::value_to_yaml(msg.require_fiducial, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DockingCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << "\n";
  }

  // member: lease
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease:\n";
    to_block_style_yaml(msg.lease, out, indentation + 2);
  }

  // member: lease_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_is_set, out);
    out << "\n";
  }

  // member: docking_station_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docking_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_station_id, out);
    out << "\n";
  }

  // member: clock_identifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_identifier, out);
    out << "\n";
  }

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

  // member: prep_pose_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prep_pose_behavior:\n";
    to_block_style_yaml(msg.prep_pose_behavior, out, indentation + 2);
  }

  // member: require_fiducial
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "require_fiducial: ";
    rosidl_generator_traits::value_to_yaml(msg.require_fiducial, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DockingCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DockingCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DockingCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DockingCommandRequest>()
{
  return "bosdyn_msgs::msg::DockingCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::DockingCommandRequest>()
{
  return "bosdyn_msgs/msg/DockingCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DockingCommandRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DockingCommandRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::DockingCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_REQUEST__TRAITS_HPP_
