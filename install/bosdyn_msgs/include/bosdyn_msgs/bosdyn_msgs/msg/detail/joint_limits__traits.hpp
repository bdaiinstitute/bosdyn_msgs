// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__JOINT_LIMITS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__JOINT_LIMITS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/joint_limits__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointLimits & msg,
  std::ostream & out)
{
  out << "{";
  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: hy
  {
    if (msg.hy.size() == 0) {
      out << "hy: []";
    } else {
      out << "hy: [";
      size_t pending_items = msg.hy.size();
      for (auto item : msg.hy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hx
  {
    if (msg.hx.size() == 0) {
      out << "hx: []";
    } else {
      out << "hx: [";
      size_t pending_items = msg.hx.size();
      for (auto item : msg.hx) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const JointLimits & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: hy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hy.size() == 0) {
      out << "hy: []\n";
    } else {
      out << "hy:\n";
      for (auto item : msg.hy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hx.size() == 0) {
      out << "hx: []\n";
    } else {
      out << "hx:\n";
      for (auto item : msg.hx) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointLimits & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::JointLimits & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::JointLimits & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::JointLimits>()
{
  return "bosdyn_msgs::msg::JointLimits";
}

template<>
inline const char * name<bosdyn_msgs::msg::JointLimits>()
{
  return "bosdyn_msgs/msg/JointLimits";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::JointLimits>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::JointLimits>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::JointLimits>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__JOINT_LIMITS__TRAITS_HPP_
