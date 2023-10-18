// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PtzPosition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PTZ_POSITION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PTZ_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/ptz_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ptz'
#include "bosdyn_msgs/msg/detail/ptz_description__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PtzPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: ptz
  {
    out << "ptz: ";
    to_flow_style_yaml(msg.ptz, out);
    out << ", ";
  }

  // member: ptz_is_set
  {
    out << "ptz_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ptz_is_set, out);
    out << ", ";
  }

  // member: pan
  {
    out << "pan: ";
    rosidl_generator_traits::value_to_yaml(msg.pan, out);
    out << ", ";
  }

  // member: pan_is_set
  {
    out << "pan_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_is_set, out);
    out << ", ";
  }

  // member: tilt
  {
    out << "tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt, out);
    out << ", ";
  }

  // member: tilt_is_set
  {
    out << "tilt_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_is_set, out);
    out << ", ";
  }

  // member: zoom
  {
    out << "zoom: ";
    rosidl_generator_traits::value_to_yaml(msg.zoom, out);
    out << ", ";
  }

  // member: zoom_is_set
  {
    out << "zoom_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.zoom_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PtzPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ptz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ptz:\n";
    to_block_style_yaml(msg.ptz, out, indentation + 2);
  }

  // member: ptz_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ptz_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.ptz_is_set, out);
    out << "\n";
  }

  // member: pan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan: ";
    rosidl_generator_traits::value_to_yaml(msg.pan, out);
    out << "\n";
  }

  // member: pan_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pan_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.pan_is_set, out);
    out << "\n";
  }

  // member: tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt, out);
    out << "\n";
  }

  // member: tilt_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_is_set, out);
    out << "\n";
  }

  // member: zoom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zoom: ";
    rosidl_generator_traits::value_to_yaml(msg.zoom, out);
    out << "\n";
  }

  // member: zoom_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zoom_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.zoom_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PtzPosition & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PtzPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PtzPosition & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PtzPosition>()
{
  return "bosdyn_msgs::msg::PtzPosition";
}

template<>
inline const char * name<bosdyn_msgs::msg::PtzPosition>()
{
  return "bosdyn_msgs/msg/PtzPosition";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PtzPosition>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::PtzDescription>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PtzPosition>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::PtzDescription>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::PtzPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PTZ_POSITION__TRAITS_HPP_
