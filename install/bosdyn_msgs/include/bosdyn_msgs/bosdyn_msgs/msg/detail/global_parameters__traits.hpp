// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GlobalParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GLOBAL_PARAMETERS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GLOBAL_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/global_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'post_mission_callbacks'
#include "bosdyn_msgs/msg/detail/action_remote_grpc__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GlobalParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: group_name
  {
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << ", ";
  }

  // member: should_autofocus_ptz
  {
    out << "should_autofocus_ptz: ";
    rosidl_generator_traits::value_to_yaml(msg.should_autofocus_ptz, out);
    out << ", ";
  }

  // member: self_right_attempts
  {
    out << "self_right_attempts: ";
    rosidl_generator_traits::value_to_yaml(msg.self_right_attempts, out);
    out << ", ";
  }

  // member: post_mission_callbacks
  {
    if (msg.post_mission_callbacks.size() == 0) {
      out << "post_mission_callbacks: []";
    } else {
      out << "post_mission_callbacks: [";
      size_t pending_items = msg.post_mission_callbacks.size();
      for (auto item : msg.post_mission_callbacks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: skip_actions
  {
    out << "skip_actions: ";
    rosidl_generator_traits::value_to_yaml(msg.skip_actions, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GlobalParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << "\n";
  }

  // member: should_autofocus_ptz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "should_autofocus_ptz: ";
    rosidl_generator_traits::value_to_yaml(msg.should_autofocus_ptz, out);
    out << "\n";
  }

  // member: self_right_attempts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "self_right_attempts: ";
    rosidl_generator_traits::value_to_yaml(msg.self_right_attempts, out);
    out << "\n";
  }

  // member: post_mission_callbacks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.post_mission_callbacks.size() == 0) {
      out << "post_mission_callbacks: []\n";
    } else {
      out << "post_mission_callbacks:\n";
      for (auto item : msg.post_mission_callbacks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: skip_actions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skip_actions: ";
    rosidl_generator_traits::value_to_yaml(msg.skip_actions, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GlobalParameters & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GlobalParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GlobalParameters & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GlobalParameters>()
{
  return "bosdyn_msgs::msg::GlobalParameters";
}

template<>
inline const char * name<bosdyn_msgs::msg::GlobalParameters>()
{
  return "bosdyn_msgs/msg/GlobalParameters";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GlobalParameters>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GlobalParameters>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::GlobalParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GLOBAL_PARAMETERS__TRAITS_HPP_
