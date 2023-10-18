// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ActionDataAcquisition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_DATA_ACQUISITION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_DATA_ACQUISITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/action_data_acquisition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'acquire_data_request'
#include "bosdyn_msgs/msg/detail/acquire_data_request__traits.hpp"
// Member 'completion_behavior'
#include "bosdyn_msgs/msg/detail/data_acquisition_completion_behavior__traits.hpp"
// Member 'last_known_capabilities'
#include "bosdyn_msgs/msg/detail/acquisition_capability_list__traits.hpp"
// Member 'record_time_images'
#include "bosdyn_msgs/msg/detail/image_capture_and_source__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionDataAcquisition & msg,
  std::ostream & out)
{
  out << "{";
  // member: acquire_data_request
  {
    out << "acquire_data_request: ";
    to_flow_style_yaml(msg.acquire_data_request, out);
    out << ", ";
  }

  // member: acquire_data_request_is_set
  {
    out << "acquire_data_request_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquire_data_request_is_set, out);
    out << ", ";
  }

  // member: completion_behavior
  {
    out << "completion_behavior: ";
    to_flow_style_yaml(msg.completion_behavior, out);
    out << ", ";
  }

  // member: last_known_capabilities
  {
    out << "last_known_capabilities: ";
    to_flow_style_yaml(msg.last_known_capabilities, out);
    out << ", ";
  }

  // member: last_known_capabilities_is_set
  {
    out << "last_known_capabilities_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.last_known_capabilities_is_set, out);
    out << ", ";
  }

  // member: record_time_images
  {
    if (msg.record_time_images.size() == 0) {
      out << "record_time_images: []";
    } else {
      out << "record_time_images: [";
      size_t pending_items = msg.record_time_images.size();
      for (auto item : msg.record_time_images) {
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
  const ActionDataAcquisition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: acquire_data_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquire_data_request:\n";
    to_block_style_yaml(msg.acquire_data_request, out, indentation + 2);
  }

  // member: acquire_data_request_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquire_data_request_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquire_data_request_is_set, out);
    out << "\n";
  }

  // member: completion_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completion_behavior:\n";
    to_block_style_yaml(msg.completion_behavior, out, indentation + 2);
  }

  // member: last_known_capabilities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_known_capabilities:\n";
    to_block_style_yaml(msg.last_known_capabilities, out, indentation + 2);
  }

  // member: last_known_capabilities_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_known_capabilities_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.last_known_capabilities_is_set, out);
    out << "\n";
  }

  // member: record_time_images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.record_time_images.size() == 0) {
      out << "record_time_images: []\n";
    } else {
      out << "record_time_images:\n";
      for (auto item : msg.record_time_images) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionDataAcquisition & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ActionDataAcquisition & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ActionDataAcquisition & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ActionDataAcquisition>()
{
  return "bosdyn_msgs::msg::ActionDataAcquisition";
}

template<>
inline const char * name<bosdyn_msgs::msg::ActionDataAcquisition>()
{
  return "bosdyn_msgs/msg/ActionDataAcquisition";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ActionDataAcquisition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ActionDataAcquisition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ActionDataAcquisition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_DATA_ACQUISITION__TRAITS_HPP_
