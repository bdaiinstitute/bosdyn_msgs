// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/EventsComments.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/events_comments__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_range'
#include "bosdyn_msgs/msg/detail/time_range__traits.hpp"
// Member 'events'
#include "bosdyn_msgs/msg/detail/event__traits.hpp"
// Member 'operator_comments'
#include "bosdyn_msgs/msg/detail/operator_comment__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EventsComments & msg,
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

  // member: events
  {
    if (msg.events.size() == 0) {
      out << "events: []";
    } else {
      out << "events: [";
      size_t pending_items = msg.events.size();
      for (auto item : msg.events) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: operator_comments
  {
    if (msg.operator_comments.size() == 0) {
      out << "operator_comments: []";
    } else {
      out << "operator_comments: [";
      size_t pending_items = msg.operator_comments.size();
      for (auto item : msg.operator_comments) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: events_limited
  {
    out << "events_limited: ";
    rosidl_generator_traits::value_to_yaml(msg.events_limited, out);
    out << ", ";
  }

  // member: operator_comments_limited
  {
    out << "operator_comments_limited: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_comments_limited, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EventsComments & msg,
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

  // member: events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.events.size() == 0) {
      out << "events: []\n";
    } else {
      out << "events:\n";
      for (auto item : msg.events) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: operator_comments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.operator_comments.size() == 0) {
      out << "operator_comments: []\n";
    } else {
      out << "operator_comments:\n";
      for (auto item : msg.operator_comments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: events_limited
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "events_limited: ";
    rosidl_generator_traits::value_to_yaml(msg.events_limited, out);
    out << "\n";
  }

  // member: operator_comments_limited
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operator_comments_limited: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_comments_limited, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EventsComments & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::EventsComments & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::EventsComments & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::EventsComments>()
{
  return "bosdyn_msgs::msg::EventsComments";
}

template<>
inline const char * name<bosdyn_msgs::msg::EventsComments>()
{
  return "bosdyn_msgs/msg/EventsComments";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::EventsComments>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::EventsComments>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::EventsComments>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS__TRAITS_HPP_
