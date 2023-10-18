// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/temperature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Temperature_temperature
{
public:
  explicit Init_Temperature_temperature(::bosdyn_msgs::msg::Temperature & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Temperature temperature(::bosdyn_msgs::msg::Temperature::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Temperature msg_;
};

class Init_Temperature_channel_name
{
public:
  Init_Temperature_channel_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Temperature_temperature channel_name(::bosdyn_msgs::msg::Temperature::_channel_name_type arg)
  {
    msg_.channel_name = std::move(arg);
    return Init_Temperature_temperature(msg_);
  }

private:
  ::bosdyn_msgs::msg::Temperature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Temperature>()
{
  return bosdyn_msgs::msg::builder::Init_Temperature_channel_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_
