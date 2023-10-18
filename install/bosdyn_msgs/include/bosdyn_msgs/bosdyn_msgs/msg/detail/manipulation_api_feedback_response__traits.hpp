// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ManipulationApiFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_FEEDBACK_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_FEEDBACK_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/manipulation_api_feedback_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'current_state'
#include "bosdyn_msgs/msg/detail/manipulation_feedback_state__traits.hpp"
// Member 'transforms_snapshot_manipulation_data'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ManipulationApiFeedbackResponse & msg,
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

  // member: manipulation_cmd_id
  {
    out << "manipulation_cmd_id: ";
    rosidl_generator_traits::value_to_yaml(msg.manipulation_cmd_id, out);
    out << ", ";
  }

  // member: current_state
  {
    out << "current_state: ";
    to_flow_style_yaml(msg.current_state, out);
    out << ", ";
  }

  // member: transforms_snapshot_manipulation_data
  {
    out << "transforms_snapshot_manipulation_data: ";
    to_flow_style_yaml(msg.transforms_snapshot_manipulation_data, out);
    out << ", ";
  }

  // member: transforms_snapshot_manipulation_data_is_set
  {
    out << "transforms_snapshot_manipulation_data_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_manipulation_data_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManipulationApiFeedbackResponse & msg,
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

  // member: manipulation_cmd_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manipulation_cmd_id: ";
    rosidl_generator_traits::value_to_yaml(msg.manipulation_cmd_id, out);
    out << "\n";
  }

  // member: current_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_state:\n";
    to_block_style_yaml(msg.current_state, out, indentation + 2);
  }

  // member: transforms_snapshot_manipulation_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot_manipulation_data:\n";
    to_block_style_yaml(msg.transforms_snapshot_manipulation_data, out, indentation + 2);
  }

  // member: transforms_snapshot_manipulation_data_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot_manipulation_data_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_manipulation_data_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManipulationApiFeedbackResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ManipulationApiFeedbackResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ManipulationApiFeedbackResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ManipulationApiFeedbackResponse>()
{
  return "bosdyn_msgs::msg::ManipulationApiFeedbackResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::ManipulationApiFeedbackResponse>()
{
  return "bosdyn_msgs/msg/ManipulationApiFeedbackResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ManipulationApiFeedbackResponse>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::FrameTreeSnapshot>::value && has_fixed_size<bosdyn_msgs::msg::ManipulationFeedbackState>::value && has_fixed_size<bosdyn_msgs::msg::ResponseHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ManipulationApiFeedbackResponse>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::FrameTreeSnapshot>::value && has_bounded_size<bosdyn_msgs::msg::ManipulationFeedbackState>::value && has_bounded_size<bosdyn_msgs::msg::ResponseHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ManipulationApiFeedbackResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_FEEDBACK_RESPONSE__TRAITS_HPP_
