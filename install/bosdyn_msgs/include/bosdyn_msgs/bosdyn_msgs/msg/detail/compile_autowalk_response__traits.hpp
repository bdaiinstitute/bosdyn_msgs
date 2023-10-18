// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/CompileAutowalkResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMPILE_AUTOWALK_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__COMPILE_AUTOWALK_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/compile_autowalk_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/compile_autowalk_response_status__traits.hpp"
// Member 'root'
#include "bosdyn_msgs/msg/detail/node__traits.hpp"
// Member 'element_identifiers'
#include "bosdyn_msgs/msg/detail/element_identifiers__traits.hpp"
// Member 'failed_elements'
#include "bosdyn_msgs/msg/detail/key_int32_value_bosdyn_msgs_failed_element__traits.hpp"
// Member 'docking_node'
// Member 'loop_node'
#include "bosdyn_msgs/msg/detail/node_identifier__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CompileAutowalkResponse & msg,
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

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: root
  {
    out << "root: ";
    to_flow_style_yaml(msg.root, out);
    out << ", ";
  }

  // member: root_is_set
  {
    out << "root_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.root_is_set, out);
    out << ", ";
  }

  // member: element_identifiers
  {
    if (msg.element_identifiers.size() == 0) {
      out << "element_identifiers: []";
    } else {
      out << "element_identifiers: [";
      size_t pending_items = msg.element_identifiers.size();
      for (auto item : msg.element_identifiers) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: failed_elements
  {
    if (msg.failed_elements.size() == 0) {
      out << "failed_elements: []";
    } else {
      out << "failed_elements: [";
      size_t pending_items = msg.failed_elements.size();
      for (auto item : msg.failed_elements) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: docking_node
  {
    out << "docking_node: ";
    to_flow_style_yaml(msg.docking_node, out);
    out << ", ";
  }

  // member: docking_node_is_set
  {
    out << "docking_node_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_node_is_set, out);
    out << ", ";
  }

  // member: loop_node
  {
    out << "loop_node: ";
    to_flow_style_yaml(msg.loop_node, out);
    out << ", ";
  }

  // member: loop_node_is_set
  {
    out << "loop_node_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_node_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CompileAutowalkResponse & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: root
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root:\n";
    to_block_style_yaml(msg.root, out, indentation + 2);
  }

  // member: root_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.root_is_set, out);
    out << "\n";
  }

  // member: element_identifiers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.element_identifiers.size() == 0) {
      out << "element_identifiers: []\n";
    } else {
      out << "element_identifiers:\n";
      for (auto item : msg.element_identifiers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: failed_elements
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.failed_elements.size() == 0) {
      out << "failed_elements: []\n";
    } else {
      out << "failed_elements:\n";
      for (auto item : msg.failed_elements) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: docking_node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docking_node:\n";
    to_block_style_yaml(msg.docking_node, out, indentation + 2);
  }

  // member: docking_node_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docking_node_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_node_is_set, out);
    out << "\n";
  }

  // member: loop_node
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_node:\n";
    to_block_style_yaml(msg.loop_node, out, indentation + 2);
  }

  // member: loop_node_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_node_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_node_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CompileAutowalkResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::CompileAutowalkResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::CompileAutowalkResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::CompileAutowalkResponse>()
{
  return "bosdyn_msgs::msg::CompileAutowalkResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::CompileAutowalkResponse>()
{
  return "bosdyn_msgs/msg/CompileAutowalkResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::CompileAutowalkResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::CompileAutowalkResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::CompileAutowalkResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMPILE_AUTOWALK_RESPONSE__TRAITS_HPP_
