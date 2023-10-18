// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/EdgeAnnotationsStairData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS_STAIR_DATA__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS_STAIR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/edge_annotations_stair_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'state'
#include "bosdyn_msgs/msg/detail/annotation_state__traits.hpp"
// Member 'staircase_with_landings'
#include "bosdyn_msgs/msg/detail/staircase_with_landings__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EdgeAnnotationsStairData & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
    out << ", ";
  }

  // member: staircase_with_landings
  {
    out << "staircase_with_landings: ";
    to_flow_style_yaml(msg.staircase_with_landings, out);
    out << ", ";
  }

  // member: staircase_with_landings_is_set
  {
    out << "staircase_with_landings_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.staircase_with_landings_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EdgeAnnotationsStairData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }

  // member: staircase_with_landings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "staircase_with_landings:\n";
    to_block_style_yaml(msg.staircase_with_landings, out, indentation + 2);
  }

  // member: staircase_with_landings_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "staircase_with_landings_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.staircase_with_landings_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EdgeAnnotationsStairData & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::EdgeAnnotationsStairData & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::EdgeAnnotationsStairData & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::EdgeAnnotationsStairData>()
{
  return "bosdyn_msgs::msg::EdgeAnnotationsStairData";
}

template<>
inline const char * name<bosdyn_msgs::msg::EdgeAnnotationsStairData>()
{
  return "bosdyn_msgs/msg/EdgeAnnotationsStairData";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::EdgeAnnotationsStairData>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::AnnotationState>::value && has_fixed_size<bosdyn_msgs::msg::StaircaseWithLandings>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::EdgeAnnotationsStairData>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::AnnotationState>::value && has_bounded_size<bosdyn_msgs::msg::StaircaseWithLandings>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::EdgeAnnotationsStairData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS_STAIR_DATA__TRAITS_HPP_
