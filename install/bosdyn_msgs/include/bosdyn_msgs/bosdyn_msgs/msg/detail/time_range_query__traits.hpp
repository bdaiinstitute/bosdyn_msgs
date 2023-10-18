// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/TimeRangeQuery.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/time_range_query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'from_timestamp'
// Member 'to_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TimeRangeQuery & msg,
  std::ostream & out)
{
  out << "{";
  // member: from_timestamp
  {
    out << "from_timestamp: ";
    to_flow_style_yaml(msg.from_timestamp, out);
    out << ", ";
  }

  // member: from_timestamp_is_set
  {
    out << "from_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.from_timestamp_is_set, out);
    out << ", ";
  }

  // member: to_timestamp
  {
    out << "to_timestamp: ";
    to_flow_style_yaml(msg.to_timestamp, out);
    out << ", ";
  }

  // member: to_timestamp_is_set
  {
    out << "to_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.to_timestamp_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimeRangeQuery & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: from_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_timestamp:\n";
    to_block_style_yaml(msg.from_timestamp, out, indentation + 2);
  }

  // member: from_timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.from_timestamp_is_set, out);
    out << "\n";
  }

  // member: to_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "to_timestamp:\n";
    to_block_style_yaml(msg.to_timestamp, out, indentation + 2);
  }

  // member: to_timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "to_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.to_timestamp_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimeRangeQuery & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::TimeRangeQuery & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::TimeRangeQuery & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::TimeRangeQuery>()
{
  return "bosdyn_msgs::msg::TimeRangeQuery";
}

template<>
inline const char * name<bosdyn_msgs::msg::TimeRangeQuery>()
{
  return "bosdyn_msgs/msg/TimeRangeQuery";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::TimeRangeQuery>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::TimeRangeQuery>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::TimeRangeQuery>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__TRAITS_HPP_
