// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DataAcquisitionCapability.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_CAPABILITY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_CAPABILITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/data_acquisition_capability__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param_spec__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DataAcquisitionCapability & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: channel_name
  {
    out << "channel_name: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_name, out);
    out << ", ";
  }

  // member: service_name
  {
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
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
  const DataAcquisitionCapability & msg,
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

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: channel_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel_name: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_name, out);
    out << "\n";
  }

  // member: service_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_name: ";
    rosidl_generator_traits::value_to_yaml(msg.service_name, out);
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

inline std::string to_yaml(const DataAcquisitionCapability & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DataAcquisitionCapability & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DataAcquisitionCapability & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DataAcquisitionCapability>()
{
  return "bosdyn_msgs::msg::DataAcquisitionCapability";
}

template<>
inline const char * name<bosdyn_msgs::msg::DataAcquisitionCapability>()
{
  return "bosdyn_msgs/msg/DataAcquisitionCapability";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DataAcquisitionCapability>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DataAcquisitionCapability>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::DataAcquisitionCapability>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_CAPABILITY__TRAITS_HPP_
