// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmJointPosition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_POSITION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_joint_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmJointPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: sh0
  {
    out << "sh0: ";
    rosidl_generator_traits::value_to_yaml(msg.sh0, out);
    out << ", ";
  }

  // member: sh0_is_set
  {
    out << "sh0_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.sh0_is_set, out);
    out << ", ";
  }

  // member: sh1
  {
    out << "sh1: ";
    rosidl_generator_traits::value_to_yaml(msg.sh1, out);
    out << ", ";
  }

  // member: sh1_is_set
  {
    out << "sh1_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.sh1_is_set, out);
    out << ", ";
  }

  // member: el0
  {
    out << "el0: ";
    rosidl_generator_traits::value_to_yaml(msg.el0, out);
    out << ", ";
  }

  // member: el0_is_set
  {
    out << "el0_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.el0_is_set, out);
    out << ", ";
  }

  // member: el1
  {
    out << "el1: ";
    rosidl_generator_traits::value_to_yaml(msg.el1, out);
    out << ", ";
  }

  // member: el1_is_set
  {
    out << "el1_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.el1_is_set, out);
    out << ", ";
  }

  // member: wr0
  {
    out << "wr0: ";
    rosidl_generator_traits::value_to_yaml(msg.wr0, out);
    out << ", ";
  }

  // member: wr0_is_set
  {
    out << "wr0_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.wr0_is_set, out);
    out << ", ";
  }

  // member: wr1
  {
    out << "wr1: ";
    rosidl_generator_traits::value_to_yaml(msg.wr1, out);
    out << ", ";
  }

  // member: wr1_is_set
  {
    out << "wr1_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.wr1_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmJointPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sh0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sh0: ";
    rosidl_generator_traits::value_to_yaml(msg.sh0, out);
    out << "\n";
  }

  // member: sh0_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sh0_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.sh0_is_set, out);
    out << "\n";
  }

  // member: sh1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sh1: ";
    rosidl_generator_traits::value_to_yaml(msg.sh1, out);
    out << "\n";
  }

  // member: sh1_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sh1_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.sh1_is_set, out);
    out << "\n";
  }

  // member: el0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "el0: ";
    rosidl_generator_traits::value_to_yaml(msg.el0, out);
    out << "\n";
  }

  // member: el0_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "el0_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.el0_is_set, out);
    out << "\n";
  }

  // member: el1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "el1: ";
    rosidl_generator_traits::value_to_yaml(msg.el1, out);
    out << "\n";
  }

  // member: el1_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "el1_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.el1_is_set, out);
    out << "\n";
  }

  // member: wr0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wr0: ";
    rosidl_generator_traits::value_to_yaml(msg.wr0, out);
    out << "\n";
  }

  // member: wr0_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wr0_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.wr0_is_set, out);
    out << "\n";
  }

  // member: wr1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wr1: ";
    rosidl_generator_traits::value_to_yaml(msg.wr1, out);
    out << "\n";
  }

  // member: wr1_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wr1_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.wr1_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmJointPosition & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmJointPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmJointPosition & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmJointPosition>()
{
  return "bosdyn_msgs::msg::ArmJointPosition";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmJointPosition>()
{
  return "bosdyn_msgs/msg/ArmJointPosition";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmJointPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmJointPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmJointPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_POSITION__TRAITS_HPP_
