// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AprilTagProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__APRIL_TAG_PROPERTIES__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__APRIL_TAG_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/april_tag_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'dimensions'
#include "bosdyn_msgs/msg/detail/vec2__traits.hpp"
// Member 'fiducial_pose_status'
// Member 'fiducial_filtered_pose_status'
#include "bosdyn_msgs/msg/detail/april_tag_properties_april_tag_pose_status__traits.hpp"
// Member 'detection_covariance'
#include "bosdyn_msgs/msg/detail/se3_covariance__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AprilTagProperties & msg,
  std::ostream & out)
{
  out << "{";
  // member: tag_id
  {
    out << "tag_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_id, out);
    out << ", ";
  }

  // member: dimensions
  {
    out << "dimensions: ";
    to_flow_style_yaml(msg.dimensions, out);
    out << ", ";
  }

  // member: dimensions_is_set
  {
    out << "dimensions_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.dimensions_is_set, out);
    out << ", ";
  }

  // member: frame_name_fiducial
  {
    out << "frame_name_fiducial: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_fiducial, out);
    out << ", ";
  }

  // member: fiducial_pose_status
  {
    out << "fiducial_pose_status: ";
    to_flow_style_yaml(msg.fiducial_pose_status, out);
    out << ", ";
  }

  // member: frame_name_fiducial_filtered
  {
    out << "frame_name_fiducial_filtered: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_fiducial_filtered, out);
    out << ", ";
  }

  // member: fiducial_filtered_pose_status
  {
    out << "fiducial_filtered_pose_status: ";
    to_flow_style_yaml(msg.fiducial_filtered_pose_status, out);
    out << ", ";
  }

  // member: frame_name_camera
  {
    out << "frame_name_camera: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_camera, out);
    out << ", ";
  }

  // member: detection_covariance
  {
    out << "detection_covariance: ";
    to_flow_style_yaml(msg.detection_covariance, out);
    out << ", ";
  }

  // member: detection_covariance_is_set
  {
    out << "detection_covariance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_covariance_is_set, out);
    out << ", ";
  }

  // member: detection_covariance_reference_frame
  {
    out << "detection_covariance_reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_covariance_reference_frame, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AprilTagProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tag_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag_id: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_id, out);
    out << "\n";
  }

  // member: dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dimensions:\n";
    to_block_style_yaml(msg.dimensions, out, indentation + 2);
  }

  // member: dimensions_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dimensions_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.dimensions_is_set, out);
    out << "\n";
  }

  // member: frame_name_fiducial
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name_fiducial: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_fiducial, out);
    out << "\n";
  }

  // member: fiducial_pose_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fiducial_pose_status:\n";
    to_block_style_yaml(msg.fiducial_pose_status, out, indentation + 2);
  }

  // member: frame_name_fiducial_filtered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name_fiducial_filtered: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_fiducial_filtered, out);
    out << "\n";
  }

  // member: fiducial_filtered_pose_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fiducial_filtered_pose_status:\n";
    to_block_style_yaml(msg.fiducial_filtered_pose_status, out, indentation + 2);
  }

  // member: frame_name_camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name_camera: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_camera, out);
    out << "\n";
  }

  // member: detection_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection_covariance:\n";
    to_block_style_yaml(msg.detection_covariance, out, indentation + 2);
  }

  // member: detection_covariance_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection_covariance_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_covariance_is_set, out);
    out << "\n";
  }

  // member: detection_covariance_reference_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection_covariance_reference_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_covariance_reference_frame, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AprilTagProperties & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AprilTagProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AprilTagProperties & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AprilTagProperties>()
{
  return "bosdyn_msgs::msg::AprilTagProperties";
}

template<>
inline const char * name<bosdyn_msgs::msg::AprilTagProperties>()
{
  return "bosdyn_msgs/msg/AprilTagProperties";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AprilTagProperties>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AprilTagProperties>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::AprilTagProperties>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__APRIL_TAG_PROPERTIES__TRAITS_HPP_
