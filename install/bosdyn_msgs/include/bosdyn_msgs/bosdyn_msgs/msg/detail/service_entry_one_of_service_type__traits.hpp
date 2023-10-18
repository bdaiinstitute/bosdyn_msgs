// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ServiceEntryOneOfServiceType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY_ONE_OF_SERVICE_TYPE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY_ONE_OF_SERVICE_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/service_entry_one_of_service_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServiceEntryOneOfServiceType & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: service_type_choice
  {
    out << "service_type_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.service_type_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServiceEntryOneOfServiceType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: service_type_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_type_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.service_type_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServiceEntryOneOfServiceType & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ServiceEntryOneOfServiceType & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ServiceEntryOneOfServiceType & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ServiceEntryOneOfServiceType>()
{
  return "bosdyn_msgs::msg::ServiceEntryOneOfServiceType";
}

template<>
inline const char * name<bosdyn_msgs::msg::ServiceEntryOneOfServiceType>()
{
  return "bosdyn_msgs/msg/ServiceEntryOneOfServiceType";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ServiceEntryOneOfServiceType>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ServiceEntryOneOfServiceType>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ServiceEntryOneOfServiceType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_ENTRY_ONE_OF_SERVICE_TYPE__TRAITS_HPP_
