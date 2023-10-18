// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/CommsStateOneOfState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE_ONE_OF_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE_ONE_OF_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/comms_state_one_of_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'wifi_state'
#include "bosdyn_msgs/msg/detail/wi_fi_state__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CommsStateOneOfState & msg,
  std::ostream & out)
{
  out << "{";
  // member: wifi_state
  {
    out << "wifi_state: ";
    to_flow_style_yaml(msg.wifi_state, out);
    out << ", ";
  }

  // member: state_choice
  {
    out << "state_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.state_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CommsStateOneOfState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wifi_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wifi_state:\n";
    to_block_style_yaml(msg.wifi_state, out, indentation + 2);
  }

  // member: state_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.state_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CommsStateOneOfState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::CommsStateOneOfState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::CommsStateOneOfState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::CommsStateOneOfState>()
{
  return "bosdyn_msgs::msg::CommsStateOneOfState";
}

template<>
inline const char * name<bosdyn_msgs::msg::CommsStateOneOfState>()
{
  return "bosdyn_msgs/msg/CommsStateOneOfState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::CommsStateOneOfState>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::WiFiState>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::CommsStateOneOfState>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::WiFiState>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::CommsStateOneOfState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMMS_STATE_ONE_OF_STATE__TRAITS_HPP_
