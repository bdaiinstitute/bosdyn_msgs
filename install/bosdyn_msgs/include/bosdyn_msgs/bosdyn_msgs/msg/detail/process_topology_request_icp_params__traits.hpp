// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestICPParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_ICP_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_ICP_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/process_topology_request_icp_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessTopologyRequestICPParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: icp_iters
  {
    out << "icp_iters: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_iters, out);
    out << ", ";
  }

  // member: icp_iters_is_set
  {
    out << "icp_iters_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_iters_is_set, out);
    out << ", ";
  }

  // member: max_point_match_distance
  {
    out << "max_point_match_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_point_match_distance, out);
    out << ", ";
  }

  // member: max_point_match_distance_is_set
  {
    out << "max_point_match_distance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_point_match_distance_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessTopologyRequestICPParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: icp_iters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icp_iters: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_iters, out);
    out << "\n";
  }

  // member: icp_iters_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icp_iters_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_iters_is_set, out);
    out << "\n";
  }

  // member: max_point_match_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_point_match_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_point_match_distance, out);
    out << "\n";
  }

  // member: max_point_match_distance_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_point_match_distance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_point_match_distance_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessTopologyRequestICPParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ProcessTopologyRequestICPParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ProcessTopologyRequestICPParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ProcessTopologyRequestICPParams>()
{
  return "bosdyn_msgs::msg::ProcessTopologyRequestICPParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::ProcessTopologyRequestICPParams>()
{
  return "bosdyn_msgs/msg/ProcessTopologyRequestICPParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ProcessTopologyRequestICPParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ProcessTopologyRequestICPParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::ProcessTopologyRequestICPParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_ICP_PARAMS__TRAITS_HPP_
