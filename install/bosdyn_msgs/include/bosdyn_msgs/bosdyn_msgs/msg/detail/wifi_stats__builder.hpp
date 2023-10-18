// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WifiStats.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WIFI_STATS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WIFI_STATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/wifi_stats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WifiStats_devices
{
public:
  explicit Init_WifiStats_devices(::bosdyn_msgs::msg::WifiStats & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WifiStats devices(::bosdyn_msgs::msg::WifiStats::_devices_type arg)
  {
    msg_.devices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WifiStats msg_;
};

class Init_WifiStats_hostname
{
public:
  Init_WifiStats_hostname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WifiStats_devices hostname(::bosdyn_msgs::msg::WifiStats::_hostname_type arg)
  {
    msg_.hostname = std::move(arg);
    return Init_WifiStats_devices(msg_);
  }

private:
  ::bosdyn_msgs::msg::WifiStats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WifiStats>()
{
  return bosdyn_msgs::msg::builder::Init_WifiStats_hostname();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WIFI_STATS__BUILDER_HPP_
