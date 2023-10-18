// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/LoadSoundRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_SOUND_REQUEST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_SOUND_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/load_sound_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__traits.hpp"
// Member 'sound'
#include "bosdyn_msgs/msg/detail/sound__traits.hpp"
// Member 'data'
#include "bosdyn_msgs/msg/detail/data_chunk__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LoadSoundRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_is_set
  {
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << ", ";
  }

  // member: sound
  {
    out << "sound: ";
    to_flow_style_yaml(msg.sound, out);
    out << ", ";
  }

  // member: sound_is_set
  {
    out << "sound_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_is_set, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
    out << ", ";
  }

  // member: data_is_set
  {
    out << "data_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.data_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoadSoundRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << "\n";
  }

  // member: sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound:\n";
    to_block_style_yaml(msg.sound, out, indentation + 2);
  }

  // member: sound_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.sound_is_set, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }

  // member: data_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.data_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoadSoundRequest & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::LoadSoundRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::LoadSoundRequest & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::LoadSoundRequest>()
{
  return "bosdyn_msgs::msg::LoadSoundRequest";
}

template<>
inline const char * name<bosdyn_msgs::msg::LoadSoundRequest>()
{
  return "bosdyn_msgs/msg/LoadSoundRequest";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::LoadSoundRequest>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::DataChunk>::value && has_fixed_size<bosdyn_msgs::msg::RequestHeader>::value && has_fixed_size<bosdyn_msgs::msg::Sound>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::LoadSoundRequest>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::DataChunk>::value && has_bounded_size<bosdyn_msgs::msg::RequestHeader>::value && has_bounded_size<bosdyn_msgs::msg::Sound>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::LoadSoundRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_SOUND_REQUEST__TRAITS_HPP_
