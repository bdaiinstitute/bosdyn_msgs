// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/OutputData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__OUTPUT_DATA__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__OUTPUT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/output_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'object_in_image'
#include "bosdyn_msgs/msg/detail/world_object__traits.hpp"
// Member 'alert_data'
#include "bosdyn_msgs/msg/detail/alert_data__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OutputData & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_in_image
  {
    if (msg.object_in_image.size() == 0) {
      out << "object_in_image: []";
    } else {
      out << "object_in_image: [";
      size_t pending_items = msg.object_in_image.size();
      for (auto item : msg.object_in_image) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: alert_data
  {
    out << "alert_data: ";
    to_flow_style_yaml(msg.alert_data, out);
    out << ", ";
  }

  // member: alert_data_is_set
  {
    out << "alert_data_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_data_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OutputData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_in_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_in_image.size() == 0) {
      out << "object_in_image: []\n";
    } else {
      out << "object_in_image:\n";
      for (auto item : msg.object_in_image) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: alert_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alert_data:\n";
    to_block_style_yaml(msg.alert_data, out, indentation + 2);
  }

  // member: alert_data_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alert_data_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.alert_data_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OutputData & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::OutputData & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::OutputData & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::OutputData>()
{
  return "bosdyn_msgs::msg::OutputData";
}

template<>
inline const char * name<bosdyn_msgs::msg::OutputData>()
{
  return "bosdyn_msgs/msg/OutputData";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::OutputData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::OutputData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::OutputData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__OUTPUT_DATA__TRAITS_HPP_
