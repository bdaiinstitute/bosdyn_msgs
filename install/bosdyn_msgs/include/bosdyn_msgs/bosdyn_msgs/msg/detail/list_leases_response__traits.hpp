// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ListLeasesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/list_leases_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'resources'
#include "bosdyn_msgs/msg/detail/lease_resource__traits.hpp"
// Member 'resource_tree'
#include "bosdyn_msgs/msg/detail/resource_tree__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ListLeasesResponse & msg,
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

  // member: resources
  {
    if (msg.resources.size() == 0) {
      out << "resources: []";
    } else {
      out << "resources: [";
      size_t pending_items = msg.resources.size();
      for (auto item : msg.resources) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: resource_tree
  {
    out << "resource_tree: ";
    to_flow_style_yaml(msg.resource_tree, out);
    out << ", ";
  }

  // member: resource_tree_is_set
  {
    out << "resource_tree_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.resource_tree_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListLeasesResponse & msg,
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

  // member: resources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.resources.size() == 0) {
      out << "resources: []\n";
    } else {
      out << "resources:\n";
      for (auto item : msg.resources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: resource_tree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resource_tree:\n";
    to_block_style_yaml(msg.resource_tree, out, indentation + 2);
  }

  // member: resource_tree_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resource_tree_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.resource_tree_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListLeasesResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ListLeasesResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ListLeasesResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ListLeasesResponse>()
{
  return "bosdyn_msgs::msg::ListLeasesResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::ListLeasesResponse>()
{
  return "bosdyn_msgs/msg/ListLeasesResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ListLeasesResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ListLeasesResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ListLeasesResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_LEASES_RESPONSE__TRAITS_HPP_
