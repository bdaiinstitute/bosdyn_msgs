// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParamsWeights.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_WEIGHTS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_WEIGHTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_weights__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessAnchoringRequestParamsWeights & msg,
  std::ostream & out)
{
  out << "{";
  // member: kinematic_odometry_weight
  {
    out << "kinematic_odometry_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.kinematic_odometry_weight, out);
    out << ", ";
  }

  // member: visual_odometry_weight
  {
    out << "visual_odometry_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.visual_odometry_weight, out);
    out << ", ";
  }

  // member: world_object_weight
  {
    out << "world_object_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.world_object_weight, out);
    out << ", ";
  }

  // member: hint_weight
  {
    out << "hint_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.hint_weight, out);
    out << ", ";
  }

  // member: gyroscope_weight
  {
    out << "gyroscope_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.gyroscope_weight, out);
    out << ", ";
  }

  // member: loop_closure_weight
  {
    out << "loop_closure_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_closure_weight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessAnchoringRequestParamsWeights & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kinematic_odometry_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kinematic_odometry_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.kinematic_odometry_weight, out);
    out << "\n";
  }

  // member: visual_odometry_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visual_odometry_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.visual_odometry_weight, out);
    out << "\n";
  }

  // member: world_object_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "world_object_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.world_object_weight, out);
    out << "\n";
  }

  // member: hint_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hint_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.hint_weight, out);
    out << "\n";
  }

  // member: gyroscope_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyroscope_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.gyroscope_weight, out);
    out << "\n";
  }

  // member: loop_closure_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_closure_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_closure_weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessAnchoringRequestParamsWeights & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights>()
{
  return "bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights";
}

template<>
inline const char * name<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights>()
{
  return "bosdyn_msgs/msg/ProcessAnchoringRequestParamsWeights";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_WEIGHTS__TRAITS_HPP_
