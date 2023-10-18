// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PayloadCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_CHECK_RESULT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_CHECK_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/payload_check_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PayloadCheckResult_extra_payload
{
public:
  explicit Init_PayloadCheckResult_extra_payload(::bosdyn_msgs::msg::PayloadCheckResult & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PayloadCheckResult extra_payload(::bosdyn_msgs::msg::PayloadCheckResult::_extra_payload_type arg)
  {
    msg_.extra_payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadCheckResult msg_;
};

class Init_PayloadCheckResult_error
{
public:
  Init_PayloadCheckResult_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadCheckResult_extra_payload error(::bosdyn_msgs::msg::PayloadCheckResult::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_PayloadCheckResult_extra_payload(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadCheckResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PayloadCheckResult>()
{
  return bosdyn_msgs::msg::builder::Init_PayloadCheckResult_error();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_CHECK_RESULT__BUILDER_HPP_
