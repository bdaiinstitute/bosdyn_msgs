// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PodTypeDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POD_TYPE_DESCRIPTOR__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POD_TYPE_DESCRIPTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/pod_type_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pod_type'
#include "bosdyn_msgs/msg/detail/pod_type_enum__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PodTypeDescriptor & msg,
  std::ostream & out)
{
  out << "{";
  // member: pod_type
  {
    out << "pod_type: ";
    to_flow_style_yaml(msg.pod_type, out);
    out << ", ";
  }

  // member: dimension
  {
    if (msg.dimension.size() == 0) {
      out << "dimension: []";
    } else {
      out << "dimension: [";
      size_t pending_items = msg.dimension.size();
      for (auto item : msg.dimension) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PodTypeDescriptor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pod_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pod_type:\n";
    to_block_style_yaml(msg.pod_type, out, indentation + 2);
  }

  // member: dimension
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dimension.size() == 0) {
      out << "dimension: []\n";
    } else {
      out << "dimension:\n";
      for (auto item : msg.dimension) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PodTypeDescriptor & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PodTypeDescriptor & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PodTypeDescriptor & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PodTypeDescriptor>()
{
  return "bosdyn_msgs::msg::PodTypeDescriptor";
}

template<>
inline const char * name<bosdyn_msgs::msg::PodTypeDescriptor>()
{
  return "bosdyn_msgs/msg/PodTypeDescriptor";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PodTypeDescriptor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PodTypeDescriptor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::PodTypeDescriptor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__POD_TYPE_DESCRIPTOR__TRAITS_HPP_
