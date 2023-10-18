// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/LoadAutowalkRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/load_autowalk_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'walk'
#include "bosdyn_msgs/msg/detail/walk__traits.hpp"
// Member 'leases'
#include "bosdyn_msgs/msg/detail/lease__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LoadAutowalkRequest & msg,
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

  // member: walk
  {
    out << "walk: ";
    to_flow_style_yaml(msg.walk, out);
    out << ", ";
  }

  // member: walk_is_set
  {
    out << "walk_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.walk_is_set, out);
    out << ", ";
  }

  // member: leases
  {
    if (msg.leases.size() == 0) {
      out << "leases: []";
    } else {
      out << "leases: [";
      size_t pending_items = msg.leases.size();
      for (auto item : msg.leases) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: treat_warnings_as_errors
  {
    out << "treat_warnings_as_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.treat_warnings_as_errors, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadAutowalkRequest & msg,
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

  // member: walk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "walk:\n";
    to_block_style_yaml(msg.walk, out, indentation + 2);
  }

  // member: walk_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "walk_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.walk_is_set, out);
    out << "\n";
  }

  // member: leases
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.leases.size() == 0) {
      out << "leases: []\n";
    } else {
      out << "leases:\n";
      for (auto item : msg.leases) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: treat_warnings_as_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "treat_warnings_as_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.treat_warnings_as_errors, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadAutowalkRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::LoadAutowalkRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::LoadAutowalkRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::LoadAutowalkRequest>()
{
  return "bosdyn_msgs::msg::LoadAutowalkRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::LoadAutowalkRequest>()
{
  return "bosdyn_msgs/msg/LoadAutowalkRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::LoadAutowalkRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::LoadAutowalkRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::LoadAutowalkRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_REQUEST__TRAITS_HPP_
