// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RegionOfInterestParam.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/region_of_interest_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'area'
#include "bosdyn_msgs/msg/detail/area_i__traits.hpp"
// Member 'service_and_source'
#include "bosdyn_msgs/msg/detail/region_of_interest_param_service_and_source__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RegionOfInterestParam & msg,
  std::ostream & out)
{
  out << "{";
  // member: area
  {
    out << "area: ";
    to_flow_style_yaml(msg.area, out);
    out << ", ";
  }

  // member: area_is_set
  {
    out << "area_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.area_is_set, out);
    out << ", ";
  }

  // member: service_and_source
  {
    out << "service_and_source: ";
    to_flow_style_yaml(msg.service_and_source, out);
    out << ", ";
  }

  // member: service_and_source_is_set
  {
    out << "service_and_source_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.service_and_source_is_set, out);
    out << ", ";
  }

  // member: image_cols
  {
    out << "image_cols: ";
    rosidl_generator_traits::value_to_yaml(msg.image_cols, out);
    out << ", ";
  }

  // member: image_rows
  {
    out << "image_rows: ";
    rosidl_generator_traits::value_to_yaml(msg.image_rows, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RegionOfInterestParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area:\n";
    to_block_style_yaml(msg.area, out, indentation + 2);
  }

  // member: area_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.area_is_set, out);
    out << "\n";
  }

  // member: service_and_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_and_source:\n";
    to_block_style_yaml(msg.service_and_source, out, indentation + 2);
  }

  // member: service_and_source_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_and_source_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.service_and_source_is_set, out);
    out << "\n";
  }

  // member: image_cols
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_cols: ";
    rosidl_generator_traits::value_to_yaml(msg.image_cols, out);
    out << "\n";
  }

  // member: image_rows
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_rows: ";
    rosidl_generator_traits::value_to_yaml(msg.image_rows, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RegionOfInterestParam & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RegionOfInterestParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RegionOfInterestParam & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RegionOfInterestParam>()
{
  return "bosdyn_msgs::msg::RegionOfInterestParam";
}

template<>
inline const char * name<bosdyn_msgs::msg::RegionOfInterestParam>()
{
  return "bosdyn_msgs/msg/RegionOfInterestParam";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RegionOfInterestParam>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::AreaI>::value && has_fixed_size<bosdyn_msgs::msg::RegionOfInterestParamServiceAndSource>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RegionOfInterestParam>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::AreaI>::value && has_bounded_size<bosdyn_msgs::msg::RegionOfInterestParamServiceAndSource>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::RegionOfInterestParam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM__TRAITS_HPP_
