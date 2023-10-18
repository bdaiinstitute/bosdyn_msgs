// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/WorldObjectAnchorHint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT_ANCHOR_HINT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT_ANCHOR_HINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/world_object_anchor_hint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'object_anchor'
#include "bosdyn_msgs/msg/detail/anchored_world_object__traits.hpp"
// Member 'seed_tform_object_uncertainty'
#include "bosdyn_msgs/msg/detail/anchor_hint_uncertainty__traits.hpp"
// Member 'seed_tform_object_constraint'
#include "bosdyn_msgs/msg/detail/pose_bounds__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WorldObjectAnchorHint & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_anchor
  {
    out << "object_anchor: ";
    to_flow_style_yaml(msg.object_anchor, out);
    out << ", ";
  }

  // member: object_anchor_is_set
  {
    out << "object_anchor_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.object_anchor_is_set, out);
    out << ", ";
  }

  // member: seed_tform_object_uncertainty
  {
    out << "seed_tform_object_uncertainty: ";
    to_flow_style_yaml(msg.seed_tform_object_uncertainty, out);
    out << ", ";
  }

  // member: seed_tform_object_uncertainty_is_set
  {
    out << "seed_tform_object_uncertainty_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.seed_tform_object_uncertainty_is_set, out);
    out << ", ";
  }

  // member: seed_tform_object_constraint
  {
    out << "seed_tform_object_constraint: ";
    to_flow_style_yaml(msg.seed_tform_object_constraint, out);
    out << ", ";
  }

  // member: seed_tform_object_constraint_is_set
  {
    out << "seed_tform_object_constraint_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.seed_tform_object_constraint_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WorldObjectAnchorHint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_anchor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_anchor:\n";
    to_block_style_yaml(msg.object_anchor, out, indentation + 2);
  }

  // member: object_anchor_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_anchor_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.object_anchor_is_set, out);
    out << "\n";
  }

  // member: seed_tform_object_uncertainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seed_tform_object_uncertainty:\n";
    to_block_style_yaml(msg.seed_tform_object_uncertainty, out, indentation + 2);
  }

  // member: seed_tform_object_uncertainty_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seed_tform_object_uncertainty_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.seed_tform_object_uncertainty_is_set, out);
    out << "\n";
  }

  // member: seed_tform_object_constraint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seed_tform_object_constraint:\n";
    to_block_style_yaml(msg.seed_tform_object_constraint, out, indentation + 2);
  }

  // member: seed_tform_object_constraint_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seed_tform_object_constraint_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.seed_tform_object_constraint_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WorldObjectAnchorHint & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::WorldObjectAnchorHint & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::WorldObjectAnchorHint & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::WorldObjectAnchorHint>()
{
  return "bosdyn_msgs::msg::WorldObjectAnchorHint";
}

template<>
inline const char * name<bosdyn_msgs::msg::WorldObjectAnchorHint>()
{
  return "bosdyn_msgs/msg/WorldObjectAnchorHint";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::WorldObjectAnchorHint>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::AnchorHintUncertainty>::value && has_fixed_size<bosdyn_msgs::msg::AnchoredWorldObject>::value && has_fixed_size<bosdyn_msgs::msg::PoseBounds>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::WorldObjectAnchorHint>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::AnchorHintUncertainty>::value && has_bounded_size<bosdyn_msgs::msg::AnchoredWorldObject>::value && has_bounded_size<bosdyn_msgs::msg::PoseBounds>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::WorldObjectAnchorHint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT_ANCHOR_HINT__TRAITS_HPP_
