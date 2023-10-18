// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NODE_INFO__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NODE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/node_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'user_data'
#include "bosdyn_msgs/msg/detail/user_data__traits.hpp"
// Member 'children'
#include "bosdyn_msgs/msg/detail/serialized_message__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: user_data
  {
    out << "user_data: ";
    to_flow_style_yaml(msg.user_data, out);
    out << ", ";
  }

  // member: user_data_is_set
  {
    out << "user_data_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.user_data_is_set, out);
    out << ", ";
  }

  // member: children
  {
    if (msg.children.size() == 0) {
      out << "children: []";
    } else {
      out << "children: [";
      size_t pending_items = msg.children.size();
      for (auto item : msg.children) {
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
  const NodeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: user_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_data:\n";
    to_block_style_yaml(msg.user_data, out, indentation + 2);
  }

  // member: user_data_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_data_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.user_data_is_set, out);
    out << "\n";
  }

  // member: children
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.children.size() == 0) {
      out << "children: []\n";
    } else {
      out << "children:\n";
      for (auto item : msg.children) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeInfo & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::NodeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::NodeInfo & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::NodeInfo>()
{
  return "bosdyn_msgs::msg::NodeInfo";
}

template<>
inline const char * name<bosdyn_msgs::msg::NodeInfo>()
{
  return "bosdyn_msgs/msg/NodeInfo";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::NodeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::NodeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::NodeInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NODE_INFO__TRAITS_HPP_
