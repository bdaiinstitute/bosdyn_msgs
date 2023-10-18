// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ComputeParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMPUTE_PARAMETERS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__COMPUTE_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/compute_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'reference_images'
#include "bosdyn_msgs/msg/detail/image_capture_and_source__traits.hpp"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ComputeParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: model_name
  {
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << ", ";
  }

  // member: reference_images
  {
    if (msg.reference_images.size() == 0) {
      out << "reference_images: []";
    } else {
      out << "reference_images: [";
      size_t pending_items = msg.reference_images.size();
      for (auto item : msg.reference_images) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const ComputeParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << "\n";
  }

  // member: reference_images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference_images.size() == 0) {
      out << "reference_images: []\n";
    } else {
      out << "reference_images:\n";
      for (auto item : msg.reference_images) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const ComputeParameters & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ComputeParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ComputeParameters & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ComputeParameters>()
{
  return "bosdyn_msgs::msg::ComputeParameters";
}

template<>
inline const char * name<bosdyn_msgs::msg::ComputeParameters>()
{
  return "bosdyn_msgs/msg/ComputeParameters";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ComputeParameters>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ComputeParameters>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ComputeParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMPUTE_PARAMETERS__TRAITS_HPP_
