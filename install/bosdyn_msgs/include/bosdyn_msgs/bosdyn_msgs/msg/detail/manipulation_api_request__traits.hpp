// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ManipulationApiRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/manipulation_api_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__traits.hpp"
// Member 'manipulation_cmd'
#include "bosdyn_msgs/msg/detail/manipulation_api_request_one_of_manipulation_cmd__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ManipulationApiRequest & msg,
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

  // member: lease
  {
    out << "lease: ";
    to_flow_style_yaml(msg.lease, out);
    out << ", ";
  }

  // member: lease_is_set
  {
    out << "lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_is_set, out);
    out << ", ";
  }

  // member: manipulation_cmd
  {
    out << "manipulation_cmd: ";
    to_flow_style_yaml(msg.manipulation_cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManipulationApiRequest & msg,
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

  // member: lease
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease:\n";
    to_block_style_yaml(msg.lease, out, indentation + 2);
  }

  // member: lease_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_is_set, out);
    out << "\n";
  }

  // member: manipulation_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manipulation_cmd:\n";
    to_block_style_yaml(msg.manipulation_cmd, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManipulationApiRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ManipulationApiRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ManipulationApiRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ManipulationApiRequest>()
{
  return "bosdyn_msgs::msg::ManipulationApiRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::ManipulationApiRequest>()
{
  return "bosdyn_msgs/msg/ManipulationApiRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ManipulationApiRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Lease>::value && has_fixed_size<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd>::value && has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ManipulationApiRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Lease>::value && has_bounded_size<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd>::value && has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ManipulationApiRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST__TRAITS_HPP_
