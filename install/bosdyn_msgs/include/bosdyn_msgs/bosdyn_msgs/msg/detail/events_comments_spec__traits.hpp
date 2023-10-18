// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/EventsCommentsSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS_SPEC__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS_SPEC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/events_comments_spec__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time_range'
#include "bosdyn_msgs/msg/detail/time_range__traits.hpp"
// Member 'events'
#include "bosdyn_msgs/msg/detail/event_spec__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EventsCommentsSpec & msg,
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

  // member: comments
  {
    out << "comments: ";
    rosidl_generator_traits::value_to_yaml(msg.comments, out);
    out << ", ";
  }

  // member: max_events
  {
    out << "max_events: ";
    rosidl_generator_traits::value_to_yaml(msg.max_events, out);
    out << ", ";
  }

  // member: max_comments
  {
    out << "max_comments: ";
    rosidl_generator_traits::value_to_yaml(msg.max_comments, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EventsCommentsSpec & msg,
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

  // member: comments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comments: ";
    rosidl_generator_traits::value_to_yaml(msg.comments, out);
    out << "\n";
  }

  // member: max_events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_events: ";
    rosidl_generator_traits::value_to_yaml(msg.max_events, out);
    out << "\n";
  }

  // member: max_comments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_comments: ";
    rosidl_generator_traits::value_to_yaml(msg.max_comments, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EventsCommentsSpec & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::EventsCommentsSpec & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::EventsCommentsSpec & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::EventsCommentsSpec>()
{
  return "bosdyn_msgs::msg::EventsCommentsSpec";
}

template<>
inline const char * name<bosdyn_msgs::msg::EventsCommentsSpec>()
{
  return "bosdyn_msgs/msg/EventsCommentsSpec";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::EventsCommentsSpec>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::EventsCommentsSpec>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::EventsCommentsSpec>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__EVENTS_COMMENTS_SPEC__TRAITS_HPP_
