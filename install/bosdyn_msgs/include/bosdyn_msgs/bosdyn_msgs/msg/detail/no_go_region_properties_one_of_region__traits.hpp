// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/NoGoRegionPropertiesOneOfRegion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES_ONE_OF_REGION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES_ONE_OF_REGION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/no_go_region_properties_one_of_region__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'box'
#include "bosdyn_msgs/msg/detail/box2_with_frame__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NoGoRegionPropertiesOneOfRegion & msg,
  std::ostream & out)
{
  out << "{";
  // member: box
  {
    out << "box: ";
    to_flow_style_yaml(msg.box, out);
    out << ", ";
  }

  // member: region_choice
  {
    out << "region_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.region_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NoGoRegionPropertiesOneOfRegion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: box
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box:\n";
    to_block_style_yaml(msg.box, out, indentation + 2);
  }

  // member: region_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "region_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.region_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NoGoRegionPropertiesOneOfRegion & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion>()
{
  return "bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion";
}

template<>
inline const char * name<bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion>()
{
  return "bosdyn_msgs/msg/NoGoRegionPropertiesOneOfRegion";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Box2WithFrame>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Box2WithFrame>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES_ONE_OF_REGION__TRAITS_HPP_
