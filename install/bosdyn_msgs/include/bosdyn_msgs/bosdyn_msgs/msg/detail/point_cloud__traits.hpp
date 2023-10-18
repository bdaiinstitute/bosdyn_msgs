// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/point_cloud__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'source'
#include "bosdyn_msgs/msg/detail/point_cloud_source__traits.hpp"
// Member 'encoding'
#include "bosdyn_msgs/msg/detail/point_cloud_encoding__traits.hpp"
// Member 'encoding_parameters'
#include "bosdyn_msgs/msg/detail/point_cloud_encoding_parameters__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointCloud & msg,
  std::ostream & out)
{
  out << "{";
  // member: source
  {
    out << "source: ";
    to_flow_style_yaml(msg.source, out);
    out << ", ";
  }

  // member: source_is_set
  {
    out << "source_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.source_is_set, out);
    out << ", ";
  }

  // member: num_points
  {
    out << "num_points: ";
    rosidl_generator_traits::value_to_yaml(msg.num_points, out);
    out << ", ";
  }

  // member: encoding
  {
    out << "encoding: ";
    to_flow_style_yaml(msg.encoding, out);
    out << ", ";
  }

  // member: encoding_parameters
  {
    out << "encoding_parameters: ";
    to_flow_style_yaml(msg.encoding_parameters, out);
    out << ", ";
  }

  // member: encoding_parameters_is_set
  {
    out << "encoding_parameters_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.encoding_parameters_is_set, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::character_value_to_yaml(item, out);
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
  const PointCloud & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source:\n";
    to_block_style_yaml(msg.source, out, indentation + 2);
  }

  // member: source_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.source_is_set, out);
    out << "\n";
  }

  // member: num_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_points: ";
    rosidl_generator_traits::value_to_yaml(msg.num_points, out);
    out << "\n";
  }

  // member: encoding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoding:\n";
    to_block_style_yaml(msg.encoding, out, indentation + 2);
  }

  // member: encoding_parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoding_parameters:\n";
    to_block_style_yaml(msg.encoding_parameters, out, indentation + 2);
  }

  // member: encoding_parameters_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoding_parameters_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.encoding_parameters_is_set, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointCloud & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::PointCloud & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::PointCloud & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::PointCloud>()
{
  return "bosdyn_msgs::msg::PointCloud";
}

template<>
inline const char * name<bosdyn_msgs::msg::PointCloud>()
{
  return "bosdyn_msgs/msg/PointCloud";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::PointCloud>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::PointCloud>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::PointCloud>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD__TRAITS_HPP_
