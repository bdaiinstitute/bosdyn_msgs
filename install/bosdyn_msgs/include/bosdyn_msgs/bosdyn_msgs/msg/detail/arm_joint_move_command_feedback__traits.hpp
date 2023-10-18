// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ArmJointMoveCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_FEEDBACK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback_status__traits.hpp"
// Member 'planner_status'
#include "bosdyn_msgs/msg/detail/arm_joint_move_command_feedback_planner_status__traits.hpp"
// Member 'planned_points'
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory_point__traits.hpp"
// Member 'time_to_goal'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmJointMoveCommandFeedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: planner_status
  {
    out << "planner_status: ";
    to_flow_style_yaml(msg.planner_status, out);
    out << ", ";
  }

  // member: planned_points
  {
    if (msg.planned_points.size() == 0) {
      out << "planned_points: []";
    } else {
      out << "planned_points: [";
      size_t pending_items = msg.planned_points.size();
      for (auto item : msg.planned_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_to_goal
  {
    out << "time_to_goal: ";
    to_flow_style_yaml(msg.time_to_goal, out);
    out << ", ";
  }

  // member: time_to_goal_is_set
  {
    out << "time_to_goal_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.time_to_goal_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmJointMoveCommandFeedback & msg,
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

  // member: planner_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_status:\n";
    to_block_style_yaml(msg.planner_status, out, indentation + 2);
  }

  // member: planned_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.planned_points.size() == 0) {
      out << "planned_points: []\n";
    } else {
      out << "planned_points:\n";
      for (auto item : msg.planned_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: time_to_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_to_goal:\n";
    to_block_style_yaml(msg.time_to_goal, out, indentation + 2);
  }

  // member: time_to_goal_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_to_goal_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.time_to_goal_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmJointMoveCommandFeedback & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ArmJointMoveCommandFeedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ArmJointMoveCommandFeedback & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ArmJointMoveCommandFeedback>()
{
  return "bosdyn_msgs::msg::ArmJointMoveCommandFeedback";
}

template<>
inline const char * name<bosdyn_msgs::msg::ArmJointMoveCommandFeedback>()
{
  return "bosdyn_msgs/msg/ArmJointMoveCommandFeedback";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ArmJointMoveCommandFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ArmJointMoveCommandFeedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ArmJointMoveCommandFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_FEEDBACK__TRAITS_HPP_
