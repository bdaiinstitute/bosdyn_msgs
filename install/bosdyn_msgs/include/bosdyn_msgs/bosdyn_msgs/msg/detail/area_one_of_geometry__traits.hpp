// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AreaOneOfGeometry.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_ONE_OF_GEOMETRY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_ONE_OF_GEOMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/area_one_of_geometry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'polygon'
#include "bosdyn_msgs/msg/detail/polygon__traits.hpp"
// Member 'circle'
#include "bosdyn_msgs/msg/detail/circle__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AreaOneOfGeometry & msg,
  std::ostream & out)
{
  out << "{";
  // member: polygon
  {
    out << "polygon: ";
    to_flow_style_yaml(msg.polygon, out);
    out << ", ";
  }

  // member: circle
  {
    out << "circle: ";
    to_flow_style_yaml(msg.circle, out);
    out << ", ";
  }

  // member: geometry_choice
  {
    out << "geometry_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.geometry_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AreaOneOfGeometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: polygon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "polygon:\n";
    to_block_style_yaml(msg.polygon, out, indentation + 2);
  }

  // member: circle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circle:\n";
    to_block_style_yaml(msg.circle, out, indentation + 2);
  }

  // member: geometry_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geometry_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.geometry_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AreaOneOfGeometry & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AreaOneOfGeometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AreaOneOfGeometry & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AreaOneOfGeometry>()
{
  return "bosdyn_msgs::msg::AreaOneOfGeometry";
}

template<>
inline const char * name<bosdyn_msgs::msg::AreaOneOfGeometry>()
{
  return "bosdyn_msgs/msg/AreaOneOfGeometry";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AreaOneOfGeometry>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Circle>::value && has_fixed_size<bosdyn_msgs::msg::Polygon>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AreaOneOfGeometry>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Circle>::value && has_bounded_size<bosdyn_msgs::msg::Polygon>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::AreaOneOfGeometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_ONE_OF_GEOMETRY__TRAITS_HPP_
