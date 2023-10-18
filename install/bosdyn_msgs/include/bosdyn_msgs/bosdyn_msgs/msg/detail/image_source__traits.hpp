// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ImageSource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/image_source__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'camera_models'
#include "bosdyn_msgs/msg/detail/image_source_one_of_camera_models__traits.hpp"
// Member 'image_type'
#include "bosdyn_msgs/msg/detail/image_source_image_type__traits.hpp"
// Member 'pixel_formats'
#include "bosdyn_msgs/msg/detail/image_pixel_format__traits.hpp"
// Member 'image_formats'
#include "bosdyn_msgs/msg/detail/image_format__traits.hpp"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param_spec__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImageSource & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: cols
  {
    out << "cols: ";
    rosidl_generator_traits::value_to_yaml(msg.cols, out);
    out << ", ";
  }

  // member: rows
  {
    out << "rows: ";
    rosidl_generator_traits::value_to_yaml(msg.rows, out);
    out << ", ";
  }

  // member: depth_scale
  {
    out << "depth_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_scale, out);
    out << ", ";
  }

  // member: camera_models
  {
    out << "camera_models: ";
    to_flow_style_yaml(msg.camera_models, out);
    out << ", ";
  }

  // member: image_type
  {
    out << "image_type: ";
    to_flow_style_yaml(msg.image_type, out);
    out << ", ";
  }

  // member: pixel_formats
  {
    if (msg.pixel_formats.size() == 0) {
      out << "pixel_formats: []";
    } else {
      out << "pixel_formats: [";
      size_t pending_items = msg.pixel_formats.size();
      for (auto item : msg.pixel_formats) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: image_formats
  {
    if (msg.image_formats.size() == 0) {
      out << "image_formats: []";
    } else {
      out << "image_formats: [";
      size_t pending_items = msg.image_formats.size();
      for (auto item : msg.image_formats) {
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
  const ImageSource & msg,
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

  // member: cols
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cols: ";
    rosidl_generator_traits::value_to_yaml(msg.cols, out);
    out << "\n";
  }

  // member: rows
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rows: ";
    rosidl_generator_traits::value_to_yaml(msg.rows, out);
    out << "\n";
  }

  // member: depth_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_scale, out);
    out << "\n";
  }

  // member: camera_models
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_models:\n";
    to_block_style_yaml(msg.camera_models, out, indentation + 2);
  }

  // member: image_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_type:\n";
    to_block_style_yaml(msg.image_type, out, indentation + 2);
  }

  // member: pixel_formats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pixel_formats.size() == 0) {
      out << "pixel_formats: []\n";
    } else {
      out << "pixel_formats:\n";
      for (auto item : msg.pixel_formats) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: image_formats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_formats.size() == 0) {
      out << "image_formats: []\n";
    } else {
      out << "image_formats:\n";
      for (auto item : msg.image_formats) {
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

inline std::string to_yaml(const ImageSource & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ImageSource & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ImageSource & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ImageSource>()
{
  return "bosdyn_msgs::msg::ImageSource";
}

template<>
inline const char * name<bosdyn_msgs::msg::ImageSource>()
{
  return "bosdyn_msgs/msg/ImageSource";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ImageSource>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ImageSource>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ImageSource>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE__TRAITS_HPP_
