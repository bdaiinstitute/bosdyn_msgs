// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/DataBufferStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_BUFFER_STATUS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_BUFFER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/data_buffer_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'blob_specs'
#include "bosdyn_msgs/msg/detail/blob_spec__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DataBufferStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_data_buffer_pages
  {
    out << "num_data_buffer_pages: ";
    rosidl_generator_traits::value_to_yaml(msg.num_data_buffer_pages, out);
    out << ", ";
  }

  // member: data_buffer_total_bytes
  {
    out << "data_buffer_total_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.data_buffer_total_bytes, out);
    out << ", ";
  }

  // member: num_comments
  {
    out << "num_comments: ";
    rosidl_generator_traits::value_to_yaml(msg.num_comments, out);
    out << ", ";
  }

  // member: num_events
  {
    out << "num_events: ";
    rosidl_generator_traits::value_to_yaml(msg.num_events, out);
    out << ", ";
  }

  // member: blob_specs
  {
    if (msg.blob_specs.size() == 0) {
      out << "blob_specs: []";
    } else {
      out << "blob_specs: [";
      size_t pending_items = msg.blob_specs.size();
      for (auto item : msg.blob_specs) {
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
  const DataBufferStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_data_buffer_pages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_data_buffer_pages: ";
    rosidl_generator_traits::value_to_yaml(msg.num_data_buffer_pages, out);
    out << "\n";
  }

  // member: data_buffer_total_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_buffer_total_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.data_buffer_total_bytes, out);
    out << "\n";
  }

  // member: num_comments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_comments: ";
    rosidl_generator_traits::value_to_yaml(msg.num_comments, out);
    out << "\n";
  }

  // member: num_events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_events: ";
    rosidl_generator_traits::value_to_yaml(msg.num_events, out);
    out << "\n";
  }

  // member: blob_specs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blob_specs.size() == 0) {
      out << "blob_specs: []\n";
    } else {
      out << "blob_specs:\n";
      for (auto item : msg.blob_specs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataBufferStatus & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::DataBufferStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::DataBufferStatus & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::DataBufferStatus>()
{
  return "bosdyn_msgs::msg::DataBufferStatus";
}

template<>
inline const char * name<bosdyn_msgs::msg::DataBufferStatus>()
{
  return "bosdyn_msgs/msg/DataBufferStatus";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::DataBufferStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::DataBufferStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::DataBufferStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_BUFFER_STATUS__TRAITS_HPP_
