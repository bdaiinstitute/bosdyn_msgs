// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AcquisitionRequestList.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_REQUEST_LIST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_REQUEST_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/acquisition_request_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image_captures'
#include "bosdyn_msgs/msg/detail/image_source_capture__traits.hpp"
// Member 'data_captures'
#include "bosdyn_msgs/msg/detail/data_capture__traits.hpp"
// Member 'network_compute_captures'
#include "bosdyn_msgs/msg/detail/network_compute_capture__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AcquisitionRequestList & msg,
  std::ostream & out)
{
  out << "{";
  // member: image_captures
  {
    if (msg.image_captures.size() == 0) {
      out << "image_captures: []";
    } else {
      out << "image_captures: [";
      size_t pending_items = msg.image_captures.size();
      for (auto item : msg.image_captures) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: data_captures
  {
    if (msg.data_captures.size() == 0) {
      out << "data_captures: []";
    } else {
      out << "data_captures: [";
      size_t pending_items = msg.data_captures.size();
      for (auto item : msg.data_captures) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: network_compute_captures
  {
    if (msg.network_compute_captures.size() == 0) {
      out << "network_compute_captures: []";
    } else {
      out << "network_compute_captures: [";
      size_t pending_items = msg.network_compute_captures.size();
      for (auto item : msg.network_compute_captures) {
        to_flow_style_yaml(item, out);
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
  const AcquisitionRequestList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image_captures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_captures.size() == 0) {
      out << "image_captures: []\n";
    } else {
      out << "image_captures:\n";
      for (auto item : msg.image_captures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: data_captures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data_captures.size() == 0) {
      out << "data_captures: []\n";
    } else {
      out << "data_captures:\n";
      for (auto item : msg.data_captures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: network_compute_captures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.network_compute_captures.size() == 0) {
      out << "network_compute_captures: []\n";
    } else {
      out << "network_compute_captures:\n";
      for (auto item : msg.network_compute_captures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcquisitionRequestList & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AcquisitionRequestList & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AcquisitionRequestList & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AcquisitionRequestList>()
{
  return "bosdyn_msgs::msg::AcquisitionRequestList";
}

template<>
inline const char * name<bosdyn_msgs::msg::AcquisitionRequestList>()
{
  return "bosdyn_msgs/msg/AcquisitionRequestList";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AcquisitionRequestList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AcquisitionRequestList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::AcquisitionRequestList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_REQUEST_LIST__TRAITS_HPP_
