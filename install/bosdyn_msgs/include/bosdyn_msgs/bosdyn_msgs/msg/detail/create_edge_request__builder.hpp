// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CreateEdgeRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/create_edge_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CreateEdgeRequest_lease_is_set
{
public:
  explicit Init_CreateEdgeRequest_lease_is_set(::bosdyn_msgs::msg::CreateEdgeRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CreateEdgeRequest lease_is_set(::bosdyn_msgs::msg::CreateEdgeRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeRequest msg_;
};

class Init_CreateEdgeRequest_lease
{
public:
  explicit Init_CreateEdgeRequest_lease(::bosdyn_msgs::msg::CreateEdgeRequest & msg)
  : msg_(msg)
  {}
  Init_CreateEdgeRequest_lease_is_set lease(::bosdyn_msgs::msg::CreateEdgeRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_CreateEdgeRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeRequest msg_;
};

class Init_CreateEdgeRequest_edge_is_set
{
public:
  explicit Init_CreateEdgeRequest_edge_is_set(::bosdyn_msgs::msg::CreateEdgeRequest & msg)
  : msg_(msg)
  {}
  Init_CreateEdgeRequest_lease edge_is_set(::bosdyn_msgs::msg::CreateEdgeRequest::_edge_is_set_type arg)
  {
    msg_.edge_is_set = std::move(arg);
    return Init_CreateEdgeRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeRequest msg_;
};

class Init_CreateEdgeRequest_edge
{
public:
  explicit Init_CreateEdgeRequest_edge(::bosdyn_msgs::msg::CreateEdgeRequest & msg)
  : msg_(msg)
  {}
  Init_CreateEdgeRequest_edge_is_set edge(::bosdyn_msgs::msg::CreateEdgeRequest::_edge_type arg)
  {
    msg_.edge = std::move(arg);
    return Init_CreateEdgeRequest_edge_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeRequest msg_;
};

class Init_CreateEdgeRequest_header_is_set
{
public:
  explicit Init_CreateEdgeRequest_header_is_set(::bosdyn_msgs::msg::CreateEdgeRequest & msg)
  : msg_(msg)
  {}
  Init_CreateEdgeRequest_edge header_is_set(::bosdyn_msgs::msg::CreateEdgeRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CreateEdgeRequest_edge(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeRequest msg_;
};

class Init_CreateEdgeRequest_header
{
public:
  Init_CreateEdgeRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CreateEdgeRequest_header_is_set header(::bosdyn_msgs::msg::CreateEdgeRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CreateEdgeRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateEdgeRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CreateEdgeRequest>()
{
  return bosdyn_msgs::msg::builder::Init_CreateEdgeRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CREATE_EDGE_REQUEST__BUILDER_HPP_
