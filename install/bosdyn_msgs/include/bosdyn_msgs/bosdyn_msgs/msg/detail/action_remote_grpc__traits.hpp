// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ActionRemoteGrpc.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_REMOTE_GRPC__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_REMOTE_GRPC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/action_remote_grpc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rpc_timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'parameters'
#include "bosdyn_msgs/msg/detail/custom_param_collection__traits.hpp"
// Member 'record_time_images'
#include "bosdyn_msgs/msg/detail/image_capture_and_source__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionRemoteGrpc & msg,
  std::ostream & out)
{
  out << "{";
  // member: service_name
  {
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << ", ";
  }

  // member: rpc_timeout
  {
    out << "rpc_timeout: ";
    to_flow_style_yaml(msg.rpc_timeout, out);
    out << ", ";
  }

  // member: rpc_timeout_is_set
  {
    out << "rpc_timeout_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.rpc_timeout_is_set, out);
    out << ", ";
  }

  // member: lease_resources
  {
    if (msg.lease_resources.size() == 0) {
      out << "lease_resources: []";
    } else {
      out << "lease_resources: [";
      size_t pending_items = msg.lease_resources.size();
      for (auto item : msg.lease_resources) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
    out << ", ";
  }

  // member: record_time_images
  {
    if (msg.record_time_images.size() == 0) {
      out << "record_time_images: []";
    } else {
      out << "record_time_images: [";
      size_t pending_items = msg.record_time_images.size();
      for (auto item : msg.record_time_images) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionRemoteGrpc & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: service_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << "\n";
  }

  // member: rpc_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpc_timeout:\n";
    to_block_style_yaml(msg.rpc_timeout, out, indentation + 2);
  }

  // member: rpc_timeout_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpc_timeout_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.rpc_timeout_is_set, out);
    out << "\n";
  }

  // member: lease_resources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lease_resources.size() == 0) {
      out << "lease_resources: []\n";
    } else {
      out << "lease_resources:\n";
      for (auto item : msg.lease_resources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
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

  // member: record_time_images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.record_time_images.size() == 0) {
      out << "record_time_images: []\n";
    } else {
      out << "record_time_images:\n";
      for (auto item : msg.record_time_images) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionRemoteGrpc & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ActionRemoteGrpc & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ActionRemoteGrpc & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ActionRemoteGrpc>()
{
  return "bosdyn_msgs::msg::ActionRemoteGrpc";
}

template<>
inline const char * name<bosdyn_msgs::msg::ActionRemoteGrpc>()
{
  return "bosdyn_msgs/msg/ActionRemoteGrpc";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ActionRemoteGrpc>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ActionRemoteGrpc>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ActionRemoteGrpc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_REMOTE_GRPC__TRAITS_HPP_
