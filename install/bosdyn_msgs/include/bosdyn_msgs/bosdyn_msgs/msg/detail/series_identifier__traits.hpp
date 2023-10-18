// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SeriesIdentifier.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_IDENTIFIER__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_IDENTIFIER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/series_identifier__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'spec'
#include "bosdyn_msgs/msg/detail/key_string_value_string__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SeriesIdentifier & msg,
  std::ostream & out)
{
  out << "{";
  // member: series_type
  {
    out << "series_type: ";
    rosidl_generator_traits::value_to_yaml(msg.series_type, out);
    out << ", ";
  }

  // member: spec
  {
    if (msg.spec.size() == 0) {
      out << "spec: []";
    } else {
      out << "spec: [";
      size_t pending_items = msg.spec.size();
      for (auto item : msg.spec) {
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
  const SeriesIdentifier & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: series_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "series_type: ";
    rosidl_generator_traits::value_to_yaml(msg.series_type, out);
    out << "\n";
  }

  // member: spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.spec.size() == 0) {
      out << "spec: []\n";
    } else {
      out << "spec:\n";
      for (auto item : msg.spec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SeriesIdentifier & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SeriesIdentifier & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SeriesIdentifier & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SeriesIdentifier>()
{
  return "bosdyn_msgs::msg::SeriesIdentifier";
}

template<>
inline const char * name<bosdyn_msgs::msg::SeriesIdentifier>()
{
  return "bosdyn_msgs/msg/SeriesIdentifier";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SeriesIdentifier>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SeriesIdentifier>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::SeriesIdentifier>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_IDENTIFIER__TRAITS_HPP_
