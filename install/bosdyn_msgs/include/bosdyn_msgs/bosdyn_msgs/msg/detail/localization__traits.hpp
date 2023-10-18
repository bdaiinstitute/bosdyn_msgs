// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Localization.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCALIZATION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCALIZATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/localization__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoint_tform_body'
// Member 'seed_tform_body'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Localization & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoint_id
  {
    out << "waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_id, out);
    out << ", ";
  }

  // member: waypoint_tform_body
  {
    out << "waypoint_tform_body: ";
    to_flow_style_yaml(msg.waypoint_tform_body, out);
    out << ", ";
  }

  // member: waypoint_tform_body_is_set
  {
    out << "waypoint_tform_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_tform_body_is_set, out);
    out << ", ";
  }

  // member: seed_tform_body
  {
    out << "seed_tform_body: ";
    to_flow_style_yaml(msg.seed_tform_body, out);
    out << ", ";
  }

  // member: seed_tform_body_is_set
  {
    out << "seed_tform_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.seed_tform_body_is_set, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_is_set
  {
    out << "timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Localization & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoint_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_id: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_id, out);
    out << "\n";
  }

  // member: waypoint_tform_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_tform_body:\n";
    to_block_style_yaml(msg.waypoint_tform_body, out, indentation + 2);
  }

  // member: waypoint_tform_body_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_tform_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_tform_body_is_set, out);
    out << "\n";
  }

  // member: seed_tform_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seed_tform_body:\n";
    to_block_style_yaml(msg.seed_tform_body, out, indentation + 2);
  }

  // member: seed_tform_body_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seed_tform_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.seed_tform_body_is_set, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Localization & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Localization & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Localization & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Localization>()
{
  return "bosdyn_msgs::msg::Localization";
}

template<>
inline const char * name<bosdyn_msgs::msg::Localization>()
{
  return "bosdyn_msgs/msg/Localization";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Localization>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Localization>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Localization>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCALIZATION__TRAITS_HPP_
