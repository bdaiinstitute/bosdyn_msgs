// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignment.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'alignments'
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment_alignment__traits.hpp"
// Member 'target_tform_sensor'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionWrapperSpotCamAlignment & msg,
  std::ostream & out)
{
  out << "{";
  // member: alignments
  {
    if (msg.alignments.size() == 0) {
      out << "alignments: []";
    } else {
      out << "alignments: [";
      size_t pending_items = msg.alignments.size();
      for (auto item : msg.alignments) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_tform_sensor
  {
    out << "target_tform_sensor: ";
    to_flow_style_yaml(msg.target_tform_sensor, out);
    out << ", ";
  }

  // member: target_tform_sensor_is_set
  {
    out << "target_tform_sensor_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_tform_sensor_is_set, out);
    out << ", ";
  }

  // member: final_zoom
  {
    out << "final_zoom: ";
    rosidl_generator_traits::value_to_yaml(msg.final_zoom, out);
    out << ", ";
  }

  // member: target_sensor_ids
  {
    if (msg.target_sensor_ids.size() == 0) {
      out << "target_sensor_ids: []";
    } else {
      out << "target_sensor_ids: [";
      size_t pending_items = msg.target_sensor_ids.size();
      for (auto item : msg.target_sensor_ids) {
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
  const ActionWrapperSpotCamAlignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: alignments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.alignments.size() == 0) {
      out << "alignments: []\n";
    } else {
      out << "alignments:\n";
      for (auto item : msg.alignments) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: target_tform_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_tform_sensor:\n";
    to_block_style_yaml(msg.target_tform_sensor, out, indentation + 2);
  }

  // member: target_tform_sensor_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_tform_sensor_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.target_tform_sensor_is_set, out);
    out << "\n";
  }

  // member: final_zoom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_zoom: ";
    rosidl_generator_traits::value_to_yaml(msg.final_zoom, out);
    out << "\n";
  }

  // member: target_sensor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_sensor_ids.size() == 0) {
      out << "target_sensor_ids: []\n";
    } else {
      out << "target_sensor_ids:\n";
      for (auto item : msg.target_sensor_ids) {
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

inline std::string to_yaml(const ActionWrapperSpotCamAlignment & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ActionWrapperSpotCamAlignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ActionWrapperSpotCamAlignment & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment>()
{
  return "bosdyn_msgs::msg::ActionWrapperSpotCamAlignment";
}

template<>
inline const char * name<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment>()
{
  return "bosdyn_msgs/msg/ActionWrapperSpotCamAlignment";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ActionWrapperSpotCamAlignment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT__TRAITS_HPP_
