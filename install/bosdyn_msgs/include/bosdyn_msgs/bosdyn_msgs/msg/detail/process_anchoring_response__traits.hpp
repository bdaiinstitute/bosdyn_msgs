// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/process_anchoring_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/process_anchoring_response_status__traits.hpp"
// Member 'waypoint_results'
#include "bosdyn_msgs/msg/detail/anchor__traits.hpp"
// Member 'world_object_results'
#include "bosdyn_msgs/msg/detail/anchored_world_object__traits.hpp"
// Member 'violated_waypoint_constraints'
#include "bosdyn_msgs/msg/detail/waypoint_anchor_hint__traits.hpp"
// Member 'violated_object_constraints'
#include "bosdyn_msgs/msg/detail/world_object_anchor_hint__traits.hpp"
// Member 'inconsistent_edges'
#include "bosdyn_msgs/msg/detail/edge_id__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessAnchoringResponse & msg,
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

  // member: waypoint_results
  {
    if (msg.waypoint_results.size() == 0) {
      out << "waypoint_results: []";
    } else {
      out << "waypoint_results: [";
      size_t pending_items = msg.waypoint_results.size();
      for (auto item : msg.waypoint_results) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: world_object_results
  {
    if (msg.world_object_results.size() == 0) {
      out << "world_object_results: []";
    } else {
      out << "world_object_results: [";
      size_t pending_items = msg.world_object_results.size();
      for (auto item : msg.world_object_results) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: anchoring_on_server_was_modified
  {
    out << "anchoring_on_server_was_modified: ";
    rosidl_generator_traits::value_to_yaml(msg.anchoring_on_server_was_modified, out);
    out << ", ";
  }

  // member: iteration
  {
    out << "iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.iteration, out);
    out << ", ";
  }

  // member: cost
  {
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << ", ";
  }

  // member: final_iteration
  {
    out << "final_iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.final_iteration, out);
    out << ", ";
  }

  // member: violated_waypoint_constraints
  {
    if (msg.violated_waypoint_constraints.size() == 0) {
      out << "violated_waypoint_constraints: []";
    } else {
      out << "violated_waypoint_constraints: [";
      size_t pending_items = msg.violated_waypoint_constraints.size();
      for (auto item : msg.violated_waypoint_constraints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: violated_object_constraints
  {
    if (msg.violated_object_constraints.size() == 0) {
      out << "violated_object_constraints: []";
    } else {
      out << "violated_object_constraints: [";
      size_t pending_items = msg.violated_object_constraints.size();
      for (auto item : msg.violated_object_constraints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

  // member: invalid_hints
  {
    if (msg.invalid_hints.size() == 0) {
      out << "invalid_hints: []";
    } else {
      out << "invalid_hints: [";
      size_t pending_items = msg.invalid_hints.size();
      for (auto item : msg.invalid_hints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: inconsistent_edges
  {
    if (msg.inconsistent_edges.size() == 0) {
      out << "inconsistent_edges: []";
    } else {
      out << "inconsistent_edges: [";
      size_t pending_items = msg.inconsistent_edges.size();
      for (auto item : msg.inconsistent_edges) {
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
  const ProcessAnchoringResponse & msg,
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

  // member: waypoint_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoint_results.size() == 0) {
      out << "waypoint_results: []\n";
    } else {
      out << "waypoint_results:\n";
      for (auto item : msg.waypoint_results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: world_object_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.world_object_results.size() == 0) {
      out << "world_object_results: []\n";
    } else {
      out << "world_object_results:\n";
      for (auto item : msg.world_object_results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: anchoring_on_server_was_modified
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchoring_on_server_was_modified: ";
    rosidl_generator_traits::value_to_yaml(msg.anchoring_on_server_was_modified, out);
    out << "\n";
  }

  // member: iteration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.iteration, out);
    out << "\n";
  }

  // member: cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << "\n";
  }

  // member: final_iteration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.final_iteration, out);
    out << "\n";
  }

  // member: violated_waypoint_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.violated_waypoint_constraints.size() == 0) {
      out << "violated_waypoint_constraints: []\n";
    } else {
      out << "violated_waypoint_constraints:\n";
      for (auto item : msg.violated_waypoint_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: violated_object_constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.violated_object_constraints.size() == 0) {
      out << "violated_object_constraints: []\n";
    } else {
      out << "violated_object_constraints:\n";
      for (auto item : msg.violated_object_constraints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

  // member: invalid_hints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.invalid_hints.size() == 0) {
      out << "invalid_hints: []\n";
    } else {
      out << "invalid_hints:\n";
      for (auto item : msg.invalid_hints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: inconsistent_edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.inconsistent_edges.size() == 0) {
      out << "inconsistent_edges: []\n";
    } else {
      out << "inconsistent_edges:\n";
      for (auto item : msg.inconsistent_edges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessAnchoringResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ProcessAnchoringResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ProcessAnchoringResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ProcessAnchoringResponse>()
{
  return "bosdyn_msgs::msg::ProcessAnchoringResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::ProcessAnchoringResponse>()
{
  return "bosdyn_msgs/msg/ProcessAnchoringResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ProcessAnchoringResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ProcessAnchoringResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ProcessAnchoringResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_RESPONSE__TRAITS_HPP_
