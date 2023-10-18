// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FanPowerCommandResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/fan_power_command_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FanPowerCommandResponse_command_id
{
public:
  explicit Init_FanPowerCommandResponse_command_id(::bosdyn_msgs::msg::FanPowerCommandResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FanPowerCommandResponse command_id(::bosdyn_msgs::msg::FanPowerCommandResponse::_command_id_type arg)
  {
    msg_.command_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandResponse msg_;
};

class Init_FanPowerCommandResponse_desired_end_time_is_set
{
public:
  explicit Init_FanPowerCommandResponse_desired_end_time_is_set(::bosdyn_msgs::msg::FanPowerCommandResponse & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandResponse_command_id desired_end_time_is_set(::bosdyn_msgs::msg::FanPowerCommandResponse::_desired_end_time_is_set_type arg)
  {
    msg_.desired_end_time_is_set = std::move(arg);
    return Init_FanPowerCommandResponse_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandResponse msg_;
};

class Init_FanPowerCommandResponse_desired_end_time
{
public:
  explicit Init_FanPowerCommandResponse_desired_end_time(::bosdyn_msgs::msg::FanPowerCommandResponse & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandResponse_desired_end_time_is_set desired_end_time(::bosdyn_msgs::msg::FanPowerCommandResponse::_desired_end_time_type arg)
  {
    msg_.desired_end_time = std::move(arg);
    return Init_FanPowerCommandResponse_desired_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandResponse msg_;
};

class Init_FanPowerCommandResponse_status
{
public:
  explicit Init_FanPowerCommandResponse_status(::bosdyn_msgs::msg::FanPowerCommandResponse & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandResponse_desired_end_time status(::bosdyn_msgs::msg::FanPowerCommandResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FanPowerCommandResponse_desired_end_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandResponse msg_;
};

class Init_FanPowerCommandResponse_lease_use_result_is_set
{
public:
  explicit Init_FanPowerCommandResponse_lease_use_result_is_set(::bosdyn_msgs::msg::FanPowerCommandResponse & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandResponse_status lease_use_result_is_set(::bosdyn_msgs::msg::FanPowerCommandResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_FanPowerCommandResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandResponse msg_;
};

class Init_FanPowerCommandResponse_lease_use_result
{
public:
  explicit Init_FanPowerCommandResponse_lease_use_result(::bosdyn_msgs::msg::FanPowerCommandResponse & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::FanPowerCommandResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_FanPowerCommandResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandResponse msg_;
};

class Init_FanPowerCommandResponse_header_is_set
{
public:
  explicit Init_FanPowerCommandResponse_header_is_set(::bosdyn_msgs::msg::FanPowerCommandResponse & msg)
  : msg_(msg)
  {}
  Init_FanPowerCommandResponse_lease_use_result header_is_set(::bosdyn_msgs::msg::FanPowerCommandResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_FanPowerCommandResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandResponse msg_;
};

class Init_FanPowerCommandResponse_header
{
public:
  Init_FanPowerCommandResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FanPowerCommandResponse_header_is_set header(::bosdyn_msgs::msg::FanPowerCommandResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FanPowerCommandResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FanPowerCommandResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FanPowerCommandResponse>()
{
  return bosdyn_msgs::msg::builder::Init_FanPowerCommandResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAN_POWER_COMMAND_RESPONSE__BUILDER_HPP_
