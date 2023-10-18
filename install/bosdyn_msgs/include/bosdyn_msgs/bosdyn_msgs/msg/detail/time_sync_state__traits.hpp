// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/time_sync_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'best_estimate'
#include "bosdyn_msgs/msg/detail/time_sync_estimate__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/time_sync_state_status__traits.hpp"
// Member 'measurement_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TimeSyncState & msg,
  std::ostream & out)
{
  out << "{";
  // member: best_estimate
  {
    out << "best_estimate: ";
    to_flow_style_yaml(msg.best_estimate, out);
    out << ", ";
  }

  // member: best_estimate_is_set
  {
    out << "best_estimate_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.best_estimate_is_set, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: measurement_time
  {
    out << "measurement_time: ";
    to_flow_style_yaml(msg.measurement_time, out);
    out << ", ";
  }

  // member: measurement_time_is_set
  {
    out << "measurement_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_time_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimeSyncState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: best_estimate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "best_estimate:\n";
    to_block_style_yaml(msg.best_estimate, out, indentation + 2);
  }

  // member: best_estimate_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "best_estimate_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.best_estimate_is_set, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: measurement_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_time:\n";
    to_block_style_yaml(msg.measurement_time, out, indentation + 2);
  }

  // member: measurement_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_time_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimeSyncState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::TimeSyncState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::TimeSyncState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::TimeSyncState>()
{
  return "bosdyn_msgs::msg::TimeSyncState";
}

template<>
inline const char * name<bosdyn_msgs::msg::TimeSyncState>()
{
  return "bosdyn_msgs/msg/TimeSyncState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::TimeSyncState>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::TimeSyncEstimate>::value && has_fixed_size<bosdyn_msgs::msg::TimeSyncStateStatus>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::TimeSyncState>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::TimeSyncEstimate>::value && has_bounded_size<bosdyn_msgs::msg::TimeSyncStateStatus>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::TimeSyncState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_STATE__TRAITS_HPP_
