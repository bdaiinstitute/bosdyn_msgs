// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Payload.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/payload__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'version'
#include "bosdyn_msgs/msg/detail/software_version__traits.hpp"
// Member 'body_tform_payload'
// Member 'mount_tform_payload'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'mount_frame_name'
#include "bosdyn_msgs/msg/detail/mount_frame_name__traits.hpp"
// Member 'mass_volume_properties'
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__traits.hpp"
// Member 'preset_configurations'
#include "bosdyn_msgs/msg/detail/payload_preset__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Payload & msg,
  std::ostream & out)
{
  out << "{";
  // member: guid
  {
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
    out << ", ";
  }

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
    out << ", ";
  }

  // member: is_authorized
  {
    out << "is_authorized: ";
    rosidl_generator_traits::value_to_yaml(msg.is_authorized, out);
    out << ", ";
  }

  // member: is_enabled
  {
    out << "is_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.is_enabled, out);
    out << ", ";
  }

  // member: is_noncompute_payload
  {
    out << "is_noncompute_payload: ";
    rosidl_generator_traits::value_to_yaml(msg.is_noncompute_payload, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    to_flow_style_yaml(msg.version, out);
    out << ", ";
  }

  // member: version_is_set
  {
    out << "version_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.version_is_set, out);
    out << ", ";
  }

  // member: body_tform_payload
  {
    out << "body_tform_payload: ";
    to_flow_style_yaml(msg.body_tform_payload, out);
    out << ", ";
  }

  // member: body_tform_payload_is_set
  {
    out << "body_tform_payload_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.body_tform_payload_is_set, out);
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

  // member: liveness_timeout_secs
  {
    out << "liveness_timeout_secs: ";
    rosidl_generator_traits::value_to_yaml(msg.liveness_timeout_secs, out);
    out << ", ";
  }

  // member: ipv4_address
  {
    out << "ipv4_address: ";
    rosidl_generator_traits::value_to_yaml(msg.ipv4_address, out);
    out << ", ";
  }

  // member: link_speed
  {
    out << "link_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.link_speed, out);
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

  // member: preset_configurations
  {
    if (msg.preset_configurations.size() == 0) {
      out << "preset_configurations: []";
    } else {
      out << "preset_configurations: [";
      size_t pending_items = msg.preset_configurations.size();
      for (auto item : msg.preset_configurations) {
        to_flow_style_yaml(item, out);
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
  const Payload & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
    out << "\n";
  }

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

  // member: is_authorized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_authorized: ";
    rosidl_generator_traits::value_to_yaml(msg.is_authorized, out);
    out << "\n";
  }

  // member: is_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.is_enabled, out);
    out << "\n";
  }

  // member: is_noncompute_payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_noncompute_payload: ";
    rosidl_generator_traits::value_to_yaml(msg.is_noncompute_payload, out);
    out << "\n";
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version:\n";
    to_block_style_yaml(msg.version, out, indentation + 2);
  }

  // member: version_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.version_is_set, out);
    out << "\n";
  }

  // member: body_tform_payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_tform_payload:\n";
    to_block_style_yaml(msg.body_tform_payload, out, indentation + 2);
  }

  // member: body_tform_payload_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_tform_payload_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.body_tform_payload_is_set, out);
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

  // member: liveness_timeout_secs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "liveness_timeout_secs: ";
    rosidl_generator_traits::value_to_yaml(msg.liveness_timeout_secs, out);
    out << "\n";
  }

  // member: ipv4_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ipv4_address: ";
    rosidl_generator_traits::value_to_yaml(msg.ipv4_address, out);
    out << "\n";
  }

  // member: link_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.link_speed, out);
    out << "\n";
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

  // member: preset_configurations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.preset_configurations.size() == 0) {
      out << "preset_configurations: []\n";
    } else {
      out << "preset_configurations:\n";
      for (auto item : msg.preset_configurations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Payload & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Payload & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Payload & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Payload>()
{
  return "bosdyn_msgs::msg::Payload";
}

template<>
inline const char * name<bosdyn_msgs::msg::Payload>()
{
  return "bosdyn_msgs/msg/Payload";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Payload>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Payload>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Payload>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD__TRAITS_HPP_
