// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/BlobPage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BLOB_PAGE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BLOB_PAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/blob_page__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'spec'
#include "bosdyn_msgs/msg/detail/blob_spec__traits.hpp"
// Member 'page'
#include "bosdyn_msgs/msg/detail/page_info__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BlobPage & msg,
  std::ostream & out)
{
  out << "{";
  // member: spec
  {
    out << "spec: ";
    to_flow_style_yaml(msg.spec, out);
    out << ", ";
  }

  // member: spec_is_set
  {
    out << "spec_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.spec_is_set, out);
    out << ", ";
  }

  // member: page
  {
    out << "page: ";
    to_flow_style_yaml(msg.page, out);
    out << ", ";
  }

  // member: page_is_set
  {
    out << "page_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.page_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlobPage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: spec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spec:\n";
    to_block_style_yaml(msg.spec, out, indentation + 2);
  }

  // member: spec_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spec_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.spec_is_set, out);
    out << "\n";
  }

  // member: page
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "page:\n";
    to_block_style_yaml(msg.page, out, indentation + 2);
  }

  // member: page_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "page_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.page_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlobPage & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::BlobPage & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::BlobPage & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::BlobPage>()
{
  return "bosdyn_msgs::msg::BlobPage";
}

template<>
inline const char * name<bosdyn_msgs::msg::BlobPage>()
{
  return "bosdyn_msgs/msg/BlobPage";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::BlobPage>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::BlobSpec>::value && has_fixed_size<bosdyn_msgs::msg::PageInfo>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::BlobPage>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::BlobSpec>::value && has_bounded_size<bosdyn_msgs::msg::PageInfo>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::BlobPage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__BLOB_PAGE__TRAITS_HPP_
