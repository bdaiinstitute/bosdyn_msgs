// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/HipRangeOfMotionResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__HIP_RANGE_OF_MOTION_RESULT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__HIP_RANGE_OF_MOTION_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/hip_range_of_motion_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'error'
#include "bosdyn_msgs/msg/detail/hip_range_of_motion_result_error__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HipRangeOfMotionResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: error
  {
    out << "error: ";
    to_flow_style_yaml(msg.error, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HipRangeOfMotionResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error:\n";
    to_block_style_yaml(msg.error, out, indentation + 2);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HipRangeOfMotionResult & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::HipRangeOfMotionResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::HipRangeOfMotionResult & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::HipRangeOfMotionResult>()
{
  return "bosdyn_msgs::msg::HipRangeOfMotionResult";
}

template<>
inline const char * name<bosdyn_msgs::msg::HipRangeOfMotionResult>()
{
  return "bosdyn_msgs/msg/HipRangeOfMotionResult";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::HipRangeOfMotionResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::HipRangeOfMotionResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::HipRangeOfMotionResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__HIP_RANGE_OF_MOTION_RESULT__TRAITS_HPP_
