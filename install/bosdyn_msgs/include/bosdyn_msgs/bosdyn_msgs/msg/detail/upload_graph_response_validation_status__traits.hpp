// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/UploadGraphResponseValidationStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE_VALIDATION_STATUS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE_VALIDATION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/upload_graph_response_validation_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'edge_ids_invalid_transform'
// Member 'duplicate_edge_ids'
#include "bosdyn_msgs/msg/detail/edge_id__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UploadGraphResponseValidationStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: missing_waypoint_ids_in_edges
  {
    if (msg.missing_waypoint_ids_in_edges.size() == 0) {
      out << "missing_waypoint_ids_in_edges: []";
    } else {
      out << "missing_waypoint_ids_in_edges: [";
      size_t pending_items = msg.missing_waypoint_ids_in_edges.size();
      for (auto item : msg.missing_waypoint_ids_in_edges) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: missing_waypoint_ids_in_anchors
  {
    if (msg.missing_waypoint_ids_in_anchors.size() == 0) {
      out << "missing_waypoint_ids_in_anchors: []";
    } else {
      out << "missing_waypoint_ids_in_anchors: [";
      size_t pending_items = msg.missing_waypoint_ids_in_anchors.size();
      for (auto item : msg.missing_waypoint_ids_in_anchors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: edge_ids_invalid_transform
  {
    if (msg.edge_ids_invalid_transform.size() == 0) {
      out << "edge_ids_invalid_transform: []";
    } else {
      out << "edge_ids_invalid_transform: [";
      size_t pending_items = msg.edge_ids_invalid_transform.size();
      for (auto item : msg.edge_ids_invalid_transform) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: waypoint_anchors_invalid_transform
  {
    if (msg.waypoint_anchors_invalid_transform.size() == 0) {
      out << "waypoint_anchors_invalid_transform: []";
    } else {
      out << "waypoint_anchors_invalid_transform: [";
      size_t pending_items = msg.waypoint_anchors_invalid_transform.size();
      for (auto item : msg.waypoint_anchors_invalid_transform) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_anchors_invalid_transform
  {
    if (msg.object_anchors_invalid_transform.size() == 0) {
      out << "object_anchors_invalid_transform: []";
    } else {
      out << "object_anchors_invalid_transform: [";
      size_t pending_items = msg.object_anchors_invalid_transform.size();
      for (auto item : msg.object_anchors_invalid_transform) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: duplicate_waypoint_ids
  {
    if (msg.duplicate_waypoint_ids.size() == 0) {
      out << "duplicate_waypoint_ids: []";
    } else {
      out << "duplicate_waypoint_ids: [";
      size_t pending_items = msg.duplicate_waypoint_ids.size();
      for (auto item : msg.duplicate_waypoint_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: duplicate_waypoint_anchor_ids
  {
    if (msg.duplicate_waypoint_anchor_ids.size() == 0) {
      out << "duplicate_waypoint_anchor_ids: []";
    } else {
      out << "duplicate_waypoint_anchor_ids: [";
      size_t pending_items = msg.duplicate_waypoint_anchor_ids.size();
      for (auto item : msg.duplicate_waypoint_anchor_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: duplicate_object_anchor_ids
  {
    if (msg.duplicate_object_anchor_ids.size() == 0) {
      out << "duplicate_object_anchor_ids: []";
    } else {
      out << "duplicate_object_anchor_ids: [";
      size_t pending_items = msg.duplicate_object_anchor_ids.size();
      for (auto item : msg.duplicate_object_anchor_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: duplicate_edge_ids
  {
    if (msg.duplicate_edge_ids.size() == 0) {
      out << "duplicate_edge_ids: []";
    } else {
      out << "duplicate_edge_ids: [";
      size_t pending_items = msg.duplicate_edge_ids.size();
      for (auto item : msg.duplicate_edge_ids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: invalid_waypoint_ids_self_edges
  {
    if (msg.invalid_waypoint_ids_self_edges.size() == 0) {
      out << "invalid_waypoint_ids_self_edges: []";
    } else {
      out << "invalid_waypoint_ids_self_edges: [";
      size_t pending_items = msg.invalid_waypoint_ids_self_edges.size();
      for (auto item : msg.invalid_waypoint_ids_self_edges) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: has_empty_waypoint_ids
  {
    out << "has_empty_waypoint_ids: ";
    rosidl_generator_traits::value_to_yaml(msg.has_empty_waypoint_ids, out);
    out << ", ";
  }

  // member: has_empty_edge_ids
  {
    out << "has_empty_edge_ids: ";
    rosidl_generator_traits::value_to_yaml(msg.has_empty_edge_ids, out);
    out << ", ";
  }

  // member: has_empty_waypoint_anchor_ids
  {
    out << "has_empty_waypoint_anchor_ids: ";
    rosidl_generator_traits::value_to_yaml(msg.has_empty_waypoint_anchor_ids, out);
    out << ", ";
  }

  // member: has_empty_object_anchor_ids
  {
    out << "has_empty_object_anchor_ids: ";
    rosidl_generator_traits::value_to_yaml(msg.has_empty_object_anchor_ids, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UploadGraphResponseValidationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: missing_waypoint_ids_in_edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.missing_waypoint_ids_in_edges.size() == 0) {
      out << "missing_waypoint_ids_in_edges: []\n";
    } else {
      out << "missing_waypoint_ids_in_edges:\n";
      for (auto item : msg.missing_waypoint_ids_in_edges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: missing_waypoint_ids_in_anchors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.missing_waypoint_ids_in_anchors.size() == 0) {
      out << "missing_waypoint_ids_in_anchors: []\n";
    } else {
      out << "missing_waypoint_ids_in_anchors:\n";
      for (auto item : msg.missing_waypoint_ids_in_anchors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: edge_ids_invalid_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.edge_ids_invalid_transform.size() == 0) {
      out << "edge_ids_invalid_transform: []\n";
    } else {
      out << "edge_ids_invalid_transform:\n";
      for (auto item : msg.edge_ids_invalid_transform) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: waypoint_anchors_invalid_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoint_anchors_invalid_transform.size() == 0) {
      out << "waypoint_anchors_invalid_transform: []\n";
    } else {
      out << "waypoint_anchors_invalid_transform:\n";
      for (auto item : msg.waypoint_anchors_invalid_transform) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_anchors_invalid_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_anchors_invalid_transform.size() == 0) {
      out << "object_anchors_invalid_transform: []\n";
    } else {
      out << "object_anchors_invalid_transform:\n";
      for (auto item : msg.object_anchors_invalid_transform) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: duplicate_waypoint_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.duplicate_waypoint_ids.size() == 0) {
      out << "duplicate_waypoint_ids: []\n";
    } else {
      out << "duplicate_waypoint_ids:\n";
      for (auto item : msg.duplicate_waypoint_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: duplicate_waypoint_anchor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.duplicate_waypoint_anchor_ids.size() == 0) {
      out << "duplicate_waypoint_anchor_ids: []\n";
    } else {
      out << "duplicate_waypoint_anchor_ids:\n";
      for (auto item : msg.duplicate_waypoint_anchor_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: duplicate_object_anchor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.duplicate_object_anchor_ids.size() == 0) {
      out << "duplicate_object_anchor_ids: []\n";
    } else {
      out << "duplicate_object_anchor_ids:\n";
      for (auto item : msg.duplicate_object_anchor_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: duplicate_edge_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.duplicate_edge_ids.size() == 0) {
      out << "duplicate_edge_ids: []\n";
    } else {
      out << "duplicate_edge_ids:\n";
      for (auto item : msg.duplicate_edge_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: invalid_waypoint_ids_self_edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.invalid_waypoint_ids_self_edges.size() == 0) {
      out << "invalid_waypoint_ids_self_edges: []\n";
    } else {
      out << "invalid_waypoint_ids_self_edges:\n";
      for (auto item : msg.invalid_waypoint_ids_self_edges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: has_empty_waypoint_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_empty_waypoint_ids: ";
    rosidl_generator_traits::value_to_yaml(msg.has_empty_waypoint_ids, out);
    out << "\n";
  }

  // member: has_empty_edge_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_empty_edge_ids: ";
    rosidl_generator_traits::value_to_yaml(msg.has_empty_edge_ids, out);
    out << "\n";
  }

  // member: has_empty_waypoint_anchor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_empty_waypoint_anchor_ids: ";
    rosidl_generator_traits::value_to_yaml(msg.has_empty_waypoint_anchor_ids, out);
    out << "\n";
  }

  // member: has_empty_object_anchor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_empty_object_anchor_ids: ";
    rosidl_generator_traits::value_to_yaml(msg.has_empty_object_anchor_ids, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UploadGraphResponseValidationStatus & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::UploadGraphResponseValidationStatus & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::UploadGraphResponseValidationStatus>()
{
  return "bosdyn_msgs::msg::UploadGraphResponseValidationStatus";
}

template<>
inline const char * name<bosdyn_msgs::msg::UploadGraphResponseValidationStatus>()
{
  return "bosdyn_msgs/msg/UploadGraphResponseValidationStatus";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::UploadGraphResponseValidationStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::UploadGraphResponseValidationStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::UploadGraphResponseValidationStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE_VALIDATION_STATUS__TRAITS_HPP_
