// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GetStatusResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_STATUS_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_STATUS_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/get_status_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/get_status_response_status__traits.hpp"
// Member 'data_saved'
#include "bosdyn_msgs/msg/detail/data_identifier__traits.hpp"
// Member 'data_errors'
#include "bosdyn_msgs/msg/detail/data_error__traits.hpp"
// Member 'service_errors'
#include "bosdyn_msgs/msg/detail/plugin_service_error__traits.hpp"
// Member 'network_compute_errors'
#include "bosdyn_msgs/msg/detail/network_compute_error__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GetStatusResponse & msg,
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

  // member: data_saved
  {
    if (msg.data_saved.size() == 0) {
      out << "data_saved: []";
    } else {
      out << "data_saved: [";
      size_t pending_items = msg.data_saved.size();
      for (auto item : msg.data_saved) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: data_errors
  {
    if (msg.data_errors.size() == 0) {
      out << "data_errors: []";
    } else {
      out << "data_errors: [";
      size_t pending_items = msg.data_errors.size();
      for (auto item : msg.data_errors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: service_errors
  {
    if (msg.service_errors.size() == 0) {
      out << "service_errors: []";
    } else {
      out << "service_errors: [";
      size_t pending_items = msg.service_errors.size();
      for (auto item : msg.service_errors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: network_compute_errors
  {
    if (msg.network_compute_errors.size() == 0) {
      out << "network_compute_errors: []";
    } else {
      out << "network_compute_errors: [";
      size_t pending_items = msg.network_compute_errors.size();
      for (auto item : msg.network_compute_errors) {
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
  const GetStatusResponse & msg,
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

  // member: data_saved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data_saved.size() == 0) {
      out << "data_saved: []\n";
    } else {
      out << "data_saved:\n";
      for (auto item : msg.data_saved) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: data_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data_errors.size() == 0) {
      out << "data_errors: []\n";
    } else {
      out << "data_errors:\n";
      for (auto item : msg.data_errors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: service_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.service_errors.size() == 0) {
      out << "service_errors: []\n";
    } else {
      out << "service_errors:\n";
      for (auto item : msg.service_errors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: network_compute_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.network_compute_errors.size() == 0) {
      out << "network_compute_errors: []\n";
    } else {
      out << "network_compute_errors:\n";
      for (auto item : msg.network_compute_errors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetStatusResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GetStatusResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GetStatusResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GetStatusResponse>()
{
  return "bosdyn_msgs::msg::GetStatusResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::GetStatusResponse>()
{
  return "bosdyn_msgs/msg/GetStatusResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GetStatusResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GetStatusResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::GetStatusResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_STATUS_RESPONSE__TRAITS_HPP_
