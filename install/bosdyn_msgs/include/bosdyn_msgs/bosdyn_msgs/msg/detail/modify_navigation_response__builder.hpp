// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ModifyNavigationResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MODIFY_NAVIGATION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MODIFY_NAVIGATION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/modify_navigation_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ModifyNavigationResponse_status
{
public:
  explicit Init_ModifyNavigationResponse_status(::bosdyn_msgs::msg::ModifyNavigationResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ModifyNavigationResponse status(::bosdyn_msgs::msg::ModifyNavigationResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyNavigationResponse msg_;
};

class Init_ModifyNavigationResponse_lease_use_results
{
public:
  explicit Init_ModifyNavigationResponse_lease_use_results(::bosdyn_msgs::msg::ModifyNavigationResponse & msg)
  : msg_(msg)
  {}
  Init_ModifyNavigationResponse_status lease_use_results(::bosdyn_msgs::msg::ModifyNavigationResponse::_lease_use_results_type arg)
  {
    msg_.lease_use_results = std::move(arg);
    return Init_ModifyNavigationResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyNavigationResponse msg_;
};

class Init_ModifyNavigationResponse_header_is_set
{
public:
  explicit Init_ModifyNavigationResponse_header_is_set(::bosdyn_msgs::msg::ModifyNavigationResponse & msg)
  : msg_(msg)
  {}
  Init_ModifyNavigationResponse_lease_use_results header_is_set(::bosdyn_msgs::msg::ModifyNavigationResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ModifyNavigationResponse_lease_use_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyNavigationResponse msg_;
};

class Init_ModifyNavigationResponse_header
{
public:
  Init_ModifyNavigationResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModifyNavigationResponse_header_is_set header(::bosdyn_msgs::msg::ModifyNavigationResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ModifyNavigationResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyNavigationResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ModifyNavigationResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ModifyNavigationResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MODIFY_NAVIGATION_RESPONSE__BUILDER_HPP_
