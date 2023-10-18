// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SetGripperCameraParamsOneOfParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS_ONE_OF_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS_ONE_OF_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/set_gripper_camera_params_one_of_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'new_params'
#include "bosdyn_msgs/msg/detail/gripper_camera_params__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetGripperCameraParamsOneOfParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: params_in_blackboard_key
  {
    out << "params_in_blackboard_key: ";
    rosidl_generator_traits::value_to_yaml(msg.params_in_blackboard_key, out);
    out << ", ";
  }

  // member: new_params
  {
    out << "new_params: ";
    to_flow_style_yaml(msg.new_params, out);
    out << ", ";
  }

  // member: params_choice
  {
    out << "params_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.params_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetGripperCameraParamsOneOfParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: params_in_blackboard_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params_in_blackboard_key: ";
    rosidl_generator_traits::value_to_yaml(msg.params_in_blackboard_key, out);
    out << "\n";
  }

  // member: new_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_params:\n";
    to_block_style_yaml(msg.new_params, out, indentation + 2);
  }

  // member: params_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.params_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetGripperCameraParamsOneOfParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams>()
{
  return "bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams>()
{
  return "bosdyn_msgs/msg/SetGripperCameraParamsOneOfParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS_ONE_OF_PARAMS__TRAITS_HPP_
