// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/update_callback_response_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UpdateCallbackResponseError_lease_use_results
{
public:
  explicit Init_UpdateCallbackResponseError_lease_use_results(::bosdyn_msgs::msg::UpdateCallbackResponseError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UpdateCallbackResponseError lease_use_results(::bosdyn_msgs::msg::UpdateCallbackResponseError::_lease_use_results_type arg)
  {
    msg_.lease_use_results = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponseError msg_;
};

class Init_UpdateCallbackResponseError_error
{
public:
  Init_UpdateCallbackResponseError_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateCallbackResponseError_lease_use_results error(::bosdyn_msgs::msg::UpdateCallbackResponseError::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_UpdateCallbackResponseError_lease_use_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponseError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UpdateCallbackResponseError>()
{
  return bosdyn_msgs::msg::builder::Init_UpdateCallbackResponseError_error();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_ERROR__BUILDER_HPP_
