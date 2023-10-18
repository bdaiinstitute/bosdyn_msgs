// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/MutateWorldObjectRequestMutation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST_MUTATION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST_MUTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/mutate_world_object_request_mutation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'action'
#include "bosdyn_msgs/msg/detail/mutate_world_object_request_action__traits.hpp"
// Member 'object'
#include "bosdyn_msgs/msg/detail/world_object__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MutateWorldObjectRequestMutation & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    to_flow_style_yaml(msg.action, out);
    out << ", ";
  }

  // member: object
  {
    out << "object: ";
    to_flow_style_yaml(msg.object, out);
    out << ", ";
  }

  // member: object_is_set
  {
    out << "object_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.object_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MutateWorldObjectRequestMutation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action:\n";
    to_block_style_yaml(msg.action, out, indentation + 2);
  }

  // member: object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object:\n";
    to_block_style_yaml(msg.object, out, indentation + 2);
  }

  // member: object_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.object_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MutateWorldObjectRequestMutation & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::MutateWorldObjectRequestMutation & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::MutateWorldObjectRequestMutation & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::MutateWorldObjectRequestMutation>()
{
  return "bosdyn_msgs::msg::MutateWorldObjectRequestMutation";
}

template<>
inline const char * name<bosdyn_msgs::msg::MutateWorldObjectRequestMutation>()
{
  return "bosdyn_msgs/msg/MutateWorldObjectRequestMutation";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::MutateWorldObjectRequestMutation>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::MutateWorldObjectRequestAction>::value && has_fixed_size<bosdyn_msgs::msg::WorldObject>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::MutateWorldObjectRequestMutation>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::MutateWorldObjectRequestAction>::value && has_bounded_size<bosdyn_msgs::msg::WorldObject>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::MutateWorldObjectRequestMutation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST_MUTATION__TRAITS_HPP_
