// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PolygonWithExclusions.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POLYGON_WITH_EXCLUSIONS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POLYGON_WITH_EXCLUSIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/polygon_with_exclusions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'inclusion'
// Member 'exclusions'
#include "bosdyn_msgs/msg/detail/polygon__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PolygonWithExclusions & msg,
  std::ostream & out)
{
  out << "{";
  // member: inclusion
  {
    out << "inclusion: ";
    to_flow_style_yaml(msg.inclusion, out);
    out << ", ";
  }

  // member: inclusion_is_set
  {
    out << "inclusion_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.inclusion_is_set, out);
    out << ", ";
  }

  // member: exclusions
  {
    if (msg.exclusions.size() == 0) {
      out << "exclusions: []";
    } else {
      out << "exclusions: [";
      size_t pending_items = msg.exclusions.size();
      for (auto item : msg.exclusions) {
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
  const PolygonWithExclusions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: inclusion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inclusion:\n";
    to_block_style_yaml(msg.inclusion, out, indentation + 2);
  }

  // member: inclusion_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inclusion_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.inclusion_is_set, out);
    out << "\n";
  }

  // member: exclusions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.exclusions.size() == 0) {
      out << "exclusions: []\n";
    } else {
      out << "exclusions:\n";
      for (auto item : msg.exclusions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PolygonWithExclusions & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PolygonWithExclusions & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PolygonWithExclusions & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PolygonWithExclusions>()
{
  return "bosdyn_msgs::msg::PolygonWithExclusions";
}

template<>
inline const char * name<bosdyn_msgs::msg::PolygonWithExclusions>()
{
  return "bosdyn_msgs/msg/PolygonWithExclusions";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PolygonWithExclusions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PolygonWithExclusions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::PolygonWithExclusions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__POLYGON_WITH_EXCLUSIONS__TRAITS_HPP_
