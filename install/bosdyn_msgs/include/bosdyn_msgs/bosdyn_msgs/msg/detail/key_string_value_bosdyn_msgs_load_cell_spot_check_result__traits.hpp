// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/KeyStringValueBosdynMsgsLoadCellSpotCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_LOAD_CELL_SPOT_CHECK_RESULT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_LOAD_CELL_SPOT_CHECK_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_load_cell_spot_check_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'value'
#include "bosdyn_msgs/msg/detail/load_cell_spot_check_result__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeyStringValueBosdynMsgsLoadCellSpotCheckResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    to_flow_style_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KeyStringValueBosdynMsgsLoadCellSpotCheckResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value:\n";
    to_block_style_yaml(msg.value, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeyStringValueBosdynMsgsLoadCellSpotCheckResult & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult>()
{
  return "bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult";
}

template<>
inline const char * name<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult>()
{
  return "bosdyn_msgs/msg/KeyStringValueBosdynMsgsLoadCellSpotCheckResult";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_LOAD_CELL_SPOT_CHECK_RESULT__TRAITS_HPP_
