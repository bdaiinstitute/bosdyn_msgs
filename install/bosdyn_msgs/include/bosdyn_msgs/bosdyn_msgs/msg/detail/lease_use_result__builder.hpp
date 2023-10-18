// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LeaseUseResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LEASE_USE_RESULT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LEASE_USE_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/lease_use_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LeaseUseResult_latest_resources
{
public:
  explicit Init_LeaseUseResult_latest_resources(::bosdyn_msgs::msg::LeaseUseResult & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LeaseUseResult latest_resources(::bosdyn_msgs::msg::LeaseUseResult::_latest_resources_type arg)
  {
    msg_.latest_resources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseUseResult msg_;
};

class Init_LeaseUseResult_latest_known_lease_is_set
{
public:
  explicit Init_LeaseUseResult_latest_known_lease_is_set(::bosdyn_msgs::msg::LeaseUseResult & msg)
  : msg_(msg)
  {}
  Init_LeaseUseResult_latest_resources latest_known_lease_is_set(::bosdyn_msgs::msg::LeaseUseResult::_latest_known_lease_is_set_type arg)
  {
    msg_.latest_known_lease_is_set = std::move(arg);
    return Init_LeaseUseResult_latest_resources(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseUseResult msg_;
};

class Init_LeaseUseResult_latest_known_lease
{
public:
  explicit Init_LeaseUseResult_latest_known_lease(::bosdyn_msgs::msg::LeaseUseResult & msg)
  : msg_(msg)
  {}
  Init_LeaseUseResult_latest_known_lease_is_set latest_known_lease(::bosdyn_msgs::msg::LeaseUseResult::_latest_known_lease_type arg)
  {
    msg_.latest_known_lease = std::move(arg);
    return Init_LeaseUseResult_latest_known_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseUseResult msg_;
};

class Init_LeaseUseResult_previous_lease_is_set
{
public:
  explicit Init_LeaseUseResult_previous_lease_is_set(::bosdyn_msgs::msg::LeaseUseResult & msg)
  : msg_(msg)
  {}
  Init_LeaseUseResult_latest_known_lease previous_lease_is_set(::bosdyn_msgs::msg::LeaseUseResult::_previous_lease_is_set_type arg)
  {
    msg_.previous_lease_is_set = std::move(arg);
    return Init_LeaseUseResult_latest_known_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseUseResult msg_;
};

class Init_LeaseUseResult_previous_lease
{
public:
  explicit Init_LeaseUseResult_previous_lease(::bosdyn_msgs::msg::LeaseUseResult & msg)
  : msg_(msg)
  {}
  Init_LeaseUseResult_previous_lease_is_set previous_lease(::bosdyn_msgs::msg::LeaseUseResult::_previous_lease_type arg)
  {
    msg_.previous_lease = std::move(arg);
    return Init_LeaseUseResult_previous_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseUseResult msg_;
};

class Init_LeaseUseResult_attempted_lease_is_set
{
public:
  explicit Init_LeaseUseResult_attempted_lease_is_set(::bosdyn_msgs::msg::LeaseUseResult & msg)
  : msg_(msg)
  {}
  Init_LeaseUseResult_previous_lease attempted_lease_is_set(::bosdyn_msgs::msg::LeaseUseResult::_attempted_lease_is_set_type arg)
  {
    msg_.attempted_lease_is_set = std::move(arg);
    return Init_LeaseUseResult_previous_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseUseResult msg_;
};

class Init_LeaseUseResult_attempted_lease
{
public:
  explicit Init_LeaseUseResult_attempted_lease(::bosdyn_msgs::msg::LeaseUseResult & msg)
  : msg_(msg)
  {}
  Init_LeaseUseResult_attempted_lease_is_set attempted_lease(::bosdyn_msgs::msg::LeaseUseResult::_attempted_lease_type arg)
  {
    msg_.attempted_lease = std::move(arg);
    return Init_LeaseUseResult_attempted_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseUseResult msg_;
};

class Init_LeaseUseResult_owner_is_set
{
public:
  explicit Init_LeaseUseResult_owner_is_set(::bosdyn_msgs::msg::LeaseUseResult & msg)
  : msg_(msg)
  {}
  Init_LeaseUseResult_attempted_lease owner_is_set(::bosdyn_msgs::msg::LeaseUseResult::_owner_is_set_type arg)
  {
    msg_.owner_is_set = std::move(arg);
    return Init_LeaseUseResult_attempted_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseUseResult msg_;
};

class Init_LeaseUseResult_owner
{
public:
  explicit Init_LeaseUseResult_owner(::bosdyn_msgs::msg::LeaseUseResult & msg)
  : msg_(msg)
  {}
  Init_LeaseUseResult_owner_is_set owner(::bosdyn_msgs::msg::LeaseUseResult::_owner_type arg)
  {
    msg_.owner = std::move(arg);
    return Init_LeaseUseResult_owner_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseUseResult msg_;
};

class Init_LeaseUseResult_status
{
public:
  Init_LeaseUseResult_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LeaseUseResult_owner status(::bosdyn_msgs::msg::LeaseUseResult::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LeaseUseResult_owner(msg_);
  }

private:
  ::bosdyn_msgs::msg::LeaseUseResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LeaseUseResult>()
{
  return bosdyn_msgs::msg::builder::Init_LeaseUseResult_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LEASE_USE_RESULT__BUILDER_HPP_
