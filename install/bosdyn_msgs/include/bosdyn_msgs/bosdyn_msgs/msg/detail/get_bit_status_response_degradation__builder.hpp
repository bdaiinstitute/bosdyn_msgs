// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetBITStatusResponseDegradation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_BIT_STATUS_RESPONSE_DEGRADATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_BIT_STATUS_RESPONSE_DEGRADATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_bit_status_response_degradation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetBITStatusResponseDegradation_description
{
public:
  explicit Init_GetBITStatusResponseDegradation_description(::bosdyn_msgs::msg::GetBITStatusResponseDegradation & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetBITStatusResponseDegradation description(::bosdyn_msgs::msg::GetBITStatusResponseDegradation::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetBITStatusResponseDegradation msg_;
};

class Init_GetBITStatusResponseDegradation_type
{
public:
  Init_GetBITStatusResponseDegradation_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBITStatusResponseDegradation_description type(::bosdyn_msgs::msg::GetBITStatusResponseDegradation::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_GetBITStatusResponseDegradation_description(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetBITStatusResponseDegradation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetBITStatusResponseDegradation>()
{
  return bosdyn_msgs::msg::builder::Init_GetBITStatusResponseDegradation_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_BIT_STATUS_RESPONSE_DEGRADATION__BUILDER_HPP_
