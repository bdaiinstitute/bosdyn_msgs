// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GetStateRequestOneOfLowerBound.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST_ONE_OF_LOWER_BOUND__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST_ONE_OF_LOWER_BOUND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/get_state_request_one_of_lower_bound__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GetStateRequestOneOfLowerBound & msg,
  std::ostream & out)
{
  out << "{";
  // member: history_lower_tick_bound
  {
    out << "history_lower_tick_bound: ";
    rosidl_generator_traits::value_to_yaml(msg.history_lower_tick_bound, out);
    out << ", ";
  }

  // member: history_past_ticks
  {
    out << "history_past_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.history_past_ticks, out);
    out << ", ";
  }

  // member: lower_bound_choice
  {
    out << "lower_bound_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.lower_bound_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetStateRequestOneOfLowerBound & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: history_lower_tick_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "history_lower_tick_bound: ";
    rosidl_generator_traits::value_to_yaml(msg.history_lower_tick_bound, out);
    out << "\n";
  }

  // member: history_past_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "history_past_ticks: ";
    rosidl_generator_traits::value_to_yaml(msg.history_past_ticks, out);
    out << "\n";
  }

  // member: lower_bound_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lower_bound_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.lower_bound_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetStateRequestOneOfLowerBound & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GetStateRequestOneOfLowerBound & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GetStateRequestOneOfLowerBound & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound>()
{
  return "bosdyn_msgs::msg::GetStateRequestOneOfLowerBound";
}

template<>
inline const char * name<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound>()
{
  return "bosdyn_msgs/msg/GetStateRequestOneOfLowerBound";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_STATE_REQUEST_ONE_OF_LOWER_BOUND__TRAITS_HPP_
