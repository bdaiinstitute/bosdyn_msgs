// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BosdynRecordEvent.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_RECORD_EVENT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_RECORD_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/bosdyn_record_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'event'
#include "bosdyn_msgs/msg/detail/event__traits.hpp"
// Member 'additional_parameters'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_value__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BosdynRecordEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: service_name
  {
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << ", ";
  }

  // member: host
  {
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << ", ";
  }

  // member: event
  {
    out << "event: ";
    to_flow_style_yaml(msg.event, out);
    out << ", ";
  }

  // member: event_is_set
  {
    out << "event_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.event_is_set, out);
    out << ", ";
  }

  // member: succeed_early
  {
    out << "succeed_early: ";
    rosidl_generator_traits::value_to_yaml(msg.succeed_early, out);
    out << ", ";
  }

  // member: additional_parameters
  {
    if (msg.additional_parameters.size() == 0) {
      out << "additional_parameters: []";
    } else {
      out << "additional_parameters: [";
      size_t pending_items = msg.additional_parameters.size();
      for (auto item : msg.additional_parameters) {
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
  const BosdynRecordEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: service_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << "\n";
  }

  // member: host
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << "\n";
  }

  // member: event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event:\n";
    to_block_style_yaml(msg.event, out, indentation + 2);
  }

  // member: event_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.event_is_set, out);
    out << "\n";
  }

  // member: succeed_early
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "succeed_early: ";
    rosidl_generator_traits::value_to_yaml(msg.succeed_early, out);
    out << "\n";
  }

  // member: additional_parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.additional_parameters.size() == 0) {
      out << "additional_parameters: []\n";
    } else {
      out << "additional_parameters:\n";
      for (auto item : msg.additional_parameters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BosdynRecordEvent & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BosdynRecordEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BosdynRecordEvent & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BosdynRecordEvent>()
{
  return "bosdyn_msgs::msg::BosdynRecordEvent";
}

template<>
inline const char * name<bosdyn_msgs::msg::BosdynRecordEvent>()
{
  return "bosdyn_msgs/msg/BosdynRecordEvent";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BosdynRecordEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BosdynRecordEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::BosdynRecordEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_RECORD_EVENT__TRAITS_HPP_
