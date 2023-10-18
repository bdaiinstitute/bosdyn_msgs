// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/IrMeterOverlay.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/ir_meter_overlay__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'meter'
#include "bosdyn_msgs/msg/detail/ir_meter_overlay_normalized_coordinates__traits.hpp"
// Member 'unit'
#include "bosdyn_msgs/msg/detail/ir_meter_overlay_temp_unit__traits.hpp"
// Member 'delta'
#include "bosdyn_msgs/msg/detail/ir_meter_overlay_delta_pair__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IrMeterOverlay & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << ", ";
  }

  // member: meter
  {
    if (msg.meter.size() == 0) {
      out << "meter: []";
    } else {
      out << "meter: [";
      size_t pending_items = msg.meter.size();
      for (auto item : msg.meter) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: unit
  {
    out << "unit: ";
    to_flow_style_yaml(msg.unit, out);
    out << ", ";
  }

  // member: unit_is_set
  {
    out << "unit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.unit_is_set, out);
    out << ", ";
  }

  // member: delta
  {
    if (msg.delta.size() == 0) {
      out << "delta: []";
    } else {
      out << "delta: [";
      size_t pending_items = msg.delta.size();
      for (auto item : msg.delta) {
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
  const IrMeterOverlay & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }

  // member: meter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.meter.size() == 0) {
      out << "meter: []\n";
    } else {
      out << "meter:\n";
      for (auto item : msg.meter) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit:\n";
    to_block_style_yaml(msg.unit, out, indentation + 2);
  }

  // member: unit_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.unit_is_set, out);
    out << "\n";
  }

  // member: delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delta.size() == 0) {
      out << "delta: []\n";
    } else {
      out << "delta:\n";
      for (auto item : msg.delta) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IrMeterOverlay & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::IrMeterOverlay & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::IrMeterOverlay & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::IrMeterOverlay>()
{
  return "bosdyn_msgs::msg::IrMeterOverlay";
}

template<>
inline const char * name<bosdyn_msgs::msg::IrMeterOverlay>()
{
  return "bosdyn_msgs/msg/IrMeterOverlay";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::IrMeterOverlay>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::IrMeterOverlay>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::IrMeterOverlay>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY__TRAITS_HPP_
