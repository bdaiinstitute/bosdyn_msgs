// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BosdynGraphNavLocalize.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_LOCALIZE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_LOCALIZE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/bosdyn_graph_nav_localize__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'localization_request'
#include "bosdyn_msgs/msg/detail/set_localization_request__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BosdynGraphNavLocalize & msg,
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

  // member: localization_request
  {
    out << "localization_request: ";
    to_flow_style_yaml(msg.localization_request, out);
    out << ", ";
  }

  // member: localization_request_is_set
  {
    out << "localization_request_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.localization_request_is_set, out);
    out << ", ";
  }

  // member: allow_bad_quality
  {
    out << "allow_bad_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_bad_quality, out);
    out << ", ";
  }

  // member: response_bb_key
  {
    out << "response_bb_key: ";
    rosidl_generator_traits::value_to_yaml(msg.response_bb_key, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BosdynGraphNavLocalize & msg,
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

  // member: localization_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization_request:\n";
    to_block_style_yaml(msg.localization_request, out, indentation + 2);
  }

  // member: localization_request_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization_request_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.localization_request_is_set, out);
    out << "\n";
  }

  // member: allow_bad_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "allow_bad_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.allow_bad_quality, out);
    out << "\n";
  }

  // member: response_bb_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response_bb_key: ";
    rosidl_generator_traits::value_to_yaml(msg.response_bb_key, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BosdynGraphNavLocalize & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BosdynGraphNavLocalize & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BosdynGraphNavLocalize & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BosdynGraphNavLocalize>()
{
  return "bosdyn_msgs::msg::BosdynGraphNavLocalize";
}

template<>
inline const char * name<bosdyn_msgs::msg::BosdynGraphNavLocalize>()
{
  return "bosdyn_msgs/msg/BosdynGraphNavLocalize";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BosdynGraphNavLocalize>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BosdynGraphNavLocalize>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::BosdynGraphNavLocalize>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_LOCALIZE__TRAITS_HPP_
