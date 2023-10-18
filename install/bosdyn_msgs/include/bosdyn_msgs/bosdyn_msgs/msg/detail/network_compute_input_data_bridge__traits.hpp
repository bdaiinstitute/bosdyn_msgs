// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeInputDataBridge.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_BRIDGE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_BRIDGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/network_compute_input_data_bridge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image_sources_and_services'
#include "bosdyn_msgs/msg/detail/image_source_and_service__traits.hpp"
// Member 'parameters'
#include "bosdyn_msgs/msg/detail/compute_parameters__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NetworkComputeInputDataBridge & msg,
  std::ostream & out)
{
  out << "{";
  // member: image_sources_and_services
  {
    if (msg.image_sources_and_services.size() == 0) {
      out << "image_sources_and_services: []";
    } else {
      out << "image_sources_and_services: [";
      size_t pending_items = msg.image_sources_and_services.size();
      for (auto item : msg.image_sources_and_services) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: parameters
  {
    out << "parameters: ";
    to_flow_style_yaml(msg.parameters, out);
    out << ", ";
  }

  // member: parameters_is_set
  {
    out << "parameters_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.parameters_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NetworkComputeInputDataBridge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image_sources_and_services
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_sources_and_services.size() == 0) {
      out << "image_sources_and_services: []\n";
    } else {
      out << "image_sources_and_services:\n";
      for (auto item : msg.image_sources_and_services) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parameters:\n";
    to_block_style_yaml(msg.parameters, out, indentation + 2);
  }

  // member: parameters_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parameters_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.parameters_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NetworkComputeInputDataBridge & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::NetworkComputeInputDataBridge & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::NetworkComputeInputDataBridge & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::NetworkComputeInputDataBridge>()
{
  return "bosdyn_msgs::msg::NetworkComputeInputDataBridge";
}

template<>
inline const char * name<bosdyn_msgs::msg::NetworkComputeInputDataBridge>()
{
  return "bosdyn_msgs/msg/NetworkComputeInputDataBridge";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::NetworkComputeInputDataBridge>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::NetworkComputeInputDataBridge>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::NetworkComputeInputDataBridge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_BRIDGE__TRAITS_HPP_
