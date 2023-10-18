// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GetDataIndexRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_DATA_INDEX_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_DATA_INDEX_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/get_data_index_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'data_query'
#include "bosdyn_msgs/msg/detail/data_query__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GetDataIndexRequest & msg,
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

  // member: data_query
  {
    out << "data_query: ";
    to_flow_style_yaml(msg.data_query, out);
    out << ", ";
  }

  // member: data_query_is_set
  {
    out << "data_query_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.data_query_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDataIndexRequest & msg,
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

  // member: data_query
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_query:\n";
    to_block_style_yaml(msg.data_query, out, indentation + 2);
  }

  // member: data_query_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_query_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.data_query_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDataIndexRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GetDataIndexRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GetDataIndexRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GetDataIndexRequest>()
{
  return "bosdyn_msgs::msg::GetDataIndexRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::GetDataIndexRequest>()
{
  return "bosdyn_msgs/msg/GetDataIndexRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GetDataIndexRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::DataQuery>::value && has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GetDataIndexRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::DataQuery>::value && has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::GetDataIndexRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_DATA_INDEX_REQUEST__TRAITS_HPP_
