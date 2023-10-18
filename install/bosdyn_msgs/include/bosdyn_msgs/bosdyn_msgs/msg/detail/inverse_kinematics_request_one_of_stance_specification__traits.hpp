// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfStanceSpecification.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_STANCE_SPECIFICATION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_STANCE_SPECIFICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_stance_specification__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'fixed_stance'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_fixed_stance__traits.hpp"
// Member 'on_ground_plane_stance'
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_on_ground_plane_stance__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InverseKinematicsRequestOneOfStanceSpecification & msg,
  std::ostream & out)
{
  out << "{";
  // member: fixed_stance
  {
    out << "fixed_stance: ";
    to_flow_style_yaml(msg.fixed_stance, out);
    out << ", ";
  }

  // member: on_ground_plane_stance
  {
    out << "on_ground_plane_stance: ";
    to_flow_style_yaml(msg.on_ground_plane_stance, out);
    out << ", ";
  }

  // member: stance_specification_choice
  {
    out << "stance_specification_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.stance_specification_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InverseKinematicsRequestOneOfStanceSpecification & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fixed_stance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_stance:\n";
    to_block_style_yaml(msg.fixed_stance, out, indentation + 2);
  }

  // member: on_ground_plane_stance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on_ground_plane_stance:\n";
    to_block_style_yaml(msg.on_ground_plane_stance, out, indentation + 2);
  }

  // member: stance_specification_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stance_specification_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.stance_specification_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InverseKinematicsRequestOneOfStanceSpecification & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification>()
{
  return "bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification";
}

template<>
inline const char * name<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification>()
{
  return "bosdyn_msgs/msg/InverseKinematicsRequestOneOfStanceSpecification";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance>::value && has_fixed_size<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance>::value && has_bounded_size<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_STANCE_SPECIFICATION__TRAITS_HPP_
