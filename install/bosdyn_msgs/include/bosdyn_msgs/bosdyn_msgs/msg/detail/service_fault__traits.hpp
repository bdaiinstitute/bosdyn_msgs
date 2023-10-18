// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ServiceFault.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/service_fault__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'fault_id'
#include "bosdyn_msgs/msg/detail/service_fault_id__traits.hpp"
// Member 'severity'
#include "bosdyn_msgs/msg/detail/service_fault_severity__traits.hpp"
// Member 'onset_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServiceFault & msg,
  std::ostream & out)
{
  out << "{";
  // member: fault_id
  {
    out << "fault_id: ";
    to_flow_style_yaml(msg.fault_id, out);
    out << ", ";
  }

  // member: fault_id_is_set
  {
    out << "fault_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_id_is_set, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << ", ";
  }

  // member: attributes
  {
    if (msg.attributes.size() == 0) {
      out << "attributes: []";
    } else {
      out << "attributes: [";
      size_t pending_items = msg.attributes.size();
      for (auto item : msg.attributes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: severity
  {
    out << "severity: ";
    to_flow_style_yaml(msg.severity, out);
    out << ", ";
  }

  // member: onset_timestamp
  {
    out << "onset_timestamp: ";
    to_flow_style_yaml(msg.onset_timestamp, out);
    out << ", ";
  }

  // member: onset_timestamp_is_set
  {
    out << "onset_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.onset_timestamp_is_set, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    to_flow_style_yaml(msg.duration, out);
    out << ", ";
  }

  // member: duration_is_set
  {
    out << "duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServiceFault & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fault_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_id:\n";
    to_block_style_yaml(msg.fault_id, out, indentation + 2);
  }

  // member: fault_id_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_id_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_id_is_set, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }

  // member: attributes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.attributes.size() == 0) {
      out << "attributes: []\n";
    } else {
      out << "attributes:\n";
      for (auto item : msg.attributes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: severity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "severity:\n";
    to_block_style_yaml(msg.severity, out, indentation + 2);
  }

  // member: onset_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "onset_timestamp:\n";
    to_block_style_yaml(msg.onset_timestamp, out, indentation + 2);
  }

  // member: onset_timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "onset_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.onset_timestamp_is_set, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration:\n";
    to_block_style_yaml(msg.duration, out, indentation + 2);
  }

  // member: duration_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.duration_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServiceFault & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ServiceFault & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ServiceFault & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ServiceFault>()
{
  return "bosdyn_msgs::msg::ServiceFault";
}

template<>
inline const char * name<bosdyn_msgs::msg::ServiceFault>()
{
  return "bosdyn_msgs/msg/ServiceFault";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ServiceFault>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ServiceFault>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ServiceFault>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT__TRAITS_HPP_
