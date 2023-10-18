// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SpotCamResetAutofocus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_RESET_AUTOFOCUS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_RESET_AUTOFOCUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/spot_cam_reset_autofocus__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SpotCamResetAutofocus_host
{
public:
  explicit Init_SpotCamResetAutofocus_host(::bosdyn_msgs::msg::SpotCamResetAutofocus & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SpotCamResetAutofocus host(::bosdyn_msgs::msg::SpotCamResetAutofocus::_host_type arg)
  {
    msg_.host = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamResetAutofocus msg_;
};

class Init_SpotCamResetAutofocus_service_name
{
public:
  Init_SpotCamResetAutofocus_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpotCamResetAutofocus_host service_name(::bosdyn_msgs::msg::SpotCamResetAutofocus::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_SpotCamResetAutofocus_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamResetAutofocus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SpotCamResetAutofocus>()
{
  return bosdyn_msgs::msg::builder::Init_SpotCamResetAutofocus_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_RESET_AUTOFOCUS__BUILDER_HPP_
