// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestFiducialLoopClosureParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_FIDUCIAL_LOOP_CLOSURE_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_FIDUCIAL_LOOP_CLOSURE_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/process_topology_request_fiducial_loop_closure_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessTopologyRequestFiducialLoopClosureParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: min_loop_closure_path_length
  {
    out << "min_loop_closure_path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.min_loop_closure_path_length, out);
    out << ", ";
  }

  // member: min_loop_closure_path_length_is_set
  {
    out << "min_loop_closure_path_length_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.min_loop_closure_path_length_is_set, out);
    out << ", ";
  }

  // member: max_loop_closure_edge_length
  {
    out << "max_loop_closure_edge_length: ";
    rosidl_generator_traits::value_to_yaml(msg.max_loop_closure_edge_length, out);
    out << ", ";
  }

  // member: max_loop_closure_edge_length_is_set
  {
    out << "max_loop_closure_edge_length_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_loop_closure_edge_length_is_set, out);
    out << ", ";
  }

  // member: max_fiducial_distance
  {
    out << "max_fiducial_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_fiducial_distance, out);
    out << ", ";
  }

  // member: max_fiducial_distance_is_set
  {
    out << "max_fiducial_distance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_fiducial_distance_is_set, out);
    out << ", ";
  }

  // member: max_loop_closure_height_change
  {
    out << "max_loop_closure_height_change: ";
    rosidl_generator_traits::value_to_yaml(msg.max_loop_closure_height_change, out);
    out << ", ";
  }

  // member: max_loop_closure_height_change_is_set
  {
    out << "max_loop_closure_height_change_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_loop_closure_height_change_is_set, out);
    out << ", ";
  }

  // member: prune_edges
  {
    out << "prune_edges: ";
    rosidl_generator_traits::value_to_yaml(msg.prune_edges, out);
    out << ", ";
  }

  // member: prune_edges_is_set
  {
    out << "prune_edges_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.prune_edges_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessTopologyRequestFiducialLoopClosureParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: min_loop_closure_path_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_loop_closure_path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.min_loop_closure_path_length, out);
    out << "\n";
  }

  // member: min_loop_closure_path_length_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_loop_closure_path_length_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.min_loop_closure_path_length_is_set, out);
    out << "\n";
  }

  // member: max_loop_closure_edge_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_loop_closure_edge_length: ";
    rosidl_generator_traits::value_to_yaml(msg.max_loop_closure_edge_length, out);
    out << "\n";
  }

  // member: max_loop_closure_edge_length_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_loop_closure_edge_length_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_loop_closure_edge_length_is_set, out);
    out << "\n";
  }

  // member: max_fiducial_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_fiducial_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_fiducial_distance, out);
    out << "\n";
  }

  // member: max_fiducial_distance_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_fiducial_distance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_fiducial_distance_is_set, out);
    out << "\n";
  }

  // member: max_loop_closure_height_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_loop_closure_height_change: ";
    rosidl_generator_traits::value_to_yaml(msg.max_loop_closure_height_change, out);
    out << "\n";
  }

  // member: max_loop_closure_height_change_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_loop_closure_height_change_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.max_loop_closure_height_change_is_set, out);
    out << "\n";
  }

  // member: prune_edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prune_edges: ";
    rosidl_generator_traits::value_to_yaml(msg.prune_edges, out);
    out << "\n";
  }

  // member: prune_edges_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prune_edges_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.prune_edges_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessTopologyRequestFiducialLoopClosureParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams>()
{
  return "bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams>()
{
  return "bosdyn_msgs/msg/ProcessTopologyRequestFiducialLoopClosureParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_FIDUCIAL_LOOP_CLOSURE_PARAMS__TRAITS_HPP_
