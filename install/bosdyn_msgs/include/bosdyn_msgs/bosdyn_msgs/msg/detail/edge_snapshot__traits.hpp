// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/EdgeSnapshot.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/edge_snapshot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stances'
#include "bosdyn_msgs/msg/detail/edge_snapshot_stance__traits.hpp"
// Member 'area_callbacks'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_area_callback_data__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EdgeSnapshot & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: stances
  {
    if (msg.stances.size() == 0) {
      out << "stances: []";
    } else {
      out << "stances: [";
      size_t pending_items = msg.stances.size();
      for (auto item : msg.stances) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: area_callbacks
  {
    if (msg.area_callbacks.size() == 0) {
      out << "area_callbacks: []";
    } else {
      out << "area_callbacks: [";
      size_t pending_items = msg.area_callbacks.size();
      for (auto item : msg.area_callbacks) {
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
  const EdgeSnapshot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: stances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stances.size() == 0) {
      out << "stances: []\n";
    } else {
      out << "stances:\n";
      for (auto item : msg.stances) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: area_callbacks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.area_callbacks.size() == 0) {
      out << "area_callbacks: []\n";
    } else {
      out << "area_callbacks:\n";
      for (auto item : msg.area_callbacks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EdgeSnapshot & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::EdgeSnapshot & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::EdgeSnapshot & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::EdgeSnapshot>()
{
  return "bosdyn_msgs::msg::EdgeSnapshot";
}

template<>
inline const char * name<bosdyn_msgs::msg::EdgeSnapshot>()
{
  return "bosdyn_msgs/msg/EdgeSnapshot";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::EdgeSnapshot>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::EdgeSnapshot>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::EdgeSnapshot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT__TRAITS_HPP_
