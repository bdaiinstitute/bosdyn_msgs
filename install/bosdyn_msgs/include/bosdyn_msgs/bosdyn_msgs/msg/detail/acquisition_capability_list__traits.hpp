// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/AcquisitionCapabilityList.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_CAPABILITY_LIST__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_CAPABILITY_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/acquisition_capability_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data_sources'
#include "bosdyn_msgs/msg/detail/data_acquisition_capability__traits.hpp"
// Member 'image_sources'
#include "bosdyn_msgs/msg/detail/image_acquisition_capability__traits.hpp"
// Member 'network_compute_sources'
#include "bosdyn_msgs/msg/detail/network_compute_capability__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AcquisitionCapabilityList & msg,
  std::ostream & out)
{
  out << "{";
  // member: data_sources
  {
    if (msg.data_sources.size() == 0) {
      out << "data_sources: []";
    } else {
      out << "data_sources: [";
      size_t pending_items = msg.data_sources.size();
      for (auto item : msg.data_sources) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: image_sources
  {
    if (msg.image_sources.size() == 0) {
      out << "image_sources: []";
    } else {
      out << "image_sources: [";
      size_t pending_items = msg.image_sources.size();
      for (auto item : msg.image_sources) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: network_compute_sources
  {
    if (msg.network_compute_sources.size() == 0) {
      out << "network_compute_sources: []";
    } else {
      out << "network_compute_sources: [";
      size_t pending_items = msg.network_compute_sources.size();
      for (auto item : msg.network_compute_sources) {
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
  const AcquisitionCapabilityList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data_sources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data_sources.size() == 0) {
      out << "data_sources: []\n";
    } else {
      out << "data_sources:\n";
      for (auto item : msg.data_sources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: image_sources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_sources.size() == 0) {
      out << "image_sources: []\n";
    } else {
      out << "image_sources:\n";
      for (auto item : msg.image_sources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: network_compute_sources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.network_compute_sources.size() == 0) {
      out << "network_compute_sources: []\n";
    } else {
      out << "network_compute_sources:\n";
      for (auto item : msg.network_compute_sources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcquisitionCapabilityList & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::AcquisitionCapabilityList & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::AcquisitionCapabilityList & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::AcquisitionCapabilityList>()
{
  return "bosdyn_msgs::msg::AcquisitionCapabilityList";
}

template<>
inline const char * name<bosdyn_msgs::msg::AcquisitionCapabilityList>()
{
  return "bosdyn_msgs/msg/AcquisitionCapabilityList";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::AcquisitionCapabilityList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::AcquisitionCapabilityList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::AcquisitionCapabilityList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_CAPABILITY_LIST__TRAITS_HPP_
