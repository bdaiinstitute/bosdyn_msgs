// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Switch.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SWITCH__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SWITCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/switch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pivot_value'
#include "bosdyn_msgs/msg/detail/value__traits.hpp"
// Member 'int_children'
#include "bosdyn_msgs/msg/detail/key_int32_value_bosdyn_msgs_node__traits.hpp"
// Member 'default_child'
#include "bosdyn_msgs/msg/detail/node__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Switch & msg,
  std::ostream & out)
{
  out << "{";
  // member: pivot_value
  {
    out << "pivot_value: ";
    to_flow_style_yaml(msg.pivot_value, out);
    out << ", ";
  }

  // member: pivot_value_is_set
  {
    out << "pivot_value_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pivot_value_is_set, out);
    out << ", ";
  }

  // member: always_restart
  {
    out << "always_restart: ";
    rosidl_generator_traits::value_to_yaml(msg.always_restart, out);
    out << ", ";
  }

  // member: int_children
  {
    if (msg.int_children.size() == 0) {
      out << "int_children: []";
    } else {
      out << "int_children: [";
      size_t pending_items = msg.int_children.size();
      for (auto item : msg.int_children) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: default_child
  {
    out << "default_child: ";
    to_flow_style_yaml(msg.default_child, out);
    out << ", ";
  }

  // member: default_child_is_set
  {
    out << "default_child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.default_child_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Switch & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pivot_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pivot_value:\n";
    to_block_style_yaml(msg.pivot_value, out, indentation + 2);
  }

  // member: pivot_value_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pivot_value_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pivot_value_is_set, out);
    out << "\n";
  }

  // member: always_restart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "always_restart: ";
    rosidl_generator_traits::value_to_yaml(msg.always_restart, out);
    out << "\n";
  }

  // member: int_children
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.int_children.size() == 0) {
      out << "int_children: []\n";
    } else {
      out << "int_children:\n";
      for (auto item : msg.int_children) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: default_child
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_child:\n";
    to_block_style_yaml(msg.default_child, out, indentation + 2);
  }

  // member: default_child_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.default_child_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Switch & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Switch & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Switch & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Switch>()
{
  return "bosdyn_msgs::msg::Switch";
}

template<>
inline const char * name<bosdyn_msgs::msg::Switch>()
{
  return "bosdyn_msgs/msg/Switch";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Switch>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Switch>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Switch>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SWITCH__TRAITS_HPP_
