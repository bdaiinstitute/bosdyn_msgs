// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RemoteGrpc.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REMOTE_GRPC__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REMOTE_GRPC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/remote_grpc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'inputs'
#include "bosdyn_msgs/msg/detail/key_value__traits.hpp"
// Member 'params'
#include "bosdyn_msgs/msg/detail/dict_param__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RemoteGrpc & msg,
  std::ostream & out)
{
  out << "{";
  // member: host
  {
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << ", ";
  }

  // member: service_name
  {
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
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

  // member: inputs
  {
    if (msg.inputs.size() == 0) {
      out << "inputs: []";
    } else {
      out << "inputs: [";
      size_t pending_items = msg.inputs.size();
      for (auto item : msg.inputs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: group_name_format
  {
    out << "group_name_format: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name_format, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RemoteGrpc & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: host
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << "\n";
  }

  // member: service_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
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

  // member: inputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.inputs.size() == 0) {
      out << "inputs: []\n";
    } else {
      out << "inputs:\n";
      for (auto item : msg.inputs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: group_name_format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name_format: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name_format, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RemoteGrpc & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RemoteGrpc & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RemoteGrpc & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RemoteGrpc>()
{
  return "bosdyn_msgs::msg::RemoteGrpc";
}

template<>
inline const char * name<bosdyn_msgs::msg::RemoteGrpc>()
{
  return "bosdyn_msgs/msg/RemoteGrpc";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RemoteGrpc>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RemoteGrpc>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::RemoteGrpc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__REMOTE_GRPC__TRAITS_HPP_
