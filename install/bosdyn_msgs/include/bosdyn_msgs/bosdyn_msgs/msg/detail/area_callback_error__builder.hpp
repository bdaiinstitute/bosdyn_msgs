// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/area_callback_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AreaCallbackError_response_error
{
public:
  explicit Init_AreaCallbackError_response_error(::bosdyn_msgs::msg::AreaCallbackError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AreaCallbackError response_error(::bosdyn_msgs::msg::AreaCallbackError::_response_error_type arg)
  {
    msg_.response_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackError msg_;
};

class Init_AreaCallbackError_error
{
public:
  explicit Init_AreaCallbackError_error(::bosdyn_msgs::msg::AreaCallbackError & msg)
  : msg_(msg)
  {}
  Init_AreaCallbackError_response_error error(::bosdyn_msgs::msg::AreaCallbackError::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_AreaCallbackError_response_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackError msg_;
};

class Init_AreaCallbackError_service_name
{
public:
  Init_AreaCallbackError_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AreaCallbackError_error service_name(::bosdyn_msgs::msg::AreaCallbackError::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_AreaCallbackError_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AreaCallbackError>()
{
  return bosdyn_msgs::msg::builder::Init_AreaCallbackError_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_ERROR__BUILDER_HPP_
