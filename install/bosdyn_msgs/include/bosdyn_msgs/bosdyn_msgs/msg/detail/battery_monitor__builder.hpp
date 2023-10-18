// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BatteryMonitor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BATTERY_MONITOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BATTERY_MONITOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/battery_monitor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryMonitor_battery_stop_threshold
{
public:
  explicit Init_BatteryMonitor_battery_stop_threshold(::bosdyn_msgs::msg::BatteryMonitor & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BatteryMonitor battery_stop_threshold(::bosdyn_msgs::msg::BatteryMonitor::_battery_stop_threshold_type arg)
  {
    msg_.battery_stop_threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryMonitor msg_;
};

class Init_BatteryMonitor_battery_start_threshold
{
public:
  Init_BatteryMonitor_battery_start_threshold()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryMonitor_battery_stop_threshold battery_start_threshold(::bosdyn_msgs::msg::BatteryMonitor::_battery_start_threshold_type arg)
  {
    msg_.battery_start_threshold = std::move(arg);
    return Init_BatteryMonitor_battery_stop_threshold(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryMonitor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BatteryMonitor>()
{
  return bosdyn_msgs::msg::builder::Init_BatteryMonitor_battery_start_threshold();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BATTERY_MONITOR__BUILDER_HPP_
