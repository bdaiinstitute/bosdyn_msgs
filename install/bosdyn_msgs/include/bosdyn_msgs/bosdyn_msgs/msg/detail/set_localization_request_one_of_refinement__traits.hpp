// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SetLocalizationRequestOneOfRefinement.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_ONE_OF_REFINEMENT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_ONE_OF_REFINEMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/set_localization_request_one_of_refinement__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'refine_with_visual_features'
#include "bosdyn_msgs/msg/detail/visual_refinement_options__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetLocalizationRequestOneOfRefinement & msg,
  std::ostream & out)
{
  out << "{";
  // member: refine_fiducial_result_with_icp
  {
    out << "refine_fiducial_result_with_icp: ";
    rosidl_generator_traits::value_to_yaml(msg.refine_fiducial_result_with_icp, out);
    out << ", ";
  }

  // member: refine_with_visual_features
  {
    out << "refine_with_visual_features: ";
    to_flow_style_yaml(msg.refine_with_visual_features, out);
    out << ", ";
  }

  // member: refinement_choice
  {
    out << "refinement_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.refinement_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLocalizationRequestOneOfRefinement & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: refine_fiducial_result_with_icp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refine_fiducial_result_with_icp: ";
    rosidl_generator_traits::value_to_yaml(msg.refine_fiducial_result_with_icp, out);
    out << "\n";
  }

  // member: refine_with_visual_features
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refine_with_visual_features:\n";
    to_block_style_yaml(msg.refine_with_visual_features, out, indentation + 2);
  }

  // member: refinement_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refinement_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.refinement_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLocalizationRequestOneOfRefinement & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement>()
{
  return "bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement";
}

template<>
inline const char * name<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement>()
{
  return "bosdyn_msgs/msg/SetLocalizationRequestOneOfRefinement";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::VisualRefinementOptions>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::VisualRefinementOptions>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_ONE_OF_REFINEMENT__TRAITS_HPP_
