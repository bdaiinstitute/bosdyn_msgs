// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RecordingEnvironment.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORDING_ENVIRONMENT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORDING_ENVIRONMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/recording_environment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoint_environment'
#include "bosdyn_msgs/msg/detail/waypoint_annotations__traits.hpp"
// Member 'edge_environment'
#include "bosdyn_msgs/msg/detail/edge_annotations__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RecordingEnvironment & msg,
  std::ostream & out)
{
  out << "{";
  // member: name_prefix
  {
    out << "name_prefix: ";
    rosidl_generator_traits::value_to_yaml(msg.name_prefix, out);
    out << ", ";
  }

  // member: waypoint_environment
  {
    out << "waypoint_environment: ";
    to_flow_style_yaml(msg.waypoint_environment, out);
    out << ", ";
  }

  // member: waypoint_environment_is_set
  {
    out << "waypoint_environment_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_environment_is_set, out);
    out << ", ";
  }

  // member: edge_environment
  {
    out << "edge_environment: ";
    to_flow_style_yaml(msg.edge_environment, out);
    out << ", ";
  }

  // member: edge_environment_is_set
  {
    out << "edge_environment_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_environment_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecordingEnvironment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name_prefix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name_prefix: ";
    rosidl_generator_traits::value_to_yaml(msg.name_prefix, out);
    out << "\n";
  }

  // member: waypoint_environment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_environment:\n";
    to_block_style_yaml(msg.waypoint_environment, out, indentation + 2);
  }

  // member: waypoint_environment_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_environment_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_environment_is_set, out);
    out << "\n";
  }

  // member: edge_environment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_environment:\n";
    to_block_style_yaml(msg.edge_environment, out, indentation + 2);
  }

  // member: edge_environment_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_environment_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_environment_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecordingEnvironment & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RecordingEnvironment & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RecordingEnvironment & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RecordingEnvironment>()
{
  return "bosdyn_msgs::msg::RecordingEnvironment";
}

template<>
inline const char * name<bosdyn_msgs::msg::RecordingEnvironment>()
{
  return "bosdyn_msgs/msg/RecordingEnvironment";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RecordingEnvironment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RecordingEnvironment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::RecordingEnvironment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORDING_ENVIRONMENT__TRAITS_HPP_
