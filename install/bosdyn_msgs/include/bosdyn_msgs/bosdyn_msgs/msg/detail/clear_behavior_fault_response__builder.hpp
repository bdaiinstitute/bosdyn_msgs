// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ClearBehaviorFaultResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULT_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/clear_behavior_fault_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ClearBehaviorFaultResponse_blocking_system_faults
{
public:
  explicit Init_ClearBehaviorFaultResponse_blocking_system_faults(::bosdyn_msgs::msg::ClearBehaviorFaultResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ClearBehaviorFaultResponse blocking_system_faults(::bosdyn_msgs::msg::ClearBehaviorFaultResponse::_blocking_system_faults_type arg)
  {
    msg_.blocking_system_faults = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultResponse msg_;
};

class Init_ClearBehaviorFaultResponse_behavior_fault_is_set
{
public:
  explicit Init_ClearBehaviorFaultResponse_behavior_fault_is_set(::bosdyn_msgs::msg::ClearBehaviorFaultResponse & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaultResponse_blocking_system_faults behavior_fault_is_set(::bosdyn_msgs::msg::ClearBehaviorFaultResponse::_behavior_fault_is_set_type arg)
  {
    msg_.behavior_fault_is_set = std::move(arg);
    return Init_ClearBehaviorFaultResponse_blocking_system_faults(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultResponse msg_;
};

class Init_ClearBehaviorFaultResponse_behavior_fault
{
public:
  explicit Init_ClearBehaviorFaultResponse_behavior_fault(::bosdyn_msgs::msg::ClearBehaviorFaultResponse & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaultResponse_behavior_fault_is_set behavior_fault(::bosdyn_msgs::msg::ClearBehaviorFaultResponse::_behavior_fault_type arg)
  {
    msg_.behavior_fault = std::move(arg);
    return Init_ClearBehaviorFaultResponse_behavior_fault_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultResponse msg_;
};

class Init_ClearBehaviorFaultResponse_status
{
public:
  explicit Init_ClearBehaviorFaultResponse_status(::bosdyn_msgs::msg::ClearBehaviorFaultResponse & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaultResponse_behavior_fault status(::bosdyn_msgs::msg::ClearBehaviorFaultResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ClearBehaviorFaultResponse_behavior_fault(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultResponse msg_;
};

class Init_ClearBehaviorFaultResponse_lease_use_result_is_set
{
public:
  explicit Init_ClearBehaviorFaultResponse_lease_use_result_is_set(::bosdyn_msgs::msg::ClearBehaviorFaultResponse & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaultResponse_status lease_use_result_is_set(::bosdyn_msgs::msg::ClearBehaviorFaultResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_ClearBehaviorFaultResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultResponse msg_;
};

class Init_ClearBehaviorFaultResponse_lease_use_result
{
public:
  explicit Init_ClearBehaviorFaultResponse_lease_use_result(::bosdyn_msgs::msg::ClearBehaviorFaultResponse & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaultResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::ClearBehaviorFaultResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_ClearBehaviorFaultResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultResponse msg_;
};

class Init_ClearBehaviorFaultResponse_header_is_set
{
public:
  explicit Init_ClearBehaviorFaultResponse_header_is_set(::bosdyn_msgs::msg::ClearBehaviorFaultResponse & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaultResponse_lease_use_result header_is_set(::bosdyn_msgs::msg::ClearBehaviorFaultResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ClearBehaviorFaultResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultResponse msg_;
};

class Init_ClearBehaviorFaultResponse_header
{
public:
  Init_ClearBehaviorFaultResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClearBehaviorFaultResponse_header_is_set header(::bosdyn_msgs::msg::ClearBehaviorFaultResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ClearBehaviorFaultResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaultResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ClearBehaviorFaultResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ClearBehaviorFaultResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULT_RESPONSE__BUILDER_HPP_
