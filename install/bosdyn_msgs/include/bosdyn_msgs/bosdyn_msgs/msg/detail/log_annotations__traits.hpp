// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/LogAnnotations.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATIONS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/log_annotations__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'text_messages'
#include "bosdyn_msgs/msg/detail/log_annotation_text_message__traits.hpp"
// Member 'operator_messages'
#include "bosdyn_msgs/msg/detail/log_annotation_operator_message__traits.hpp"
// Member 'blob_data'
#include "bosdyn_msgs/msg/detail/log_annotation_log_blob__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LogAnnotations & msg,
  std::ostream & out)
{
  out << "{";
  // member: text_messages
  {
    if (msg.text_messages.size() == 0) {
      out << "text_messages: []";
    } else {
      out << "text_messages: [";
      size_t pending_items = msg.text_messages.size();
      for (auto item : msg.text_messages) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: operator_messages
  {
    if (msg.operator_messages.size() == 0) {
      out << "operator_messages: []";
    } else {
      out << "operator_messages: [";
      size_t pending_items = msg.operator_messages.size();
      for (auto item : msg.operator_messages) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: blob_data
  {
    if (msg.blob_data.size() == 0) {
      out << "blob_data: []";
    } else {
      out << "blob_data: [";
      size_t pending_items = msg.blob_data.size();
      for (auto item : msg.blob_data) {
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
  const LogAnnotations & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: text_messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.text_messages.size() == 0) {
      out << "text_messages: []\n";
    } else {
      out << "text_messages:\n";
      for (auto item : msg.text_messages) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: operator_messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.operator_messages.size() == 0) {
      out << "operator_messages: []\n";
    } else {
      out << "operator_messages:\n";
      for (auto item : msg.operator_messages) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: blob_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blob_data.size() == 0) {
      out << "blob_data: []\n";
    } else {
      out << "blob_data:\n";
      for (auto item : msg.blob_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LogAnnotations & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::LogAnnotations & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::LogAnnotations & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::LogAnnotations>()
{
  return "bosdyn_msgs::msg::LogAnnotations";
}

template<>
inline const char * name<bosdyn_msgs::msg::LogAnnotations>()
{
  return "bosdyn_msgs/msg/LogAnnotations";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::LogAnnotations>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::LogAnnotations>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::LogAnnotations>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATIONS__TRAITS_HPP_
