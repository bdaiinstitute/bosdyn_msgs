// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/WorkerComputeResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WORKER_COMPUTE_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WORKER_COMPUTE_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/worker_compute_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/network_compute_status__traits.hpp"
// Member 'custom_param_error'
#include "bosdyn_msgs/msg/detail/custom_param_error__traits.hpp"
// Member 'output_images'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_output_image__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WorkerComputeResponse & msg,
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

  // member: custom_param_error
  {
    out << "custom_param_error: ";
    to_flow_style_yaml(msg.custom_param_error, out);
    out << ", ";
  }

  // member: custom_param_error_is_set
  {
    out << "custom_param_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_param_error_is_set, out);
    out << ", ";
  }

  // member: output_images
  {
    if (msg.output_images.size() == 0) {
      out << "output_images: []";
    } else {
      out << "output_images: [";
      size_t pending_items = msg.output_images.size();
      for (auto item : msg.output_images) {
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
  const WorkerComputeResponse & msg,
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

  // member: custom_param_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_param_error:\n";
    to_block_style_yaml(msg.custom_param_error, out, indentation + 2);
  }

  // member: custom_param_error_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_param_error_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_param_error_is_set, out);
    out << "\n";
  }

  // member: output_images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output_images.size() == 0) {
      out << "output_images: []\n";
    } else {
      out << "output_images:\n";
      for (auto item : msg.output_images) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WorkerComputeResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::WorkerComputeResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::WorkerComputeResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::WorkerComputeResponse>()
{
  return "bosdyn_msgs::msg::WorkerComputeResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::WorkerComputeResponse>()
{
  return "bosdyn_msgs/msg/WorkerComputeResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::WorkerComputeResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::WorkerComputeResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::WorkerComputeResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__WORKER_COMPUTE_RESPONSE__TRAITS_HPP_
