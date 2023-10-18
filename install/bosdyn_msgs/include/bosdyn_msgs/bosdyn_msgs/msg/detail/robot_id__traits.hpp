// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RobotId.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_ID__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/robot_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'software_release'
#include "bosdyn_msgs/msg/detail/robot_software_release__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotId & msg,
  std::ostream & out)
{
  out << "{";
  // member: serial_number
  {
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << ", ";
  }

  // member: species
  {
    out << "species: ";
    rosidl_generator_traits::value_to_yaml(msg.species, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: software_release
  {
    out << "software_release: ";
    to_flow_style_yaml(msg.software_release, out);
    out << ", ";
  }

  // member: software_release_is_set
  {
    out << "software_release_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.software_release_is_set, out);
    out << ", ";
  }

  // member: nickname
  {
    out << "nickname: ";
    rosidl_generator_traits::value_to_yaml(msg.nickname, out);
    out << ", ";
  }

  // member: computer_serial_number
  {
    out << "computer_serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.computer_serial_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotId & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: species
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "species: ";
    rosidl_generator_traits::value_to_yaml(msg.species, out);
    out << "\n";
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: software_release
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_release:\n";
    to_block_style_yaml(msg.software_release, out, indentation + 2);
  }

  // member: software_release_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_release_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.software_release_is_set, out);
    out << "\n";
  }

  // member: nickname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nickname: ";
    rosidl_generator_traits::value_to_yaml(msg.nickname, out);
    out << "\n";
  }

  // member: computer_serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "computer_serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.computer_serial_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotId & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RobotId & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RobotId & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RobotId>()
{
  return "bosdyn_msgs::msg::RobotId";
}

template<>
inline const char * name<bosdyn_msgs::msg::RobotId>()
{
  return "bosdyn_msgs/msg/RobotId";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RobotId>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RobotId>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::RobotId>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_ID__TRAITS_HPP_
