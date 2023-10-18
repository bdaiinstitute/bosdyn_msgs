// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StraightStaircaseOneOfLocation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_ONE_OF_LOCATION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_ONE_OF_LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/straight_staircase_one_of_location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'from_ko_tform_stairs'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'tform'
#include "bosdyn_msgs/msg/detail/stair_transform__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StraightStaircaseOneOfLocation & msg,
  std::ostream & out)
{
  out << "{";
  // member: from_ko_tform_stairs
  {
    out << "from_ko_tform_stairs: ";
    to_flow_style_yaml(msg.from_ko_tform_stairs, out);
    out << ", ";
  }

  // member: tform
  {
    out << "tform: ";
    to_flow_style_yaml(msg.tform, out);
    out << ", ";
  }

  // member: location_choice
  {
    out << "location_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.location_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StraightStaircaseOneOfLocation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: from_ko_tform_stairs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_ko_tform_stairs:\n";
    to_block_style_yaml(msg.from_ko_tform_stairs, out, indentation + 2);
  }

  // member: tform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tform:\n";
    to_block_style_yaml(msg.tform, out, indentation + 2);
  }

  // member: location_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.location_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StraightStaircaseOneOfLocation & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StraightStaircaseOneOfLocation & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StraightStaircaseOneOfLocation & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StraightStaircaseOneOfLocation>()
{
  return "bosdyn_msgs::msg::StraightStaircaseOneOfLocation";
}

template<>
inline const char * name<bosdyn_msgs::msg::StraightStaircaseOneOfLocation>()
{
  return "bosdyn_msgs/msg/StraightStaircaseOneOfLocation";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StraightStaircaseOneOfLocation>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::StairTransform>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StraightStaircaseOneOfLocation>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::StairTransform>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::StraightStaircaseOneOfLocation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_ONE_OF_LOCATION__TRAITS_HPP_
