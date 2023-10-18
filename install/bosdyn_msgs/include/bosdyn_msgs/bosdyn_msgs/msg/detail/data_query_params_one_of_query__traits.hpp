// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DataQueryParamsOneOfQuery.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS_ONE_OF_QUERY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS_ONE_OF_QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/data_query_params_one_of_query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_range'
#include "bosdyn_msgs/msg/detail/time_range_query__traits.hpp"
// Member 'action_ids'
#include "bosdyn_msgs/msg/detail/action_id_query__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DataQueryParamsOneOfQuery & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_range
  {
    out << "time_range: ";
    to_flow_style_yaml(msg.time_range, out);
    out << ", ";
  }

  // member: action_ids
  {
    out << "action_ids: ";
    to_flow_style_yaml(msg.action_ids, out);
    out << ", ";
  }

  // member: query_choice
  {
    out << "query_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.query_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DataQueryParamsOneOfQuery & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_range:\n";
    to_block_style_yaml(msg.time_range, out, indentation + 2);
  }

  // member: action_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action_ids:\n";
    to_block_style_yaml(msg.action_ids, out, indentation + 2);
  }

  // member: query_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "query_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.query_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataQueryParamsOneOfQuery & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DataQueryParamsOneOfQuery & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DataQueryParamsOneOfQuery & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DataQueryParamsOneOfQuery>()
{
  return "bosdyn_msgs::msg::DataQueryParamsOneOfQuery";
}

template<>
inline const char * name<bosdyn_msgs::msg::DataQueryParamsOneOfQuery>()
{
  return "bosdyn_msgs/msg/DataQueryParamsOneOfQuery";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DataQueryParamsOneOfQuery>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::ActionIdQuery>::value && has_fixed_size<bosdyn_msgs::msg::TimeRangeQuery>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DataQueryParamsOneOfQuery>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::ActionIdQuery>::value && has_bounded_size<bosdyn_msgs::msg::TimeRangeQuery>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::DataQueryParamsOneOfQuery>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_QUERY_PARAMS_ONE_OF_QUERY__TRAITS_HPP_
