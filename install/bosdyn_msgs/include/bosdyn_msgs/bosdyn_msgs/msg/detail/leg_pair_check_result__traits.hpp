// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/LegPairCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LEG_PAIR_CHECK_RESULT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LEG_PAIR_CHECK_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/leg_pair_check_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/leg_pair_check_result_status__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LegPairCheckResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: leg_pair_distance_change
  {
    out << "leg_pair_distance_change: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_pair_distance_change, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LegPairCheckResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: leg_pair_distance_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leg_pair_distance_change: ";
    rosidl_generator_traits::value_to_yaml(msg.leg_pair_distance_change, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LegPairCheckResult & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::LegPairCheckResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::LegPairCheckResult & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::LegPairCheckResult>()
{
  return "bosdyn_msgs::msg::LegPairCheckResult";
}

template<>
inline const char * name<bosdyn_msgs::msg::LegPairCheckResult>()
{
  return "bosdyn_msgs/msg/LegPairCheckResult";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::LegPairCheckResult>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::LegPairCheckResultStatus>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::LegPairCheckResult>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::LegPairCheckResultStatus>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::LegPairCheckResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LEG_PAIR_CHECK_RESULT__TRAITS_HPP_
