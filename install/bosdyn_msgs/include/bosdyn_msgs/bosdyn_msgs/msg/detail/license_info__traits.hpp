// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/LicenseInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LICENSE_INFO__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LICENSE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/license_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/license_info_status__traits.hpp"
// Member 'not_valid_before'
// Member 'not_valid_after'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LicenseInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: robot_serial
  {
    out << "robot_serial: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_serial, out);
    out << ", ";
  }

  // member: not_valid_before
  {
    out << "not_valid_before: ";
    to_flow_style_yaml(msg.not_valid_before, out);
    out << ", ";
  }

  // member: not_valid_before_is_set
  {
    out << "not_valid_before_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.not_valid_before_is_set, out);
    out << ", ";
  }

  // member: not_valid_after
  {
    out << "not_valid_after: ";
    to_flow_style_yaml(msg.not_valid_after, out);
    out << ", ";
  }

  // member: not_valid_after_is_set
  {
    out << "not_valid_after_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.not_valid_after_is_set, out);
    out << ", ";
  }

  // member: licensed_features
  {
    if (msg.licensed_features.size() == 0) {
      out << "licensed_features: []";
    } else {
      out << "licensed_features: [";
      size_t pending_items = msg.licensed_features.size();
      for (auto item : msg.licensed_features) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const LicenseInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: robot_serial
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_serial: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_serial, out);
    out << "\n";
  }

  // member: not_valid_before
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "not_valid_before:\n";
    to_block_style_yaml(msg.not_valid_before, out, indentation + 2);
  }

  // member: not_valid_before_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "not_valid_before_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.not_valid_before_is_set, out);
    out << "\n";
  }

  // member: not_valid_after
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "not_valid_after:\n";
    to_block_style_yaml(msg.not_valid_after, out, indentation + 2);
  }

  // member: not_valid_after_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "not_valid_after_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.not_valid_after_is_set, out);
    out << "\n";
  }

  // member: licensed_features
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.licensed_features.size() == 0) {
      out << "licensed_features: []\n";
    } else {
      out << "licensed_features:\n";
      for (auto item : msg.licensed_features) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LicenseInfo & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::LicenseInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::LicenseInfo & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::LicenseInfo>()
{
  return "bosdyn_msgs::msg::LicenseInfo";
}

template<>
inline const char * name<bosdyn_msgs::msg::LicenseInfo>()
{
  return "bosdyn_msgs/msg/LicenseInfo";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::LicenseInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::LicenseInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::LicenseInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LICENSE_INFO__TRAITS_HPP_
