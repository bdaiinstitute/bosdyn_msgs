// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ModelData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MODEL_DATA__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MODEL_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/model_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'output_image_spec'
#include "bosdyn_msgs/msg/detail/output_image_spec__traits.hpp"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param_spec__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ModelData & msg,
  std::ostream & out)
{
  out << "{";
  // member: model_name
  {
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << ", ";
  }

  // member: available_labels
  {
    if (msg.available_labels.size() == 0) {
      out << "available_labels: []";
    } else {
      out << "available_labels: [";
      size_t pending_items = msg.available_labels.size();
      for (auto item : msg.available_labels) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: output_image_spec
  {
    if (msg.output_image_spec.size() == 0) {
      out << "output_image_spec: []";
    } else {
      out << "output_image_spec: [";
      size_t pending_items = msg.output_image_spec.size();
      for (auto item : msg.output_image_spec) {
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
  const ModelData & msg,
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

  // member: available_labels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.available_labels.size() == 0) {
      out << "available_labels: []\n";
    } else {
      out << "available_labels:\n";
      for (auto item : msg.available_labels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: output_image_spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output_image_spec.size() == 0) {
      out << "output_image_spec: []\n";
    } else {
      out << "output_image_spec:\n";
      for (auto item : msg.output_image_spec) {
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

inline std::string to_yaml(const ModelData & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ModelData & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ModelData & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ModelData>()
{
  return "bosdyn_msgs::msg::ModelData";
}

template<>
inline const char * name<bosdyn_msgs::msg::ModelData>()
{
  return "bosdyn_msgs/msg/ModelData";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ModelData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ModelData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ModelData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__MODEL_DATA__TRAITS_HPP_
