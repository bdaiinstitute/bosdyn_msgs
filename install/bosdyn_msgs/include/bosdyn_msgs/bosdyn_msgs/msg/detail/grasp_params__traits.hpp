// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GraspParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRASP_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRASP_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/grasp_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'allowable_orientation'
#include "bosdyn_msgs/msg/detail/allowable_orientation__traits.hpp"
// Member 'position_constraint'
#include "bosdyn_msgs/msg/detail/grasp_position_constraint__traits.hpp"
// Member 'manipulation_camera_source'
#include "bosdyn_msgs/msg/detail/manipulation_camera_source__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraspParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: grasp_palm_to_fingertip
  {
    out << "grasp_palm_to_fingertip: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_palm_to_fingertip, out);
    out << ", ";
  }

  // member: grasp_params_frame_name
  {
    out << "grasp_params_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_params_frame_name, out);
    out << ", ";
  }

  // member: allowable_orientation
  {
    if (msg.allowable_orientation.size() == 0) {
      out << "allowable_orientation: []";
    } else {
      out << "allowable_orientation: [";
      size_t pending_items = msg.allowable_orientation.size();
      for (auto item : msg.allowable_orientation) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position_constraint
  {
    out << "position_constraint: ";
    to_flow_style_yaml(msg.position_constraint, out);
    out << ", ";
  }

  // member: manipulation_camera_source
  {
    out << "manipulation_camera_source: ";
    to_flow_style_yaml(msg.manipulation_camera_source, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraspParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: grasp_palm_to_fingertip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_palm_to_fingertip: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_palm_to_fingertip, out);
    out << "\n";
  }

  // member: grasp_params_frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_params_frame_name: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_params_frame_name, out);
    out << "\n";
  }

  // member: allowable_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.allowable_orientation.size() == 0) {
      out << "allowable_orientation: []\n";
    } else {
      out << "allowable_orientation:\n";
      for (auto item : msg.allowable_orientation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: position_constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_constraint:\n";
    to_block_style_yaml(msg.position_constraint, out, indentation + 2);
  }

  // member: manipulation_camera_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manipulation_camera_source:\n";
    to_block_style_yaml(msg.manipulation_camera_source, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraspParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GraspParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GraspParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GraspParams>()
{
  return "bosdyn_msgs::msg::GraspParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::GraspParams>()
{
  return "bosdyn_msgs/msg/GraspParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GraspParams>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GraspParams>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::GraspParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRASP_PARAMS__TRAITS_HPP_
