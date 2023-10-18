// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SpotCheckCommandResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_COMMAND_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_COMMAND_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/spot_check_command_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SpotCheckCommandResponse_message
{
public:
  explicit Init_SpotCheckCommandResponse_message(::bosdyn_msgs::msg::SpotCheckCommandResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SpotCheckCommandResponse message(::bosdyn_msgs::msg::SpotCheckCommandResponse::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckCommandResponse msg_;
};

class Init_SpotCheckCommandResponse_status
{
public:
  explicit Init_SpotCheckCommandResponse_status(::bosdyn_msgs::msg::SpotCheckCommandResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckCommandResponse_message status(::bosdyn_msgs::msg::SpotCheckCommandResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SpotCheckCommandResponse_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckCommandResponse msg_;
};

class Init_SpotCheckCommandResponse_lease_use_result_is_set
{
public:
  explicit Init_SpotCheckCommandResponse_lease_use_result_is_set(::bosdyn_msgs::msg::SpotCheckCommandResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckCommandResponse_status lease_use_result_is_set(::bosdyn_msgs::msg::SpotCheckCommandResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_SpotCheckCommandResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckCommandResponse msg_;
};

class Init_SpotCheckCommandResponse_lease_use_result
{
public:
  explicit Init_SpotCheckCommandResponse_lease_use_result(::bosdyn_msgs::msg::SpotCheckCommandResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckCommandResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::SpotCheckCommandResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_SpotCheckCommandResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckCommandResponse msg_;
};

class Init_SpotCheckCommandResponse_header_is_set
{
public:
  explicit Init_SpotCheckCommandResponse_header_is_set(::bosdyn_msgs::msg::SpotCheckCommandResponse & msg)
  : msg_(msg)
  {}
  Init_SpotCheckCommandResponse_lease_use_result header_is_set(::bosdyn_msgs::msg::SpotCheckCommandResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SpotCheckCommandResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckCommandResponse msg_;
};

class Init_SpotCheckCommandResponse_header
{
public:
  Init_SpotCheckCommandResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpotCheckCommandResponse_header_is_set header(::bosdyn_msgs::msg::SpotCheckCommandResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SpotCheckCommandResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckCommandResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SpotCheckCommandResponse>()
{
  return bosdyn_msgs::msg::builder::Init_SpotCheckCommandResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_COMMAND_RESPONSE__BUILDER_HPP_
