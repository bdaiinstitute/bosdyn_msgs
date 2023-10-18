// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ConstrainedManipulationCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'init_wrench_direction_in_frame_name'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"
// Member 'task_speed'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_one_of_task_speed__traits.hpp"
// Member 'task_type'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_task_type__traits.hpp"
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'control_mode'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_control_mode__traits.hpp"
// Member 'task_target_position'
#include "bosdyn_msgs/msg/detail/constrained_manipulation_command_request_one_of_task_target_position__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConstrainedManipulationCommandRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_name
  {
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
    out << ", ";
  }

  // member: init_wrench_direction_in_frame_name
  {
    out << "init_wrench_direction_in_frame_name: ";
    to_flow_style_yaml(msg.init_wrench_direction_in_frame_name, out);
    out << ", ";
  }

  // member: init_wrench_direction_in_frame_name_is_set
  {
    out << "init_wrench_direction_in_frame_name_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.init_wrench_direction_in_frame_name_is_set, out);
    out << ", ";
  }

  // member: task_speed
  {
    out << "task_speed: ";
    to_flow_style_yaml(msg.task_speed, out);
    out << ", ";
  }

  // member: force_limit
  {
    out << "force_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.force_limit, out);
    out << ", ";
  }

  // member: force_limit_is_set
  {
    out << "force_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.force_limit_is_set, out);
    out << ", ";
  }

  // member: torque_limit
  {
    out << "torque_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_limit, out);
    out << ", ";
  }

  // member: torque_limit_is_set
  {
    out << "torque_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_limit_is_set, out);
    out << ", ";
  }

  // member: task_type
  {
    out << "task_type: ";
    to_flow_style_yaml(msg.task_type, out);
    out << ", ";
  }

  // member: end_time
  {
    out << "end_time: ";
    to_flow_style_yaml(msg.end_time, out);
    out << ", ";
  }

  // member: end_time_is_set
  {
    out << "end_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time_is_set, out);
    out << ", ";
  }

  // member: enable_robot_locomotion
  {
    out << "enable_robot_locomotion: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_robot_locomotion, out);
    out << ", ";
  }

  // member: enable_robot_locomotion_is_set
  {
    out << "enable_robot_locomotion_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_robot_locomotion_is_set, out);
    out << ", ";
  }

  // member: control_mode
  {
    out << "control_mode: ";
    to_flow_style_yaml(msg.control_mode, out);
    out << ", ";
  }

  // member: task_target_position
  {
    out << "task_target_position: ";
    to_flow_style_yaml(msg.task_target_position, out);
    out << ", ";
  }

  // member: accel_limit
  {
    out << "accel_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_limit, out);
    out << ", ";
  }

  // member: accel_limit_is_set
  {
    out << "accel_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_limit_is_set, out);
    out << ", ";
  }

  // member: reset_estimator
  {
    out << "reset_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_estimator, out);
    out << ", ";
  }

  // member: reset_estimator_is_set
  {
    out << "reset_estimator_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_estimator_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConstrainedManipulationCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name, out);
    out << "\n";
  }

  // member: init_wrench_direction_in_frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_wrench_direction_in_frame_name:\n";
    to_block_style_yaml(msg.init_wrench_direction_in_frame_name, out, indentation + 2);
  }

  // member: init_wrench_direction_in_frame_name_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_wrench_direction_in_frame_name_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.init_wrench_direction_in_frame_name_is_set, out);
    out << "\n";
  }

  // member: task_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_speed:\n";
    to_block_style_yaml(msg.task_speed, out, indentation + 2);
  }

  // member: force_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.force_limit, out);
    out << "\n";
  }

  // member: force_limit_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.force_limit_is_set, out);
    out << "\n";
  }

  // member: torque_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_limit, out);
    out << "\n";
  }

  // member: torque_limit_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_limit_is_set, out);
    out << "\n";
  }

  // member: task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_type:\n";
    to_block_style_yaml(msg.task_type, out, indentation + 2);
  }

  // member: end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time:\n";
    to_block_style_yaml(msg.end_time, out, indentation + 2);
  }

  // member: end_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time_is_set, out);
    out << "\n";
  }

  // member: enable_robot_locomotion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_robot_locomotion: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_robot_locomotion, out);
    out << "\n";
  }

  // member: enable_robot_locomotion_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable_robot_locomotion_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.enable_robot_locomotion_is_set, out);
    out << "\n";
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode:\n";
    to_block_style_yaml(msg.control_mode, out, indentation + 2);
  }

  // member: task_target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_target_position:\n";
    to_block_style_yaml(msg.task_target_position, out, indentation + 2);
  }

  // member: accel_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_limit, out);
    out << "\n";
  }

  // member: accel_limit_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_limit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_limit_is_set, out);
    out << "\n";
  }

  // member: reset_estimator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_estimator: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_estimator, out);
    out << "\n";
  }

  // member: reset_estimator_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_estimator_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_estimator_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConstrainedManipulationCommandRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ConstrainedManipulationCommandRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest>()
{
  return "bosdyn_msgs::msg::ConstrainedManipulationCommandRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest>()
{
  return "bosdyn_msgs/msg/ConstrainedManipulationCommandRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ConstrainedManipulationCommandRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONSTRAINED_MANIPULATION_COMMAND_REQUEST__TRAITS_HPP_
