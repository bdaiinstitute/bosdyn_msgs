// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PowerCommandResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/power_command_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'lease_use_result'
#include "bosdyn_msgs/msg/detail/lease_use_result__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/power_command_status__traits.hpp"
// Member 'license_status'
#include "bosdyn_msgs/msg/detail/license_info_status__traits.hpp"
// Member 'blocking_faults'
#include "bosdyn_msgs/msg/detail/system_fault__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerCommandResponse & msg,
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

  // member: lease_use_result
  {
    out << "lease_use_result: ";
    to_flow_style_yaml(msg.lease_use_result, out);
    out << ", ";
  }

  // member: lease_use_result_is_set
  {
    out << "lease_use_result_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_use_result_is_set, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: power_command_id
  {
    out << "power_command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.power_command_id, out);
    out << ", ";
  }

  // member: license_status
  {
    out << "license_status: ";
    to_flow_style_yaml(msg.license_status, out);
    out << ", ";
  }

  // member: blocking_faults
  {
    if (msg.blocking_faults.size() == 0) {
      out << "blocking_faults: []";
    } else {
      out << "blocking_faults: [";
      size_t pending_items = msg.blocking_faults.size();
      for (auto item : msg.blocking_faults) {
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
  const PowerCommandResponse & msg,
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

  // member: lease_use_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_use_result:\n";
    to_block_style_yaml(msg.lease_use_result, out, indentation + 2);
  }

  // member: lease_use_result_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_use_result_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_use_result_is_set, out);
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

  // member: power_command_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_command_id: ";
    rosidl_generator_traits::value_to_yaml(msg.power_command_id, out);
    out << "\n";
  }

  // member: license_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "license_status:\n";
    to_block_style_yaml(msg.license_status, out, indentation + 2);
  }

  // member: blocking_faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blocking_faults.size() == 0) {
      out << "blocking_faults: []\n";
    } else {
      out << "blocking_faults:\n";
      for (auto item : msg.blocking_faults) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerCommandResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PowerCommandResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PowerCommandResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PowerCommandResponse>()
{
  return "bosdyn_msgs::msg::PowerCommandResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::PowerCommandResponse>()
{
  return "bosdyn_msgs/msg/PowerCommandResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PowerCommandResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PowerCommandResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::PowerCommandResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_RESPONSE__TRAITS_HPP_
