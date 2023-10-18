// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/CreateWaypointRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/create_waypoint_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'recording_environment'
#include "bosdyn_msgs/msg/detail/recording_environment__traits.hpp"
// Member 'lease'
#include "bosdyn_msgs/msg/detail/lease__traits.hpp"
// Member 'world_objects'
#include "bosdyn_msgs/msg/detail/world_object__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CreateWaypointRequest & msg,
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

  // member: waypoint_name
  {
    out << "waypoint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_name, out);
    out << ", ";
  }

  // member: recording_environment
  {
    out << "recording_environment: ";
    to_flow_style_yaml(msg.recording_environment, out);
    out << ", ";
  }

  // member: recording_environment_is_set
  {
    out << "recording_environment_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.recording_environment_is_set, out);
    out << ", ";
  }

  // member: lease
  {
    out << "lease: ";
    to_flow_style_yaml(msg.lease, out);
    out << ", ";
  }

  // member: lease_is_set
  {
    out << "lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_is_set, out);
    out << ", ";
  }

  // member: require_fiducials
  {
    if (msg.require_fiducials.size() == 0) {
      out << "require_fiducials: []";
    } else {
      out << "require_fiducials: [";
      size_t pending_items = msg.require_fiducials.size();
      for (auto item : msg.require_fiducials) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: world_objects
  {
    if (msg.world_objects.size() == 0) {
      out << "world_objects: []";
    } else {
      out << "world_objects: [";
      size_t pending_items = msg.world_objects.size();
      for (auto item : msg.world_objects) {
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
  const CreateWaypointRequest & msg,
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

  // member: waypoint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_name, out);
    out << "\n";
  }

  // member: recording_environment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recording_environment:\n";
    to_block_style_yaml(msg.recording_environment, out, indentation + 2);
  }

  // member: recording_environment_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recording_environment_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.recording_environment_is_set, out);
    out << "\n";
  }

  // member: lease
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease:\n";
    to_block_style_yaml(msg.lease, out, indentation + 2);
  }

  // member: lease_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_is_set, out);
    out << "\n";
  }

  // member: require_fiducials
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.require_fiducials.size() == 0) {
      out << "require_fiducials: []\n";
    } else {
      out << "require_fiducials:\n";
      for (auto item : msg.require_fiducials) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: world_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.world_objects.size() == 0) {
      out << "world_objects: []\n";
    } else {
      out << "world_objects:\n";
      for (auto item : msg.world_objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CreateWaypointRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::CreateWaypointRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::CreateWaypointRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::CreateWaypointRequest>()
{
  return "bosdyn_msgs::msg::CreateWaypointRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::CreateWaypointRequest>()
{
  return "bosdyn_msgs/msg/CreateWaypointRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::CreateWaypointRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::CreateWaypointRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::CreateWaypointRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_REQUEST__TRAITS_HPP_
