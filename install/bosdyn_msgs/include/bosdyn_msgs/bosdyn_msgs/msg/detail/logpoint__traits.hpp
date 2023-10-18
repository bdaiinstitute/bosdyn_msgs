// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Logpoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOGPOINT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOGPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/logpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/logpoint_record_type__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/logpoint_log_status__traits.hpp"
// Member 'queue_status'
#include "bosdyn_msgs/msg/detail/logpoint_queue_status__traits.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'image_params'
#include "bosdyn_msgs/msg/detail/logpoint_image_params__traits.hpp"
// Member 'calibration'
#include "bosdyn_msgs/msg/detail/logpoint_calibration__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Logpoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: queue_status
  {
    out << "queue_status: ";
    to_flow_style_yaml(msg.queue_status, out);
    out << ", ";
  }

  // member: tag
  {
    out << "tag: ";
    rosidl_generator_traits::value_to_yaml(msg.tag, out);
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

  // member: image_params
  {
    out << "image_params: ";
    to_flow_style_yaml(msg.image_params, out);
    out << ", ";
  }

  // member: image_params_is_set
  {
    out << "image_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.image_params_is_set, out);
    out << ", ";
  }

  // member: calibration
  {
    if (msg.calibration.size() == 0) {
      out << "calibration: []";
    } else {
      out << "calibration: [";
      size_t pending_items = msg.calibration.size();
      for (auto item : msg.calibration) {
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
  const Logpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: queue_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "queue_status:\n";
    to_block_style_yaml(msg.queue_status, out, indentation + 2);
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

  // member: image_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_params:\n";
    to_block_style_yaml(msg.image_params, out, indentation + 2);
  }

  // member: image_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.image_params_is_set, out);
    out << "\n";
  }

  // member: calibration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.calibration.size() == 0) {
      out << "calibration: []\n";
    } else {
      out << "calibration:\n";
      for (auto item : msg.calibration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Logpoint & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Logpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Logpoint & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Logpoint>()
{
  return "bosdyn_msgs::msg::Logpoint";
}

template<>
inline const char * name<bosdyn_msgs::msg::Logpoint>()
{
  return "bosdyn_msgs/msg/Logpoint";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Logpoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Logpoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Logpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOGPOINT__TRAITS_HPP_
