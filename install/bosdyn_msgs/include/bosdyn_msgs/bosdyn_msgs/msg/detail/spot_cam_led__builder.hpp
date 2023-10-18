// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SpotCamLed.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_LED__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/spot_cam_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SpotCamLed_brightnesses
{
public:
  explicit Init_SpotCamLed_brightnesses(::bosdyn_msgs::msg::SpotCamLed & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SpotCamLed brightnesses(::bosdyn_msgs::msg::SpotCamLed::_brightnesses_type arg)
  {
    msg_.brightnesses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamLed msg_;
};

class Init_SpotCamLed_host
{
public:
  explicit Init_SpotCamLed_host(::bosdyn_msgs::msg::SpotCamLed & msg)
  : msg_(msg)
  {}
  Init_SpotCamLed_brightnesses host(::bosdyn_msgs::msg::SpotCamLed::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_SpotCamLed_brightnesses(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamLed msg_;
};

class Init_SpotCamLed_service_name
{
public:
  Init_SpotCamLed_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpotCamLed_host service_name(::bosdyn_msgs::msg::SpotCamLed::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_SpotCamLed_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamLed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SpotCamLed>()
{
  return bosdyn_msgs::msg::builder::Init_SpotCamLed_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_LED__BUILDER_HPP_
