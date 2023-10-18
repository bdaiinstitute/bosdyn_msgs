// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CheckInRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CHECK_IN_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CHECK_IN_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/check_in_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CheckInRequest_policy_id
{
public:
  explicit Init_CheckInRequest_policy_id(::bosdyn_msgs::msg::CheckInRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CheckInRequest policy_id(::bosdyn_msgs::msg::CheckInRequest::_policy_id_type arg)
  {
    msg_.policy_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CheckInRequest msg_;
};

class Init_CheckInRequest_header_is_set
{
public:
  explicit Init_CheckInRequest_header_is_set(::bosdyn_msgs::msg::CheckInRequest & msg)
  : msg_(msg)
  {}
  Init_CheckInRequest_policy_id header_is_set(::bosdyn_msgs::msg::CheckInRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CheckInRequest_policy_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::CheckInRequest msg_;
};

class Init_CheckInRequest_header
{
public:
  Init_CheckInRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckInRequest_header_is_set header(::bosdyn_msgs::msg::CheckInRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CheckInRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CheckInRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CheckInRequest>()
{
  return bosdyn_msgs::msg::builder::Init_CheckInRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CHECK_IN_REQUEST__BUILDER_HPP_
