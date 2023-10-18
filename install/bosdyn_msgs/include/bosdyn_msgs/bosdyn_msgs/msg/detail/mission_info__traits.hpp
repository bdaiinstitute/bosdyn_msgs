// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MISSION_INFO__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MISSION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/mission_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'root'
#include "bosdyn_msgs/msg/detail/node_info__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: root
  {
    out << "root: ";
    to_flow_style_yaml(msg.root, out);
    out << ", ";
  }

  // member: root_is_set
  {
    out << "root_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.root_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: root
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root:\n";
    to_block_style_yaml(msg.root, out, indentation + 2);
  }

  // member: root_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.root_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionInfo & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::MissionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::MissionInfo & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::MissionInfo>()
{
  return "bosdyn_msgs::msg::MissionInfo";
}

template<>
inline const char * name<bosdyn_msgs::msg::MissionInfo>()
{
  return "bosdyn_msgs/msg/MissionInfo";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::MissionInfo>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::NodeInfo>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::MissionInfo>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::NodeInfo>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::MissionInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__MISSION_INFO__TRAITS_HPP_
