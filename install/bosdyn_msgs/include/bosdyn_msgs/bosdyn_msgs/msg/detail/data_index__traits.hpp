// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DataIndex.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_INDEX__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_INDEX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/data_index__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_range'
#include "bosdyn_msgs/msg/detail/time_range__traits.hpp"
// Member 'blobs'
#include "bosdyn_msgs/msg/detail/blob_pages__traits.hpp"
// Member 'text_messages'
// Member 'events'
// Member 'comments'
#include "bosdyn_msgs/msg/detail/pages_and_timestamp__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DataIndex & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_range
  {
    out << "time_range: ";
    to_flow_style_yaml(msg.time_range, out);
    out << ", ";
  }

  // member: time_range_is_set
  {
    out << "time_range_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.time_range_is_set, out);
    out << ", ";
  }

  // member: blobs
  {
    if (msg.blobs.size() == 0) {
      out << "blobs: []";
    } else {
      out << "blobs: [";
      size_t pending_items = msg.blobs.size();
      for (auto item : msg.blobs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: text_messages
  {
    out << "text_messages: ";
    to_flow_style_yaml(msg.text_messages, out);
    out << ", ";
  }

  // member: text_messages_is_set
  {
    out << "text_messages_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.text_messages_is_set, out);
    out << ", ";
  }

  // member: events
  {
    out << "events: ";
    to_flow_style_yaml(msg.events, out);
    out << ", ";
  }

  // member: events_is_set
  {
    out << "events_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.events_is_set, out);
    out << ", ";
  }

  // member: comments
  {
    out << "comments: ";
    to_flow_style_yaml(msg.comments, out);
    out << ", ";
  }

  // member: comments_is_set
  {
    out << "comments_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.comments_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DataIndex & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_range:\n";
    to_block_style_yaml(msg.time_range, out, indentation + 2);
  }

  // member: time_range_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_range_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.time_range_is_set, out);
    out << "\n";
  }

  // member: blobs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blobs.size() == 0) {
      out << "blobs: []\n";
    } else {
      out << "blobs:\n";
      for (auto item : msg.blobs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: text_messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text_messages:\n";
    to_block_style_yaml(msg.text_messages, out, indentation + 2);
  }

  // member: text_messages_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text_messages_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.text_messages_is_set, out);
    out << "\n";
  }

  // member: events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "events:\n";
    to_block_style_yaml(msg.events, out, indentation + 2);
  }

  // member: events_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "events_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.events_is_set, out);
    out << "\n";
  }

  // member: comments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comments:\n";
    to_block_style_yaml(msg.comments, out, indentation + 2);
  }

  // member: comments_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comments_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.comments_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataIndex & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DataIndex & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DataIndex & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DataIndex>()
{
  return "bosdyn_msgs::msg::DataIndex";
}

template<>
inline const char * name<bosdyn_msgs::msg::DataIndex>()
{
  return "bosdyn_msgs/msg/DataIndex";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DataIndex>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DataIndex>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::DataIndex>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_INDEX__TRAITS_HPP_
