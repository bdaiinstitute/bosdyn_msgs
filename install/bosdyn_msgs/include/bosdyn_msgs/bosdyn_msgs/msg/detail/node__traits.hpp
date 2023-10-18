// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'user_data'
#include "bosdyn_msgs/msg/detail/user_data__traits.hpp"
// Member 'type'
#include "bosdyn_msgs/msg/detail/node_one_of_type__traits.hpp"
// Member 'parameter_values'
// Member 'overrides'
#include "bosdyn_msgs/msg/detail/key_value__traits.hpp"
// Member 'parameters'
#include "bosdyn_msgs/msg/detail/variable_declaration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Node & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: reference_id
  {
    out << "reference_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: parameter_values
  {
    if (msg.parameter_values.size() == 0) {
      out << "parameter_values: []";
    } else {
      out << "parameter_values: [";
      size_t pending_items = msg.parameter_values.size();
      for (auto item : msg.parameter_values) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: overrides
  {
    if (msg.overrides.size() == 0) {
      out << "overrides: []";
    } else {
      out << "overrides: [";
      size_t pending_items = msg.overrides.size();
      for (auto item : msg.overrides) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: parameters
  {
    if (msg.parameters.size() == 0) {
      out << "parameters: []";
    } else {
      out << "parameters: [";
      size_t pending_items = msg.parameters.size();
      for (auto item : msg.parameters) {
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
  const Node & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: reference_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

  // member: parameter_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parameter_values.size() == 0) {
      out << "parameter_values: []\n";
    } else {
      out << "parameter_values:\n";
      for (auto item : msg.parameter_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: overrides
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.overrides.size() == 0) {
      out << "overrides: []\n";
    } else {
      out << "overrides:\n";
      for (auto item : msg.overrides) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parameters.size() == 0) {
      out << "parameters: []\n";
    } else {
      out << "parameters:\n";
      for (auto item : msg.parameters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Node & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Node & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Node & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Node>()
{
  return "bosdyn_msgs::msg::Node";
}

template<>
inline const char * name<bosdyn_msgs::msg::Node>()
{
  return "bosdyn_msgs/msg/Node";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Node>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Node>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Node>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NODE__TRAITS_HPP_
