// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/LocalGridResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/local_grid_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/local_grid_response_status__traits.hpp"
// Member 'local_grid'
#include "bosdyn_msgs/msg/detail/local_grid__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocalGridResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: local_grid_type_name
  {
    out << "local_grid_type_name: ";
    rosidl_generator_traits::value_to_yaml(msg.local_grid_type_name, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: local_grid
  {
    out << "local_grid: ";
    to_flow_style_yaml(msg.local_grid, out);
    out << ", ";
  }

  // member: local_grid_is_set
  {
    out << "local_grid_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.local_grid_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocalGridResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: local_grid_type_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_grid_type_name: ";
    rosidl_generator_traits::value_to_yaml(msg.local_grid_type_name, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: local_grid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_grid:\n";
    to_block_style_yaml(msg.local_grid, out, indentation + 2);
  }

  // member: local_grid_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_grid_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.local_grid_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalGridResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::LocalGridResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::LocalGridResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::LocalGridResponse>()
{
  return "bosdyn_msgs::msg::LocalGridResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::LocalGridResponse>()
{
  return "bosdyn_msgs/msg/LocalGridResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::LocalGridResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::LocalGridResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::LocalGridResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_RESPONSE__TRAITS_HPP_
