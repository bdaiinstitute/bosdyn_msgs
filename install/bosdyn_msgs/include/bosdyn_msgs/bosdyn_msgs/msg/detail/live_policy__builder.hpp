// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LivePolicy.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIVE_POLICY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIVE_POLICY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/live_policy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LivePolicy_client_name
{
public:
  explicit Init_LivePolicy_client_name(::bosdyn_msgs::msg::LivePolicy & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LivePolicy client_name(::bosdyn_msgs::msg::LivePolicy::_client_name_type arg)
  {
    msg_.client_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LivePolicy msg_;
};

class Init_LivePolicy_last_checkin_is_set
{
public:
  explicit Init_LivePolicy_last_checkin_is_set(::bosdyn_msgs::msg::LivePolicy & msg)
  : msg_(msg)
  {}
  Init_LivePolicy_client_name last_checkin_is_set(::bosdyn_msgs::msg::LivePolicy::_last_checkin_is_set_type arg)
  {
    msg_.last_checkin_is_set = std::move(arg);
    return Init_LivePolicy_client_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::LivePolicy msg_;
};

class Init_LivePolicy_last_checkin
{
public:
  explicit Init_LivePolicy_last_checkin(::bosdyn_msgs::msg::LivePolicy & msg)
  : msg_(msg)
  {}
  Init_LivePolicy_last_checkin_is_set last_checkin(::bosdyn_msgs::msg::LivePolicy::_last_checkin_type arg)
  {
    msg_.last_checkin = std::move(arg);
    return Init_LivePolicy_last_checkin_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LivePolicy msg_;
};

class Init_LivePolicy_policy_is_set
{
public:
  explicit Init_LivePolicy_policy_is_set(::bosdyn_msgs::msg::LivePolicy & msg)
  : msg_(msg)
  {}
  Init_LivePolicy_last_checkin policy_is_set(::bosdyn_msgs::msg::LivePolicy::_policy_is_set_type arg)
  {
    msg_.policy_is_set = std::move(arg);
    return Init_LivePolicy_last_checkin(msg_);
  }

private:
  ::bosdyn_msgs::msg::LivePolicy msg_;
};

class Init_LivePolicy_policy
{
public:
  explicit Init_LivePolicy_policy(::bosdyn_msgs::msg::LivePolicy & msg)
  : msg_(msg)
  {}
  Init_LivePolicy_policy_is_set policy(::bosdyn_msgs::msg::LivePolicy::_policy_type arg)
  {
    msg_.policy = std::move(arg);
    return Init_LivePolicy_policy_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LivePolicy msg_;
};

class Init_LivePolicy_policy_id
{
public:
  Init_LivePolicy_policy_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LivePolicy_policy policy_id(::bosdyn_msgs::msg::LivePolicy::_policy_id_type arg)
  {
    msg_.policy_id = std::move(arg);
    return Init_LivePolicy_policy(msg_);
  }

private:
  ::bosdyn_msgs::msg::LivePolicy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LivePolicy>()
{
  return bosdyn_msgs::msg::builder::Init_LivePolicy_policy_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIVE_POLICY__BUILDER_HPP_
