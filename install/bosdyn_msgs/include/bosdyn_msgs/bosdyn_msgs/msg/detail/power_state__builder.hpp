// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PowerState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POWER_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POWER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/power_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerState_locomotion_estimated_runtime_is_set
{
public:
  explicit Init_PowerState_locomotion_estimated_runtime_is_set(::bosdyn_msgs::msg::PowerState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PowerState locomotion_estimated_runtime_is_set(::bosdyn_msgs::msg::PowerState::_locomotion_estimated_runtime_is_set_type arg)
  {
    msg_.locomotion_estimated_runtime_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerState msg_;
};

class Init_PowerState_locomotion_estimated_runtime
{
public:
  explicit Init_PowerState_locomotion_estimated_runtime(::bosdyn_msgs::msg::PowerState & msg)
  : msg_(msg)
  {}
  Init_PowerState_locomotion_estimated_runtime_is_set locomotion_estimated_runtime(::bosdyn_msgs::msg::PowerState::_locomotion_estimated_runtime_type arg)
  {
    msg_.locomotion_estimated_runtime = std::move(arg);
    return Init_PowerState_locomotion_estimated_runtime_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerState msg_;
};

class Init_PowerState_locomotion_charge_percentage_is_set
{
public:
  explicit Init_PowerState_locomotion_charge_percentage_is_set(::bosdyn_msgs::msg::PowerState & msg)
  : msg_(msg)
  {}
  Init_PowerState_locomotion_estimated_runtime locomotion_charge_percentage_is_set(::bosdyn_msgs::msg::PowerState::_locomotion_charge_percentage_is_set_type arg)
  {
    msg_.locomotion_charge_percentage_is_set = std::move(arg);
    return Init_PowerState_locomotion_estimated_runtime(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerState msg_;
};

class Init_PowerState_locomotion_charge_percentage
{
public:
  explicit Init_PowerState_locomotion_charge_percentage(::bosdyn_msgs::msg::PowerState & msg)
  : msg_(msg)
  {}
  Init_PowerState_locomotion_charge_percentage_is_set locomotion_charge_percentage(::bosdyn_msgs::msg::PowerState::_locomotion_charge_percentage_type arg)
  {
    msg_.locomotion_charge_percentage = std::move(arg);
    return Init_PowerState_locomotion_charge_percentage_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerState msg_;
};

class Init_PowerState_wifi_radio_power_state
{
public:
  explicit Init_PowerState_wifi_radio_power_state(::bosdyn_msgs::msg::PowerState & msg)
  : msg_(msg)
  {}
  Init_PowerState_locomotion_charge_percentage wifi_radio_power_state(::bosdyn_msgs::msg::PowerState::_wifi_radio_power_state_type arg)
  {
    msg_.wifi_radio_power_state = std::move(arg);
    return Init_PowerState_locomotion_charge_percentage(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerState msg_;
};

class Init_PowerState_payload_ports_power_state
{
public:
  explicit Init_PowerState_payload_ports_power_state(::bosdyn_msgs::msg::PowerState & msg)
  : msg_(msg)
  {}
  Init_PowerState_wifi_radio_power_state payload_ports_power_state(::bosdyn_msgs::msg::PowerState::_payload_ports_power_state_type arg)
  {
    msg_.payload_ports_power_state = std::move(arg);
    return Init_PowerState_wifi_radio_power_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerState msg_;
};

class Init_PowerState_robot_power_state
{
public:
  explicit Init_PowerState_robot_power_state(::bosdyn_msgs::msg::PowerState & msg)
  : msg_(msg)
  {}
  Init_PowerState_payload_ports_power_state robot_power_state(::bosdyn_msgs::msg::PowerState::_robot_power_state_type arg)
  {
    msg_.robot_power_state = std::move(arg);
    return Init_PowerState_payload_ports_power_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerState msg_;
};

class Init_PowerState_shore_power_state
{
public:
  explicit Init_PowerState_shore_power_state(::bosdyn_msgs::msg::PowerState & msg)
  : msg_(msg)
  {}
  Init_PowerState_robot_power_state shore_power_state(::bosdyn_msgs::msg::PowerState::_shore_power_state_type arg)
  {
    msg_.shore_power_state = std::move(arg);
    return Init_PowerState_robot_power_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerState msg_;
};

class Init_PowerState_motor_power_state
{
public:
  explicit Init_PowerState_motor_power_state(::bosdyn_msgs::msg::PowerState & msg)
  : msg_(msg)
  {}
  Init_PowerState_shore_power_state motor_power_state(::bosdyn_msgs::msg::PowerState::_motor_power_state_type arg)
  {
    msg_.motor_power_state = std::move(arg);
    return Init_PowerState_shore_power_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerState msg_;
};

class Init_PowerState_timestamp_is_set
{
public:
  explicit Init_PowerState_timestamp_is_set(::bosdyn_msgs::msg::PowerState & msg)
  : msg_(msg)
  {}
  Init_PowerState_motor_power_state timestamp_is_set(::bosdyn_msgs::msg::PowerState::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_PowerState_motor_power_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerState msg_;
};

class Init_PowerState_timestamp
{
public:
  Init_PowerState_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerState_timestamp_is_set timestamp(::bosdyn_msgs::msg::PowerState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PowerState_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PowerState>()
{
  return bosdyn_msgs::msg::builder::Init_PowerState_timestamp();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POWER_STATE__BUILDER_HPP_
