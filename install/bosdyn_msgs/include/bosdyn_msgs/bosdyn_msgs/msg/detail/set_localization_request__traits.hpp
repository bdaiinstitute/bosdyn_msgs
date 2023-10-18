// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SetLocalizationRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/set_localization_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'initial_guess'
#include "bosdyn_msgs/msg/detail/localization__traits.hpp"
// Member 'ko_tform_body'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'fiducial_init'
#include "bosdyn_msgs/msg/detail/set_localization_request_fiducial_init__traits.hpp"
// Member 'refinement'
#include "bosdyn_msgs/msg/detail/set_localization_request_one_of_refinement__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetLocalizationRequest & msg,
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

  // member: initial_guess
  {
    out << "initial_guess: ";
    to_flow_style_yaml(msg.initial_guess, out);
    out << ", ";
  }

  // member: initial_guess_is_set
  {
    out << "initial_guess_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_guess_is_set, out);
    out << ", ";
  }

  // member: ko_tform_body
  {
    out << "ko_tform_body: ";
    to_flow_style_yaml(msg.ko_tform_body, out);
    out << ", ";
  }

  // member: ko_tform_body_is_set
  {
    out << "ko_tform_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ko_tform_body_is_set, out);
    out << ", ";
  }

  // member: max_distance
  {
    out << "max_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_distance, out);
    out << ", ";
  }

  // member: max_yaw
  {
    out << "max_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.max_yaw, out);
    out << ", ";
  }

  // member: fiducial_init
  {
    out << "fiducial_init: ";
    to_flow_style_yaml(msg.fiducial_init, out);
    out << ", ";
  }

  // member: use_fiducial_id
  {
    out << "use_fiducial_id: ";
    rosidl_generator_traits::value_to_yaml(msg.use_fiducial_id, out);
    out << ", ";
  }

  // member: do_ambiguity_check
  {
    out << "do_ambiguity_check: ";
    rosidl_generator_traits::value_to_yaml(msg.do_ambiguity_check, out);
    out << ", ";
  }

  // member: restrict_fiducial_detections_to_target_waypoint
  {
    out << "restrict_fiducial_detections_to_target_waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.restrict_fiducial_detections_to_target_waypoint, out);
    out << ", ";
  }

  // member: refinement
  {
    out << "refinement: ";
    to_flow_style_yaml(msg.refinement, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLocalizationRequest & msg,
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

  // member: initial_guess
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_guess:\n";
    to_block_style_yaml(msg.initial_guess, out, indentation + 2);
  }

  // member: initial_guess_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_guess_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_guess_is_set, out);
    out << "\n";
  }

  // member: ko_tform_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ko_tform_body:\n";
    to_block_style_yaml(msg.ko_tform_body, out, indentation + 2);
  }

  // member: ko_tform_body_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ko_tform_body_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ko_tform_body_is_set, out);
    out << "\n";
  }

  // member: max_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_distance, out);
    out << "\n";
  }

  // member: max_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.max_yaw, out);
    out << "\n";
  }

  // member: fiducial_init
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fiducial_init:\n";
    to_block_style_yaml(msg.fiducial_init, out, indentation + 2);
  }

  // member: use_fiducial_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_fiducial_id: ";
    rosidl_generator_traits::value_to_yaml(msg.use_fiducial_id, out);
    out << "\n";
  }

  // member: do_ambiguity_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_ambiguity_check: ";
    rosidl_generator_traits::value_to_yaml(msg.do_ambiguity_check, out);
    out << "\n";
  }

  // member: restrict_fiducial_detections_to_target_waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restrict_fiducial_detections_to_target_waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.restrict_fiducial_detections_to_target_waypoint, out);
    out << "\n";
  }

  // member: refinement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refinement:\n";
    to_block_style_yaml(msg.refinement, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLocalizationRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SetLocalizationRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SetLocalizationRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SetLocalizationRequest>()
{
  return "bosdyn_msgs::msg::SetLocalizationRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::SetLocalizationRequest>()
{
  return "bosdyn_msgs/msg/SetLocalizationRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SetLocalizationRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Localization>::value && has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value && has_fixed_size<bosdyn_msgs::msg::SetLocalizationRequestFiducialInit>::value && has_fixed_size<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SetLocalizationRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Localization>::value && has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value && has_bounded_size<bosdyn_msgs::msg::SetLocalizationRequestFiducialInit>::value && has_bounded_size<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::SetLocalizationRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST__TRAITS_HPP_
