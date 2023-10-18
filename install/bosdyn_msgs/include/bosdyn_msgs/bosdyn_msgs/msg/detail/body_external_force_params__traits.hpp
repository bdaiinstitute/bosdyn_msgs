// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BodyExternalForceParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_EXTERNAL_FORCE_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_EXTERNAL_FORCE_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/body_external_force_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'external_force_indicator'
#include "bosdyn_msgs/msg/detail/body_external_force_params_external_force_indicator__traits.hpp"
// Member 'external_force_override'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BodyExternalForceParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: external_force_indicator
  {
    out << "external_force_indicator: ";
    to_flow_style_yaml(msg.external_force_indicator, out);
    out << ", ";
  }

  // member: frame_name
  {
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
    out << ", ";
  }

  // member: external_force_override
  {
    out << "external_force_override: ";
    to_flow_style_yaml(msg.external_force_override, out);
    out << ", ";
  }

  // member: external_force_override_is_set
  {
    out << "external_force_override_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.external_force_override_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BodyExternalForceParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: external_force_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external_force_indicator:\n";
    to_block_style_yaml(msg.external_force_indicator, out, indentation + 2);
  }

  // member: frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
    out << "\n";
  }

  // member: external_force_override
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external_force_override:\n";
    to_block_style_yaml(msg.external_force_override, out, indentation + 2);
  }

  // member: external_force_override_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "external_force_override_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.external_force_override_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BodyExternalForceParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BodyExternalForceParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BodyExternalForceParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BodyExternalForceParams>()
{
  return "bosdyn_msgs::msg::BodyExternalForceParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::BodyExternalForceParams>()
{
  return "bosdyn_msgs/msg/BodyExternalForceParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BodyExternalForceParams>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BodyExternalForceParams>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::BodyExternalForceParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_EXTERNAL_FORCE_PARAMS__TRAITS_HPP_
