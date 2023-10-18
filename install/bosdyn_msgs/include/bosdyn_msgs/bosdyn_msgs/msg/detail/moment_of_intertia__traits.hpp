// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/MomentOfIntertia.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOMENT_OF_INTERTIA__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOMENT_OF_INTERTIA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/moment_of_intertia__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MomentOfIntertia & msg,
  std::ostream & out)
{
  out << "{";
  // member: xx
  {
    out << "xx: ";
    rosidl_generator_traits::value_to_yaml(msg.xx, out);
    out << ", ";
  }

  // member: yy
  {
    out << "yy: ";
    rosidl_generator_traits::value_to_yaml(msg.yy, out);
    out << ", ";
  }

  // member: zz
  {
    out << "zz: ";
    rosidl_generator_traits::value_to_yaml(msg.zz, out);
    out << ", ";
  }

  // member: xy
  {
    out << "xy: ";
    rosidl_generator_traits::value_to_yaml(msg.xy, out);
    out << ", ";
  }

  // member: xz
  {
    out << "xz: ";
    rosidl_generator_traits::value_to_yaml(msg.xz, out);
    out << ", ";
  }

  // member: yz
  {
    out << "yz: ";
    rosidl_generator_traits::value_to_yaml(msg.yz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MomentOfIntertia & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xx: ";
    rosidl_generator_traits::value_to_yaml(msg.xx, out);
    out << "\n";
  }

  // member: yy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yy: ";
    rosidl_generator_traits::value_to_yaml(msg.yy, out);
    out << "\n";
  }

  // member: zz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zz: ";
    rosidl_generator_traits::value_to_yaml(msg.zz, out);
    out << "\n";
  }

  // member: xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xy: ";
    rosidl_generator_traits::value_to_yaml(msg.xy, out);
    out << "\n";
  }

  // member: xz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xz: ";
    rosidl_generator_traits::value_to_yaml(msg.xz, out);
    out << "\n";
  }

  // member: yz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yz: ";
    rosidl_generator_traits::value_to_yaml(msg.yz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MomentOfIntertia & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::MomentOfIntertia & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::MomentOfIntertia & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::MomentOfIntertia>()
{
  return "bosdyn_msgs::msg::MomentOfIntertia";
}

template<>
inline const char * name<bosdyn_msgs::msg::MomentOfIntertia>()
{
  return "bosdyn_msgs/msg/MomentOfIntertia";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::MomentOfIntertia>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::MomentOfIntertia>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::MomentOfIntertia>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOMENT_OF_INTERTIA__TRAITS_HPP_
