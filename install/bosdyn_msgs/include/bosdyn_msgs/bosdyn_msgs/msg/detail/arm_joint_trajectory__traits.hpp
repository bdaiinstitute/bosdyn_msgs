// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_joint_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory_point__traits.hpp"
// Member 'reference_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmJointTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reference_time
  {
    out << "reference_time: ";
    to_flow_style_yaml(msg.reference_time, out);
    out << ", ";
  }

  // member: reference_time_is_set
  {
    out << "reference_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_time_is_set, out);
    out << ", ";
  }

  // member: maximum_velocity
  {
    out << "maximum_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_velocity, out);
    out << ", ";
  }

  // member: maximum_velocity_is_set
  {
    out << "maximum_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_velocity_is_set, out);
    out << ", ";
  }

  // member: maximum_acceleration
  {
    out << "maximum_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_acceleration, out);
    out << ", ";
  }

  // member: maximum_acceleration_is_set
  {
    out << "maximum_acceleration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_acceleration_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmJointTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: reference_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_time:\n";
    to_block_style_yaml(msg.reference_time, out, indentation + 2);
  }

  // member: reference_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_time_is_set, out);
    out << "\n";
  }

  // member: maximum_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_velocity, out);
    out << "\n";
  }

  // member: maximum_velocity_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_velocity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_velocity_is_set, out);
    out << "\n";
  }

  // member: maximum_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_acceleration, out);
    out << "\n";
  }

  // member: maximum_acceleration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_acceleration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_acceleration_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmJointTrajectory & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmJointTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmJointTrajectory & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmJointTrajectory>()
{
  return "bosdyn_msgs::msg::ArmJointTrajectory";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmJointTrajectory>()
{
  return "bosdyn_msgs/msg/ArmJointTrajectory";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmJointTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmJointTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmJointTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_TRAJECTORY__TRAITS_HPP_
