// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ModifyPolicyResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/modify_policy_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ModifyPolicyResponse_removed_policies
{
public:
  explicit Init_ModifyPolicyResponse_removed_policies(::bosdyn_msgs::msg::ModifyPolicyResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ModifyPolicyResponse removed_policies(::bosdyn_msgs::msg::ModifyPolicyResponse::_removed_policies_type arg)
  {
    msg_.removed_policies = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyPolicyResponse msg_;
};

class Init_ModifyPolicyResponse_added_policy_is_set
{
public:
  explicit Init_ModifyPolicyResponse_added_policy_is_set(::bosdyn_msgs::msg::ModifyPolicyResponse & msg)
  : msg_(msg)
  {}
  Init_ModifyPolicyResponse_removed_policies added_policy_is_set(::bosdyn_msgs::msg::ModifyPolicyResponse::_added_policy_is_set_type arg)
  {
    msg_.added_policy_is_set = std::move(arg);
    return Init_ModifyPolicyResponse_removed_policies(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyPolicyResponse msg_;
};

class Init_ModifyPolicyResponse_added_policy
{
public:
  explicit Init_ModifyPolicyResponse_added_policy(::bosdyn_msgs::msg::ModifyPolicyResponse & msg)
  : msg_(msg)
  {}
  Init_ModifyPolicyResponse_added_policy_is_set added_policy(::bosdyn_msgs::msg::ModifyPolicyResponse::_added_policy_type arg)
  {
    msg_.added_policy = std::move(arg);
    return Init_ModifyPolicyResponse_added_policy_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyPolicyResponse msg_;
};

class Init_ModifyPolicyResponse_status
{
public:
  explicit Init_ModifyPolicyResponse_status(::bosdyn_msgs::msg::ModifyPolicyResponse & msg)
  : msg_(msg)
  {}
  Init_ModifyPolicyResponse_added_policy status(::bosdyn_msgs::msg::ModifyPolicyResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ModifyPolicyResponse_added_policy(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyPolicyResponse msg_;
};

class Init_ModifyPolicyResponse_header_is_set
{
public:
  explicit Init_ModifyPolicyResponse_header_is_set(::bosdyn_msgs::msg::ModifyPolicyResponse & msg)
  : msg_(msg)
  {}
  Init_ModifyPolicyResponse_status header_is_set(::bosdyn_msgs::msg::ModifyPolicyResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ModifyPolicyResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyPolicyResponse msg_;
};

class Init_ModifyPolicyResponse_header
{
public:
  Init_ModifyPolicyResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModifyPolicyResponse_header_is_set header(::bosdyn_msgs::msg::ModifyPolicyResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ModifyPolicyResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyPolicyResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ModifyPolicyResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ModifyPolicyResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_RESPONSE__BUILDER_HPP_
