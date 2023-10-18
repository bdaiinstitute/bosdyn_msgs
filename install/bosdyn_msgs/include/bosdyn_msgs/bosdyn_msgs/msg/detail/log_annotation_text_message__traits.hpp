// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/LogAnnotationTextMessage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_TEXT_MESSAGE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_TEXT_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/log_annotation_text_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
// Member 'timestamp_client'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'level'
#include "bosdyn_msgs/msg/detail/log_annotation_text_message_level__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LogAnnotationTextMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_is_set
  {
    out << "timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_is_set, out);
    out << ", ";
  }

  // member: service
  {
    out << "service: ";
    rosidl_generator_traits::value_to_yaml(msg.service, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    to_flow_style_yaml(msg.level, out);
    out << ", ";
  }

  // member: tag
  {
    out << "tag: ";
    rosidl_generator_traits::value_to_yaml(msg.tag, out);
    out << ", ";
  }

  // member: filename
  {
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
    out << ", ";
  }

  // member: line_number
  {
    out << "line_number: ";
    rosidl_generator_traits::value_to_yaml(msg.line_number, out);
    out << ", ";
  }

  // member: timestamp_client
  {
    out << "timestamp_client: ";
    to_flow_style_yaml(msg.timestamp_client, out);
    out << ", ";
  }

  // member: timestamp_client_is_set
  {
    out << "timestamp_client_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_client_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LogAnnotationTextMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_is_set, out);
    out << "\n";
  }

  // member: service
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service: ";
    rosidl_generator_traits::value_to_yaml(msg.service, out);
    out << "\n";
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level:\n";
    to_block_style_yaml(msg.level, out, indentation + 2);
  }

  // member: tag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag: ";
    rosidl_generator_traits::value_to_yaml(msg.tag, out);
    out << "\n";
  }

  // member: filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
    out << "\n";
  }

  // member: line_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "line_number: ";
    rosidl_generator_traits::value_to_yaml(msg.line_number, out);
    out << "\n";
  }

  // member: timestamp_client
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_client:\n";
    to_block_style_yaml(msg.timestamp_client, out, indentation + 2);
  }

  // member: timestamp_client_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_client_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_client_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LogAnnotationTextMessage & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::LogAnnotationTextMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::LogAnnotationTextMessage & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::LogAnnotationTextMessage>()
{
  return "bosdyn_msgs::msg::LogAnnotationTextMessage";
}

template<>
inline const char * name<bosdyn_msgs::msg::LogAnnotationTextMessage>()
{
  return "bosdyn_msgs/msg/LogAnnotationTextMessage";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::LogAnnotationTextMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::LogAnnotationTextMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::LogAnnotationTextMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_TEXT_MESSAGE__TRAITS_HPP_
