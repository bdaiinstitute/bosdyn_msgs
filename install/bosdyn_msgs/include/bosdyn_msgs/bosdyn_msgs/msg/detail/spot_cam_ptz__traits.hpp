// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SpotCamPtz.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_PTZ__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_PTZ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/spot_cam_ptz__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ptz_position'
#include "bosdyn_msgs/msg/detail/ptz_position__traits.hpp"
// Member 'adjust_parameters'
#include "bosdyn_msgs/msg/detail/spot_cam_ptz_adjust_parameters__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpotCamPtz & msg,
  std::ostream & out)
{
  out << "{";
  // member: service_name
  {
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
    out << ", ";
  }

  // member: host
  {
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << ", ";
  }

  // member: ptz_position
  {
    out << "ptz_position: ";
    to_flow_style_yaml(msg.ptz_position, out);
    out << ", ";
  }

  // member: ptz_position_is_set
  {
    out << "ptz_position_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ptz_position_is_set, out);
    out << ", ";
  }

  // member: adjust_parameters
  {
    out << "adjust_parameters: ";
    to_flow_style_yaml(msg.adjust_parameters, out);
    out << ", ";
  }

  // member: adjust_parameters_is_set
  {
    out << "adjust_parameters_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.adjust_parameters_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpotCamPtz & msg,
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

  // member: host
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "host: ";
    rosidl_generator_traits::value_to_yaml(msg.host, out);
    out << "\n";
  }

  // member: ptz_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ptz_position:\n";
    to_block_style_yaml(msg.ptz_position, out, indentation + 2);
  }

  // member: ptz_position_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ptz_position_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ptz_position_is_set, out);
    out << "\n";
  }

  // member: adjust_parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adjust_parameters:\n";
    to_block_style_yaml(msg.adjust_parameters, out, indentation + 2);
  }

  // member: adjust_parameters_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adjust_parameters_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.adjust_parameters_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpotCamPtz & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SpotCamPtz & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SpotCamPtz & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SpotCamPtz>()
{
  return "bosdyn_msgs::msg::SpotCamPtz";
}

template<>
inline const char * name<bosdyn_msgs::msg::SpotCamPtz>()
{
  return "bosdyn_msgs/msg/SpotCamPtz";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SpotCamPtz>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SpotCamPtz>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::SpotCamPtz>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_PTZ__TRAITS_HPP_
