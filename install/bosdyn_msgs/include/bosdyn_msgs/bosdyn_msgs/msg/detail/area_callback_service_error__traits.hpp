// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackServiceError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_SERVICE_ERROR__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_SERVICE_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/area_callback_service_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'faulted_services'
#include "bosdyn_msgs/msg/detail/service_fault__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AreaCallbackServiceError & msg,
  std::ostream & out)
{
  out << "{";
  // member: missing_services
  {
    if (msg.missing_services.size() == 0) {
      out << "missing_services: []";
    } else {
      out << "missing_services: [";
      size_t pending_items = msg.missing_services.size();
      for (auto item : msg.missing_services) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: faulted_services
  {
    if (msg.faulted_services.size() == 0) {
      out << "faulted_services: []";
    } else {
      out << "faulted_services: [";
      size_t pending_items = msg.faulted_services.size();
      for (auto item : msg.faulted_services) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AreaCallbackServiceError & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: missing_services
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.missing_services.size() == 0) {
      out << "missing_services: []\n";
    } else {
      out << "missing_services:\n";
      for (auto item : msg.missing_services) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: faulted_services
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.faulted_services.size() == 0) {
      out << "faulted_services: []\n";
    } else {
      out << "faulted_services:\n";
      for (auto item : msg.faulted_services) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AreaCallbackServiceError & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AreaCallbackServiceError & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AreaCallbackServiceError & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AreaCallbackServiceError>()
{
  return "bosdyn_msgs::msg::AreaCallbackServiceError";
}

template<>
inline const char * name<bosdyn_msgs::msg::AreaCallbackServiceError>()
{
  return "bosdyn_msgs/msg/AreaCallbackServiceError";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AreaCallbackServiceError>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AreaCallbackServiceError>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::AreaCallbackServiceError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_SERVICE_ERROR__TRAITS_HPP_
