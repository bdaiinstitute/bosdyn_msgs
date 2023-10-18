// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotState_terrain_state_is_set
{
public:
  explicit Init_RobotState_terrain_state_is_set(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotState terrain_state_is_set(::bosdyn_msgs::msg::RobotState::_terrain_state_is_set_type arg)
  {
    msg_.terrain_state_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_terrain_state
{
public:
  explicit Init_RobotState_terrain_state(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_terrain_state_is_set terrain_state(::bosdyn_msgs::msg::RobotState::_terrain_state_type arg)
  {
    msg_.terrain_state = std::move(arg);
    return Init_RobotState_terrain_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_service_fault_state_is_set
{
public:
  explicit Init_RobotState_service_fault_state_is_set(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_terrain_state service_fault_state_is_set(::bosdyn_msgs::msg::RobotState::_service_fault_state_is_set_type arg)
  {
    msg_.service_fault_state_is_set = std::move(arg);
    return Init_RobotState_terrain_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_service_fault_state
{
public:
  explicit Init_RobotState_service_fault_state(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_service_fault_state_is_set service_fault_state(::bosdyn_msgs::msg::RobotState::_service_fault_state_type arg)
  {
    msg_.service_fault_state = std::move(arg);
    return Init_RobotState_service_fault_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_manipulator_state_is_set
{
public:
  explicit Init_RobotState_manipulator_state_is_set(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_service_fault_state manipulator_state_is_set(::bosdyn_msgs::msg::RobotState::_manipulator_state_is_set_type arg)
  {
    msg_.manipulator_state_is_set = std::move(arg);
    return Init_RobotState_service_fault_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_manipulator_state
{
public:
  explicit Init_RobotState_manipulator_state(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_manipulator_state_is_set manipulator_state(::bosdyn_msgs::msg::RobotState::_manipulator_state_type arg)
  {
    msg_.manipulator_state = std::move(arg);
    return Init_RobotState_manipulator_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_foot_state
{
public:
  explicit Init_RobotState_foot_state(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_manipulator_state foot_state(::bosdyn_msgs::msg::RobotState::_foot_state_type arg)
  {
    msg_.foot_state = std::move(arg);
    return Init_RobotState_manipulator_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_behavior_fault_state_is_set
{
public:
  explicit Init_RobotState_behavior_fault_state_is_set(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_foot_state behavior_fault_state_is_set(::bosdyn_msgs::msg::RobotState::_behavior_fault_state_is_set_type arg)
  {
    msg_.behavior_fault_state_is_set = std::move(arg);
    return Init_RobotState_foot_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_behavior_fault_state
{
public:
  explicit Init_RobotState_behavior_fault_state(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_behavior_fault_state_is_set behavior_fault_state(::bosdyn_msgs::msg::RobotState::_behavior_fault_state_type arg)
  {
    msg_.behavior_fault_state = std::move(arg);
    return Init_RobotState_behavior_fault_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_kinematic_state_is_set
{
public:
  explicit Init_RobotState_kinematic_state_is_set(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_behavior_fault_state kinematic_state_is_set(::bosdyn_msgs::msg::RobotState::_kinematic_state_is_set_type arg)
  {
    msg_.kinematic_state_is_set = std::move(arg);
    return Init_RobotState_behavior_fault_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_kinematic_state
{
public:
  explicit Init_RobotState_kinematic_state(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_kinematic_state_is_set kinematic_state(::bosdyn_msgs::msg::RobotState::_kinematic_state_type arg)
  {
    msg_.kinematic_state = std::move(arg);
    return Init_RobotState_kinematic_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_estop_states
{
public:
  explicit Init_RobotState_estop_states(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_kinematic_state estop_states(::bosdyn_msgs::msg::RobotState::_estop_states_type arg)
  {
    msg_.estop_states = std::move(arg);
    return Init_RobotState_kinematic_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_system_fault_state_is_set
{
public:
  explicit Init_RobotState_system_fault_state_is_set(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_estop_states system_fault_state_is_set(::bosdyn_msgs::msg::RobotState::_system_fault_state_is_set_type arg)
  {
    msg_.system_fault_state_is_set = std::move(arg);
    return Init_RobotState_estop_states(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_system_fault_state
{
public:
  explicit Init_RobotState_system_fault_state(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_system_fault_state_is_set system_fault_state(::bosdyn_msgs::msg::RobotState::_system_fault_state_type arg)
  {
    msg_.system_fault_state = std::move(arg);
    return Init_RobotState_system_fault_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_comms_states
{
public:
  explicit Init_RobotState_comms_states(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_system_fault_state comms_states(::bosdyn_msgs::msg::RobotState::_comms_states_type arg)
  {
    msg_.comms_states = std::move(arg);
    return Init_RobotState_system_fault_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_battery_states
{
public:
  explicit Init_RobotState_battery_states(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_comms_states battery_states(::bosdyn_msgs::msg::RobotState::_battery_states_type arg)
  {
    msg_.battery_states = std::move(arg);
    return Init_RobotState_comms_states(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_power_state_is_set
{
public:
  explicit Init_RobotState_power_state_is_set(::bosdyn_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_battery_states power_state_is_set(::bosdyn_msgs::msg::RobotState::_power_state_is_set_type arg)
  {
    msg_.power_state_is_set = std::move(arg);
    return Init_RobotState_battery_states(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

class Init_RobotState_power_state
{
public:
  Init_RobotState_power_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_power_state_is_set power_state(::bosdyn_msgs::msg::RobotState::_power_state_type arg)
  {
    msg_.power_state = std::move(arg);
    return Init_RobotState_power_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotState>()
{
  return bosdyn_msgs::msg::builder::Init_RobotState_power_state();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
