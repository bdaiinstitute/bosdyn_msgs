// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SetLocalizationResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/set_localization_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'lease_use_result'
#include "bosdyn_msgs/msg/detail/lease_use_result__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/set_localization_response_status__traits.hpp"
// Member 'localization'
#include "bosdyn_msgs/msg/detail/localization__traits.hpp"
// Member 'suspected_ambiguity'
#include "bosdyn_msgs/msg/detail/set_localization_response_suspected_ambiguity__traits.hpp"
// Member 'impaired_state'
#include "bosdyn_msgs/msg/detail/robot_impaired_state__traits.hpp"
// Member 'sensor_status'
#include "bosdyn_msgs/msg/detail/sensor_compatibility_status__traits.hpp"
// Member 'quality_check_result'
#include "bosdyn_msgs/msg/detail/set_localization_response_quality_check_result__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetLocalizationResponse & msg,
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

  // member: lease_use_result
  {
    out << "lease_use_result: ";
    to_flow_style_yaml(msg.lease_use_result, out);
    out << ", ";
  }

  // member: lease_use_result_is_set
  {
    out << "lease_use_result_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_use_result_is_set, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: error_report
  {
    out << "error_report: ";
    rosidl_generator_traits::value_to_yaml(msg.error_report, out);
    out << ", ";
  }

  // member: localization
  {
    out << "localization: ";
    to_flow_style_yaml(msg.localization, out);
    out << ", ";
  }

  // member: localization_is_set
  {
    out << "localization_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.localization_is_set, out);
    out << ", ";
  }

  // member: suspected_ambiguity
  {
    out << "suspected_ambiguity: ";
    to_flow_style_yaml(msg.suspected_ambiguity, out);
    out << ", ";
  }

  // member: suspected_ambiguity_is_set
  {
    out << "suspected_ambiguity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.suspected_ambiguity_is_set, out);
    out << ", ";
  }

  // member: impaired_state
  {
    out << "impaired_state: ";
    to_flow_style_yaml(msg.impaired_state, out);
    out << ", ";
  }

  // member: impaired_state_is_set
  {
    out << "impaired_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.impaired_state_is_set, out);
    out << ", ";
  }

  // member: sensor_status
  {
    out << "sensor_status: ";
    to_flow_style_yaml(msg.sensor_status, out);
    out << ", ";
  }

  // member: sensor_status_is_set
  {
    out << "sensor_status_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_status_is_set, out);
    out << ", ";
  }

  // member: quality_check_result
  {
    out << "quality_check_result: ";
    to_flow_style_yaml(msg.quality_check_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLocalizationResponse & msg,
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

  // member: lease_use_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_use_result:\n";
    to_block_style_yaml(msg.lease_use_result, out, indentation + 2);
  }

  // member: lease_use_result_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lease_use_result_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.lease_use_result_is_set, out);
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

  // member: error_report
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_report: ";
    rosidl_generator_traits::value_to_yaml(msg.error_report, out);
    out << "\n";
  }

  // member: localization
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization:\n";
    to_block_style_yaml(msg.localization, out, indentation + 2);
  }

  // member: localization_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.localization_is_set, out);
    out << "\n";
  }

  // member: suspected_ambiguity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "suspected_ambiguity:\n";
    to_block_style_yaml(msg.suspected_ambiguity, out, indentation + 2);
  }

  // member: suspected_ambiguity_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "suspected_ambiguity_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.suspected_ambiguity_is_set, out);
    out << "\n";
  }

  // member: impaired_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "impaired_state:\n";
    to_block_style_yaml(msg.impaired_state, out, indentation + 2);
  }

  // member: impaired_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "impaired_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.impaired_state_is_set, out);
    out << "\n";
  }

  // member: sensor_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_status:\n";
    to_block_style_yaml(msg.sensor_status, out, indentation + 2);
  }

  // member: sensor_status_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_status_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_status_is_set, out);
    out << "\n";
  }

  // member: quality_check_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality_check_result:\n";
    to_block_style_yaml(msg.quality_check_result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLocalizationResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SetLocalizationResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SetLocalizationResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SetLocalizationResponse>()
{
  return "bosdyn_msgs::msg::SetLocalizationResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::SetLocalizationResponse>()
{
  return "bosdyn_msgs/msg/SetLocalizationResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SetLocalizationResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SetLocalizationResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::SetLocalizationResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE__TRAITS_HPP_
