// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Anchoring.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHORING__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHORING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/anchoring__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'anchors'
#include "bosdyn_msgs/msg/detail/anchor__traits.hpp"
// Member 'objects'
#include "bosdyn_msgs/msg/detail/anchored_world_object__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Anchoring & msg,
  std::ostream & out)
{
  out << "{";
  // member: anchors
  {
    if (msg.anchors.size() == 0) {
      out << "anchors: []";
    } else {
      out << "anchors: [";
      size_t pending_items = msg.anchors.size();
      for (auto item : msg.anchors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
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
  const Anchoring & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: anchors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.anchors.size() == 0) {
      out << "anchors: []\n";
    } else {
      out << "anchors:\n";
      for (auto item : msg.anchors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Anchoring & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Anchoring & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Anchoring & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Anchoring>()
{
  return "bosdyn_msgs::msg::Anchoring";
}

template<>
inline const char * name<bosdyn_msgs::msg::Anchoring>()
{
  return "bosdyn_msgs/msg/Anchoring";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Anchoring>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Anchoring>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Anchoring>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHORING__TRAITS_HPP_
