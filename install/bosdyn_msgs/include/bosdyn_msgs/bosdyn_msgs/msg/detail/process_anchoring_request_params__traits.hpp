// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/process_anchoring_request_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'optimizer_params'
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_optimizer_params__traits.hpp"
// Member 'measurement_params'
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_measurement_params__traits.hpp"
// Member 'weights'
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_weights__traits.hpp"
// Member 'gravity_ewrt_seed'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessAnchoringRequestParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: optimizer_params
  {
    out << "optimizer_params: ";
    to_flow_style_yaml(msg.optimizer_params, out);
    out << ", ";
  }

  // member: optimizer_params_is_set
  {
    out << "optimizer_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_params_is_set, out);
    out << ", ";
  }

  // member: measurement_params
  {
    out << "measurement_params: ";
    to_flow_style_yaml(msg.measurement_params, out);
    out << ", ";
  }

  // member: measurement_params_is_set
  {
    out << "measurement_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_params_is_set, out);
    out << ", ";
  }

  // member: weights
  {
    out << "weights: ";
    to_flow_style_yaml(msg.weights, out);
    out << ", ";
  }

  // member: weights_is_set
  {
    out << "weights_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.weights_is_set, out);
    out << ", ";
  }

  // member: optimize_existing_anchoring
  {
    out << "optimize_existing_anchoring: ";
    rosidl_generator_traits::value_to_yaml(msg.optimize_existing_anchoring, out);
    out << ", ";
  }

  // member: optimize_existing_anchoring_is_set
  {
    out << "optimize_existing_anchoring_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.optimize_existing_anchoring_is_set, out);
    out << ", ";
  }

  // member: gravity_ewrt_seed
  {
    out << "gravity_ewrt_seed: ";
    to_flow_style_yaml(msg.gravity_ewrt_seed, out);
    out << ", ";
  }

  // member: gravity_ewrt_seed_is_set
  {
    out << "gravity_ewrt_seed_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_ewrt_seed_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessAnchoringRequestParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: optimizer_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimizer_params:\n";
    to_block_style_yaml(msg.optimizer_params, out, indentation + 2);
  }

  // member: optimizer_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimizer_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.optimizer_params_is_set, out);
    out << "\n";
  }

  // member: measurement_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_params:\n";
    to_block_style_yaml(msg.measurement_params, out, indentation + 2);
  }

  // member: measurement_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_params_is_set, out);
    out << "\n";
  }

  // member: weights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weights:\n";
    to_block_style_yaml(msg.weights, out, indentation + 2);
  }

  // member: weights_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weights_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.weights_is_set, out);
    out << "\n";
  }

  // member: optimize_existing_anchoring
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimize_existing_anchoring: ";
    rosidl_generator_traits::value_to_yaml(msg.optimize_existing_anchoring, out);
    out << "\n";
  }

  // member: optimize_existing_anchoring_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimize_existing_anchoring_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.optimize_existing_anchoring_is_set, out);
    out << "\n";
  }

  // member: gravity_ewrt_seed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gravity_ewrt_seed:\n";
    to_block_style_yaml(msg.gravity_ewrt_seed, out, indentation + 2);
  }

  // member: gravity_ewrt_seed_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gravity_ewrt_seed_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_ewrt_seed_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessAnchoringRequestParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ProcessAnchoringRequestParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ProcessAnchoringRequestParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ProcessAnchoringRequestParams>()
{
  return "bosdyn_msgs::msg::ProcessAnchoringRequestParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::ProcessAnchoringRequestParams>()
{
  return "bosdyn_msgs/msg/ProcessAnchoringRequestParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ProcessAnchoringRequestParams>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams>::value && has_fixed_size<bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams>::value && has_fixed_size<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ProcessAnchoringRequestParams>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams>::value && has_bounded_size<bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams>::value && has_bounded_size<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ProcessAnchoringRequestParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS__TRAITS_HPP_
