// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Prompt.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROMPT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROMPT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/prompt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'options'
#include "bosdyn_msgs/msg/detail/prompt_option__traits.hpp"
// Member 'child'
#include "bosdyn_msgs/msg/detail/node__traits.hpp"
// Member 'severity'
#include "bosdyn_msgs/msg/detail/alert_data_severity_level__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Prompt & msg,
  std::ostream & out)
{
  out << "{";
  // member: always_reprompt
  {
    out << "always_reprompt: ";
    rosidl_generator_traits::value_to_yaml(msg.always_reprompt, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: options
  {
    if (msg.options.size() == 0) {
      out << "options: []";
    } else {
      out << "options: [";
      size_t pending_items = msg.options.size();
      for (auto item : msg.options) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: child
  {
    out << "child: ";
    to_flow_style_yaml(msg.child, out);
    out << ", ";
  }

  // member: child_is_set
  {
    out << "child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_is_set, out);
    out << ", ";
  }

  // member: for_autonomous_processing
  {
    out << "for_autonomous_processing: ";
    rosidl_generator_traits::value_to_yaml(msg.for_autonomous_processing, out);
    out << ", ";
  }

  // member: severity
  {
    out << "severity: ";
    to_flow_style_yaml(msg.severity, out);
    out << ", ";
  }

  // member: question_name_in_blackboard
  {
    out << "question_name_in_blackboard: ";
    rosidl_generator_traits::value_to_yaml(msg.question_name_in_blackboard, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Prompt & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: always_reprompt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "always_reprompt: ";
    rosidl_generator_traits::value_to_yaml(msg.always_reprompt, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.options.size() == 0) {
      out << "options: []\n";
    } else {
      out << "options:\n";
      for (auto item : msg.options) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: child
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child:\n";
    to_block_style_yaml(msg.child, out, indentation + 2);
  }

  // member: child_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_is_set, out);
    out << "\n";
  }

  // member: for_autonomous_processing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "for_autonomous_processing: ";
    rosidl_generator_traits::value_to_yaml(msg.for_autonomous_processing, out);
    out << "\n";
  }

  // member: severity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "severity:\n";
    to_block_style_yaml(msg.severity, out, indentation + 2);
  }

  // member: question_name_in_blackboard
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "question_name_in_blackboard: ";
    rosidl_generator_traits::value_to_yaml(msg.question_name_in_blackboard, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Prompt & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Prompt & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Prompt & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Prompt>()
{
  return "bosdyn_msgs::msg::Prompt";
}

template<>
inline const char * name<bosdyn_msgs::msg::Prompt>()
{
  return "bosdyn_msgs/msg/Prompt";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Prompt>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Prompt>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Prompt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROMPT__TRAITS_HPP_
