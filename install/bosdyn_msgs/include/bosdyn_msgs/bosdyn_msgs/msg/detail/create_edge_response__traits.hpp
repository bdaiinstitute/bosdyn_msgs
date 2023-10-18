// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/CreateEdgeResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/create_edge_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/create_edge_response_status__traits.hpp"
// Member 'error_existing_edge'
#include "bosdyn_msgs/msg/detail/edge__traits.hpp"
// Member 'lease_use_result'
#include "bosdyn_msgs/msg/detail/lease_use_result__traits.hpp"
// Member 'map_stats'
#include "bosdyn_msgs/msg/detail/map_stats__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CreateEdgeResponse & msg,
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

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: error_existing_edge
  {
    out << "error_existing_edge: ";
    to_flow_style_yaml(msg.error_existing_edge, out);
    out << ", ";
  }

  // member: error_existing_edge_is_set
  {
    out << "error_existing_edge_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.error_existing_edge_is_set, out);
    out << ", ";
  }

  // member: lease_use_result
  {
    out << "lease_use_result: ";
    to_flow_style_yaml(msg.lease_use_result, out);
    out << ", ";
  }

  // member: lease_use_result_is_set
  {
    out << "lease_use_result_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_use_result_is_set, out);
    out << ", ";
  }

  // member: map_stats
  {
    out << "map_stats: ";
    to_flow_style_yaml(msg.map_stats, out);
    out << ", ";
  }

  // member: map_stats_is_set
  {
    out << "map_stats_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.map_stats_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CreateEdgeResponse & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: error_existing_edge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_existing_edge:\n";
    to_block_style_yaml(msg.error_existing_edge, out, indentation + 2);
  }

  // member: error_existing_edge_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_existing_edge_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.error_existing_edge_is_set, out);
    out << "\n";
  }

  // member: lease_use_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_use_result:\n";
    to_block_style_yaml(msg.lease_use_result, out, indentation + 2);
  }

  // member: lease_use_result_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_use_result_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_use_result_is_set, out);
    out << "\n";
  }

  // member: map_stats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_stats:\n";
    to_block_style_yaml(msg.map_stats, out, indentation + 2);
  }

  // member: map_stats_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_stats_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.map_stats_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CreateEdgeResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::CreateEdgeResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::CreateEdgeResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::CreateEdgeResponse>()
{
  return "bosdyn_msgs::msg::CreateEdgeResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::CreateEdgeResponse>()
{
  return "bosdyn_msgs/msg/CreateEdgeResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::CreateEdgeResponse>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::CreateEdgeResponseStatus>::value && has_fixed_size<bosdyn_msgs::msg::Edge>::value && has_fixed_size<bosdyn_msgs::msg::LeaseUseResult>::value && has_fixed_size<bosdyn_msgs::msg::MapStats>::value && has_fixed_size<bosdyn_msgs::msg::ResponseHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::CreateEdgeResponse>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::CreateEdgeResponseStatus>::value && has_bounded_size<bosdyn_msgs::msg::Edge>::value && has_bounded_size<bosdyn_msgs::msg::LeaseUseResult>::value && has_bounded_size<bosdyn_msgs::msg::MapStats>::value && has_bounded_size<bosdyn_msgs::msg::ResponseHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::CreateEdgeResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_RESPONSE__TRAITS_HPP_
