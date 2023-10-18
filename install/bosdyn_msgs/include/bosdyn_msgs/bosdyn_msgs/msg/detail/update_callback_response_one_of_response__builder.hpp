// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseOneOfResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ONE_OF_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ONE_OF_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/update_callback_response_one_of_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UpdateCallbackResponseOneOfResponse_response_choice
{
public:
  explicit Init_UpdateCallbackResponseOneOfResponse_response_choice(::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse response_choice(::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse::_response_choice_type arg)
  {
    msg_.response_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse msg_;
};

class Init_UpdateCallbackResponseOneOfResponse_complete
{
public:
  explicit Init_UpdateCallbackResponseOneOfResponse_complete(::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse & msg)
  : msg_(msg)
  {}
  Init_UpdateCallbackResponseOneOfResponse_response_choice complete(::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse::_complete_type arg)
  {
    msg_.complete = std::move(arg);
    return Init_UpdateCallbackResponseOneOfResponse_response_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse msg_;
};

class Init_UpdateCallbackResponseOneOfResponse_error
{
public:
  explicit Init_UpdateCallbackResponseOneOfResponse_error(::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse & msg)
  : msg_(msg)
  {}
  Init_UpdateCallbackResponseOneOfResponse_complete error(::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_UpdateCallbackResponseOneOfResponse_complete(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse msg_;
};

class Init_UpdateCallbackResponseOneOfResponse_policy
{
public:
  Init_UpdateCallbackResponseOneOfResponse_policy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateCallbackResponseOneOfResponse_error policy(::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse::_policy_type arg)
  {
    msg_.policy = std::move(arg);
    return Init_UpdateCallbackResponseOneOfResponse_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UpdateCallbackResponseOneOfResponse>()
{
  return bosdyn_msgs::msg::builder::Init_UpdateCallbackResponseOneOfResponse_policy();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ONE_OF_RESPONSE__BUILDER_HPP_
