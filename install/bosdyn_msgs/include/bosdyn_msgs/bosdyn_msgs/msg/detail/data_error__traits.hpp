// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DataError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ERROR__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/data_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data_id'
#include "bosdyn_msgs/msg/detail/data_identifier__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DataError & msg,
  std::ostream & out)
{
  out << "{";
  // member: data_id
  {
    out << "data_id: ";
    to_flow_style_yaml(msg.data_id, out);
    out << ", ";
  }

  // member: data_id_is_set
  {
    out << "data_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.data_id_is_set, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DataError & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_id:\n";
    to_block_style_yaml(msg.data_id, out, indentation + 2);
  }

  // member: data_id_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.data_id_is_set, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataError & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DataError & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DataError & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DataError>()
{
  return "bosdyn_msgs::msg::DataError";
}

template<>
inline const char * name<bosdyn_msgs::msg::DataError>()
{
  return "bosdyn_msgs/msg/DataError";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DataError>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DataError>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::DataError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ERROR__TRAITS_HPP_
