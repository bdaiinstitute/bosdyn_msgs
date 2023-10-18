// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/KeypointSet.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_SET__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/keypoint_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'keypoints'
#include "bosdyn_msgs/msg/detail/keypoint__traits.hpp"
// Member 'type'
#include "bosdyn_msgs/msg/detail/keypoint_set_keypoint_type__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeypointSet & msg,
  std::ostream & out)
{
  out << "{";
  // member: keypoints
  {
    if (msg.keypoints.size() == 0) {
      out << "keypoints: []";
    } else {
      out << "keypoints: [";
      size_t pending_items = msg.keypoints.size();
      for (auto item : msg.keypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KeypointSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: keypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.keypoints.size() == 0) {
      out << "keypoints: []\n";
    } else {
      out << "keypoints:\n";
      for (auto item : msg.keypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeypointSet & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::KeypointSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::KeypointSet & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::KeypointSet>()
{
  return "bosdyn_msgs::msg::KeypointSet";
}

template<>
inline const char * name<bosdyn_msgs::msg::KeypointSet>()
{
  return "bosdyn_msgs/msg/KeypointSet";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::KeypointSet>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::KeypointSet>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::KeypointSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_SET__TRAITS_HPP_
