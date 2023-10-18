// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PointCloudSource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_SOURCE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_SOURCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/point_cloud_source__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'acquisition_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointCloudSource & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: frame_name_sensor
  {
    out << "frame_name_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_sensor, out);
    out << ", ";
  }

  // member: acquisition_time
  {
    out << "acquisition_time: ";
    to_flow_style_yaml(msg.acquisition_time, out);
    out << ", ";
  }

  // member: acquisition_time_is_set
  {
    out << "acquisition_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_time_is_set, out);
    out << ", ";
  }

  // member: transforms_snapshot
  {
    out << "transforms_snapshot: ";
    to_flow_style_yaml(msg.transforms_snapshot, out);
    out << ", ";
  }

  // member: transforms_snapshot_is_set
  {
    out << "transforms_snapshot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PointCloudSource & msg,
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

  // member: frame_name_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_sensor, out);
    out << "\n";
  }

  // member: acquisition_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_time:\n";
    to_block_style_yaml(msg.acquisition_time, out, indentation + 2);
  }

  // member: acquisition_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_time_is_set, out);
    out << "\n";
  }

  // member: transforms_snapshot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot:\n";
    to_block_style_yaml(msg.transforms_snapshot, out, indentation + 2);
  }

  // member: transforms_snapshot_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointCloudSource & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PointCloudSource & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PointCloudSource & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PointCloudSource>()
{
  return "bosdyn_msgs::msg::PointCloudSource";
}

template<>
inline const char * name<bosdyn_msgs::msg::PointCloudSource>()
{
  return "bosdyn_msgs/msg/PointCloudSource";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PointCloudSource>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PointCloudSource>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::PointCloudSource>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_SOURCE__TRAITS_HPP_
