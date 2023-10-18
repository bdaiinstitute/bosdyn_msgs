// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/LocalGridExtent.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_EXTENT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_EXTENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/local_grid_extent__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocalGridExtent & msg,
  std::ostream & out)
{
  out << "{";
  // member: cell_size
  {
    out << "cell_size: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_size, out);
    out << ", ";
  }

  // member: num_cells_x
  {
    out << "num_cells_x: ";
    rosidl_generator_traits::value_to_yaml(msg.num_cells_x, out);
    out << ", ";
  }

  // member: num_cells_y
  {
    out << "num_cells_y: ";
    rosidl_generator_traits::value_to_yaml(msg.num_cells_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocalGridExtent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cell_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_size: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_size, out);
    out << "\n";
  }

  // member: num_cells_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_cells_x: ";
    rosidl_generator_traits::value_to_yaml(msg.num_cells_x, out);
    out << "\n";
  }

  // member: num_cells_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_cells_y: ";
    rosidl_generator_traits::value_to_yaml(msg.num_cells_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalGridExtent & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::LocalGridExtent & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::LocalGridExtent & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::LocalGridExtent>()
{
  return "bosdyn_msgs::msg::LocalGridExtent";
}

template<>
inline const char * name<bosdyn_msgs::msg::LocalGridExtent>()
{
  return "bosdyn_msgs/msg/LocalGridExtent";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::LocalGridExtent>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::LocalGridExtent>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::LocalGridExtent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_EXTENT__TRAITS_HPP_
