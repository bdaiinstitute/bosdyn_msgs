// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/KeypointMatches.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_MATCHES__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_MATCHES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/keypoint_matches__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'reference_keypoints'
// Member 'live_keypoints'
#include "bosdyn_msgs/msg/detail/keypoint_set__traits.hpp"
// Member 'matches'
#include "bosdyn_msgs/msg/detail/match__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeypointMatches & msg,
  std::ostream & out)
{
  out << "{";
  // member: reference_keypoints
  {
    out << "reference_keypoints: ";
    to_flow_style_yaml(msg.reference_keypoints, out);
    out << ", ";
  }

  // member: reference_keypoints_is_set
  {
    out << "reference_keypoints_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_keypoints_is_set, out);
    out << ", ";
  }

  // member: live_keypoints
  {
    out << "live_keypoints: ";
    to_flow_style_yaml(msg.live_keypoints, out);
    out << ", ";
  }

  // member: live_keypoints_is_set
  {
    out << "live_keypoints_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.live_keypoints_is_set, out);
    out << ", ";
  }

  // member: matches
  {
    if (msg.matches.size() == 0) {
      out << "matches: []";
    } else {
      out << "matches: [";
      size_t pending_items = msg.matches.size();
      for (auto item : msg.matches) {
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
  const KeypointMatches & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reference_keypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_keypoints:\n";
    to_block_style_yaml(msg.reference_keypoints, out, indentation + 2);
  }

  // member: reference_keypoints_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_keypoints_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_keypoints_is_set, out);
    out << "\n";
  }

  // member: live_keypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "live_keypoints:\n";
    to_block_style_yaml(msg.live_keypoints, out, indentation + 2);
  }

  // member: live_keypoints_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "live_keypoints_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.live_keypoints_is_set, out);
    out << "\n";
  }

  // member: matches
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.matches.size() == 0) {
      out << "matches: []\n";
    } else {
      out << "matches:\n";
      for (auto item : msg.matches) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeypointMatches & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::KeypointMatches & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::KeypointMatches & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::KeypointMatches>()
{
  return "bosdyn_msgs::msg::KeypointMatches";
}

template<>
inline const char * name<bosdyn_msgs::msg::KeypointMatches>()
{
  return "bosdyn_msgs/msg/KeypointMatches";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::KeypointMatches>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::KeypointMatches>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::KeypointMatches>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEYPOINT_MATCHES__TRAITS_HPP_
