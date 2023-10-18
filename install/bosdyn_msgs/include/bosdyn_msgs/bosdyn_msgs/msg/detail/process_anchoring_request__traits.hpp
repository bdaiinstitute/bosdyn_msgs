// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/process_anchoring_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'params'
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params__traits.hpp"
// Member 'initial_hint'
#include "bosdyn_msgs/msg/detail/anchoring_hint__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessAnchoringRequest & msg,
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

  // member: params
  {
    out << "params: ";
    to_flow_style_yaml(msg.params, out);
    out << ", ";
  }

  // member: params_is_set
  {
    out << "params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.params_is_set, out);
    out << ", ";
  }

  // member: initial_hint
  {
    out << "initial_hint: ";
    to_flow_style_yaml(msg.initial_hint, out);
    out << ", ";
  }

  // member: initial_hint_is_set
  {
    out << "initial_hint_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_hint_is_set, out);
    out << ", ";
  }

  // member: modify_anchoring_on_server
  {
    out << "modify_anchoring_on_server: ";
    rosidl_generator_traits::value_to_yaml(msg.modify_anchoring_on_server, out);
    out << ", ";
  }

  // member: stream_intermediate_results
  {
    out << "stream_intermediate_results: ";
    rosidl_generator_traits::value_to_yaml(msg.stream_intermediate_results, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessAnchoringRequest & msg,
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

  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params:\n";
    to_block_style_yaml(msg.params, out, indentation + 2);
  }

  // member: params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.params_is_set, out);
    out << "\n";
  }

  // member: initial_hint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_hint:\n";
    to_block_style_yaml(msg.initial_hint, out, indentation + 2);
  }

  // member: initial_hint_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_hint_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_hint_is_set, out);
    out << "\n";
  }

  // member: modify_anchoring_on_server
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "modify_anchoring_on_server: ";
    rosidl_generator_traits::value_to_yaml(msg.modify_anchoring_on_server, out);
    out << "\n";
  }

  // member: stream_intermediate_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stream_intermediate_results: ";
    rosidl_generator_traits::value_to_yaml(msg.stream_intermediate_results, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessAnchoringRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ProcessAnchoringRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ProcessAnchoringRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ProcessAnchoringRequest>()
{
  return "bosdyn_msgs::msg::ProcessAnchoringRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::ProcessAnchoringRequest>()
{
  return "bosdyn_msgs/msg/ProcessAnchoringRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ProcessAnchoringRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::AnchoringHint>::value && has_fixed_size<bosdyn_msgs::msg::ProcessAnchoringRequestParams>::value && has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ProcessAnchoringRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::AnchoringHint>::value && has_bounded_size<bosdyn_msgs::msg::ProcessAnchoringRequestParams>::value && has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ProcessAnchoringRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST__TRAITS_HPP_
