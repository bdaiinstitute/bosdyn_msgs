// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DrawablePropertiesOneOfDrawable.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_ONE_OF_DRAWABLE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_ONE_OF_DRAWABLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/drawable_properties_one_of_drawable__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'frame'
#include "bosdyn_msgs/msg/detail/drawable_frame__traits.hpp"
// Member 'sphere'
#include "bosdyn_msgs/msg/detail/drawable_sphere__traits.hpp"
// Member 'box'
#include "bosdyn_msgs/msg/detail/drawable_box__traits.hpp"
// Member 'arrow'
#include "bosdyn_msgs/msg/detail/drawable_arrow__traits.hpp"
// Member 'capsule'
#include "bosdyn_msgs/msg/detail/drawable_capsule__traits.hpp"
// Member 'cylinder'
#include "bosdyn_msgs/msg/detail/drawable_cylinder__traits.hpp"
// Member 'linestrip'
#include "bosdyn_msgs/msg/detail/drawable_line_strip__traits.hpp"
// Member 'points'
#include "bosdyn_msgs/msg/detail/drawable_points__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DrawablePropertiesOneOfDrawable & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame
  {
    out << "frame: ";
    to_flow_style_yaml(msg.frame, out);
    out << ", ";
  }

  // member: sphere
  {
    out << "sphere: ";
    to_flow_style_yaml(msg.sphere, out);
    out << ", ";
  }

  // member: box
  {
    out << "box: ";
    to_flow_style_yaml(msg.box, out);
    out << ", ";
  }

  // member: arrow
  {
    out << "arrow: ";
    to_flow_style_yaml(msg.arrow, out);
    out << ", ";
  }

  // member: capsule
  {
    out << "capsule: ";
    to_flow_style_yaml(msg.capsule, out);
    out << ", ";
  }

  // member: cylinder
  {
    out << "cylinder: ";
    to_flow_style_yaml(msg.cylinder, out);
    out << ", ";
  }

  // member: linestrip
  {
    out << "linestrip: ";
    to_flow_style_yaml(msg.linestrip, out);
    out << ", ";
  }

  // member: points
  {
    out << "points: ";
    to_flow_style_yaml(msg.points, out);
    out << ", ";
  }

  // member: drawable_choice
  {
    out << "drawable_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.drawable_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DrawablePropertiesOneOfDrawable & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame:\n";
    to_block_style_yaml(msg.frame, out, indentation + 2);
  }

  // member: sphere
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sphere:\n";
    to_block_style_yaml(msg.sphere, out, indentation + 2);
  }

  // member: box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box:\n";
    to_block_style_yaml(msg.box, out, indentation + 2);
  }

  // member: arrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arrow:\n";
    to_block_style_yaml(msg.arrow, out, indentation + 2);
  }

  // member: capsule
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capsule:\n";
    to_block_style_yaml(msg.capsule, out, indentation + 2);
  }

  // member: cylinder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cylinder:\n";
    to_block_style_yaml(msg.cylinder, out, indentation + 2);
  }

  // member: linestrip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linestrip:\n";
    to_block_style_yaml(msg.linestrip, out, indentation + 2);
  }

  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "points:\n";
    to_block_style_yaml(msg.points, out, indentation + 2);
  }

  // member: drawable_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drawable_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.drawable_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DrawablePropertiesOneOfDrawable & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable>()
{
  return "bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable";
}

template<>
inline const char * name<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable>()
{
  return "bosdyn_msgs/msg/DrawablePropertiesOneOfDrawable";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::DrawableArrow>::value && has_fixed_size<bosdyn_msgs::msg::DrawableBox>::value && has_fixed_size<bosdyn_msgs::msg::DrawableCapsule>::value && has_fixed_size<bosdyn_msgs::msg::DrawableCylinder>::value && has_fixed_size<bosdyn_msgs::msg::DrawableFrame>::value && has_fixed_size<bosdyn_msgs::msg::DrawableLineStrip>::value && has_fixed_size<bosdyn_msgs::msg::DrawablePoints>::value && has_fixed_size<bosdyn_msgs::msg::DrawableSphere>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::DrawableArrow>::value && has_bounded_size<bosdyn_msgs::msg::DrawableBox>::value && has_bounded_size<bosdyn_msgs::msg::DrawableCapsule>::value && has_bounded_size<bosdyn_msgs::msg::DrawableCylinder>::value && has_bounded_size<bosdyn_msgs::msg::DrawableFrame>::value && has_bounded_size<bosdyn_msgs::msg::DrawableLineStrip>::value && has_bounded_size<bosdyn_msgs::msg::DrawablePoints>::value && has_bounded_size<bosdyn_msgs::msg::DrawableSphere>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_ONE_OF_DRAWABLE__TRAITS_HPP_
