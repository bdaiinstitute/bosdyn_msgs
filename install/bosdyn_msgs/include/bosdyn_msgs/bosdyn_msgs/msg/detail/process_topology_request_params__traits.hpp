// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/process_topology_request_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'odometry_loop_closure_params'
#include "bosdyn_msgs/msg/detail/process_topology_request_odometry_loop_closure_params__traits.hpp"
// Member 'icp_params'
#include "bosdyn_msgs/msg/detail/process_topology_request_icp_params__traits.hpp"
// Member 'fiducial_loop_closure_params'
#include "bosdyn_msgs/msg/detail/process_topology_request_fiducial_loop_closure_params__traits.hpp"
// Member 'collision_check_params'
#include "bosdyn_msgs/msg/detail/process_topology_request_collision_checking_params__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessTopologyRequestParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: do_odometry_loop_closure
  {
    out << "do_odometry_loop_closure: ";
    rosidl_generator_traits::value_to_yaml(msg.do_odometry_loop_closure, out);
    out << ", ";
  }

  // member: do_odometry_loop_closure_is_set
  {
    out << "do_odometry_loop_closure_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.do_odometry_loop_closure_is_set, out);
    out << ", ";
  }

  // member: odometry_loop_closure_params
  {
    out << "odometry_loop_closure_params: ";
    to_flow_style_yaml(msg.odometry_loop_closure_params, out);
    out << ", ";
  }

  // member: odometry_loop_closure_params_is_set
  {
    out << "odometry_loop_closure_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.odometry_loop_closure_params_is_set, out);
    out << ", ";
  }

  // member: icp_params
  {
    out << "icp_params: ";
    to_flow_style_yaml(msg.icp_params, out);
    out << ", ";
  }

  // member: icp_params_is_set
  {
    out << "icp_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_params_is_set, out);
    out << ", ";
  }

  // member: do_fiducial_loop_closure
  {
    out << "do_fiducial_loop_closure: ";
    rosidl_generator_traits::value_to_yaml(msg.do_fiducial_loop_closure, out);
    out << ", ";
  }

  // member: do_fiducial_loop_closure_is_set
  {
    out << "do_fiducial_loop_closure_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.do_fiducial_loop_closure_is_set, out);
    out << ", ";
  }

  // member: fiducial_loop_closure_params
  {
    out << "fiducial_loop_closure_params: ";
    to_flow_style_yaml(msg.fiducial_loop_closure_params, out);
    out << ", ";
  }

  // member: fiducial_loop_closure_params_is_set
  {
    out << "fiducial_loop_closure_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.fiducial_loop_closure_params_is_set, out);
    out << ", ";
  }

  // member: collision_check_params
  {
    out << "collision_check_params: ";
    to_flow_style_yaml(msg.collision_check_params, out);
    out << ", ";
  }

  // member: collision_check_params_is_set
  {
    out << "collision_check_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_check_params_is_set, out);
    out << ", ";
  }

  // member: timeout_seconds
  {
    out << "timeout_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_seconds, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessTopologyRequestParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: do_odometry_loop_closure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_odometry_loop_closure: ";
    rosidl_generator_traits::value_to_yaml(msg.do_odometry_loop_closure, out);
    out << "\n";
  }

  // member: do_odometry_loop_closure_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_odometry_loop_closure_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.do_odometry_loop_closure_is_set, out);
    out << "\n";
  }

  // member: odometry_loop_closure_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odometry_loop_closure_params:\n";
    to_block_style_yaml(msg.odometry_loop_closure_params, out, indentation + 2);
  }

  // member: odometry_loop_closure_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odometry_loop_closure_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.odometry_loop_closure_params_is_set, out);
    out << "\n";
  }

  // member: icp_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icp_params:\n";
    to_block_style_yaml(msg.icp_params, out, indentation + 2);
  }

  // member: icp_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icp_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.icp_params_is_set, out);
    out << "\n";
  }

  // member: do_fiducial_loop_closure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_fiducial_loop_closure: ";
    rosidl_generator_traits::value_to_yaml(msg.do_fiducial_loop_closure, out);
    out << "\n";
  }

  // member: do_fiducial_loop_closure_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_fiducial_loop_closure_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.do_fiducial_loop_closure_is_set, out);
    out << "\n";
  }

  // member: fiducial_loop_closure_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fiducial_loop_closure_params:\n";
    to_block_style_yaml(msg.fiducial_loop_closure_params, out, indentation + 2);
  }

  // member: fiducial_loop_closure_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fiducial_loop_closure_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.fiducial_loop_closure_params_is_set, out);
    out << "\n";
  }

  // member: collision_check_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_check_params:\n";
    to_block_style_yaml(msg.collision_check_params, out, indentation + 2);
  }

  // member: collision_check_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_check_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.collision_check_params_is_set, out);
    out << "\n";
  }

  // member: timeout_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_seconds, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessTopologyRequestParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ProcessTopologyRequestParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ProcessTopologyRequestParams>()
{
  return "bosdyn_msgs::msg::ProcessTopologyRequestParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::ProcessTopologyRequestParams>()
{
  return "bosdyn_msgs/msg/ProcessTopologyRequestParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ProcessTopologyRequestParams>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams>::value && has_fixed_size<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams>::value && has_fixed_size<bosdyn_msgs::msg::ProcessTopologyRequestICPParams>::value && has_fixed_size<bosdyn_msgs::msg::ProcessTopologyRequestOdometryLoopClosureParams>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ProcessTopologyRequestParams>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ProcessTopologyRequestCollisionCheckingParams>::value && has_bounded_size<bosdyn_msgs::msg::ProcessTopologyRequestFiducialLoopClosureParams>::value && has_bounded_size<bosdyn_msgs::msg::ProcessTopologyRequestICPParams>::value && has_bounded_size<bosdyn_msgs::msg::ProcessTopologyRequestOdometryLoopClosureParams>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ProcessTopologyRequestParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_PARAMS__TRAITS_HPP_
