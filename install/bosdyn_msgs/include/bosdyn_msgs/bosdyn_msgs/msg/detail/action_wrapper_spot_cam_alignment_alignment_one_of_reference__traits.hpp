// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignmentAlignmentOneOfReference.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT_ONE_OF_REFERENCE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT_ONE_OF_REFERENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment_alignment_one_of_reference__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionWrapperSpotCamAlignmentAlignmentOneOfReference & msg,
  std::ostream & out)
{
  out << "{";
  // member: scene_object_id
  {
    out << "scene_object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.scene_object_id, out);
    out << ", ";
  }

  // member: reference_choice
  {
    out << "reference_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionWrapperSpotCamAlignmentAlignmentOneOfReference & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: scene_object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scene_object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.scene_object_id, out);
    out << "\n";
  }

  // member: reference_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionWrapperSpotCamAlignmentAlignmentOneOfReference & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference>()
{
  return "bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference";
}

template<>
inline const char * name<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference>()
{
  return "bosdyn_msgs/msg/ActionWrapperSpotCamAlignmentAlignmentOneOfReference";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT_ONE_OF_REFERENCE__TRAITS_HPP_
