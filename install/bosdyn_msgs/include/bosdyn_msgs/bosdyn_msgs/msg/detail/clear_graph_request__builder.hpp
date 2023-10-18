// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ClearGraphRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLEAR_GRAPH_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLEAR_GRAPH_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/clear_graph_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ClearGraphRequest_lease_is_set
{
public:
  explicit Init_ClearGraphRequest_lease_is_set(::bosdyn_msgs::msg::ClearGraphRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ClearGraphRequest lease_is_set(::bosdyn_msgs::msg::ClearGraphRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearGraphRequest msg_;
};

class Init_ClearGraphRequest_lease
{
public:
  explicit Init_ClearGraphRequest_lease(::bosdyn_msgs::msg::ClearGraphRequest & msg)
  : msg_(msg)
  {}
  Init_ClearGraphRequest_lease_is_set lease(::bosdyn_msgs::msg::ClearGraphRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_ClearGraphRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearGraphRequest msg_;
};

class Init_ClearGraphRequest_header_is_set
{
public:
  explicit Init_ClearGraphRequest_header_is_set(::bosdyn_msgs::msg::ClearGraphRequest & msg)
  : msg_(msg)
  {}
  Init_ClearGraphRequest_lease header_is_set(::bosdyn_msgs::msg::ClearGraphRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ClearGraphRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearGraphRequest msg_;
};

class Init_ClearGraphRequest_header
{
public:
  Init_ClearGraphRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClearGraphRequest_header_is_set header(::bosdyn_msgs::msg::ClearGraphRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ClearGraphRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearGraphRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ClearGraphRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ClearGraphRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLEAR_GRAPH_REQUEST__BUILDER_HPP_
