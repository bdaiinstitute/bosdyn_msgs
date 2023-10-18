// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/battery_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryState_status
{
public:
  explicit Init_BatteryState_status(::bosdyn_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BatteryState status(::bosdyn_msgs::msg::BatteryState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_temperatures
{
public:
  explicit Init_BatteryState_temperatures(::bosdyn_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_status temperatures(::bosdyn_msgs::msg::BatteryState::_temperatures_type arg)
  {
    msg_.temperatures = std::move(arg);
    return Init_BatteryState_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_voltage_is_set
{
public:
  explicit Init_BatteryState_voltage_is_set(::bosdyn_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_temperatures voltage_is_set(::bosdyn_msgs::msg::BatteryState::_voltage_is_set_type arg)
  {
    msg_.voltage_is_set = std::move(arg);
    return Init_BatteryState_temperatures(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_voltage
{
public:
  explicit Init_BatteryState_voltage(::bosdyn_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_voltage_is_set voltage(::bosdyn_msgs::msg::BatteryState::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BatteryState_voltage_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_current_is_set
{
public:
  explicit Init_BatteryState_current_is_set(::bosdyn_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_voltage current_is_set(::bosdyn_msgs::msg::BatteryState::_current_is_set_type arg)
  {
    msg_.current_is_set = std::move(arg);
    return Init_BatteryState_voltage(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_current
{
public:
  explicit Init_BatteryState_current(::bosdyn_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_current_is_set current(::bosdyn_msgs::msg::BatteryState::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_BatteryState_current_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_estimated_runtime_is_set
{
public:
  explicit Init_BatteryState_estimated_runtime_is_set(::bosdyn_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_current estimated_runtime_is_set(::bosdyn_msgs::msg::BatteryState::_estimated_runtime_is_set_type arg)
  {
    msg_.estimated_runtime_is_set = std::move(arg);
    return Init_BatteryState_current(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_estimated_runtime
{
public:
  explicit Init_BatteryState_estimated_runtime(::bosdyn_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_estimated_runtime_is_set estimated_runtime(::bosdyn_msgs::msg::BatteryState::_estimated_runtime_type arg)
  {
    msg_.estimated_runtime = std::move(arg);
    return Init_BatteryState_estimated_runtime_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_charge_percentage_is_set
{
public:
  explicit Init_BatteryState_charge_percentage_is_set(::bosdyn_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_estimated_runtime charge_percentage_is_set(::bosdyn_msgs::msg::BatteryState::_charge_percentage_is_set_type arg)
  {
    msg_.charge_percentage_is_set = std::move(arg);
    return Init_BatteryState_estimated_runtime(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_charge_percentage
{
public:
  explicit Init_BatteryState_charge_percentage(::bosdyn_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_charge_percentage_is_set charge_percentage(::bosdyn_msgs::msg::BatteryState::_charge_percentage_type arg)
  {
    msg_.charge_percentage = std::move(arg);
    return Init_BatteryState_charge_percentage_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_identifier
{
public:
  explicit Init_BatteryState_identifier(::bosdyn_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_charge_percentage identifier(::bosdyn_msgs::msg::BatteryState::_identifier_type arg)
  {
    msg_.identifier = std::move(arg);
    return Init_BatteryState_charge_percentage(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_timestamp_is_set
{
public:
  explicit Init_BatteryState_timestamp_is_set(::bosdyn_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_identifier timestamp_is_set(::bosdyn_msgs::msg::BatteryState::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_BatteryState_identifier(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_timestamp
{
public:
  Init_BatteryState_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryState_timestamp_is_set timestamp(::bosdyn_msgs::msg::BatteryState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_BatteryState_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BatteryState>()
{
  return bosdyn_msgs::msg::builder::Init_BatteryState_timestamp();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
