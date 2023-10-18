// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PayloadMassVolumeProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_MASS_VOLUME_PROPERTIES__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_MASS_VOLUME_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'com_pos_rt_payload'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'moi_tensor'
#include "bosdyn_msgs/msg/detail/moment_of_intertia__traits.hpp"
// Member 'bounding_box'
#include "bosdyn_msgs/msg/detail/box3_with_frame__traits.hpp"
// Member 'joint_limits'
#include "bosdyn_msgs/msg/detail/joint_limits__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PayloadMassVolumeProperties & msg,
  std::ostream & out)
{
  out << "{";
  // member: total_mass
  {
    out << "total_mass: ";
    rosidl_generator_traits::value_to_yaml(msg.total_mass, out);
    out << ", ";
  }

  // member: com_pos_rt_payload
  {
    out << "com_pos_rt_payload: ";
    to_flow_style_yaml(msg.com_pos_rt_payload, out);
    out << ", ";
  }

  // member: com_pos_rt_payload_is_set
  {
    out << "com_pos_rt_payload_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.com_pos_rt_payload_is_set, out);
    out << ", ";
  }

  // member: moi_tensor
  {
    out << "moi_tensor: ";
    to_flow_style_yaml(msg.moi_tensor, out);
    out << ", ";
  }

  // member: moi_tensor_is_set
  {
    out << "moi_tensor_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.moi_tensor_is_set, out);
    out << ", ";
  }

  // member: bounding_box
  {
    if (msg.bounding_box.size() == 0) {
      out << "bounding_box: []";
    } else {
      out << "bounding_box: [";
      size_t pending_items = msg.bounding_box.size();
      for (auto item : msg.bounding_box) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_limits
  {
    if (msg.joint_limits.size() == 0) {
      out << "joint_limits: []";
    } else {
      out << "joint_limits: [";
      size_t pending_items = msg.joint_limits.size();
      for (auto item : msg.joint_limits) {
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
  const PayloadMassVolumeProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: total_mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_mass: ";
    rosidl_generator_traits::value_to_yaml(msg.total_mass, out);
    out << "\n";
  }

  // member: com_pos_rt_payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "com_pos_rt_payload:\n";
    to_block_style_yaml(msg.com_pos_rt_payload, out, indentation + 2);
  }

  // member: com_pos_rt_payload_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "com_pos_rt_payload_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.com_pos_rt_payload_is_set, out);
    out << "\n";
  }

  // member: moi_tensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moi_tensor:\n";
    to_block_style_yaml(msg.moi_tensor, out, indentation + 2);
  }

  // member: moi_tensor_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moi_tensor_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.moi_tensor_is_set, out);
    out << "\n";
  }

  // member: bounding_box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bounding_box.size() == 0) {
      out << "bounding_box: []\n";
    } else {
      out << "bounding_box:\n";
      for (auto item : msg.bounding_box) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: joint_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_limits.size() == 0) {
      out << "joint_limits: []\n";
    } else {
      out << "joint_limits:\n";
      for (auto item : msg.joint_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PayloadMassVolumeProperties & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PayloadMassVolumeProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PayloadMassVolumeProperties & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PayloadMassVolumeProperties>()
{
  return "bosdyn_msgs::msg::PayloadMassVolumeProperties";
}

template<>
inline const char * name<bosdyn_msgs::msg::PayloadMassVolumeProperties>()
{
  return "bosdyn_msgs/msg/PayloadMassVolumeProperties";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PayloadMassVolumeProperties>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PayloadMassVolumeProperties>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::PayloadMassVolumeProperties>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_MASS_VOLUME_PROPERTIES__TRAITS_HPP_
