// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackErrorOneOfResponseError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR_ONE_OF_RESPONSE_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR_ONE_OF_RESPONSE_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/area_callback_error_one_of_response_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AreaCallbackErrorOneOfResponseError_response_error_choice
{
public:
  explicit Init_AreaCallbackErrorOneOfResponseError_response_error_choice(::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError response_error_choice(::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError::_response_error_choice_type arg)
  {
    msg_.response_error_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError msg_;
};

class Init_AreaCallbackErrorOneOfResponseError_end_callback
{
public:
  explicit Init_AreaCallbackErrorOneOfResponseError_end_callback(::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError & msg)
  : msg_(msg)
  {}
  Init_AreaCallbackErrorOneOfResponseError_response_error_choice end_callback(::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError::_end_callback_type arg)
  {
    msg_.end_callback = std::move(arg);
    return Init_AreaCallbackErrorOneOfResponseError_response_error_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError msg_;
};

class Init_AreaCallbackErrorOneOfResponseError_update_callback
{
public:
  explicit Init_AreaCallbackErrorOneOfResponseError_update_callback(::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError & msg)
  : msg_(msg)
  {}
  Init_AreaCallbackErrorOneOfResponseError_end_callback update_callback(::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError::_update_callback_type arg)
  {
    msg_.update_callback = std::move(arg);
    return Init_AreaCallbackErrorOneOfResponseError_end_callback(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError msg_;
};

class Init_AreaCallbackErrorOneOfResponseError_begin_control
{
public:
  explicit Init_AreaCallbackErrorOneOfResponseError_begin_control(::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError & msg)
  : msg_(msg)
  {}
  Init_AreaCallbackErrorOneOfResponseError_update_callback begin_control(::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError::_begin_control_type arg)
  {
    msg_.begin_control = std::move(arg);
    return Init_AreaCallbackErrorOneOfResponseError_update_callback(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError msg_;
};

class Init_AreaCallbackErrorOneOfResponseError_begin_callback
{
public:
  Init_AreaCallbackErrorOneOfResponseError_begin_callback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AreaCallbackErrorOneOfResponseError_begin_control begin_callback(::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError::_begin_callback_type arg)
  {
    msg_.begin_callback = std::move(arg);
    return Init_AreaCallbackErrorOneOfResponseError_begin_control(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AreaCallbackErrorOneOfResponseError>()
{
  return bosdyn_msgs::msg::builder::Init_AreaCallbackErrorOneOfResponseError_begin_callback();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR_ONE_OF_RESPONSE_ERROR__BUILDER_HPP_
