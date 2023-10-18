// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DataAcquisitionOnInterruption.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_ON_INTERRUPTION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_ON_INTERRUPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/data_acquisition_on_interruption__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'child'
#include "bosdyn_msgs/msg/detail/node__traits.hpp"
// Member 'request_when_interrupted'
#include "bosdyn_msgs/msg/detail/data_acquisition__traits.hpp"
// Member 'pause_mission_metadata'
// Member 'restart_mission_metadata'
// Member 'load_mission_metadata'
// Member 'stop_mission_metadata'
// Member 'lease_use_error_metadata'
// Member 'play_mission_timeout_metadata'
// Member 'child_node_error_metadata'
// Member 'child_node_exception_metadata'
// Member 'default_metadata'
#include "bosdyn_msgs/msg/detail/metadata__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DataAcquisitionOnInterruption & msg,
  std::ostream & out)
{
  out << "{";
  // member: child
  {
    out << "child: ";
    to_flow_style_yaml(msg.child, out);
    out << ", ";
  }

  // member: child_is_set
  {
    out << "child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_is_set, out);
    out << ", ";
  }

  // member: request_when_interrupted
  {
    out << "request_when_interrupted: ";
    to_flow_style_yaml(msg.request_when_interrupted, out);
    out << ", ";
  }

  // member: request_when_interrupted_is_set
  {
    out << "request_when_interrupted_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.request_when_interrupted_is_set, out);
    out << ", ";
  }

  // member: pause_mission_metadata
  {
    out << "pause_mission_metadata: ";
    to_flow_style_yaml(msg.pause_mission_metadata, out);
    out << ", ";
  }

  // member: pause_mission_metadata_is_set
  {
    out << "pause_mission_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pause_mission_metadata_is_set, out);
    out << ", ";
  }

  // member: restart_mission_metadata
  {
    out << "restart_mission_metadata: ";
    to_flow_style_yaml(msg.restart_mission_metadata, out);
    out << ", ";
  }

  // member: restart_mission_metadata_is_set
  {
    out << "restart_mission_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.restart_mission_metadata_is_set, out);
    out << ", ";
  }

  // member: load_mission_metadata
  {
    out << "load_mission_metadata: ";
    to_flow_style_yaml(msg.load_mission_metadata, out);
    out << ", ";
  }

  // member: load_mission_metadata_is_set
  {
    out << "load_mission_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.load_mission_metadata_is_set, out);
    out << ", ";
  }

  // member: stop_mission_metadata
  {
    out << "stop_mission_metadata: ";
    to_flow_style_yaml(msg.stop_mission_metadata, out);
    out << ", ";
  }

  // member: stop_mission_metadata_is_set
  {
    out << "stop_mission_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_mission_metadata_is_set, out);
    out << ", ";
  }

  // member: lease_use_error_metadata
  {
    out << "lease_use_error_metadata: ";
    to_flow_style_yaml(msg.lease_use_error_metadata, out);
    out << ", ";
  }

  // member: lease_use_error_metadata_is_set
  {
    out << "lease_use_error_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_use_error_metadata_is_set, out);
    out << ", ";
  }

  // member: play_mission_timeout_metadata
  {
    out << "play_mission_timeout_metadata: ";
    to_flow_style_yaml(msg.play_mission_timeout_metadata, out);
    out << ", ";
  }

  // member: play_mission_timeout_metadata_is_set
  {
    out << "play_mission_timeout_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.play_mission_timeout_metadata_is_set, out);
    out << ", ";
  }

  // member: child_node_error_metadata
  {
    out << "child_node_error_metadata: ";
    to_flow_style_yaml(msg.child_node_error_metadata, out);
    out << ", ";
  }

  // member: child_node_error_metadata_is_set
  {
    out << "child_node_error_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_node_error_metadata_is_set, out);
    out << ", ";
  }

  // member: child_node_exception_metadata
  {
    out << "child_node_exception_metadata: ";
    to_flow_style_yaml(msg.child_node_exception_metadata, out);
    out << ", ";
  }

  // member: child_node_exception_metadata_is_set
  {
    out << "child_node_exception_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_node_exception_metadata_is_set, out);
    out << ", ";
  }

  // member: default_metadata
  {
    out << "default_metadata: ";
    to_flow_style_yaml(msg.default_metadata, out);
    out << ", ";
  }

  // member: default_metadata_is_set
  {
    out << "default_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.default_metadata_is_set, out);
    out << ", ";
  }

  // member: keys_for_lease_use_error_message
  {
    if (msg.keys_for_lease_use_error_message.size() == 0) {
      out << "keys_for_lease_use_error_message: []";
    } else {
      out << "keys_for_lease_use_error_message: [";
      size_t pending_items = msg.keys_for_lease_use_error_message.size();
      for (auto item : msg.keys_for_lease_use_error_message) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const DataAcquisitionOnInterruption & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: child
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child:\n";
    to_block_style_yaml(msg.child, out, indentation + 2);
  }

  // member: child_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_is_set, out);
    out << "\n";
  }

  // member: request_when_interrupted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_when_interrupted:\n";
    to_block_style_yaml(msg.request_when_interrupted, out, indentation + 2);
  }

  // member: request_when_interrupted_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_when_interrupted_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.request_when_interrupted_is_set, out);
    out << "\n";
  }

  // member: pause_mission_metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pause_mission_metadata:\n";
    to_block_style_yaml(msg.pause_mission_metadata, out, indentation + 2);
  }

  // member: pause_mission_metadata_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pause_mission_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pause_mission_metadata_is_set, out);
    out << "\n";
  }

  // member: restart_mission_metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restart_mission_metadata:\n";
    to_block_style_yaml(msg.restart_mission_metadata, out, indentation + 2);
  }

  // member: restart_mission_metadata_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restart_mission_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.restart_mission_metadata_is_set, out);
    out << "\n";
  }

  // member: load_mission_metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_mission_metadata:\n";
    to_block_style_yaml(msg.load_mission_metadata, out, indentation + 2);
  }

  // member: load_mission_metadata_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_mission_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.load_mission_metadata_is_set, out);
    out << "\n";
  }

  // member: stop_mission_metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_mission_metadata:\n";
    to_block_style_yaml(msg.stop_mission_metadata, out, indentation + 2);
  }

  // member: stop_mission_metadata_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_mission_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_mission_metadata_is_set, out);
    out << "\n";
  }

  // member: lease_use_error_metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_use_error_metadata:\n";
    to_block_style_yaml(msg.lease_use_error_metadata, out, indentation + 2);
  }

  // member: lease_use_error_metadata_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_use_error_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_use_error_metadata_is_set, out);
    out << "\n";
  }

  // member: play_mission_timeout_metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "play_mission_timeout_metadata:\n";
    to_block_style_yaml(msg.play_mission_timeout_metadata, out, indentation + 2);
  }

  // member: play_mission_timeout_metadata_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "play_mission_timeout_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.play_mission_timeout_metadata_is_set, out);
    out << "\n";
  }

  // member: child_node_error_metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_node_error_metadata:\n";
    to_block_style_yaml(msg.child_node_error_metadata, out, indentation + 2);
  }

  // member: child_node_error_metadata_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_node_error_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_node_error_metadata_is_set, out);
    out << "\n";
  }

  // member: child_node_exception_metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_node_exception_metadata:\n";
    to_block_style_yaml(msg.child_node_exception_metadata, out, indentation + 2);
  }

  // member: child_node_exception_metadata_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_node_exception_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.child_node_exception_metadata_is_set, out);
    out << "\n";
  }

  // member: default_metadata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_metadata:\n";
    to_block_style_yaml(msg.default_metadata, out, indentation + 2);
  }

  // member: default_metadata_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_metadata_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.default_metadata_is_set, out);
    out << "\n";
  }

  // member: keys_for_lease_use_error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.keys_for_lease_use_error_message.size() == 0) {
      out << "keys_for_lease_use_error_message: []\n";
    } else {
      out << "keys_for_lease_use_error_message:\n";
      for (auto item : msg.keys_for_lease_use_error_message) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataAcquisitionOnInterruption & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DataAcquisitionOnInterruption & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DataAcquisitionOnInterruption>()
{
  return "bosdyn_msgs::msg::DataAcquisitionOnInterruption";
}

template<>
inline const char * name<bosdyn_msgs::msg::DataAcquisitionOnInterruption>()
{
  return "bosdyn_msgs/msg/DataAcquisitionOnInterruption";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DataAcquisitionOnInterruption>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DataAcquisitionOnInterruption>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::DataAcquisitionOnInterruption>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_ON_INTERRUPTION__TRAITS_HPP_
