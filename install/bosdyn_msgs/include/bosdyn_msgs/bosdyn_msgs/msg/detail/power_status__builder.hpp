// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PowerStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POWER_STATUS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POWER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/power_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerStatus_external_mic_is_set
{
public:
  explicit Init_PowerStatus_external_mic_is_set(::bosdyn_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PowerStatus external_mic_is_set(::bosdyn_msgs::msg::PowerStatus::_external_mic_is_set_type arg)
  {
    msg_.external_mic_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_external_mic
{
public:
  explicit Init_PowerStatus_external_mic(::bosdyn_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_external_mic_is_set external_mic(::bosdyn_msgs::msg::PowerStatus::_external_mic_type arg)
  {
    msg_.external_mic = std::move(arg);
    return Init_PowerStatus_external_mic_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_aux2_is_set
{
public:
  explicit Init_PowerStatus_aux2_is_set(::bosdyn_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_external_mic aux2_is_set(::bosdyn_msgs::msg::PowerStatus::_aux2_is_set_type arg)
  {
    msg_.aux2_is_set = std::move(arg);
    return Init_PowerStatus_external_mic(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_aux2
{
public:
  explicit Init_PowerStatus_aux2(::bosdyn_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_aux2_is_set aux2(::bosdyn_msgs::msg::PowerStatus::_aux2_type arg)
  {
    msg_.aux2 = std::move(arg);
    return Init_PowerStatus_aux2_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_aux1_is_set
{
public:
  explicit Init_PowerStatus_aux1_is_set(::bosdyn_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_aux2 aux1_is_set(::bosdyn_msgs::msg::PowerStatus::_aux1_is_set_type arg)
  {
    msg_.aux1_is_set = std::move(arg);
    return Init_PowerStatus_aux2(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_aux1
{
public:
  explicit Init_PowerStatus_aux1(::bosdyn_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_aux1_is_set aux1(::bosdyn_msgs::msg::PowerStatus::_aux1_type arg)
  {
    msg_.aux1 = std::move(arg);
    return Init_PowerStatus_aux1_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_ptz_is_set
{
public:
  explicit Init_PowerStatus_ptz_is_set(::bosdyn_msgs::msg::PowerStatus & msg)
  : msg_(msg)
  {}
  Init_PowerStatus_aux1 ptz_is_set(::bosdyn_msgs::msg::PowerStatus::_ptz_is_set_type arg)
  {
    msg_.ptz_is_set = std::move(arg);
    return Init_PowerStatus_aux1(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerStatus msg_;
};

class Init_PowerStatus_ptz
{
public:
  Init_PowerStatus_ptz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerStatus_ptz_is_set ptz(::bosdyn_msgs::msg::PowerStatus::_ptz_type arg)
  {
    msg_.ptz = std::move(arg);
    return Init_PowerStatus_ptz_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PowerStatus>()
{
  return bosdyn_msgs::msg::builder::Init_PowerStatus_ptz();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POWER_STATUS__BUILDER_HPP_
