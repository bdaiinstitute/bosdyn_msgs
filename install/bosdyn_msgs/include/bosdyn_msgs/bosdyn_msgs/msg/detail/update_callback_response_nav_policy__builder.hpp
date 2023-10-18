// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseNavPolicy.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_NAV_POLICY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_NAV_POLICY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/update_callback_response_nav_policy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UpdateCallbackResponseNavPolicy_at_end
{
public:
  explicit Init_UpdateCallbackResponseNavPolicy_at_end(::bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy at_end(::bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy::_at_end_type arg)
  {
    msg_.at_end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy msg_;
};

class Init_UpdateCallbackResponseNavPolicy_at_start
{
public:
  Init_UpdateCallbackResponseNavPolicy_at_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateCallbackResponseNavPolicy_at_end at_start(::bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy::_at_start_type arg)
  {
    msg_.at_start = std::move(arg);
    return Init_UpdateCallbackResponseNavPolicy_at_end(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UpdateCallbackResponseNavPolicy>()
{
  return bosdyn_msgs::msg::builder::Init_UpdateCallbackResponseNavPolicy_at_start();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_NAV_POLICY__BUILDER_HPP_
