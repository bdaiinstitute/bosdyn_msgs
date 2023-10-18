// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/update_callback_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_UpdateCallbackResponse_localization_is_set
{
public:
  explicit Init_UpdateCallbackResponse_localization_is_set(::bosdyn_msgs::msg::UpdateCallbackResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::UpdateCallbackResponse localization_is_set(::bosdyn_msgs::msg::UpdateCallbackResponse::_localization_is_set_type arg)
  {
    msg_.localization_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponse msg_;
};

class Init_UpdateCallbackResponse_localization
{
public:
  explicit Init_UpdateCallbackResponse_localization(::bosdyn_msgs::msg::UpdateCallbackResponse & msg)
  : msg_(msg)
  {}
  Init_UpdateCallbackResponse_localization_is_set localization(::bosdyn_msgs::msg::UpdateCallbackResponse::_localization_type arg)
  {
    msg_.localization = std::move(arg);
    return Init_UpdateCallbackResponse_localization_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponse msg_;
};

class Init_UpdateCallbackResponse_response
{
public:
  explicit Init_UpdateCallbackResponse_response(::bosdyn_msgs::msg::UpdateCallbackResponse & msg)
  : msg_(msg)
  {}
  Init_UpdateCallbackResponse_localization response(::bosdyn_msgs::msg::UpdateCallbackResponse::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_UpdateCallbackResponse_localization(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponse msg_;
};

class Init_UpdateCallbackResponse_status
{
public:
  explicit Init_UpdateCallbackResponse_status(::bosdyn_msgs::msg::UpdateCallbackResponse & msg)
  : msg_(msg)
  {}
  Init_UpdateCallbackResponse_response status(::bosdyn_msgs::msg::UpdateCallbackResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_UpdateCallbackResponse_response(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponse msg_;
};

class Init_UpdateCallbackResponse_header_is_set
{
public:
  explicit Init_UpdateCallbackResponse_header_is_set(::bosdyn_msgs::msg::UpdateCallbackResponse & msg)
  : msg_(msg)
  {}
  Init_UpdateCallbackResponse_status header_is_set(::bosdyn_msgs::msg::UpdateCallbackResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_UpdateCallbackResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponse msg_;
};

class Init_UpdateCallbackResponse_header
{
public:
  Init_UpdateCallbackResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateCallbackResponse_header_is_set header(::bosdyn_msgs::msg::UpdateCallbackResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UpdateCallbackResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::UpdateCallbackResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::UpdateCallbackResponse>()
{
  return bosdyn_msgs::msg::builder::Init_UpdateCallbackResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE__BUILDER_HPP_
