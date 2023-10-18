// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SeriesDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/series_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'series_identifier'
#include "bosdyn_msgs/msg/detail/series_identifier__traits.hpp"
// Member 'data_type'
#include "bosdyn_msgs/msg/detail/series_descriptor_one_of_data_type__traits.hpp"
// Member 'annotations'
#include "bosdyn_msgs/msg/detail/key_string_value_string__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SeriesDescriptor & msg,
  std::ostream & out)
{
  out << "{";
  // member: series_index
  {
    out << "series_index: ";
    rosidl_generator_traits::value_to_yaml(msg.series_index, out);
    out << ", ";
  }

  // member: series_identifier
  {
    out << "series_identifier: ";
    to_flow_style_yaml(msg.series_identifier, out);
    out << ", ";
  }

  // member: series_identifier_is_set
  {
    out << "series_identifier_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.series_identifier_is_set, out);
    out << ", ";
  }

  // member: identifier_hash
  {
    out << "identifier_hash: ";
    rosidl_generator_traits::value_to_yaml(msg.identifier_hash, out);
    out << ", ";
  }

  // member: data_type
  {
    out << "data_type: ";
    to_flow_style_yaml(msg.data_type, out);
    out << ", ";
  }

  // member: annotations
  {
    if (msg.annotations.size() == 0) {
      out << "annotations: []";
    } else {
      out << "annotations: [";
      size_t pending_items = msg.annotations.size();
      for (auto item : msg.annotations) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: additional_index_names
  {
    if (msg.additional_index_names.size() == 0) {
      out << "additional_index_names: []";
    } else {
      out << "additional_index_names: [";
      size_t pending_items = msg.additional_index_names.size();
      for (auto item : msg.additional_index_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SeriesDescriptor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: series_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "series_index: ";
    rosidl_generator_traits::value_to_yaml(msg.series_index, out);
    out << "\n";
  }

  // member: series_identifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "series_identifier:\n";
    to_block_style_yaml(msg.series_identifier, out, indentation + 2);
  }

  // member: series_identifier_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "series_identifier_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.series_identifier_is_set, out);
    out << "\n";
  }

  // member: identifier_hash
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "identifier_hash: ";
    rosidl_generator_traits::value_to_yaml(msg.identifier_hash, out);
    out << "\n";
  }

  // member: data_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_type:\n";
    to_block_style_yaml(msg.data_type, out, indentation + 2);
  }

  // member: annotations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.annotations.size() == 0) {
      out << "annotations: []\n";
    } else {
      out << "annotations:\n";
      for (auto item : msg.annotations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: additional_index_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.additional_index_names.size() == 0) {
      out << "additional_index_names: []\n";
    } else {
      out << "additional_index_names:\n";
      for (auto item : msg.additional_index_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SeriesDescriptor & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SeriesDescriptor & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SeriesDescriptor & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SeriesDescriptor>()
{
  return "bosdyn_msgs::msg::SeriesDescriptor";
}

template<>
inline const char * name<bosdyn_msgs::msg::SeriesDescriptor>()
{
  return "bosdyn_msgs/msg/SeriesDescriptor";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SeriesDescriptor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SeriesDescriptor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::SeriesDescriptor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR__TRAITS_HPP_
