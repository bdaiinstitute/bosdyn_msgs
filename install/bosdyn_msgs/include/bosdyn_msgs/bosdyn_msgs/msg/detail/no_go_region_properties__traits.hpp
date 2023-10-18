// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/NoGoRegionProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/no_go_region_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'region'
#include "bosdyn_msgs/msg/detail/no_go_region_properties_one_of_region__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NoGoRegionProperties & msg,
  std::ostream & out)
{
  out << "{";
  // member: region
  {
    out << "region: ";
    to_flow_style_yaml(msg.region, out);
    out << ", ";
  }

  // member: disable_foot_obstacle_generation
  {
    out << "disable_foot_obstacle_generation: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_foot_obstacle_generation, out);
    out << ", ";
  }

  // member: disable_body_obstacle_generation
  {
    out << "disable_body_obstacle_generation: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_body_obstacle_generation, out);
    out << ", ";
  }

  // member: disable_foot_obstacle_inflation
  {
    out << "disable_foot_obstacle_inflation: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_foot_obstacle_inflation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NoGoRegionProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: region
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "region:\n";
    to_block_style_yaml(msg.region, out, indentation + 2);
  }

  // member: disable_foot_obstacle_generation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_foot_obstacle_generation: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_foot_obstacle_generation, out);
    out << "\n";
  }

  // member: disable_body_obstacle_generation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_body_obstacle_generation: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_body_obstacle_generation, out);
    out << "\n";
  }

  // member: disable_foot_obstacle_inflation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_foot_obstacle_inflation: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_foot_obstacle_inflation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NoGoRegionProperties & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::NoGoRegionProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::NoGoRegionProperties & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::NoGoRegionProperties>()
{
  return "bosdyn_msgs::msg::NoGoRegionProperties";
}

template<>
inline const char * name<bosdyn_msgs::msg::NoGoRegionProperties>()
{
  return "bosdyn_msgs/msg/NoGoRegionProperties";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::NoGoRegionProperties>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::NoGoRegionProperties>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::NoGoRegionProperties>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES__TRAITS_HPP_
