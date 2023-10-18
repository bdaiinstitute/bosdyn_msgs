// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackServiceError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_SERVICE_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_SERVICE_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/area_callback_service_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AreaCallbackServiceError_faulted_services
{
public:
  explicit Init_AreaCallbackServiceError_faulted_services(::bosdyn_msgs::msg::AreaCallbackServiceError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AreaCallbackServiceError faulted_services(::bosdyn_msgs::msg::AreaCallbackServiceError::_faulted_services_type arg)
  {
    msg_.faulted_services = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackServiceError msg_;
};

class Init_AreaCallbackServiceError_missing_services
{
public:
  Init_AreaCallbackServiceError_missing_services()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AreaCallbackServiceError_faulted_services missing_services(::bosdyn_msgs::msg::AreaCallbackServiceError::_missing_services_type arg)
  {
    msg_.missing_services = std::move(arg);
    return Init_AreaCallbackServiceError_faulted_services(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackServiceError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AreaCallbackServiceError>()
{
  return bosdyn_msgs::msg::builder::Init_AreaCallbackServiceError_missing_services();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_SERVICE_ERROR__BUILDER_HPP_
