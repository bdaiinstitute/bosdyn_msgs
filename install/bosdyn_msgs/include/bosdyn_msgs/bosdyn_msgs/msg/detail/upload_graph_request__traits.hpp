// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/UploadGraphRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/upload_graph_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'graph'
#include "bosdyn_msgs/msg/detail/graph__traits.hpp"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UploadGraphRequest & msg,
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

  // member: graph
  {
    out << "graph: ";
    to_flow_style_yaml(msg.graph, out);
    out << ", ";
  }

  // member: graph_is_set
  {
    out << "graph_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.graph_is_set, out);
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

  // member: generate_new_anchoring
  {
    out << "generate_new_anchoring: ";
    rosidl_generator_traits::value_to_yaml(msg.generate_new_anchoring, out);
    out << ", ";
  }

  // member: treat_validation_warnings_as_errors
  {
    out << "treat_validation_warnings_as_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.treat_validation_warnings_as_errors, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UploadGraphRequest & msg,
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

  // member: graph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "graph:\n";
    to_block_style_yaml(msg.graph, out, indentation + 2);
  }

  // member: graph_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "graph_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.graph_is_set, out);
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

  // member: generate_new_anchoring
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generate_new_anchoring: ";
    rosidl_generator_traits::value_to_yaml(msg.generate_new_anchoring, out);
    out << "\n";
  }

  // member: treat_validation_warnings_as_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "treat_validation_warnings_as_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.treat_validation_warnings_as_errors, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UploadGraphRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::UploadGraphRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::UploadGraphRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::UploadGraphRequest>()
{
  return "bosdyn_msgs::msg::UploadGraphRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::UploadGraphRequest>()
{
  return "bosdyn_msgs/msg/UploadGraphRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::UploadGraphRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Graph>::value && has_fixed_size<bosdyn_msgs::msg::Lease>::value && has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::UploadGraphRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Graph>::value && has_bounded_size<bosdyn_msgs::msg::Lease>::value && has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::UploadGraphRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_REQUEST__TRAITS_HPP_
