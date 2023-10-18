// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ListAvailableModelsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_AVAILABLE_MODELS_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_AVAILABLE_MODELS_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/list_available_models_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'models'
#include "bosdyn_msgs/msg/detail/available_models__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/list_available_models_status__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ListAvailableModelsResponse & msg,
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

  // member: models
  {
    out << "models: ";
    to_flow_style_yaml(msg.models, out);
    out << ", ";
  }

  // member: models_is_set
  {
    out << "models_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.models_is_set, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListAvailableModelsResponse & msg,
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

  // member: models
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "models:\n";
    to_block_style_yaml(msg.models, out, indentation + 2);
  }

  // member: models_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "models_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.models_is_set, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListAvailableModelsResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ListAvailableModelsResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ListAvailableModelsResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ListAvailableModelsResponse>()
{
  return "bosdyn_msgs::msg::ListAvailableModelsResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::ListAvailableModelsResponse>()
{
  return "bosdyn_msgs/msg/ListAvailableModelsResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ListAvailableModelsResponse>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::AvailableModels>::value && has_fixed_size<bosdyn_msgs::msg::ListAvailableModelsStatus>::value && has_fixed_size<bosdyn_msgs::msg::ResponseHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ListAvailableModelsResponse>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::AvailableModels>::value && has_bounded_size<bosdyn_msgs::msg::ListAvailableModelsStatus>::value && has_bounded_size<bosdyn_msgs::msg::ResponseHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ListAvailableModelsResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_AVAILABLE_MODELS_RESPONSE__TRAITS_HPP_
