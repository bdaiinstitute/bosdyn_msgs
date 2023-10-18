// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignmentAlignment.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment_alignment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'reference'
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment_alignment_one_of_reference__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionWrapperSpotCamAlignmentAlignment & msg,
  std::ostream & out)
{
  out << "{";
  // member: zoom
  {
    out << "zoom: ";
    rosidl_generator_traits::value_to_yaml(msg.zoom, out);
    out << ", ";
  }

  // member: sensor_id
  {
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << ", ";
  }

  // member: reference
  {
    out << "reference: ";
    to_flow_style_yaml(msg.reference, out);
    out << ", ";
  }

  // member: is_skipped
  {
    out << "is_skipped: ";
    rosidl_generator_traits::value_to_yaml(msg.is_skipped, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionWrapperSpotCamAlignmentAlignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: zoom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zoom: ";
    rosidl_generator_traits::value_to_yaml(msg.zoom, out);
    out << "\n";
  }

  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }

  // member: reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference:\n";
    to_block_style_yaml(msg.reference, out, indentation + 2);
  }

  // member: is_skipped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_skipped: ";
    rosidl_generator_traits::value_to_yaml(msg.is_skipped, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionWrapperSpotCamAlignmentAlignment & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment>()
{
  return "bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment";
}

template<>
inline const char * name<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment>()
{
  return "bosdyn_msgs/msg/ActionWrapperSpotCamAlignmentAlignment";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT__TRAITS_HPP_
