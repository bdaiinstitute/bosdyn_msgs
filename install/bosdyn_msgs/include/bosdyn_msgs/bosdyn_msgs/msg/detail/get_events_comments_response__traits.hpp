// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/GetEventsCommentsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_EVENTS_COMMENTS_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_EVENTS_COMMENTS_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/get_events_comments_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'events_comments'
#include "bosdyn_msgs/msg/detail/events_comments__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GetEventsCommentsResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_is_set
  {
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << ", ";
  }

  // member: events_comments
  {
    out << "events_comments: ";
    to_flow_style_yaml(msg.events_comments, out);
    out << ", ";
  }

  // member: events_comments_is_set
  {
    out << "events_comments_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.events_comments_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetEventsCommentsResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << "\n";
  }

  // member: events_comments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "events_comments:\n";
    to_block_style_yaml(msg.events_comments, out, indentation + 2);
  }

  // member: events_comments_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "events_comments_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.events_comments_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetEventsCommentsResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::GetEventsCommentsResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::GetEventsCommentsResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::GetEventsCommentsResponse>()
{
  return "bosdyn_msgs::msg::GetEventsCommentsResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::GetEventsCommentsResponse>()
{
  return "bosdyn_msgs/msg/GetEventsCommentsResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::GetEventsCommentsResponse>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::EventsComments>::value && has_fixed_size<bosdyn_msgs::msg::ResponseHeader>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::GetEventsCommentsResponse>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::EventsComments>::value && has_bounded_size<bosdyn_msgs::msg::ResponseHeader>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::GetEventsCommentsResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_EVENTS_COMMENTS_RESPONSE__TRAITS_HPP_
