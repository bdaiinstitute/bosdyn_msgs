// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PayloadPreset.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_PRESET__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_PRESET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/payload_preset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mount_tform_payload'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'mount_frame_name'
#include "bosdyn_msgs/msg/detail/mount_frame_name__traits.hpp"
// Member 'mass_volume_properties'
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PayloadPreset & msg,
  std::ostream & out)
{
  out << "{";
  // member: preset_name
  {
    out << "preset_name: ";
    rosidl_generator_traits::value_to_yaml(msg.preset_name, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: mount_tform_payload
  {
    out << "mount_tform_payload: ";
    to_flow_style_yaml(msg.mount_tform_payload, out);
    out << ", ";
  }

  // member: mount_tform_payload_is_set
  {
    out << "mount_tform_payload_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.mount_tform_payload_is_set, out);
    out << ", ";
  }

  // member: mount_frame_name
  {
    out << "mount_frame_name: ";
    to_flow_style_yaml(msg.mount_frame_name, out);
    out << ", ";
  }

  // member: mass_volume_properties
  {
    out << "mass_volume_properties: ";
    to_flow_style_yaml(msg.mass_volume_properties, out);
    out << ", ";
  }

  // member: mass_volume_properties_is_set
  {
    out << "mass_volume_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_volume_properties_is_set, out);
    out << ", ";
  }

  // member: label_prefix
  {
    if (msg.label_prefix.size() == 0) {
      out << "label_prefix: []";
    } else {
      out << "label_prefix: [";
      size_t pending_items = msg.label_prefix.size();
      for (auto item : msg.label_prefix) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PayloadPreset & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: preset_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preset_name: ";
    rosidl_generator_traits::value_to_yaml(msg.preset_name, out);
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

  // member: mount_tform_payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mount_tform_payload:\n";
    to_block_style_yaml(msg.mount_tform_payload, out, indentation + 2);
  }

  // member: mount_tform_payload_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mount_tform_payload_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.mount_tform_payload_is_set, out);
    out << "\n";
  }

  // member: mount_frame_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mount_frame_name:\n";
    to_block_style_yaml(msg.mount_frame_name, out, indentation + 2);
  }

  // member: mass_volume_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass_volume_properties:\n";
    to_block_style_yaml(msg.mass_volume_properties, out, indentation + 2);
  }

  // member: mass_volume_properties_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass_volume_properties_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.mass_volume_properties_is_set, out);
    out << "\n";
  }

  // member: label_prefix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.label_prefix.size() == 0) {
      out << "label_prefix: []\n";
    } else {
      out << "label_prefix:\n";
      for (auto item : msg.label_prefix) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PayloadPreset & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PayloadPreset & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PayloadPreset & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PayloadPreset>()
{
  return "bosdyn_msgs::msg::PayloadPreset";
}

template<>
inline const char * name<bosdyn_msgs::msg::PayloadPreset>()
{
  return "bosdyn_msgs/msg/PayloadPreset";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PayloadPreset>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PayloadPreset>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::PayloadPreset>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_PRESET__TRAITS_HPP_
