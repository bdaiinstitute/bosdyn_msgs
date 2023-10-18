// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RobotSoftwareRelease.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_SOFTWARE_RELEASE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_SOFTWARE_RELEASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/robot_software_release__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'version'
#include "bosdyn_msgs/msg/detail/software_version__traits.hpp"
// Member 'changeset_date'
// Member 'install_date'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'parameters'
#include "bosdyn_msgs/msg/detail/parameter__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotSoftwareRelease & msg,
  std::ostream & out)
{
  out << "{";
  // member: version
  {
    out << "version: ";
    to_flow_style_yaml(msg.version, out);
    out << ", ";
  }

  // member: version_is_set
  {
    out << "version_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.version_is_set, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: changeset_date
  {
    out << "changeset_date: ";
    to_flow_style_yaml(msg.changeset_date, out);
    out << ", ";
  }

  // member: changeset_date_is_set
  {
    out << "changeset_date_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.changeset_date_is_set, out);
    out << ", ";
  }

  // member: changeset
  {
    out << "changeset: ";
    rosidl_generator_traits::value_to_yaml(msg.changeset, out);
    out << ", ";
  }

  // member: api_version
  {
    out << "api_version: ";
    rosidl_generator_traits::value_to_yaml(msg.api_version, out);
    out << ", ";
  }

  // member: build_information
  {
    out << "build_information: ";
    rosidl_generator_traits::value_to_yaml(msg.build_information, out);
    out << ", ";
  }

  // member: install_date
  {
    out << "install_date: ";
    to_flow_style_yaml(msg.install_date, out);
    out << ", ";
  }

  // member: install_date_is_set
  {
    out << "install_date_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.install_date_is_set, out);
    out << ", ";
  }

  // member: parameters
  {
    if (msg.parameters.size() == 0) {
      out << "parameters: []";
    } else {
      out << "parameters: [";
      size_t pending_items = msg.parameters.size();
      for (auto item : msg.parameters) {
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
  const RobotSoftwareRelease & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version:\n";
    to_block_style_yaml(msg.version, out, indentation + 2);
  }

  // member: version_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.version_is_set, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: changeset_date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "changeset_date:\n";
    to_block_style_yaml(msg.changeset_date, out, indentation + 2);
  }

  // member: changeset_date_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "changeset_date_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.changeset_date_is_set, out);
    out << "\n";
  }

  // member: changeset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "changeset: ";
    rosidl_generator_traits::value_to_yaml(msg.changeset, out);
    out << "\n";
  }

  // member: api_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "api_version: ";
    rosidl_generator_traits::value_to_yaml(msg.api_version, out);
    out << "\n";
  }

  // member: build_information
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "build_information: ";
    rosidl_generator_traits::value_to_yaml(msg.build_information, out);
    out << "\n";
  }

  // member: install_date
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "install_date:\n";
    to_block_style_yaml(msg.install_date, out, indentation + 2);
  }

  // member: install_date_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "install_date_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.install_date_is_set, out);
    out << "\n";
  }

  // member: parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parameters.size() == 0) {
      out << "parameters: []\n";
    } else {
      out << "parameters:\n";
      for (auto item : msg.parameters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotSoftwareRelease & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RobotSoftwareRelease & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RobotSoftwareRelease & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RobotSoftwareRelease>()
{
  return "bosdyn_msgs::msg::RobotSoftwareRelease";
}

template<>
inline const char * name<bosdyn_msgs::msg::RobotSoftwareRelease>()
{
  return "bosdyn_msgs/msg/RobotSoftwareRelease";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RobotSoftwareRelease>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RobotSoftwareRelease>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::RobotSoftwareRelease>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_SOFTWARE_RELEASE__TRAITS_HPP_
