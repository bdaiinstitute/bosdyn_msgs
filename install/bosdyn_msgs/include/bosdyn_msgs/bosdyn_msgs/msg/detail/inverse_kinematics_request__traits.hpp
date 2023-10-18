// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'root_tform_scene'
// Member 'scene_tform_task'
// Member 'scene_tform_body_nominal'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'nominal_arm_configuration'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_named_arm_configuration__traits.hpp"
// Member 'nominal_arm_configuration_overrides'
#include "bosdyn_msgs/msg/detail/arm_joint_position__traits.hpp"
// Member 'stance_specification'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_stance_specification__traits.hpp"
// Member 'tool_specification'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_tool_specification__traits.hpp"
// Member 'task_specification'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_task_specification__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InverseKinematicsRequest & msg,
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

  // member: root_frame_name
  {
    out << "root_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.root_frame_name, out);
    out << ", ";
  }

  // member: root_tform_scene
  {
    out << "root_tform_scene: ";
    to_flow_style_yaml(msg.root_tform_scene, out);
    out << ", ";
  }

  // member: root_tform_scene_is_set
  {
    out << "root_tform_scene_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.root_tform_scene_is_set, out);
    out << ", ";
  }

  // member: scene_tform_task
  {
    out << "scene_tform_task: ";
    to_flow_style_yaml(msg.scene_tform_task, out);
    out << ", ";
  }

  // member: scene_tform_task_is_set
  {
    out << "scene_tform_task_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.scene_tform_task_is_set, out);
    out << ", ";
  }

  // member: nominal_arm_configuration
  {
    out << "nominal_arm_configuration: ";
    to_flow_style_yaml(msg.nominal_arm_configuration, out);
    out << ", ";
  }

  // member: nominal_arm_configuration_overrides
  {
    out << "nominal_arm_configuration_overrides: ";
    to_flow_style_yaml(msg.nominal_arm_configuration_overrides, out);
    out << ", ";
  }

  // member: nominal_arm_configuration_overrides_is_set
  {
    out << "nominal_arm_configuration_overrides_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_arm_configuration_overrides_is_set, out);
    out << ", ";
  }

  // member: scene_tform_body_nominal
  {
    out << "scene_tform_body_nominal: ";
    to_flow_style_yaml(msg.scene_tform_body_nominal, out);
    out << ", ";
  }

  // member: scene_tform_body_nominal_is_set
  {
    out << "scene_tform_body_nominal_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.scene_tform_body_nominal_is_set, out);
    out << ", ";
  }

  // member: stance_specification
  {
    out << "stance_specification: ";
    to_flow_style_yaml(msg.stance_specification, out);
    out << ", ";
  }

  // member: tool_specification
  {
    out << "tool_specification: ";
    to_flow_style_yaml(msg.tool_specification, out);
    out << ", ";
  }

  // member: task_specification
  {
    out << "task_specification: ";
    to_flow_style_yaml(msg.task_specification, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematicsRequest & msg,
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

  // member: root_frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.root_frame_name, out);
    out << "\n";
  }

  // member: root_tform_scene
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_tform_scene:\n";
    to_block_style_yaml(msg.root_tform_scene, out, indentation + 2);
  }

  // member: root_tform_scene_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_tform_scene_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.root_tform_scene_is_set, out);
    out << "\n";
  }

  // member: scene_tform_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene_tform_task:\n";
    to_block_style_yaml(msg.scene_tform_task, out, indentation + 2);
  }

  // member: scene_tform_task_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene_tform_task_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.scene_tform_task_is_set, out);
    out << "\n";
  }

  // member: nominal_arm_configuration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nominal_arm_configuration:\n";
    to_block_style_yaml(msg.nominal_arm_configuration, out, indentation + 2);
  }

  // member: nominal_arm_configuration_overrides
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nominal_arm_configuration_overrides:\n";
    to_block_style_yaml(msg.nominal_arm_configuration_overrides, out, indentation + 2);
  }

  // member: nominal_arm_configuration_overrides_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nominal_arm_configuration_overrides_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.nominal_arm_configuration_overrides_is_set, out);
    out << "\n";
  }

  // member: scene_tform_body_nominal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene_tform_body_nominal:\n";
    to_block_style_yaml(msg.scene_tform_body_nominal, out, indentation + 2);
  }

  // member: scene_tform_body_nominal_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene_tform_body_nominal_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.scene_tform_body_nominal_is_set, out);
    out << "\n";
  }

  // member: stance_specification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stance_specification:\n";
    to_block_style_yaml(msg.stance_specification, out, indentation + 2);
  }

  // member: tool_specification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tool_specification:\n";
    to_block_style_yaml(msg.tool_specification, out, indentation + 2);
  }

  // member: task_specification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_specification:\n";
    to_block_style_yaml(msg.task_specification, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematicsRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::InverseKinematicsRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::InverseKinematicsRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::InverseKinematicsRequest>()
{
  return "bosdyn_msgs::msg::InverseKinematicsRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::InverseKinematicsRequest>()
{
  return "bosdyn_msgs/msg/InverseKinematicsRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::InverseKinematicsRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::InverseKinematicsRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::InverseKinematicsRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST__TRAITS_HPP_
