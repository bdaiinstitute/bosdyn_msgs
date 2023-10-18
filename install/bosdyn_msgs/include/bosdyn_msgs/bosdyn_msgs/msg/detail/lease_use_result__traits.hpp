// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/LeaseUseResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LEASE_USE_RESULT__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LEASE_USE_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/lease_use_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/lease_use_result_status__traits.hpp"
// Member 'owner'
#include "bosdyn_msgs/msg/detail/lease_owner__traits.hpp"
// Member 'attempted_lease'
// Member 'previous_lease'
// Member 'latest_known_lease'
// Member 'latest_resources'
#include "bosdyn_msgs/msg/detail/lease__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LeaseUseResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: owner
  {
    out << "owner: ";
    to_flow_style_yaml(msg.owner, out);
    out << ", ";
  }

  // member: owner_is_set
  {
    out << "owner_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.owner_is_set, out);
    out << ", ";
  }

  // member: attempted_lease
  {
    out << "attempted_lease: ";
    to_flow_style_yaml(msg.attempted_lease, out);
    out << ", ";
  }

  // member: attempted_lease_is_set
  {
    out << "attempted_lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.attempted_lease_is_set, out);
    out << ", ";
  }

  // member: previous_lease
  {
    out << "previous_lease: ";
    to_flow_style_yaml(msg.previous_lease, out);
    out << ", ";
  }

  // member: previous_lease_is_set
  {
    out << "previous_lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_lease_is_set, out);
    out << ", ";
  }

  // member: latest_known_lease
  {
    out << "latest_known_lease: ";
    to_flow_style_yaml(msg.latest_known_lease, out);
    out << ", ";
  }

  // member: latest_known_lease_is_set
  {
    out << "latest_known_lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_known_lease_is_set, out);
    out << ", ";
  }

  // member: latest_resources
  {
    if (msg.latest_resources.size() == 0) {
      out << "latest_resources: []";
    } else {
      out << "latest_resources: [";
      size_t pending_items = msg.latest_resources.size();
      for (auto item : msg.latest_resources) {
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
  const LeaseUseResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "owner:\n";
    to_block_style_yaml(msg.owner, out, indentation + 2);
  }

  // member: owner_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "owner_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.owner_is_set, out);
    out << "\n";
  }

  // member: attempted_lease
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attempted_lease:\n";
    to_block_style_yaml(msg.attempted_lease, out, indentation + 2);
  }

  // member: attempted_lease_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attempted_lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.attempted_lease_is_set, out);
    out << "\n";
  }

  // member: previous_lease
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_lease:\n";
    to_block_style_yaml(msg.previous_lease, out, indentation + 2);
  }

  // member: previous_lease_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.previous_lease_is_set, out);
    out << "\n";
  }

  // member: latest_known_lease
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_known_lease:\n";
    to_block_style_yaml(msg.latest_known_lease, out, indentation + 2);
  }

  // member: latest_known_lease_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_known_lease_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_known_lease_is_set, out);
    out << "\n";
  }

  // member: latest_resources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.latest_resources.size() == 0) {
      out << "latest_resources: []\n";
    } else {
      out << "latest_resources:\n";
      for (auto item : msg.latest_resources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LeaseUseResult & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::LeaseUseResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::LeaseUseResult & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::LeaseUseResult>()
{
  return "bosdyn_msgs::msg::LeaseUseResult";
}

template<>
inline const char * name<bosdyn_msgs::msg::LeaseUseResult>()
{
  return "bosdyn_msgs/msg/LeaseUseResult";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::LeaseUseResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::LeaseUseResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::LeaseUseResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LEASE_USE_RESULT__TRAITS_HPP_
