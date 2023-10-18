// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeInputDataOneOfInput.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_ONE_OF_INPUT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_ONE_OF_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/network_compute_input_data_one_of_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image_source_and_service'
#include "bosdyn_msgs/msg/detail/image_source_and_service__traits.hpp"
// Member 'image'
#include "bosdyn_msgs/msg/detail/image__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NetworkComputeInputDataOneOfInput & msg,
  std::ostream & out)
{
  out << "{";
  // member: image_source_and_service
  {
    out << "image_source_and_service: ";
    to_flow_style_yaml(msg.image_source_and_service, out);
    out << ", ";
  }

  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: input_choice
  {
    out << "input_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.input_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NetworkComputeInputDataOneOfInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image_source_and_service
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_source_and_service:\n";
    to_block_style_yaml(msg.image_source_and_service, out, indentation + 2);
  }

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: input_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.input_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NetworkComputeInputDataOneOfInput & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput>()
{
  return "bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput";
}

template<>
inline const char * name<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput>()
{
  return "bosdyn_msgs/msg/NetworkComputeInputDataOneOfInput";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Image>::value && has_fixed_size<bosdyn_msgs::msg::ImageSourceAndService>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Image>::value && has_bounded_size<bosdyn_msgs::msg::ImageSourceAndService>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_ONE_OF_INPUT__TRAITS_HPP_
