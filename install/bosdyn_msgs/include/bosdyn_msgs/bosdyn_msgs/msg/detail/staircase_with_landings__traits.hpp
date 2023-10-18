// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StaircaseWithLandings.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_WITH_LANDINGS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_WITH_LANDINGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/staircase_with_landings__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bottom_landing'
// Member 'top_landing'
#include "bosdyn_msgs/msg/detail/staircase_landing__traits.hpp"
// Member 'staircase'
#include "bosdyn_msgs/msg/detail/staircase__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StaircaseWithLandings & msg,
  std::ostream & out)
{
  out << "{";
  // member: bottom_landing
  {
    out << "bottom_landing: ";
    to_flow_style_yaml(msg.bottom_landing, out);
    out << ", ";
  }

  // member: bottom_landing_is_set
  {
    out << "bottom_landing_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.bottom_landing_is_set, out);
    out << ", ";
  }

  // member: staircase
  {
    out << "staircase: ";
    to_flow_style_yaml(msg.staircase, out);
    out << ", ";
  }

  // member: staircase_is_set
  {
    out << "staircase_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.staircase_is_set, out);
    out << ", ";
  }

  // member: top_landing
  {
    out << "top_landing: ";
    to_flow_style_yaml(msg.top_landing, out);
    out << ", ";
  }

  // member: top_landing_is_set
  {
    out << "top_landing_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.top_landing_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StaircaseWithLandings & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bottom_landing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_landing:\n";
    to_block_style_yaml(msg.bottom_landing, out, indentation + 2);
  }

  // member: bottom_landing_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bottom_landing_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.bottom_landing_is_set, out);
    out << "\n";
  }

  // member: staircase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "staircase:\n";
    to_block_style_yaml(msg.staircase, out, indentation + 2);
  }

  // member: staircase_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "staircase_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.staircase_is_set, out);
    out << "\n";
  }

  // member: top_landing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_landing:\n";
    to_block_style_yaml(msg.top_landing, out, indentation + 2);
  }

  // member: top_landing_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_landing_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.top_landing_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StaircaseWithLandings & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StaircaseWithLandings & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StaircaseWithLandings & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StaircaseWithLandings>()
{
  return "bosdyn_msgs::msg::StaircaseWithLandings";
}

template<>
inline const char * name<bosdyn_msgs::msg::StaircaseWithLandings>()
{
  return "bosdyn_msgs/msg/StaircaseWithLandings";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StaircaseWithLandings>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Staircase>::value && has_fixed_size<bosdyn_msgs::msg::StaircaseLanding>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StaircaseWithLandings>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Staircase>::value && has_bounded_size<bosdyn_msgs::msg::StaircaseLanding>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::StaircaseWithLandings>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_WITH_LANDINGS__TRAITS_HPP_
