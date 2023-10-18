// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ModifyPolicyRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/modify_policy_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ModifyPolicyRequest_policy_ids_to_remove
{
public:
  explicit Init_ModifyPolicyRequest_policy_ids_to_remove(::bosdyn_msgs::msg::ModifyPolicyRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ModifyPolicyRequest policy_ids_to_remove(::bosdyn_msgs::msg::ModifyPolicyRequest::_policy_ids_to_remove_type arg)
  {
    msg_.policy_ids_to_remove = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyPolicyRequest msg_;
};

class Init_ModifyPolicyRequest_to_add_is_set
{
public:
  explicit Init_ModifyPolicyRequest_to_add_is_set(::bosdyn_msgs::msg::ModifyPolicyRequest & msg)
  : msg_(msg)
  {}
  Init_ModifyPolicyRequest_policy_ids_to_remove to_add_is_set(::bosdyn_msgs::msg::ModifyPolicyRequest::_to_add_is_set_type arg)
  {
    msg_.to_add_is_set = std::move(arg);
    return Init_ModifyPolicyRequest_policy_ids_to_remove(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyPolicyRequest msg_;
};

class Init_ModifyPolicyRequest_to_add
{
public:
  explicit Init_ModifyPolicyRequest_to_add(::bosdyn_msgs::msg::ModifyPolicyRequest & msg)
  : msg_(msg)
  {}
  Init_ModifyPolicyRequest_to_add_is_set to_add(::bosdyn_msgs::msg::ModifyPolicyRequest::_to_add_type arg)
  {
    msg_.to_add = std::move(arg);
    return Init_ModifyPolicyRequest_to_add_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyPolicyRequest msg_;
};

class Init_ModifyPolicyRequest_header_is_set
{
public:
  explicit Init_ModifyPolicyRequest_header_is_set(::bosdyn_msgs::msg::ModifyPolicyRequest & msg)
  : msg_(msg)
  {}
  Init_ModifyPolicyRequest_to_add header_is_set(::bosdyn_msgs::msg::ModifyPolicyRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ModifyPolicyRequest_to_add(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyPolicyRequest msg_;
};

class Init_ModifyPolicyRequest_header
{
public:
  Init_ModifyPolicyRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModifyPolicyRequest_header_is_set header(::bosdyn_msgs::msg::ModifyPolicyRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ModifyPolicyRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ModifyPolicyRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ModifyPolicyRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ModifyPolicyRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MODIFY_POLICY_REQUEST__BUILDER_HPP_
