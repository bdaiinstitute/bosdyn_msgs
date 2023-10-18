// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ActionAfterLeaseStale.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_LEASE_STALE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_LEASE_STALE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/action_after_lease_stale__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'leases'
#include "bosdyn_msgs/msg/detail/lease__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActionAfterLeaseStale & msg,
  std::ostream & out)
{
  out << "{";
  // member: leases
  {
    if (msg.leases.size() == 0) {
      out << "leases: []";
    } else {
      out << "leases: [";
      size_t pending_items = msg.leases.size();
      for (auto item : msg.leases) {
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
  const ActionAfterLeaseStale & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: leases
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.leases.size() == 0) {
      out << "leases: []\n";
    } else {
      out << "leases:\n";
      for (auto item : msg.leases) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionAfterLeaseStale & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ActionAfterLeaseStale & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ActionAfterLeaseStale & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ActionAfterLeaseStale>()
{
  return "bosdyn_msgs::msg::ActionAfterLeaseStale";
}

template<>
inline const char * name<bosdyn_msgs::msg::ActionAfterLeaseStale>()
{
  return "bosdyn_msgs/msg/ActionAfterLeaseStale";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ActionAfterLeaseStale>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ActionAfterLeaseStale>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::ActionAfterLeaseStale>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_LEASE_STALE__TRAITS_HPP_
