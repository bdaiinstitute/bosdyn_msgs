// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RemotePointCloudStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REMOTE_POINT_CLOUD_STATUS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REMOTE_POINT_CLOUD_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/remote_point_cloud_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RemotePointCloudStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: service_name
  {
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << ", ";
  }

  // member: exists_in_directory
  {
    out << "exists_in_directory: ";
    rosidl_generator_traits::value_to_yaml(msg.exists_in_directory, out);
    out << ", ";
  }

  // member: has_data
  {
    out << "has_data: ";
    rosidl_generator_traits::value_to_yaml(msg.has_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RemotePointCloudStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: service_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << "\n";
  }

  // member: exists_in_directory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exists_in_directory: ";
    rosidl_generator_traits::value_to_yaml(msg.exists_in_directory, out);
    out << "\n";
  }

  // member: has_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_data: ";
    rosidl_generator_traits::value_to_yaml(msg.has_data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RemotePointCloudStatus & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RemotePointCloudStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RemotePointCloudStatus & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RemotePointCloudStatus>()
{
  return "bosdyn_msgs::msg::RemotePointCloudStatus";
}

template<>
inline const char * name<bosdyn_msgs::msg::RemotePointCloudStatus>()
{
  return "bosdyn_msgs/msg/RemotePointCloudStatus";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RemotePointCloudStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RemotePointCloudStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::RemotePointCloudStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__REMOTE_POINT_CLOUD_STATUS__TRAITS_HPP_
