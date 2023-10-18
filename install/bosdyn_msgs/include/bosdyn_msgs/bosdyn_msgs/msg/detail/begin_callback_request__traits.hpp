// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BeginCallbackRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/begin_callback_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'region_info'
#include "bosdyn_msgs/msg/detail/region_information__traits.hpp"
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'recorded_data'
#include "bosdyn_msgs/msg/detail/area_callback_data__traits.hpp"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BeginCallbackRequest & msg,
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

  // member: region_info
  {
    out << "region_info: ";
    to_flow_style_yaml(msg.region_info, out);
    out << ", ";
  }

  // member: region_info_is_set
  {
    out << "region_info_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.region_info_is_set, out);
    out << ", ";
  }

  // member: end_time
  {
    out << "end_time: ";
    to_flow_style_yaml(msg.end_time, out);
    out << ", ";
  }

  // member: end_time_is_set
  {
    out << "end_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time_is_set, out);
    out << ", ";
  }

  // member: recorded_data
  {
    out << "recorded_data: ";
    to_flow_style_yaml(msg.recorded_data, out);
    out << ", ";
  }

  // member: recorded_data_is_set
  {
    out << "recorded_data_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.recorded_data_is_set, out);
    out << ", ";
  }

  // member: custom_params
  {
    out << "custom_params: ";
    to_flow_style_yaml(msg.custom_params, out);
    out << ", ";
  }

  // member: custom_params_is_set
  {
    out << "custom_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_params_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BeginCallbackRequest & msg,
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

  // member: region_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "region_info:\n";
    to_block_style_yaml(msg.region_info, out, indentation + 2);
  }

  // member: region_info_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "region_info_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.region_info_is_set, out);
    out << "\n";
  }

  // member: end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time:\n";
    to_block_style_yaml(msg.end_time, out, indentation + 2);
  }

  // member: end_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time_is_set, out);
    out << "\n";
  }

  // member: recorded_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recorded_data:\n";
    to_block_style_yaml(msg.recorded_data, out, indentation + 2);
  }

  // member: recorded_data_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recorded_data_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.recorded_data_is_set, out);
    out << "\n";
  }

  // member: custom_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_params:\n";
    to_block_style_yaml(msg.custom_params, out, indentation + 2);
  }

  // member: custom_params_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "custom_params_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.custom_params_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BeginCallbackRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BeginCallbackRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BeginCallbackRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BeginCallbackRequest>()
{
  return "bosdyn_msgs::msg::BeginCallbackRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::BeginCallbackRequest>()
{
  return "bosdyn_msgs/msg/BeginCallbackRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BeginCallbackRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::AreaCallbackData>::value && has_fixed_size<bosdyn_msgs::msg::DictParam>::value && has_fixed_size<bosdyn_msgs::msg::RegionInformation>::value && has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BeginCallbackRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::AreaCallbackData>::value && has_bounded_size<bosdyn_msgs::msg::DictParam>::value && has_bounded_size<bosdyn_msgs::msg::RegionInformation>::value && has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::BeginCallbackRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BEGIN_CALLBACK_REQUEST__TRAITS_HPP_
