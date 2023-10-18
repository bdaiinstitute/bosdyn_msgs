// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/Walk.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WALK__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WALK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/walk__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'global_parameters'
#include "bosdyn_msgs/msg/detail/global_parameters__traits.hpp"
// Member 'playback_mode'
#include "bosdyn_msgs/msg/detail/playback_mode__traits.hpp"
// Member 'elements'
#include "bosdyn_msgs/msg/detail/element__traits.hpp"
// Member 'docks'
#include "bosdyn_msgs/msg/detail/dock__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Walk & msg,
  std::ostream & out)
{
  out << "{";
  // member: global_parameters
  {
    out << "global_parameters: ";
    to_flow_style_yaml(msg.global_parameters, out);
    out << ", ";
  }

  // member: global_parameters_is_set
  {
    out << "global_parameters_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.global_parameters_is_set, out);
    out << ", ";
  }

  // member: playback_mode
  {
    out << "playback_mode: ";
    to_flow_style_yaml(msg.playback_mode, out);
    out << ", ";
  }

  // member: playback_mode_is_set
  {
    out << "playback_mode_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.playback_mode_is_set, out);
    out << ", ";
  }

  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << ", ";
  }

  // member: mission_name
  {
    out << "mission_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_name, out);
    out << ", ";
  }

  // member: elements
  {
    if (msg.elements.size() == 0) {
      out << "elements: []";
    } else {
      out << "elements: [";
      size_t pending_items = msg.elements.size();
      for (auto item : msg.elements) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: docks
  {
    if (msg.docks.size() == 0) {
      out << "docks: []";
    } else {
      out << "docks: [";
      size_t pending_items = msg.docks.size();
      for (auto item : msg.docks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Walk & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: global_parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_parameters:\n";
    to_block_style_yaml(msg.global_parameters, out, indentation + 2);
  }

  // member: global_parameters_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_parameters_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.global_parameters_is_set, out);
    out << "\n";
  }

  // member: playback_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "playback_mode:\n";
    to_block_style_yaml(msg.playback_mode, out, indentation + 2);
  }

  // member: playback_mode_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "playback_mode_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.playback_mode_is_set, out);
    out << "\n";
  }

  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: mission_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_name, out);
    out << "\n";
  }

  // member: elements
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.elements.size() == 0) {
      out << "elements: []\n";
    } else {
      out << "elements:\n";
      for (auto item : msg.elements) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: docks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.docks.size() == 0) {
      out << "docks: []\n";
    } else {
      out << "docks:\n";
      for (auto item : msg.docks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Walk & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::Walk & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::Walk & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::Walk>()
{
  return "bosdyn_msgs::msg::Walk";
}

template<>
inline const char * name<bosdyn_msgs::msg::Walk>()
{
  return "bosdyn_msgs/msg/Walk";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::Walk>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::Walk>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::Walk>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__WALK__TRAITS_HPP_
