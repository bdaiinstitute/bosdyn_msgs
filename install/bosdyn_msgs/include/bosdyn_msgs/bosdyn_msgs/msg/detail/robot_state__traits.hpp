// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'power_state'
#include "bosdyn_msgs/msg/detail/power_state__traits.hpp"
// Member 'battery_states'
#include "bosdyn_msgs/msg/detail/battery_state__traits.hpp"
// Member 'comms_states'
#include "bosdyn_msgs/msg/detail/comms_state__traits.hpp"
// Member 'system_fault_state'
#include "bosdyn_msgs/msg/detail/system_fault_state__traits.hpp"
// Member 'estop_states'
#include "bosdyn_msgs/msg/detail/e_stop_state__traits.hpp"
// Member 'kinematic_state'
#include "bosdyn_msgs/msg/detail/kinematic_state__traits.hpp"
// Member 'behavior_fault_state'
#include "bosdyn_msgs/msg/detail/behavior_fault_state__traits.hpp"
// Member 'foot_state'
#include "bosdyn_msgs/msg/detail/foot_state__traits.hpp"
// Member 'manipulator_state'
#include "bosdyn_msgs/msg/detail/manipulator_state__traits.hpp"
// Member 'service_fault_state'
#include "bosdyn_msgs/msg/detail/service_fault_state__traits.hpp"
// Member 'terrain_state'
#include "bosdyn_msgs/msg/detail/terrain_state__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: power_state
  {
    out << "power_state: ";
    to_flow_style_yaml(msg.power_state, out);
    out << ", ";
  }

  // member: power_state_is_set
  {
    out << "power_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.power_state_is_set, out);
    out << ", ";
  }

  // member: battery_states
  {
    if (msg.battery_states.size() == 0) {
      out << "battery_states: []";
    } else {
      out << "battery_states: [";
      size_t pending_items = msg.battery_states.size();
      for (auto item : msg.battery_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: comms_states
  {
    if (msg.comms_states.size() == 0) {
      out << "comms_states: []";
    } else {
      out << "comms_states: [";
      size_t pending_items = msg.comms_states.size();
      for (auto item : msg.comms_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: system_fault_state
  {
    out << "system_fault_state: ";
    to_flow_style_yaml(msg.system_fault_state, out);
    out << ", ";
  }

  // member: system_fault_state_is_set
  {
    out << "system_fault_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.system_fault_state_is_set, out);
    out << ", ";
  }

  // member: estop_states
  {
    if (msg.estop_states.size() == 0) {
      out << "estop_states: []";
    } else {
      out << "estop_states: [";
      size_t pending_items = msg.estop_states.size();
      for (auto item : msg.estop_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kinematic_state
  {
    out << "kinematic_state: ";
    to_flow_style_yaml(msg.kinematic_state, out);
    out << ", ";
  }

  // member: kinematic_state_is_set
  {
    out << "kinematic_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.kinematic_state_is_set, out);
    out << ", ";
  }

  // member: behavior_fault_state
  {
    out << "behavior_fault_state: ";
    to_flow_style_yaml(msg.behavior_fault_state, out);
    out << ", ";
  }

  // member: behavior_fault_state_is_set
  {
    out << "behavior_fault_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_fault_state_is_set, out);
    out << ", ";
  }

  // member: foot_state
  {
    if (msg.foot_state.size() == 0) {
      out << "foot_state: []";
    } else {
      out << "foot_state: [";
      size_t pending_items = msg.foot_state.size();
      for (auto item : msg.foot_state) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: manipulator_state
  {
    out << "manipulator_state: ";
    to_flow_style_yaml(msg.manipulator_state, out);
    out << ", ";
  }

  // member: manipulator_state_is_set
  {
    out << "manipulator_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.manipulator_state_is_set, out);
    out << ", ";
  }

  // member: service_fault_state
  {
    out << "service_fault_state: ";
    to_flow_style_yaml(msg.service_fault_state, out);
    out << ", ";
  }

  // member: service_fault_state_is_set
  {
    out << "service_fault_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.service_fault_state_is_set, out);
    out << ", ";
  }

  // member: terrain_state
  {
    out << "terrain_state: ";
    to_flow_style_yaml(msg.terrain_state, out);
    out << ", ";
  }

  // member: terrain_state_is_set
  {
    out << "terrain_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_state_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: power_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_state:\n";
    to_block_style_yaml(msg.power_state, out, indentation + 2);
  }

  // member: power_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.power_state_is_set, out);
    out << "\n";
  }

  // member: battery_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.battery_states.size() == 0) {
      out << "battery_states: []\n";
    } else {
      out << "battery_states:\n";
      for (auto item : msg.battery_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: comms_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.comms_states.size() == 0) {
      out << "comms_states: []\n";
    } else {
      out << "comms_states:\n";
      for (auto item : msg.comms_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: system_fault_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_fault_state:\n";
    to_block_style_yaml(msg.system_fault_state, out, indentation + 2);
  }

  // member: system_fault_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_fault_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.system_fault_state_is_set, out);
    out << "\n";
  }

  // member: estop_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.estop_states.size() == 0) {
      out << "estop_states: []\n";
    } else {
      out << "estop_states:\n";
      for (auto item : msg.estop_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: kinematic_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kinematic_state:\n";
    to_block_style_yaml(msg.kinematic_state, out, indentation + 2);
  }

  // member: kinematic_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kinematic_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.kinematic_state_is_set, out);
    out << "\n";
  }

  // member: behavior_fault_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_fault_state:\n";
    to_block_style_yaml(msg.behavior_fault_state, out, indentation + 2);
  }

  // member: behavior_fault_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_fault_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_fault_state_is_set, out);
    out << "\n";
  }

  // member: foot_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_state.size() == 0) {
      out << "foot_state: []\n";
    } else {
      out << "foot_state:\n";
      for (auto item : msg.foot_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: manipulator_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manipulator_state:\n";
    to_block_style_yaml(msg.manipulator_state, out, indentation + 2);
  }

  // member: manipulator_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manipulator_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.manipulator_state_is_set, out);
    out << "\n";
  }

  // member: service_fault_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_fault_state:\n";
    to_block_style_yaml(msg.service_fault_state, out, indentation + 2);
  }

  // member: service_fault_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service_fault_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.service_fault_state_is_set, out);
    out << "\n";
  }

  // member: terrain_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terrain_state:\n";
    to_block_style_yaml(msg.terrain_state, out, indentation + 2);
  }

  // member: terrain_state_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terrain_state_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_state_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::RobotState & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::RobotState>()
{
  return "bosdyn_msgs::msg::RobotState";
}

template<>
inline const char * name<bosdyn_msgs::msg::RobotState>()
{
  return "bosdyn_msgs/msg/RobotState";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
