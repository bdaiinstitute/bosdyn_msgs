// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/process_topology_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/process_topology_response_status__traits.hpp"
// Member 'new_subgraph'
#include "bosdyn_msgs/msg/detail/graph__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessTopologyResponse & msg,
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

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: new_subgraph
  {
    out << "new_subgraph: ";
    to_flow_style_yaml(msg.new_subgraph, out);
    out << ", ";
  }

  // member: new_subgraph_is_set
  {
    out << "new_subgraph_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.new_subgraph_is_set, out);
    out << ", ";
  }

  // member: map_on_server_was_modified
  {
    out << "map_on_server_was_modified: ";
    rosidl_generator_traits::value_to_yaml(msg.map_on_server_was_modified, out);
    out << ", ";
  }

  // member: missing_snapshot_ids
  {
    if (msg.missing_snapshot_ids.size() == 0) {
      out << "missing_snapshot_ids: []";
    } else {
      out << "missing_snapshot_ids: [";
      size_t pending_items = msg.missing_snapshot_ids.size();
      for (auto item : msg.missing_snapshot_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: missing_waypoint_ids
  {
    if (msg.missing_waypoint_ids.size() == 0) {
      out << "missing_waypoint_ids: []";
    } else {
      out << "missing_waypoint_ids: [";
      size_t pending_items = msg.missing_waypoint_ids.size();
      for (auto item : msg.missing_waypoint_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: timed_out
  {
    out << "timed_out: ";
    rosidl_generator_traits::value_to_yaml(msg.timed_out, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessTopologyResponse & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: new_subgraph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_subgraph:\n";
    to_block_style_yaml(msg.new_subgraph, out, indentation + 2);
  }

  // member: new_subgraph_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_subgraph_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.new_subgraph_is_set, out);
    out << "\n";
  }

  // member: map_on_server_was_modified
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_on_server_was_modified: ";
    rosidl_generator_traits::value_to_yaml(msg.map_on_server_was_modified, out);
    out << "\n";
  }

  // member: missing_snapshot_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.missing_snapshot_ids.size() == 0) {
      out << "missing_snapshot_ids: []\n";
    } else {
      out << "missing_snapshot_ids:\n";
      for (auto item : msg.missing_snapshot_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: missing_waypoint_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.missing_waypoint_ids.size() == 0) {
      out << "missing_waypoint_ids: []\n";
    } else {
      out << "missing_waypoint_ids:\n";
      for (auto item : msg.missing_waypoint_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: timed_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timed_out: ";
    rosidl_generator_traits::value_to_yaml(msg.timed_out, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessTopologyResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ProcessTopologyResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ProcessTopologyResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ProcessTopologyResponse>()
{
  return "bosdyn_msgs::msg::ProcessTopologyResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::ProcessTopologyResponse>()
{
  return "bosdyn_msgs/msg/ProcessTopologyResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ProcessTopologyResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ProcessTopologyResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ProcessTopologyResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_RESPONSE__TRAITS_HPP_
