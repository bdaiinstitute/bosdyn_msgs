// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Staircase.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/staircase__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'knowledge_type'
#include "bosdyn_msgs/msg/detail/staircase_knowledge_type__traits.hpp"
// Member 'stair_tform'
#include "bosdyn_msgs/msg/detail/stair_transform__traits.hpp"
// Member 'average_width'
#include "bosdyn_msgs/msg/detail/staircase_width__traits.hpp"
// Member 'steps'
#include "bosdyn_msgs/msg/detail/staircase_step__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Staircase & msg,
  std::ostream & out)
{
  out << "{";
  // member: knowledge_type
  {
    out << "knowledge_type: ";
    to_flow_style_yaml(msg.knowledge_type, out);
    out << ", ";
  }

  // member: stair_tform
  {
    out << "stair_tform: ";
    to_flow_style_yaml(msg.stair_tform, out);
    out << ", ";
  }

  // member: stair_tform_is_set
  {
    out << "stair_tform_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.stair_tform_is_set, out);
    out << ", ";
  }

  // member: number_of_steps
  {
    out << "number_of_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_steps, out);
    out << ", ";
  }

  // member: average_rise
  {
    out << "average_rise: ";
    rosidl_generator_traits::value_to_yaml(msg.average_rise, out);
    out << ", ";
  }

  // member: average_run
  {
    out << "average_run: ";
    rosidl_generator_traits::value_to_yaml(msg.average_run, out);
    out << ", ";
  }

  // member: average_width
  {
    out << "average_width: ";
    to_flow_style_yaml(msg.average_width, out);
    out << ", ";
  }

  // member: average_width_is_set
  {
    out << "average_width_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.average_width_is_set, out);
    out << ", ";
  }

  // member: steps
  {
    if (msg.steps.size() == 0) {
      out << "steps: []";
    } else {
      out << "steps: [";
      size_t pending_items = msg.steps.size();
      for (auto item : msg.steps) {
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
  const Staircase & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: knowledge_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "knowledge_type:\n";
    to_block_style_yaml(msg.knowledge_type, out, indentation + 2);
  }

  // member: stair_tform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stair_tform:\n";
    to_block_style_yaml(msg.stair_tform, out, indentation + 2);
  }

  // member: stair_tform_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stair_tform_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.stair_tform_is_set, out);
    out << "\n";
  }

  // member: number_of_steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_steps: ";
    rosidl_generator_traits::value_to_yaml(msg.number_of_steps, out);
    out << "\n";
  }

  // member: average_rise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_rise: ";
    rosidl_generator_traits::value_to_yaml(msg.average_rise, out);
    out << "\n";
  }

  // member: average_run
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_run: ";
    rosidl_generator_traits::value_to_yaml(msg.average_run, out);
    out << "\n";
  }

  // member: average_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_width:\n";
    to_block_style_yaml(msg.average_width, out, indentation + 2);
  }

  // member: average_width_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_width_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.average_width_is_set, out);
    out << "\n";
  }

  // member: steps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.steps.size() == 0) {
      out << "steps: []\n";
    } else {
      out << "steps:\n";
      for (auto item : msg.steps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Staircase & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Staircase & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Staircase & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Staircase>()
{
  return "bosdyn_msgs::msg::Staircase";
}

template<>
inline const char * name<bosdyn_msgs::msg::Staircase>()
{
  return "bosdyn_msgs/msg/Staircase";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Staircase>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Staircase>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Staircase>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE__TRAITS_HPP_
