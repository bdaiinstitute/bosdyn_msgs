// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ManipulationApiRequestOneOfManipulationCmd.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST_ONE_OF_MANIPULATION_CMD__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST_ONE_OF_MANIPULATION_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/manipulation_api_request_one_of_manipulation_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'walk_to_object_ray_in_world'
#include "bosdyn_msgs/msg/detail/walk_to_object_ray_in_world__traits.hpp"
// Member 'walk_to_object_in_image'
#include "bosdyn_msgs/msg/detail/walk_to_object_in_image__traits.hpp"
// Member 'pick_object'
#include "bosdyn_msgs/msg/detail/pick_object__traits.hpp"
// Member 'pick_object_in_image'
#include "bosdyn_msgs/msg/detail/pick_object_in_image__traits.hpp"
// Member 'pick_object_ray_in_world'
#include "bosdyn_msgs/msg/detail/pick_object_ray_in_world__traits.hpp"
// Member 'pick_object_execute_plan'
#include "bosdyn_msgs/msg/detail/pick_object_execute_plan__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ManipulationApiRequestOneOfManipulationCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: walk_to_object_ray_in_world
  {
    out << "walk_to_object_ray_in_world: ";
    to_flow_style_yaml(msg.walk_to_object_ray_in_world, out);
    out << ", ";
  }

  // member: walk_to_object_in_image
  {
    out << "walk_to_object_in_image: ";
    to_flow_style_yaml(msg.walk_to_object_in_image, out);
    out << ", ";
  }

  // member: pick_object
  {
    out << "pick_object: ";
    to_flow_style_yaml(msg.pick_object, out);
    out << ", ";
  }

  // member: pick_object_in_image
  {
    out << "pick_object_in_image: ";
    to_flow_style_yaml(msg.pick_object_in_image, out);
    out << ", ";
  }

  // member: pick_object_ray_in_world
  {
    out << "pick_object_ray_in_world: ";
    to_flow_style_yaml(msg.pick_object_ray_in_world, out);
    out << ", ";
  }

  // member: pick_object_execute_plan
  {
    out << "pick_object_execute_plan: ";
    to_flow_style_yaml(msg.pick_object_execute_plan, out);
    out << ", ";
  }

  // member: manipulation_cmd_choice
  {
    out << "manipulation_cmd_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.manipulation_cmd_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManipulationApiRequestOneOfManipulationCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: walk_to_object_ray_in_world
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "walk_to_object_ray_in_world:\n";
    to_block_style_yaml(msg.walk_to_object_ray_in_world, out, indentation + 2);
  }

  // member: walk_to_object_in_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "walk_to_object_in_image:\n";
    to_block_style_yaml(msg.walk_to_object_in_image, out, indentation + 2);
  }

  // member: pick_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pick_object:\n";
    to_block_style_yaml(msg.pick_object, out, indentation + 2);
  }

  // member: pick_object_in_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pick_object_in_image:\n";
    to_block_style_yaml(msg.pick_object_in_image, out, indentation + 2);
  }

  // member: pick_object_ray_in_world
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pick_object_ray_in_world:\n";
    to_block_style_yaml(msg.pick_object_ray_in_world, out, indentation + 2);
  }

  // member: pick_object_execute_plan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pick_object_execute_plan:\n";
    to_block_style_yaml(msg.pick_object_execute_plan, out, indentation + 2);
  }

  // member: manipulation_cmd_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manipulation_cmd_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.manipulation_cmd_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManipulationApiRequestOneOfManipulationCmd & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd>()
{
  return "bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd";
}

template<>
inline const char * name<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd>()
{
  return "bosdyn_msgs/msg/ManipulationApiRequestOneOfManipulationCmd";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::PickObject>::value && has_fixed_size<bosdyn_msgs::msg::PickObjectExecutePlan>::value && has_fixed_size<bosdyn_msgs::msg::PickObjectInImage>::value && has_fixed_size<bosdyn_msgs::msg::PickObjectRayInWorld>::value && has_fixed_size<bosdyn_msgs::msg::WalkToObjectInImage>::value && has_fixed_size<bosdyn_msgs::msg::WalkToObjectRayInWorld>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::PickObject>::value && has_bounded_size<bosdyn_msgs::msg::PickObjectExecutePlan>::value && has_bounded_size<bosdyn_msgs::msg::PickObjectInImage>::value && has_bounded_size<bosdyn_msgs::msg::PickObjectRayInWorld>::value && has_bounded_size<bosdyn_msgs::msg::WalkToObjectInImage>::value && has_bounded_size<bosdyn_msgs::msg::WalkToObjectRayInWorld>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::ManipulationApiRequestOneOfManipulationCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_REQUEST_ONE_OF_MANIPULATION_CMD__TRAITS_HPP_
