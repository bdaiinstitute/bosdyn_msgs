// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StoreMetadataOneOfData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_ONE_OF_DATA__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_ONE_OF_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/store_metadata_one_of_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StoreMetadataOneOfData & msg,
  std::ostream & out)
{
  out << "{";
  // member: metadata_name
  {
    out << "metadata_name: ";
    rosidl_generator_traits::value_to_yaml(msg.metadata_name, out);
    out << ", ";
  }

  // member: data_choice
  {
    out << "data_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.data_choice, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StoreMetadataOneOfData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: metadata_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "metadata_name: ";
    rosidl_generator_traits::value_to_yaml(msg.metadata_name, out);
    out << "\n";
  }

  // member: data_choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_choice: ";
    rosidl_generator_traits::value_to_yaml(msg.data_choice, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StoreMetadataOneOfData & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::StoreMetadataOneOfData & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StoreMetadataOneOfData & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StoreMetadataOneOfData>()
{
  return "bosdyn_msgs::msg::StoreMetadataOneOfData";
}

template<>
inline const char * name<bosdyn_msgs::msg::StoreMetadataOneOfData>()
{
  return "bosdyn_msgs/msg/StoreMetadataOneOfData";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StoreMetadataOneOfData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StoreMetadataOneOfData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::StoreMetadataOneOfData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_ONE_OF_DATA__TRAITS_HPP_
